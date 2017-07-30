package com.gamejam.utils;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

// ImageButton is my own button with some image
class ImageButton extends Sprite {

    public var upState:Bitmap;
    public var downState:Bitmap;
    //public var hitSprite:Sprite;

    public function new (upStatePath:String, downStatePath:String) {

        super();

        this.mouseChildren = true;
        this.buttonMode = true;

        upState = new Bitmap (Assets.getBitmapData (upStatePath));
        addChild(upState);
        upState.alpha = 1;

        downState = new Bitmap (Assets.getBitmapData (downStatePath));
        addChild(downState);
        downState.alpha = 0;

        /*
        hitSprite = new Sprite();
        hitSprite.graphics.beginFill(0x000000);
        trace("ImageButton hitSprite has w,h = " + upState.width + "," + upState.height);
        hitSprite.graphics.drawRect(0, 0, upState.width, upState.height);
        hitSprite.graphics.endFill();
        hitSprite.alpha = 0;
        hitSprite.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        hitSprite.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
        */
        upState.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        upState.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
        upState.addEventListener(MouseEvent.MOUSE_OUT, onMouseUp);

    }

    public function onMouseDown(e:MouseEvent):Void {

        //trace('click');
        upState.alpha = 0;
        downState.alpha = 1;

    }

    public function onMouseUp(e:MouseEvent):Void {

        //trace('unclick');
        upState.alpha = 1;
        downState.alpha = 0;

    }

}