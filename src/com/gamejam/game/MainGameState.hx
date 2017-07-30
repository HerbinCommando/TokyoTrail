package com.gamejam.game;

import com.gamejam.character.Character;

// MainGameState contains the logic for running the game.
class MainGameState {

    var character:Character;

    public function new (activeCharacter:Character) {

        character = activeCharacter;

    }

    public function canDoActivity(activityData:Dynamic):Bool {

        return true;

    }

    public function doActivity(activityData:Dynamic):Bool {

        // TODO: do the activity, adjust the character?
        return advanceGameTime(activityData.Duration);

    }

    public function advanceGameTime(hours:Int):Bool {

        trace("advancing game time by " + hours + " hours.");

        var isGameOver:Bool = false;

        isGameOver = checkGameOverConditions();

        return isGameOver;

    }

    static var fakeInt:Int = 5;

    public function checkGameOverConditions():Bool {

        trace("checking FAKE, MADE UP game over conditions fakeInt == " + fakeInt);

        var isGameOver:Bool = --fakeInt <= 0;

        return isGameOver;

    }

}