package com.gamejam.screens;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// LocationSelection displays all the location, and lets a player select one
class LocationSelection extends Sprite {

    public var onLocationSelectedFn:Dynamic->Void;
    public var availableLocations:Array<TextButton>;
    public var locations:Array<Dynamic>;

    public var stageBg:Sprite;
    public var imageBg:Bitmap;
    public var textBg:Sprite;
    public var titleText:TextField;

    public function new (locationSelectedFn:Dynamic->Void) {

        super ();

        stageBg = new Sprite();
        stageBg.graphics.beginFill(0x000000);
        stageBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        stageBg.graphics.endFill();
        addChild(stageBg);

        imageBg = new Bitmap (Assets.getBitmapData ("assets/images/SubwayMap.png"));
        addChild(imageBg);
        imageBg.x = (Lib.current.stage.stageWidth - imageBg.width) / 2;

        textBg = new Sprite();
        textBg.graphics.beginFill(0x000000);
        textBg.graphics.drawRect(0, 0, 500, 150);
        textBg.graphics.endFill();
        addChild(textBg);
        textBg.x = 20;
        textBg.y = 20;

        titleText = new TextField();
        titleText.setTextFormat(TextFormats.SIZE_32);
        titleText.width = 500;
        titleText.height = 50;
        titleText.text = "Where to next?";
        titleText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(titleText);

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
            btn.x = 20;
            btn.y = 185 + availableLocations.length * 55;
            availableLocations.push(btn);
        }

    }

    public function onClickLocation(e:MouseEvent):Void {

        var btn:TextButton = cast(e.currentTarget, TextButton);
        var locationData:Dynamic = btn.cargo;
        onLocationSelectedFn(locationData);

    }

}
