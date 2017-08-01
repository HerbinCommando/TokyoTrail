package com.gamejam.activities;


//import openfl.Assets;
//import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.text.TextField;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// ActivitySelection displays all the activities in a location, and lets a player select one
class ActivitySelection extends Sprite {

    public var onActivitySelectedFn:Dynamic->Void;
    public var availableActivities:Array<TextButton>;
    public var locationActivities:Array<Dynamic>;

    /*
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

    public var activityImg:Bitmap;

    public var okBtn:TextButton;

    //public var activityData:Dynamic;
    */

    public function new (activitySelectedFn:Dynamic->Void) {

        super ();
        onActivitySelectedFn = activitySelectedFn;
        availableActivities = new Array<TextButton>();

    }

    public function setupActivityData(data:Array<Dynamic>):Void {

        locationActivities = data;

        for (btn in availableActivities) {
            btn.removeEventListener(MouseEvent.CLICK, onClickActivity);
            removeChild(btn);
            btn = null;
        }
        availableActivities = [];

        for (activity in data) {
            var btn:TextButton = new TextButton(activity.Name, 500, 40);
            btn.cargo = activity;
            btn.addEventListener(MouseEvent.CLICK, onClickActivity);
            addChild(btn);
            btn.y = availableActivities.length * 55;
            trace("setupActivityData length == " + availableActivities.length);
            availableActivities.push(btn);
        }
    }

    public function onClickActivity(e:MouseEvent):Void {

        var btn:TextButton = cast(e.currentTarget, TextButton);
        var activityData:Dynamic = btn.cargo;
        onActivitySelectedFn(activityData);

    }

}
