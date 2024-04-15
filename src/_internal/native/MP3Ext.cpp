
#define MINIMP3_IMPLEMENTATION
#define MINIMP3_FLOAT_OUTPUT
#include "../../../include/minimp3/minimp3.h"
#include "_internal/native/MP3_DATA.h"
#include <haxe/io/Bytes.h>
#include <iostream>
#include <cstdlib> // Include for memory allocation functions
#include <cstring> // Include for memory copying functions

extern "C" {
    void mp3_decode(_internal::native::MP3_DATA data) {
        ::haxe::io::Bytes bytes = data->bytes;
        int size = data->size;
        ::Array<int16_t> pcm = data->pcm;

        ::Array<unsigned char> haxe_bytes = bytes->b;
        unsigned char *mp3_data = (unsigned char *)malloc(size);
        for (int i = 0; i < size; ++i) {
            mp3_data[i] = haxe_bytes[i];
        }

        mp3dec_t mp3d;
        mp3dec_init(&mp3d);

		mp3d_sample_t pcm_out[MINIMP3_MAX_SAMPLES_PER_FRAME]; // Buffer for decoded PCM data

				
        mp3dec_frame_info_t frame_info;
        int pcm_pos = 0;
        int sample_rate = 0;
        int bit_rate = 0;
        int channels = 0;

        int bytes_processed = 0;
        int mp3_bytes_left = size;

        while (mp3_bytes_left > 0) {
            int decode_result = mp3dec_decode_frame(&mp3d, mp3_data + bytes_processed, mp3_bytes_left, pcm_out, &frame_info);
            if (decode_result <= 0 || frame_info.frame_bytes <= 0) {
                std::cout << "Error decoding frame" << std::endl;
                break;
            }

            sample_rate = frame_info.hz;
            bit_rate = frame_info.bitrate_kbps;
            channels = frame_info.channels;

            int samples = decode_result;
			int16_t *buffer = (int16_t *)malloc(samples * sizeof(int16_t));
			 
            // Convert floating-point samples to 16-bit signed integers
            mp3dec_f32_to_s16(pcm_out, buffer, samples);

            for (int i = 0; i < samples; ++i) {
                pcm[pcm_pos++] = buffer[i];
            }

            bytes_processed += frame_info.frame_bytes;
            mp3_bytes_left -= frame_info.frame_bytes;
        }

        data->sampleRate = sample_rate;
        data->bitRate = bit_rate;
        data->channels = channels;

        free(mp3_data);
    }
}