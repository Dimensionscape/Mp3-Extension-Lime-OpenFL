package mp3;
import haxe.io.UInt8Array;
import _internal.native.MP3Extern;
/**
 * ...
 * @author Christopher Speciale
 */
@:access(_internal.native.MP3Extern)
class Mp3 
{

	public static function decode(data:MP3_DATA/*format:MP3_FORMAT, position:Int, output:UInt8Array, size:Int, offset:Int*/)
	{
		MP3Extern.__mp3Decode(data/*format, position, output, size, offset*/);
	}
	
}