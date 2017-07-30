package com.gamejam.activities;


import openfl.display.Sprite;
import openfl.text.TextFormat;
import openfl.text.TextField;


// ActivityDescription displays all the information for a location's activity
class ActivityDescription extends Sprite {

    public var format:TextFormat;

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

        format = new TextFormat();
        format.color = 0x808080;
        format.size = 18;

        nameText = new TextField();
        nameText.setTextFormat(format);
        nameText.text = data.Name;
        addChild(nameText);

        descText = new TextField();
        descText.setTextFormat(format);
        descText.text = data.Description;
        addChild(descText);

        entertainmentPointsText = new TextField();
        entertainmentPointsText.setTextFormat(format);
        entertainmentPointsText.text = data.EntertainmentPoints;
        addChild(entertainmentPointsText);

        smePointsText = new TextField();
        smePointsText.setTextFormat(format);
        smePointsText.text = data.SMEPoints;
        addChild(smePointsText);

        staminaText = new TextField();
        staminaText.setTextFormat(format);
        staminaText.text = data.Stamina;
        addChild(staminaText);

        costText = new TextField();
        costText.setTextFormat(format);
        costText.text = data.Cost;
        addChild(costText);

        durationText = new TextField();
        durationText.setTextFormat(format);
        durationText.text = data.Duration;
        addChild(durationText);

        countsAsSleepText = new TextField();
        countsAsSleepText.setTextFormat(format);
        countsAsSleepText.text = data.CountsAsSleep;
        addChild(countsAsSleepText);

        timesOfDayText = new TextField();
        timesOfDayText.setTextFormat(format);
        timesOfDayText.text = data.TimesOfDay;
        addChild(timesOfDayText);

        categoryText = new TextField();
        categoryText.setTextFormat(format);
        categoryText.text = data.Category;
        addChild(categoryText);

        resetsThirstText = new TextField();
        resetsThirstText.setTextFormat(format);
        resetsThirstText.text = data.ResetsThirst;
        addChild(resetsThirstText);

        resetsHungerText = new TextField();
        resetsHungerText.setTextFormat(format);
        resetsHungerText.text = data.ResetsHunger;
        addChild(resetsHungerText);

    }


}