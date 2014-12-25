package ;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.math.FlxRect;

/**
 * ...
 * @author x01010111
 */
class Option extends FlxSprite
{
	var box:FlxRect;
	public var option:Int = 0;

	public function new(X:Int, Y:Int) 
	{
		super(X * 16, Y * 16);
		loadGraphic("assets/images/options.png", true, 16, 16);
		box = new FlxRect(x, y, 16, 16);
	}
	
	override public function update(elapsed:Float):Void 
	{
		alpha = 0.25;
		if (FlxMath.pointInFlxRect(FlxG.mouse.x, FlxG.mouse.y, box)) {
			alpha = 1;
			if (FlxG.mouse.justPressed) {
				animation.frameIndex = (animation.frameIndex + 1) % 3;
			}
		}
		if (FlxG.keys.pressed.SPACE) alpha = 1;
		super.update(elapsed);
	}
	
}