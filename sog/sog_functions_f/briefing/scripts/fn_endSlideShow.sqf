/*
	Author: PDT for J. Schmidt
	ends the slide show

	Arguments:
	0: _controller <OBJECT> - object that controls the slide show

	Return Value:
	<BOOL> - true if the slide show was ended; false if not
*/

params [["_controller", objNull]];

if (isNull _controller) exitWith {
	_return = false;
	_return
};

// array of controllers
private _controllers = _controller getVariable ["SOG_SlideShow_Controllers", []];

// the current image
private _currentIndex = 0;

// the images to display
private _images = _controller getVariable ["SOG_SlideShow_Images", []];

// the screens to display images on
private _screens = _controller getVariable ["SOG_SlideShow_Screens", []];

// makes sure there are images
if (_images isEqualTo []) exitWith {
	_return = false;
	_return
};

// make sure there are screens
if (_screens isEqualTo []) exitWith {
	_return = false;
	_return
};

// make sure there are controllers
if (_controllers isEqualTo []) exitWith {
	_return = false;
	_return
};

// set the image on each screen
{
	_x setObjectTextureGlobal [0, ""];
} forEach _screens;

// reset the variables
{
	_x setVariable ["SOG_SlideShow_Images", _images, true];
	_x setVariable ["SOG_SlideShow_Screens", _screens, true];
	_x setVariable ["SOG_SlideShow_CurrentIndex", _currentIndex, true];
	_x setVariable ["SOG_SlideShow_Started", false, true];
} forEach _controllers;

_return = true;
_return