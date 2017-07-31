package com.gamejam.locations;


//import openfl.Assets;
//import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.text.TextField;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// LocationSelection displays all the location, and lets a player select one
class LocationSelection extends Sprite {

    public var onLocationSelectedFn:Dynamic->Void;
    public var availableLocations:Array<TextButton>;
    public var locations:Array<Dynamic>;

    public var whiteBg:Sprite;
    public var titleText:TextField;

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

    public function new (locationSelectedFn:Dynamic->Void) {

        super ();

        whiteBg = new Sprite();
        whiteBg.graphics.beginFill(0xFFFFFF);
        whiteBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        whiteBg.graphics.endFill();
        addChild(whiteBg);

        var centerX:Float = Lib.current.stage.stageWidth / 2;
        titleText = new TextField();
        titleText.setTextFormat(TextFormats.TITLES);
        titleText.width = 800;
        titleText.height = 50;
        titleText.text = "Choose A New Location";
        addChild(titleText);
        //titleText.x = centerX;

        onLocationSelectedFn = locationSelectedFn;
        availableLocations = new Array<TextButton>();

    }

    public function setupLocationData(data:Array<Dynamic>):Void {

        locations = data;

        for (btn in availableLocations) {
            btn.removeEventListener(MouseEvent.CLICK, onClickLocation);
            removeChild(btn);
            btn = null;
        }
        availableLocations = [];

        for (location in data) {
            var btn:TextButton = new TextButton(location.Name, 500, 40);
            btn.addEventListener(MouseEvent.CLICK, onClickLocation);
            btn.cargo = location;
            addChild(btn);
            btn.y = 165 + availableLocations.length * 55;
            availableLocations.push(btn);
        }

    }

    public function onClickLocation(e:MouseEvent):Void {

        var btn:TextButton = cast(e.currentTarget, TextButton);
        var locationData:Dynamic = btn.cargo;
        onLocationSelectedFn(locationData);

    }

}
