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

			"SNAFU_AK_Attachments",
			"SNAFUDSA_SA58",
			"SNAFU_Foregrips",
			"SNAFU_M4_MOE_Handguards",
			"SNAFU_M4_Modular_ReceiverGrips",
			"SNAFU_M4_Modular_Foregrips",
			"SNAFU_M4_Modular_Handguards",
			"SNAFU_M4_Modular_Muzzels",
			"SNAFU_M4_Stocks",

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
			"SNAFU_PDW",
			"SNSA58_CFG",
			"GCGN_M249"
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

	class Inventory_Base;
	class SNAFU_M249Stock_Base : Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.50;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M249HG_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class FGrip_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.40;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_AK19_Stock : Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AK_AR_Stock : Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AK_HG : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_AK19Muzzel : Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_AK308Muzzel : Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFUDSASA58_Stock : Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_DSAHG1 : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_DSAHG2 : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MOEFS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MOELS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_AFG_02_Base : Inventory_Base {
		s_recoilControlHandsX = 0.30;
		s_recoilControlHandsY = 0.30;
		s_recoilControlMisalignmentX = 0.40;
		s_recoilControlMisalignmentY = 0.35;
	};
	class SNAFU_FGCR_Grip : Inventory_Base {
		s_recoilControlHandsX = 0.30;
		s_recoilControlHandsY = 0.30;
		s_recoilControlMisalignmentX = 0.40;
		s_recoilControlMisalignmentY = 0.35;
	};
	class SNAFU_FGKAC_Grip : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_PistolGripColtA2 : Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.10;
	};
	
	class SNAFU_GADAR: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_HG625: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_HGGS: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK47HG: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR07: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR08: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR09: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR10: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR13: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MCMR15: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_HGMlok: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK7: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK9: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK10: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK13: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_MK15: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_LVOAHG: Inventory_Base {
		s_recoilControlHandsX = 0.10;
		s_recoilControlHandsY = 0.10;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class SNAFU_M60_Handguard_E3: Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_M60_Handguard_E4: Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};

	class SNAFU_MuzzelFF: Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_MK47Muzzel: Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_HeramuzzelF: Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};
	class Test_SNAFU_MuzzelF: Inventory_Base {
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.05;
	};

	class SNAFU_M4SS_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_MK47_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_MOE_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_PRSGen3_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_SCQR_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_SADAR_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_SBA_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_UBR_Stock: Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};

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
