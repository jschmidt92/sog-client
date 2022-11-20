/*
	Name:	sog_fnc_selectDialog
	Date:	8/6/2022
	Version: 1.0
	Author:  J. Schmidt

	Description:
	Create dialog for AI unit.

	Arguments:
	0: OBJECT - The AI unit
	1: STRING - The dialog
*/

params ["_units", "_dialog"];
{
	_x params ["_topic", "_sentence"];
	[_topic, _sentence, nil, false, nil, [_units], 1, false] spawn BIS_fnc_kbTell;
} forEach _dialog;