package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.input.FlxPointer;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import sys.io.File;
import haxe.io.Eof;
import sys.io.File;
import sys.io.FileInput;
import sys.io.FileOutput;

class MenuState extends FlxState
{
	var options:FlxSpriteGroup;
	var selectionSquare:FlxSprite;
	var box:FlxRect;
	
	override public function create():Void
	{
		FlxG.camera.bgColor = 0xff808080;
		
		var c:Int;
		for (Y in 0...Math.floor(Reg.gH / Reg.tH)) { 
			for (X in 0...Math.floor(Reg.gW / Reg.tW)) { 
				isOdd(Y + X)? c = Reg.gridColors[0]: c = Reg.gridColors[1];
				var g:FlxSprite = new FlxSprite(X * Reg.tW, Y * Reg.tH);
				g.makeGraphic(Reg.tW, Reg.tH, c);
				add(g);
			} 
		}
		var tiles:FlxSprite = new FlxSprite(0, 0, Reg.graphic);
		add(tiles);
		box = new FlxRect(tiles.x, tiles.y, tiles.width, tiles.height);
		options = new FlxSpriteGroup();
		for (Y in 0...Math.floor(Reg.gH / Reg.tH)) { for (X in 0...Math.floor(Reg.gW / Reg.tW)) { options.add(new Option(X, Y)); } }
		add(options);
		selectionSquare = new FlxSprite();
		selectionSquare.makeGraphic(Reg.tW + 2, Reg.tH + 2, 0x00ffffff);
		FlxSpriteUtil.drawRect(selectionSquare, 0, 0, selectionSquare.width, 1);
		FlxSpriteUtil.drawRect(selectionSquare, 0, 0, 1, selectionSquare.height);
		FlxSpriteUtil.drawRect(selectionSquare, selectionSquare.width - 1, 0, 1, selectionSquare.height);
		FlxSpriteUtil.drawRect(selectionSquare, 0, selectionSquare.height - 1, selectionSquare.width, 1);
		add(selectionSquare);
		var button:FlxButton = new FlxButton(0, FlxG.height - 40, "Write To File", writeToFile);
		FlxSpriteUtil.screenCenter(button, true, false);
		add(button);
		FlxG.camera.setScrollBounds(null, null, null, null);
	}
	
	function isOdd(num:Int):Bool { return num % 2 == 0;}
	
	function getNonCollidableTiles():String
	{
		var s = "[";
		var first:Bool = false; 
		for (i in 0...20 * 20) {
			if (options.members[i].animation.frameIndex == 1) {
				if (!first) {
					first = true;
					s = s + i;
				} else {
					s = s + ", " + i;
				}
			}
		}
		s = s + "]";
		return s;
	}
	
	function getCloudTiles():String
	{
		var s = "[";
		var first:Bool = false; 
		for (i in 0...20 * 20) {
			if (options.members[i].animation.frameIndex == 2) {
				if (!first) {
					first = true;
					s = s + i;
				} else {
					s = s + ", " + i;
				}
			}
		}
		s = s + "]";
		return s;
	}
	
	function writeToFile():Void
	{
		var fname = "file.txt";
		var fout = File.write( fname, false );
		fout.writeString("var nC:Array<Int> = " + getNonCollidableTiles() + "; \nfor (i in 0...nC.length) map.setTileProperties(nC[i], FlxObject.NONE)\n");
		fout.writeString("var cT:Array<Int> = " + getCloudTiles() + "; \nfor (i in 0...cT.length) map.setTileProperties(cT[i], FlxObject.FLOOR)\n");
		fout.close();
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.keys.justPressed.Q && FlxG.camera.zoom > 1) FlxG.camera.zoom--;
		if (FlxG.keys.justPressed.E) FlxG.camera.zoom++;
		var cS:FlxPoint = FlxPoint.get(0, 0);
		if (FlxG.keys.pressed.W) cS.y-=2;
		if (FlxG.keys.pressed.S) cS.y+=2;
		if (FlxG.keys.pressed.A) cS.x-=2;
		if (FlxG.keys.pressed.D) cS.x+=2;
		camera.scroll.x += cS.x;
		camera.scroll.y += cS.y;
		
		(FlxMath.pointInFlxRect(FlxG.mouse.x, FlxG.mouse.y, box))? selectionSquare.visible = true: selectionSquare.visible = false;
		selectionSquare.setPosition(snapToGrid(FlxG.mouse.x, Reg.tW) - 1, snapToGrid(FlxG.mouse.y, Reg.tH) - 1);
		
		super.update(elapsed);
	}
	
	function snapToGrid(n:Float, gridSize:Int):Int
	{
		return Math.floor(n / gridSize) * gridSize;
	}	
}