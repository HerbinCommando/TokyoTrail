package com.gamejam.game;


import openfl.events.MouseEvent;
import openfl.Lib;

import com.gamejam.activities.ActivityAccomplished;
import com.gamejam.game.Character;


// MainGameState contains the logic for running the game.
class MainGameState {

    public var character:Character;
    public var characterStatusDisplay:CharacterStatusDisplay;
    public var activityAccomplished:ActivityAccomplished;

    public function new (hungerData:Array<Dynamic>, thirstData:Array<Dynamic>) {

        characterStatusDisplay = new CharacterStatusDisplay(hungerData, thirstData);
        characterStatusDisplay.x = Lib.current.stage.stageWidth - 270;
        characterStatusDisplay.y = 20;

        activityAccomplished = new ActivityAccomplished();
        activityAccomplished.addEventListener(MouseEvent.CLICK, onClickActivityAccomplishedOK);
        activityAccomplished.okBtn.addEventListener(MouseEvent.CLICK, onClickActivityAccomplishedOK);

    }

    public function startNewGame(newCharacter:Character):Void {

        character = newCharacter;
        characterStatusDisplay.updateDisplay(character);
        Lib.current.stage.addChild(characterStatusDisplay);

    }

    public function canDoActivity(activityData:Dynamic):Bool {

        return true;

    }

    public function doActivity(activityData:Dynamic):Bool {

        // TODO: do the activity, adjust the character?
        trace("Player is doing activity " + activityData.Name);
        activityAccomplished.setupActivityData(activityData);
        Lib.current.stage.addChild(activityAccomplished);
        Lib.current.stage.addChild(characterStatusDisplay);
        characterStatusDisplay.updateDisplay(character);
        return advanceGameTime(activityData.Duration);

    }

    public function advanceGameTime(hours:Int):Bool {

        trace("advancing game time by " + hours + " hours.");

        var isGameOver:Bool = false;

        isGameOver = checkGameOverConditions();

        return isGameOver;

    }

    static var fakeInt:Int = 10;

    public function checkGameOverConditions():Bool {

        trace("checking FAKE, MADE UP game over conditions fakeInt == " + fakeInt);

        var isGameOver:Bool = --fakeInt <= 0;

        if (isGameOver) {
            Lib.current.stage.removeChild(characterStatusDisplay);
            fakeInt = 10;
        }

        return isGameOver;

    }

    public function onClickActivityAccomplishedOK(e:MouseEvent):Void {

        Lib.current.stage.removeChild(activityAccomplished);
    }
}
