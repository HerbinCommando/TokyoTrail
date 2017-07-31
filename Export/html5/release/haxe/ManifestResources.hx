package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:pathy35:assets%2Fdata%2FCharacterTypes.jsony4:sizei824y4:typey4:TEXTy2:idR1y7:preloadtgoR0y33:assets%2Fdata%2FHungerLevels.jsonR2i759R3R4R5R7R6tgoR0y30:assets%2Fdata%2FLocations.jsonR2i5768R3R4R5R8R6tgoR0y33:assets%2Fdata%2FThirstLevels.jsonR2i674R3R4R5R9R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_charactertypes_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_hungerlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_locations_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_thirstlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:file("Assets/data/CharacterTypes.json") #if display private #end class __ASSET__assets_data_charactertypes_json extends haxe.io.Bytes {}
@:file("Assets/data/HungerLevels.json") #if display private #end class __ASSET__assets_data_hungerlevels_json extends haxe.io.Bytes {}
@:file("Assets/data/Locations.json") #if display private #end class __ASSET__assets_data_locations_json extends haxe.io.Bytes {}
@:file("Assets/data/ThirstLevels.json") #if display private #end class __ASSET__assets_data_thirstlevels_json extends haxe.io.Bytes {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end