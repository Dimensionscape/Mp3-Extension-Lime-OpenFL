Test code:

```hx
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
```