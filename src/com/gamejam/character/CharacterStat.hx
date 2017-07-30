package com.gamejam.character;


import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;

// A character stat is something that can go up or down over time. It has some graphics.
class CharacterStat extends Sprite {

    public var statName:String;
    public var statValue:Int;
    public var statMax:Int;
    public var statMin:Int;
    public var deltaPerHour:Int;
    public var statBar:StatBar;
    public var statNameText:TextField;
    public var statValueText:TextField;

    public function new (name:String, initialValue:Int, rateOfChangePerHour:Int) {

        super ();

        statName = name;
        statValue = initialValue;
        deltaPerHour = rateOfChangePerHour;

        var format:TextFormat = new TextFormat();
        format.color = 0x808080;
        format.size = 24;

        statNameText = new TextField();
        statNameText.setTextFormat(format);
        statNameText.text = name;
        addChild(statNameText);

        format = new TextFormat();
        format.color = 0x808080;
        format.size = 18;

        statValueText = new TextField();
        statValueText.setTextFormat(format);
        statValueText.text = name;
        addChild(statValueText);

        statBar = new StatBar();
        addChild(statBar);
    }

    public function updateStat(hoursPast:Int):Void {

        statValue = statValue + hoursPast * deltaPerHour;

        var statPct:Float = statValue/statMax;
        statBar.drawStatBar(statPct);

    }

}