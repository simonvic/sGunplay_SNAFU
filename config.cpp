class CfgPatches {
	class sGunplay_SNAFU {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"Elcan_Weapons_Optics",
			"SNAFU_HuntingOptic",
			"SNAFU_Kahles_Optics",
			"Leupold_Mark8_Weapons_Optics",
			"SNAFU_Nightforce_Optics",
			"SNAFU_Tango6T_Weapons_Optics",
			"Trijicon_Weapons_Optics",
			"SNAFU_AK103A",
			"SNAFU_RPK16Gun",
			"SNAFU_AEK545",
			"SNAFU_CZ805_CFG",
			"SNAFU_AK5C",
			"SNAFU_BR18",
			"SNAFU_Bren",
			"SNAFU_M60",
			"SNAFU_RDB",
			"SNAFU_M1918A2",
			"SNAFU_M70",
			"SNAFU_U100",
			"SNAFU_MP9",
			"SNAFU_MPX",
			"Snafu_pkp",
			"SNAFU_SR25",
			"SNAFU_MAR10",
			"Snafu_ScarH",
			"SNAFUG3A3",
			"SNAFUMDAR",
			"SNAFUPPSh",
			"SNAFURPD",
			"SNAFUSten",
			"SNAFUASh12",
			"SNAFUHoneyBadger",
			"SNAFUKH9",
			"SNAFUM1A",
			"SNAFURSASS",
			"SNAFUTAR21",
			"SNAFUPPSKN",
			"SNAFU_PDW"
		};
	};
};

class CfgMods {
	class sGunplay_SNAFU {
		dir = "simonvic/sGunplay_SNAFU";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_SNAFU";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {};
	};
};

class cfgVehicles{

	class ItemOptics;

	class SNAFU_Elcan_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, -0.01, 0.4, 0.01};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.2};
		};
	};
	
	class SNAFU_Leupold_Mark8_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.2, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_Nightforce_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.225, 0.003};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.3};
		};
	};

	class SNAFU_Tango6T_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.05};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};



	class SNAFU_Trijicon_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_Trijicon : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_Trijicon_Docter : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_AKTrijicon : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_AKTrijicon_Docter : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_HTrijicon : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_HTrijicon_Docter : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_MTrijicon : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_MTrijicon_Docter : SNAFU_Trijicon_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.175, 0.025};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};



	class SNAFU_Kahles_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_Kahles : SNAFU_Kahles_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_AKKahles : SNAFU_Kahles_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_HKahles : SNAFU_Kahles_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

	class SNAFU_MKahles : SNAFU_Kahles_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.25, 0.025};
			PPLensProperties[] = {0.4, 0.0, 0.0, 0.2};
		};
	};

};

class cfgWeapons {
	class Rifle_Base;
	class SNAFU_PDW_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_AK103A_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_RPK16_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_AEK545_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_CZ805_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_AK5C_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_BR18_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_Bren_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M60_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_RDB_Base : Rifle_Base {
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M1918A2_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M70_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_U100_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MP9_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MPX_Base : Rifle_Base {
		s_recoilControlKick = 0.75;
	};
	class Snafu_PKP_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_SR25_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MAR10_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class Snafu_ScarH_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_G3A3_Base : Rifle_Base {
		s_recoilControlHandsX = 0.70;
		s_recoilControlHandsY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.75;
	};
	class SNAFUMDAR_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFUPPSh_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFURPD_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUSten_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUASh12_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUHoneyBadger_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFUKH9_Base : Rifle_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUM1A_Base : Rifle_Base {
		s_recoilControlKick = 0.75;
	};
	class SNAFURSASS_Base : Rifle_Base {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFUTAR21_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUPPSKN_Base : Rifle_Base {
		s_recoilControlHandsX = 0.50;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
};
