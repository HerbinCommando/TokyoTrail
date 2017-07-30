package com.gamejam.character;


import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;

// A StatBar is a rectangle bar, filled between 0 and 100%
class StatBar extends Sprite {

    public static var BORDER_SIZE:Int = 10;
    public static var BAR_WIDTH:Int = 300;
    public static var BAR_HEIGHT:Int = 25;
    public static var FILL_WIDTH:Int = BAR_WIDTH - 2*BORDER_SIZE;
    public static var FILL_HEIGHT:Int = BAR_HEIGHT - 2*BORDER_SIZE;

    public static var BORDER_COLOR:Int = 0xFFFFFF;
    public static var MASK_COLOR:Int = 0x101010;
    public static var FILL_COLOR:Int = 0x00FF00;

    public var border:Sprite;
    public var borderMask:Sprite;
    public var fill:Sprite;

    public var statValue:Float;
    public var deltaOverTime:Float;

    public var statNameText:TextField;

    public function new () {

        super ();

        border = new Sprite();
        addChild(border);

        borderMask = new Sprite();
        addChild(borderMask);

        fill = new Sprite();
        addChild(fill);

        drawStatBar(0.5);

    }

    public function updateStat(dT:Float):Void {

        statValue = statValue + dT * deltaOverTime;

    }

    public function drawStatBar(fillPct:Float):Void {

        border.graphics.beginFill(BORDER_COLOR);
        border.graphics.drawRoundRect(0, 0, BAR_WIDTH, BAR_HEIGHT, 20, 20);
        border.graphics.endFill();

        borderMask.graphics.beginFill(MASK_COLOR);
        borderMask.graphics.drawRoundRect(BORDER_SIZE, BORDER_SIZE, FILL_WIDTH, FILL_HEIGHT, 15, 15);
        borderMask.graphics.endFill();

        fill.graphics.beginFill(FILL_COLOR);
        fill.graphics.drawRoundRect(BORDER_SIZE, BORDER_SIZE, fillPct*FILL_WIDTH, FILL_HEIGHT, 15, 15);
        fill.graphics.endFill();

    }
}