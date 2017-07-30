package com.gamejam.activities;


//import openfl.Assets;
//import openfl.display.Bitmap;
import openfl.display.Sprite;

import com.gamejam.utils.ImageButton;


// CityActivity is the activate button and info display for an activity at a location.
class CityActivity extends Sprite {

    public var activityButton:ImageButton;
    public var activityInfo:ActivityDescription;
    public var activityData:Dynamic;

    public function new () {

        super ();

    }

    public function setupCityActivity(data:Dynamic) {

        activityData = data;
        trace("setupCityActivity data = " + data);

        if (activityButton != null) {
            removeChild(activityButton);
        }

        if (activityInfo != null) {
            removeChild(activityInfo);
        }

        var imgPath:String = "assets/activity_icons/" + data.Filename + ".png";
        var downImgPath:String = "assets/activity_icons/" + data.Filename + "_down.png";
        activityButton = new ImageButton(imgPath, downImgPath);
        addChild(activityButton);

        activityInfo = new ActivityDescription(data);
        addChild(activityInfo);
    }

}