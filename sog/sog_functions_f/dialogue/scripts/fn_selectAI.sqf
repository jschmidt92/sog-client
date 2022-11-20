/*
	Name:	sog_fnc_selectAI
	Date:	8/6/2022
	Version: 1.0
	Author:  J. Schmidt

	Description:
	Select AI for dialog.

	Arguments:
	0: OBJECT - The AI unit
*/

params ["_unit"];
{
	_x disableAI "ALL";
	_x switchMove " ";
	[_x] call SOG_fnc_selectDialog;
} forEach _units;