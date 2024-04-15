package;

import _internal.native.MP3Extern.MP3_DATA;
import haxe.io.BytesBuffer;
import haxe.io.Bytes;
import lime.media.AudioBuffer;
import lime.media.AudioSource;
import openfl.Assets;
import openfl.display.Sprite;

import mp3.Mp3;

import lime.utils.UInt8Array;

/**
 * ...
 * @author Christopher Speciale
 */
class Main extends Sprite 
{

	public function new() 
	{
		super();
		
		var b:Bytes = Assets.getBytes("sfx/track1.mp3");
		var data:MP3_DATA = {
			bytes:b,
			size:b.length
		};
	
		Mp3.decode(data);
		
		var buffer:BytesBuffer = new BytesBuffer();
		for(value in data.pcm){
			
			buffer.addInt32(value);
		}
		
		var audioBuf = new AudioBuffer();
		audioBuf.bitsPerSample = 16;
		audioBuf.channels = data.channels;
		audioBuf.data = new UInt8Array(buffer.getBytes());
		audioBuf.sampleRate = data.sampleRate;
		
		var source:AudioSource = new AudioSource(audioBuf);
		source.play();
		
	}

}
