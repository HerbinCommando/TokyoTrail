package com.gamejam.activities;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// ActivityAccomplished displays information when a player does a location's activity
class ActivityAccomplished extends Sprite {

    public var stageBg:Sprite;
    public var textBg:Sprite;
    public var nameText:TextField;
    public var descText:TextField;

    public var activityImg:Bitmap;

    public var okBtn:TextButton;

    public function new () {

        super ();

        stageBg = new Sprite();
        stageBg.graphics.beginFill(0x000000);
        stageBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        stageBg.graphics.endFill();
        addChild(stageBg);

        textBg = new Sprite();
        textBg.graphics.beginFill(0x000000);
        textBg.graphics.drawRect(0, 0, 500, 150);
        textBg.graphics.endFill();
        textBg.mouseEnabled = false;
        textBg.mouseChildren = false;
        textBg.x = 20;
        textBg.y = 20;

        nameText = new TextField();
        nameText.setTextFormat(TextFormats.SIZE_32);
        nameText.width = 500;
        nameText.height = 50;
        nameText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(nameText);

        descText = new TextField();
        descText.setTextFormat(TextFormats.SIZE_24);
        descText.multiline = true;
        descText.wordWrap = true;
        descText.width = 500;
        descText.height = 100;
        descText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(descText);
        descText.y = 65;

        okBtn = new TextButton("That was fun (Click anywhere...)", 300, 40);
        okBtn.x = Lib.current.stage.stageWidth - 320;
        okBtn.y = Lib.current.stage.stageHeight - 60;

    }

    public function setupActivityData(data:Dynamic):Void {

        if (activityImg != null) {
            removeChild(activityImg);
            activityImg = null;
        }
        activityImg = new Bitmap (Assets.getBitmapData ("assets/images/" + data.Name + ".png"));
        addChild(activityImg);
        activityImg.x = (Lib.current.stage.stageWidth - activityImg.width)/2;

        nameText.text = data.Name;
        descText.text = data.Description;

        textBg.graphics.clear();
        textBg.graphics.beginFill(0x000000);
        textBg.graphics.drawRect(0, 0, 500, 100 + Math.ceil(descText.height));
        textBg.graphics.endFill();

        addChild(textBg);
        addChild(okBtn);

    }

}
