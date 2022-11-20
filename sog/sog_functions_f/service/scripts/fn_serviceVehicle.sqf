/*
	Name:	sog_fnc_serviceVehicle
	Date:	8/6/2022
	Version: 1.0
	Author:  J. Schmidt

	Description:
	Check type of vehicle and provide appropriate service.

	Arguments:
	0: OBJECT - The Vehicle
	1: STRING - Type of vehicle

	Example:
	// Default No Time Limit
	[this, "Land"] spawn SOG_fnc_serviceVehicle

	Returns:
	void
*/

params [("_veh"), "_vehKind"];
_veh = _this select 0;
_vehType = getText(configFile >> "CfgVehicles" >> typeOf _veh >> "DisplayName");

if ((_veh isKindOf _vehKind) && (driver _veh == player)) exitWith {

	_veh sidechat format ["Servicing %1.", _vehType];
	_veh setFuel 0;
	uiSleep 3;

	_veh setVehicleAmmo 1;
	_veh sidechat format ["%1 Rearmed.", _vehType];
	uiSleep 3;

	_veh setDamage 0;
	_veh sidechat format ["%1 Repaired.", _vehType];
	uiSleep 3;

	_veh setFuel 1;
	_veh sidechat format ["%1 Refueled.", _vehType];
	uiSleep 2;

	_veh sidechat format ["Service Complete", _vehType];
};