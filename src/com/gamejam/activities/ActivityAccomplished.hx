package com.gamejam.activities;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.text.TextField;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// ActivityAccomplished displays all the information when a player does a location's activity
class ActivityAccomplished extends Sprite {

    public var nameText:TextField;
    public var descText:TextField;
    /*
    public var entertainmentPointsText:TextField;
    public var smePointsText:TextField;
    public var staminaText:TextField;
    public var costText:TextField;
    public var durationText:TextField;
    public var countsAsSleepText:TextField;
    public var timesOfDayText:TextField;
    public var categoryText:TextField;
    public var resetsThirstText:TextField;
    public var resetsHungerText:TextField;
    */

    public var activityImg:Bitmap;

    public var okBtn:TextButton;

    public var whiteBg:Sprite;

    //public var activityData:Dynamic;

    public function new () {

        super ();

        whiteBg = new Sprite();
        whiteBg.graphics.beginFill(0xFFFFFF);
        whiteBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        whiteBg.graphics.endFill();
        addChild(whiteBg);

        nameText = new TextField();
        nameText.setTextFormat(TextFormats.SUBTITLES);
        nameText.width = 800;
        nameText.height = 50;
        //addChild(nameText);

        descText = new TextField();
        descText.setTextFormat(TextFormats.NORMAL_TEXT);
        descText.multiline = true;
        descText.wordWrap = true;
        descText.width = 800;
        descText.height = 60;
        //addChild(descText);
        descText.y = 65;

        /*
        entertainmentPointsText = new TextField();
        entertainmentPointsText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(entertainmentPointsText);
        entertainmentPointsText.y = 120;

        smePointsText = new TextField();
        smePointsText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(smePointsText);
        smePointsText.y = 135;

        staminaText = new TextField();
        staminaText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(staminaText);
        staminaText.y = 150;

        costText = new TextField();
        costText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(costText);
        costText.y = 165;

        durationText = new TextField();
        durationText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(durationText);
        durationText.y = 180;

        countsAsSleepText = new TextField();
        countsAsSleepText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(countsAsSleepText);
        countsAsSleepText.y = 195;

        timesOfDayText = new TextField();
        timesOfDayText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(timesOfDayText);
        timesOfDayText.y = 210;

        categoryText = new TextField();
        categoryText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(categoryText);
        categoryText.y = 225;

        resetsThirstText = new TextField();
        resetsThirstText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(resetsThirstText);
        resetsThirstText.y = 240;

        resetsHungerText = new TextField();
        resetsHungerText.setTextFormat(TextFormats.NORMAL_TEXT);
        addChild(resetsHungerText);
        resetsHungerText.y = 255;
        */

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        okBtn = new TextButton("OK", 100, 40);
        //okBtn.addEventListener(MouseEvent.CLICK, onClickOKBtn);
        okBtn.x = centerX;
        okBtn.y = Lib.current.stage.stageHeight - 125;

    }

    public function setupActivityData(data:Dynamic):Void {

        if (activityImg != null) {
            removeChild(activityImg);
            activityImg = null;
        }
        activityImg = new Bitmap (Assets.getBitmapData ("assets/images/" + data.Name + ".png"));
        addChild(activityImg);

        nameText.text = data.Name;
        descText.text = data.Description;

        addChild(nameText);
        addChild(descText);
        addChild(okBtn);

        /*
        entertainmentPointsText.text = data.EntertainmentPoints;
        smePointsText.text = data.SMEPoints;
        staminaText.text = data.Stamina;
        costText.text = data.Cost;
        durationText.text = data.Duration;
        countsAsSleepText.text = data.CountsAsSleep;
        timesOfDayText.text = data.TimesOfDay;
        categoryText.text = data.Category;
        resetsThirstText.text = data.ResetsThirst;
        resetsHungerText.text = data.ResetsHunger;
        */

    }

}
