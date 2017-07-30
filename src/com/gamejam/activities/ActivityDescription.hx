package com.gamejam.activities;


import openfl.display.Sprite;
//import openfl.text.TextFormat;
import openfl.text.TextField;

import com.gamejam.utils.TextFormats;


// ActivityDescription displays all the information for a location's activity
class ActivityDescription extends Sprite {

    public var nameText:TextField;
    public var descText:TextField;
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

    public var activityData:Dynamic;

    public function new (data:Dynamic) {

        super ();

        activityData = data;

        nameText = new TextField();
        nameText.setTextFormat(TextFormats.SUBTITLES);
        nameText.text = data.Name;
        addChild(nameText);

        descText = new TextField();
        descText.setTextFormat(TextFormats.NORMAL_TEXT);
        descText.text = data.Description;
        addChild(descText);
        descText.y = 25;

        entertainmentPointsText = new TextField();
        entertainmentPointsText.setTextFormat(TextFormats.NORMAL_TEXT);
        entertainmentPointsText.text = data.EntertainmentPoints;
        addChild(entertainmentPointsText);
        entertainmentPointsText.y = 40;

        smePointsText = new TextField();
        smePointsText.setTextFormat(TextFormats.NORMAL_TEXT);
        smePointsText.text = data.SMEPoints;
        addChild(smePointsText);
        smePointsText.y = 55;

        staminaText = new TextField();
        staminaText.setTextFormat(TextFormats.NORMAL_TEXT);
        staminaText.text = data.Stamina;
        addChild(staminaText);
        staminaText.y = 70;

        costText = new TextField();
        costText.setTextFormat(TextFormats.NORMAL_TEXT);
        costText.text = data.Cost;
        addChild(costText);
        costText.y = 85;

        durationText = new TextField();
        durationText.setTextFormat(TextFormats.NORMAL_TEXT);
        durationText.text = data.Duration;
        addChild(durationText);
        durationText.y = 100;

        countsAsSleepText = new TextField();
        countsAsSleepText.setTextFormat(TextFormats.NORMAL_TEXT);
        countsAsSleepText.text = data.CountsAsSleep;
        addChild(countsAsSleepText);
        countsAsSleepText.y = 115;

        timesOfDayText = new TextField();
        timesOfDayText.setTextFormat(TextFormats.NORMAL_TEXT);
        timesOfDayText.text = data.TimesOfDay;
        addChild(timesOfDayText);
        timesOfDayText.y = 130;

        categoryText = new TextField();
        categoryText.setTextFormat(TextFormats.NORMAL_TEXT);
        categoryText.text = data.Category;
        addChild(categoryText);
        categoryText.y = 145;

        resetsThirstText = new TextField();
        resetsThirstText.setTextFormat(TextFormats.NORMAL_TEXT);
        resetsThirstText.text = data.ResetsThirst;
        addChild(resetsThirstText);
        resetsThirstText.y = 160;

        resetsHungerText = new TextField();
        resetsHungerText.setTextFormat(TextFormats.NORMAL_TEXT);
        resetsHungerText.text = data.ResetsHunger;
        addChild(resetsHungerText);
        resetsHungerText.y = 175;

    }

}
