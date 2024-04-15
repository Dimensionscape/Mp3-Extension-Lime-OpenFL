package _internal.native;
import cpp.Int16;
import haxe.io.Bytes;

/**
 * ...
 * @author Christopher Speciale
 */
@:include('./MP3Ext.cpp')
extern class MP3Extern 
{

	@:native('mp3_decode') private static function __mp3Decode(data:MP3_DATA):Void;
	
}

@:structInit
class MP3_DATA {
    public var bytes:Bytes;
    public var size: Int;
    public var pcm: Array<Int16> = [];
	public var sampleRate:Int = 0;
	public var bitRate:Int = 0;
	public var channels:Int = 0;
}