#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	struct<3> Local_244 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	bool bLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_238 = 8000;
	iLocal_241 = 8;
	iLocal_243 = 1;
	sLocal_249 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_250 = "RANDOM@ARRESTS";
	sLocal_251 = "RANDOM@ARRESTS@BUSTED";
	iLocal_255 = 1;
	Local_63 = { ScriptParam_285.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_70 = true;
		func_207();
		func_177();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (func_134(Local_63, 15, iLocal_51, 0, 0))
	{
		func_129(15);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_128()) && !func_115())
				{
					if (func_112())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_177();
				}
				break;
			
			case 1:
				if (func_108())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, false, true, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_97(1);
					iLocal_46 = 2;
				}
				else if (!func_96(200f))
				{
					func_177();
				}
				break;
			
			case 2:
				if (func_96(1128792064))
				{
					func_1();
				}
				else
				{
					func_177();
				}
				break;
		}
	}
}

void func_1()//Position - 0x1D2
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	MISC::SET_BIT(&uVar0, 3);
	MISC::SET_BIT(&uVar0, 4);
	iVar3 = 0;
	func_95();
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_RESET_FLAG(iLocal_53, 129, true);
	}
	if (func_94(iLocal_53))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_53, 0))
		{
			bLocal_284 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_68)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) == 7)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_68)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 1805844857) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, -2017877118) == 1)
								{
									TASK::STOP_ANIM_PLAYBACK(iLocal_53, 2, true);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
							}
						}
					}
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(iLocal_53, true), true);
					if (SYSTEM::TIMERA() > 8000 || fVar2 < 1.5f)
					{
						iVar3 = func_90();
						if (iVar3 == 1)
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar2 < 10f)
					{
						iVar3 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar3 || iLocal_270 == 1)
						{
							if (!func_89())
							{
								if (func_74(&uLocal_72, "REARRAU", "REARR_PCUFF", 4, iLocal_246, 0, 0))
								{
								}
								bLocal_282 = (PED::IS_PED_RAGDOLL(iLocal_53) || TASK::IS_PED_GETTING_UP(iLocal_53));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
								Local_64 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
								TASK::CLEAR_PED_TASKS(iLocal_52);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								if (!bLocal_282 && fVar2 > 2f)
								{
									TASK::TASK_SHOOT_AT_COORD(0, Local_64.f_0, Local_64.f_1, (Local_64.f_2 + 4f), 1000, 1566631136);
								}
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_53, -1, 2048, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_53, iLocal_53, 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 5000, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
								PED::SET_PED_KEEP_TASK(iLocal_52, true);
								SYSTEM::SETTIMERA(0);
								iLocal_240 = MISC::GET_GAME_TIMER();
								if (bLocal_282)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_270)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
								iLocal_270 = 1;
							}
						}
						else
						{
							func_73();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
							{
								TASK::CLEAR_PED_TASKS(iLocal_52);
								iLocal_50 = 1;
								TASK::TASK_STAND_STILL(iLocal_52, 500);
							}
						}
					}
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, -982327190) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
						iLocal_50 = 0;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 1000)
					{
						Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_53) * 3f) };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_53, Var1, 2f, -1, 1f, 1024, 40000f);
						iLocal_50 = 3;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				
				case 4:
					bLocal_68 = true;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "idle_2_hands_up", 2f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_53, true);
					iLocal_50 = 5;
					break;
				
				case 5:
					if (iLocal_48 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_52);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::SET_PED_KEEP_TASK(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false) && !PED::IS_PED_INJURED(iLocal_54))
					{
						VEHICLE::_0xBE5C1255A1830FF5(iLocal_55, true);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, -2017877118) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, -1273030092) == 7)
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_53, iLocal_55, 2, false, false))
								{
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_53, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, -1794415470) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
													TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0f, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_66, iLocal_65);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_65, iLocal_66);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_52))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_52);
										if (!PED::IS_PED_IN_COMBAT(iLocal_52, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
											{
												if (!func_89())
												{
													if (func_74(&uLocal_72, "REARRAU", "REARR_INCAR", 4, iLocal_246, 0, 0))
													{
														if (func_72(iLocal_52, iLocal_55) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
															{
																Local_283 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_283 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
														{
															Local_283 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_283 = { -2.978f, 0.75f, 1f };
														}
														TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_55, Local_283), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
														PED::SET_PED_KEEP_TASK(iLocal_52, true);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_55, false);
														iLocal_238 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_269 = MISC::GET_GAME_TIMER();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_71();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_269) > 8000)
							{
								if (!func_89())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
									iLocal_269 = MISC::GET_GAME_TIMER();
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							if (iLocal_62)
							{
								if (func_72(iLocal_52, iLocal_55) == 2)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 2, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 1, 1f, 1, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(iLocal_55, true), true);
								if (fVar4 < 4f && iLocal_273 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.f_0, Local_283.f_1, 1f, true);
									iLocal_273 = 1;
								}
								else if (fVar4 < 3f)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_get_up", 3))
							{
								if (func_72(iLocal_52, iLocal_55) == 2)
								{
									Local_283 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_283 = { -1.578f, -0.5f, 1f };
								}
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.f_0, Local_283.f_1, 1f, true);
								if (bLocal_284)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_56))
								{
									HUD::REMOVE_BLIP(&iLocal_56);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_57))
								{
									HUD::REMOVE_BLIP(&iLocal_57);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_54, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
									func_177();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, -1794415470) == 7)
								{
									TASK::CLEAR_PED_TASKS(iLocal_52);
									TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_57();
	if (PED::IS_PED_INJURED(iLocal_53))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!func_89())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
						{
							func_74(&uLocal_72, "REARRAU", sLocal_266, 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				SYSTEM::WAIT(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_177();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()//Position - 0xBEC
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (MISC::GET_GAME_TIMER() > iLocal_247 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_246 = 1;
		}
		else
		{
			iLocal_246 = 0;
		}
		iLocal_247 = MISC::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)//Position - 0xC84
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_237 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!func_89())
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, false), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar0, 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar1, 16f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_48 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (!func_89())
						{
							if (func_74(&uLocal_72, "REARRAU", "REARR_PRAD1", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_89())
						{
							if (func_74(&uLocal_72, "REARRAU", "REARR_PRAD2", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_89())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_55, false);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
						}
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar2, 8f, -1.5f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52, false, false);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_68)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) || !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
					{
						if (!func_89())
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
				{
					PED::SET_IK_TARGET(iLocal_52, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (SYSTEM::TIMERB() > iLocal_238 || iLocal_254)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (iLocal_238 == 8000 || iLocal_254)
								{
									if (bLocal_253)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_89())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
								}
							}
							else if (iLocal_238 == 8000)
							{
								if (!func_89())
								{
									func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 20000;
								}
							}
							else if (!func_89())
							{
								func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
								iLocal_238 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_53))
							{
								if (!func_89())
								{
									func_74(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 30000;
								}
							}
							else if (!func_89())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
								iLocal_238 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_238 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_55, false))
							{
								func_71();
							}
						}
					}
					else
					{
						func_71();
					}
				}
				break;
			}
	}
}

void func_4()//Position - 0x1054
{
	if (!iLocal_254)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_252 = "idle_a";
				break;
			
			case 1:
				sLocal_252 = "idle_b";
				break;
			
			case 2:
				sLocal_252 = "idle_c";
				break;
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, "enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, sLocal_252, 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, "exit", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "enter", 3))
	{
		if (func_5())
		{
			func_74(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, sLocal_252, 3))
	{
		func_74(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()//Position - 0x1199
{
	if (MISC::GET_GAME_TIMER() > iLocal_256 + 6000)
	{
		iLocal_256 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x11BA
{
	if (!iLocal_254)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_chatter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_74(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_exit", 3))
	{
		iLocal_255 = 0;
		func_8();
	}
}

void func_7()//Position - 0x128E
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_68)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				ENTITY::IS_ENTITY_DEAD(iLocal_53, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_52, iLocal_53, -1, 3f, 0f, 0f, 1f, false);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::REMOVE_BLIP(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_238 = 8000;
			iLocal_279 = MISC::GET_GAME_TIMER();
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_279) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, -1273030092) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, -1, 0, 1f, 1, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_54, true);
						func_177();
					}
				}
			}
			break;
	}
}

void func_8()//Position - 0x13AD
{
	bLocal_253 = func_9();
	bLocal_253 = iLocal_255;
	iLocal_238 = 20000;
	iLocal_254 = 0;
}

int func_9()//Position - 0x13CB
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x13E9
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	iVar4 = joaat("pranger");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar4);
	if (STREAMING::HAS_MODEL_LOADED(iVar4))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 1077936128, 0))
		{
			if (VEHICLE::_0xA4822F1CF23F4810(&Var0, &Var2, &uVar3, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_55 = VEHICLE::CREATE_VEHICLE(iVar4, Var2, 0f, true, true, false);
				iLocal_54 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, true);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, joaat("weapon_pistol"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, joaat("weapon_pistol"), -1, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_65);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 5f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_55, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_55, true);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_55, true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Var0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_55, MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 1077936128, 0);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.71f, 2592.007f, 36.9446f, Var0, true) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_54, iLocal_55, Var0, 4, 7f, 786471, 5f, -1f, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_55, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
				iLocal_71 = 1;
				VEHICLE::SET_RANDOM_TRAINS(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x15AB
{
	if (iLocal_47 != 3)
	{
		iLocal_237 = 3;
	}
	switch (iLocal_237)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 7 || MISC::GET_GAME_TIMER() > iLocal_240 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 25f, 25f, 25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_53, -1, 3.5f, 2f, 2f, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_237 = 1;
					}
				}
				else
				{
					iLocal_237 = 3;
				}
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52) > 0)
				{
					if (!func_89())
					{
						if (iLocal_239 < 2)
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
							if (HUD::DOES_BLIP_EXIST(iLocal_56))
							{
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
							}
						}
						else
						{
							func_74(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
						}
						iLocal_237 = 2;
					}
				}
			}
			else if (!func_89())
			{
				if (iLocal_239 < 2)
				{
					func_74(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
					}
				}
				else
				{
					func_74(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
				}
				iLocal_237 = 2;
			}
			break;
		
		case 2:
			if (!func_89())
			{
				iLocal_237 = 3;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()//Position - 0x1750
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
	bVar1 = func_56();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_68 == 1)
				{
					switch (iLocal_241)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, true);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 9;
							}
							else
							{
								iLocal_241 = 3;
							}
							break;
						
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								iLocal_241 = 0;
							}
							break;
						
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_53, true);
								iLocal_241 = 3;
							}
							break;
						
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_241 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_53);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, false, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 2;
							}
							break;
						
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7 || func_74(&uLocal_72, "REARRAU", sLocal_263, 4, iLocal_246, 0, 0))
								{
									iLocal_241 = 6;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, false, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							}
							break;
						
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_241 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								if (!func_89())
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 2f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
									iLocal_241 = 4;
								}
							}
							else
							{
								iLocal_241 = 6;
							}
							break;
						
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_280 = MISC::GET_GAME_TIMER();
								iLocal_241 = 7;
							}
							break;
						
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_53, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_280) > 2000)
							{
								iLocal_241 = 5;
							}
							break;
						
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								if (!func_89())
								{
									if (iLocal_239 < 2)
									{
										func_74(&uLocal_72, "REARRAU", sLocal_258, 4, iLocal_246, 0, 0);
										TASK::TASK_PLAY_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 16f, -16f, -1, 16, 0f, false, false, false);
									}
									else
									{
										func_74(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
									}
									func_15(func_50(), 1, 250, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_53);
									iLocal_241 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_89())
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								func_177();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_89())
				{
					func_74(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				func_177();
			}
		}
		else
		{
			func_13();
			TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!func_89())
			{
				func_74(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
			}
			func_177();
		}
	}
}

void func_13()//Position - 0x1C93
{
	Global_20471 = 0;
	func_14();
}

void func_14()//Position - 0x1CA3
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1CC7
{
	int iVar0;
	int iVar1;
	
	if (func_49(iParam0) == 3)
	{
		return;
	}
	if (func_49(iParam0) == 4)
	{
		return;
	}
	func_16(func_49(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1D99
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_43052 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)//Position - 0x2398
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)//Position - 0x261A
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_19(bool bParam0)//Position - 0x2674
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_25(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_25(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_25(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_25(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_22(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_22(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_22(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_22(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_22(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_22(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_21() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_21() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_20(bool bParam0)//Position - 0x27F4
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_21()//Position - 0x28F7
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2904
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_23(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_23(var uParam0)//Position - 0x2934
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_24()//Position - 0x2968
{
	return Global_1574918;
}

void func_25(int iParam0, bool bParam1, int iParam2)//Position - 0x2974
{
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_26(int iParam0)//Position - 0x2992
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

int func_27(int iParam0)//Position - 0x29B2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_29(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_29(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_29(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_29(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_28(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_28(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_28(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_28(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_28(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_28(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_21() /*5567*/].f_681.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0x2B58
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_23(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)//Position - 0x2B95
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_30(bool bParam0)//Position - 0x2BB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)//Position - 0x2C68
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)//Position - 0x2C83
{
	if (func_44(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_42(&Global_4541529))
	{
		if (func_40(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)//Position - 0x2D20
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)//Position - 0x2DD1
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)//Position - 0x2E4C
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)//Position - 0x2E5D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4541528 - 0.5f));
}

void func_37(var uParam0, int iParam1)//Position - 0x2E91
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)//Position - 0x2EA1
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_39(var uParam0)//Position - 0x2EBE
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)//Position - 0x2ECA
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)//Position - 0x2EDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(var uParam0)//Position - 0x2F09
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)//Position - 0x2F17
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_44(int iParam0)//Position - 0x2F67
{
	return Global_43052 == iParam0;
}

int func_45(int iParam0, int iParam1)//Position - 0x2F75
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)//Position - 0x2FC6
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_47(int iParam0, int iParam1)//Position - 0x2FE9
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_48()//Position - 0x3046
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_49(int iParam0)//Position - 0x30BB
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_50()//Position - 0x30CC
{
	func_51();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_51()//Position - 0x30E5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_54(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_53(PLAYER::PLAYER_PED_ID());
			if (func_52(iVar0) && (!func_44(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_52(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_52(int iParam0)//Position - 0x31E2
{
	return iParam0 < 3;
}

int func_53(int iParam0)//Position - 0x31EE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)//Position - 0x322B
{
	if (func_52(iParam0))
	{
		return func_55(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_55(int iParam0)//Position - 0x3250
{
	return Global_1998[iParam0 /*29*/];
}

int func_56()//Position - 0x325F
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, false, true, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	return 0;
}

void func_57()//Position - 0x335D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53);
		bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
		if (((bVar1 || func_70()) || func_68()) || bVar0)
		{
			func_67();
			if (bLocal_68)
			{
				if (((bVar0 || bVar1) && !PED::IS_PED_RAGDOLL(iLocal_53)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					PED::SET_PED_TO_RAGDOLL(iLocal_53, 500, 2000, 0, false, false, false);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false) && !PED::IS_PED_RAGDOLL(iLocal_53))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				func_63(0);
				if (!func_89())
				{
					if (!PED::IS_PED_INJURED(iLocal_52) && iLocal_274 == 0)
					{
						if (func_74(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
			func_62(&uLocal_72, 2);
		}
		func_67();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_68)
			{
				func_63(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_177();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190) || func_61()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_60()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_52))) || iVar2 == 1)
		{
			func_63(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			if (iLocal_275 == 0)
			{
				iLocal_275 = 1;
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
			func_62(&uLocal_72, 1);
		}
	}
	if (iLocal_275)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_278) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_275 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190)
			{
				func_67();
				func_63(1);
				iLocal_47 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 110f, 110f, 40f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 20f, 20f, 20f, false, true, 0))
			{
				func_58();
				SYSTEM::WAIT(0);
				func_74(&uLocal_72, "REARRAU", "REARR_PORUN", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 40f, 40f, 40f, false, true, 0))
			{
				func_58();
				SYSTEM::WAIT(0);
				func_74(&uLocal_72, "REARRAU", sLocal_259, 4, iLocal_246, 0, 0);
			}
			func_177();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52) && PED::IS_PED_INJURED(iLocal_53))
	{
		func_177();
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 100f, 100f, 40f, false, true, 0))
			{
				func_177();
			}
		}
	}
}

void func_58()//Position - 0x37A0
{
	Global_20471 = 0;
	func_59();
}

void func_59()//Position - 0x37B0
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

bool func_60()//Position - 0x3807
{
	bool bVar0;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_71)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_61()//Position - 0x3891
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, true))
	{
		if (PED::IS_PED_INJURED(iLocal_53))
		{
			return 1;
		}
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 2f, true))
		{
			return 1;
		}
	}
	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 5f, 5f, 5f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_52))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						if (bLocal_68)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("weapon_stickybomb"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("vehicle_weapon_tank"), true))
	{
		return 1;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)//Position - 0x3A38
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_63(int iParam0)//Position - 0x3A55
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
		if (!bLocal_59)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 1805844857) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_53);
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_53)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
					{
						if (!func_89())
						{
							func_74(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
						}
					}
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_52);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 1);
			}
			func_65();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_52))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				func_64();
			}
			bLocal_59 = true;
		}
	}
}

void func_64()//Position - 0x3C2C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_67);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, true, 0f);
		}
	}
}

void func_65()//Position - 0x3C8A
{
	Global_20471 = 0;
	func_66();
}

void func_66()//Position - 0x3C9A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_67()//Position - 0x3CBB
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, false);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
	}
}

int func_68()//Position - 0x3CE3
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
	{
		if (bLocal_68)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x3D26
{
	if (!func_89())
	{
		if (iLocal_267 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			func_74(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
		}
	}
	iLocal_267++;
	iLocal_268 = MISC::GET_GAME_TIMER();
}

int func_70()//Position - 0x3D6F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_53))
		{
			if (bLocal_68)
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (bLocal_68)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_68)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_71()//Position - 0x3E34
{
	if (!iLocal_69)
	{
		switch (iLocal_239)
		{
			case 0:
				if (!bLocal_59)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								func_58();
								SYSTEM::WAIT(0);
								func_74(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
							}
						}
						iLocal_239 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_89())
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
						ENTITY::SET_ENTITY_HEALTH(iLocal_53, 101, 0);
						func_74(&uLocal_72, "REARRAU", sLocal_261, 4, iLocal_246, 0, 0);
						iLocal_239 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						iLocal_239 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
						TASK::TASK_COMBAT_PED(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_52, 40000f, 0);
						func_177();
					}
					PED::SET_PED_KEEP_TASK(iLocal_52, true);
				}
				iLocal_69 = 1;
				break;
			}
	}
}

int func_72(int iParam0, int iParam1)//Position - 0x3FC0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var3 = { Var1 - Var0 };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var4 = { Var2 - Var0 };
		if (SYSTEM::VMAG(Var3) < SYSTEM::VMAG(Var4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_73()//Position - 0x404E
{
	if (!func_89())
	{
		if (!iLocal_281)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 30f, 30f, 30f, false, true, 0))
			{
				func_74(&uLocal_72, "REARRAU", "REARR_PSTOP", 4, iLocal_246, 0, 0);
				iLocal_281 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				func_74(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				func_74(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 10f, 10f, 10f, false, true, 0))
			{
				func_74(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else
			{
				func_74(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x414E
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)//Position - 0x419C
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_59();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_86();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_85();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_84())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_83())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_82();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_81();
		func_76();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_59();
	}
	return 0;
}

void func_76()//Position - 0x446A
{
	if (!func_77())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_77()//Position - 0x44A1
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_80())
	{
		return 0;
	}
	if (func_78(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_78(int iParam0)//Position - 0x4504
{
	return func_79(iParam0, 20);
}

var func_79(int iParam0, int iParam1)//Position - 0x4514
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_80()//Position - 0x452C
{
	return -1;
}

void func_81()//Position - 0x4535
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21605 = 1;
}

void func_82()//Position - 0x4567
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_83()//Position - 0x45FC
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()//Position - 0x4623
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_85()//Position - 0x46BC
{
	if (func_44(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_50();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_86()//Position - 0x475E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_87(int iParam0, int iParam1)//Position - 0x47B6
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x47EE
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_89()//Position - 0x4844
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x4866
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, false, true, 0) || func_93())
	{
		if (!func_91(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(float fParam0)//Position - 0x48A7
{
	var uVar0;
	struct<3> Var1;
	
	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), &uVar0, &Var1))
	{
		if (func_92(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_92(struct<3> Param0, struct<3> Param1)//Position - 0x48D7
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_93()//Position - 0x48F8
{
	return 0;
}

int func_94(int iParam0)//Position - 0x4901
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_95()//Position - 0x4922
{
	if ((MISC::GET_GAME_TIMER() - iLocal_245) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, iLocal_242);
				if (bLocal_242 == 1)
				{
					bLocal_242 = false;
				}
				else
				{
					bLocal_242 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		if (!bLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, iLocal_243);
				if (bLocal_243 == 1)
				{
					bLocal_243 = false;
				}
				else
				{
					bLocal_243 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		iLocal_245 = MISC::GET_GAME_TIMER();
	}
	if (!bLocal_277 == bLocal_276)
	{
		if (bLocal_276)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, true);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
			}
		}
		bLocal_277 = bLocal_276;
	}
}

int func_96(float fParam0)//Position - 0x4A04
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_271, Local_272, 194.75f, false, true, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_97(int iParam0)//Position - 0x4AAE
{
	if (func_102())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_101(Global_113375))
		{
			func_98(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_101(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x4B01
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)//Position - 0x4BDC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_100(int iParam0)//Position - 0x4BF3
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_101(int iParam0)//Position - 0x4C37
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_102()//Position - 0x4C66
{
	switch (func_103(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_103(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4C9C
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_107(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_105(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_104(uParam0, iParam4);
		}
	}
	return 2;
}

void func_104(var uParam0, int iParam1)//Position - 0x4DD3
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_105(int iParam0)//Position - 0x4E22
{
	return func_106(iParam0, Global_43052);
}

int func_106(int iParam0, int iParam1)//Position - 0x4E33
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x5014
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_105(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_108()//Position - 0x5036
{
	float fVar0;
	
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, fVar0, fVar0, fVar0, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, fVar0, fVar0, fVar0, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_271, Local_272, 194.75f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					iLocal_57 = func_109(iLocal_53, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_109(iLocal_52, 0, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_109(iLocal_52, 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				iLocal_57 = func_109(iLocal_53, 0, 145);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_109(int iParam0, bool bParam1, int iParam2)//Position - 0x5154
{
	int iVar0;
	
	iVar0 = func_110(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x519E
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_111(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_111(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_111(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_111(bool bParam0, float fParam1, float fParam2)//Position - 0x5242
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_112()//Position - 0x5259
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_51 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar4 = 218.3434f;
		Var3 = { 2431.685f, 4945.31f, 44.6996f };
		fVar5 = 220.0087f;
		Local_271 = { 2378.284f, 4863.027f, 32.50883f };
		Local_272 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_248 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_257 = "arrestcriminal";
		sLocal_258 = "REARR_CTHANK";
		sLocal_259 = "REARR_CORUN";
		sLocal_260 = "REARR_CWTF";
		sLocal_261 = "REARR_CTURN";
		sLocal_262 = "REARR_CHELP";
		sLocal_263 = "REARR_HATE";
		sLocal_264 = "REARR_CRAND";
		sLocal_265 = "REARR_CRAND";
		sLocal_266 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar4 = 90.5639f;
		Var3 = { 2586.005f, 2541.41f, 31.0379f };
		fVar5 = 75.5943f;
		Local_271 = { 2543.135f, 2683.917f, 0.307461f };
		Local_272 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_248 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_257 = "arrestcriminal2";
		sLocal_258 = "REARR_THANK2";
		sLocal_259 = "REARR_CORUN2";
		sLocal_260 = "REARR_CWTF2";
		sLocal_261 = "REARR_CTURN2";
		sLocal_262 = "REARR_CHELP2";
		sLocal_263 = "REARR_HATE2";
		sLocal_264 = "REARR_CRAND2";
		sLocal_265 = "REARR_CRAND2";
		sLocal_266 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_250);
	STREAMING::REQUEST_ANIM_DICT(sLocal_251);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_250)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_251)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = PED::CREATE_PED(6, iVar0, Var2, fVar4, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_52, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, true);
		func_114(&uLocal_72, 1, iLocal_52, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_52, 1);
		iLocal_53 = PED::CREATE_PED(26, iVar1, Var3, fVar5, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 281, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
		func_114(&uLocal_72, 2, iLocal_53, sLocal_257, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
		}
		func_113();
		if (func_50() == 0)
		{
			func_114(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_50() == 1)
		{
			func_114(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_50() == 2)
		{
			func_114(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
		iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), Local_63.f_0, Local_63.f_1, (Local_63.f_2 + 100f), true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false, false);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
		{
			iLocal_51 = 1;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_244, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, true);
		}
		else
		{
			iLocal_51 = 2;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_244, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		}
		if (iLocal_51 == 1)
		{
		}
		TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_113()//Position - 0x56D7
{
	Local_244.f_0 = 0f;
	Local_244.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_52, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 11, false);
	PED::SET_PED_COMBAT_RANGE(iLocal_52, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_65);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, iLocal_65);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_66);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_65, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_66, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, sLocal_249);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_248);
}

void func_114(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x57BA
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_115()//Position - 0x5855
{
	if (!func_105(5))
	{
		return 1;
	}
	if (func_124())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
		{
			return 0;
		}
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_116(float fParam0, bool bParam1)//Position - 0x58B7
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_52(func_50()))
		{
			iVar5 = func_122();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_117(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_117(int iParam0, var uParam1)//Position - 0x5968
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
		
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
		
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
		
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_118(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x6BAF
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_119(int iParam0)//Position - 0x6C40
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_120(int iParam0)//Position - 0x6F86
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_121(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_121(int iParam0)//Position - 0x6FBE
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_122()//Position - 0x740B
{
	func_51();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_123()//Position - 0x7451
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()//Position - 0x746E
{
	if (func_127() && !func_123())
	{
		return 1;
	}
	if (func_126() && func_125())
	{
		return 1;
	}
	return 0;
}

bool func_125()//Position - 0x74A0
{
	return Global_113104 > 0;
}

int func_126()//Position - 0x74AE
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x74C3
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_128()//Position - 0x74E6
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
		{
			return 0;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x756C
{
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_131(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_130();
}

void func_130()//Position - 0x75A2
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_131(int iParam0)//Position - 0x75DF
{
	Global_113375 = iParam0;
}

int func_132()//Position - 0x75ED
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_133(Var0);
	return uVar1;
}

int func_133(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x760A
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_134(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x77E4
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_132();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_176())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_175(0))
		{
			return 0;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_52(func_50()))
		{
			if (func_116(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_173(iParam1))
		{
			return 0;
		}
		if (func_52(func_50()))
		{
			if (func_172(func_50()) == 4 || func_172(func_50()) == 5)
			{
				return 0;
			}
		}
		if (func_52(func_50()))
		{
			if (!func_171(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_170(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_169())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_160(4))
		{
			return 0;
		}
		if (!func_105(5))
		{
			return 0;
		}
		if (func_159(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_173(30) && !func_159(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_52(func_50()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_158(iVar4))
				{
					if (func_136(iVar2))
					{
						if (!func_135(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_50() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_135(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x7B7E
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_136(int iParam0)//Position - 0x7BC5
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_137(iVar0);
}

int func_137(int iParam0)//Position - 0x7BE6
{
	return func_138(iParam0, 1);
}

int func_138(int iParam0, int iParam1)//Position - 0x7BF5
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_158(iParam0))
	{
		return 0;
	}
	func_139(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7C48
{
	func_140(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7C66
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_150(iParam0, iParam1))
	{
		iVar0 = func_149(iParam1);
		iVar1 = func_147(iParam0);
		iVar2 = (func_147(iParam0) - func_147(iParam1));
		iVar3 = (func_149(iParam0) - func_149(iParam1));
		iVar4 = (func_146(iParam0) - func_146(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_149(iParam0);
		iVar1 = func_147(iParam1);
		iVar2 = (func_147(iParam1) - func_147(iParam0));
		iVar3 = (func_149(iParam1) - func_149(iParam0));
		iVar4 = (func_146(iParam1) - func_146(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_142(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_141(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_141(float fParam0, float fParam1, float fParam2)//Position - 0x7E67
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_142(int iParam0, int iParam1)//Position - 0x7EA9
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_143(int iParam0)//Position - 0x7F4B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_144(int iParam0)//Position - 0x7F5E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_145(int iParam0)//Position - 0x7F71
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_146(int iParam0)//Position - 0x7F84
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_147(int iParam0)//Position - 0x7F96
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_148(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_148(bool bParam0, int iParam1, int iParam2)//Position - 0x7FB8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_149(int iParam0)//Position - 0x7FCF
{
	return iParam0 & 15;
}

int func_150(int iParam0, int iParam1)//Position - 0x7FDC
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x80EA
{
	var uVar0;
	
	func_157(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_156(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_155(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_154(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_153(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_152(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_152(var uParam0, int iParam1)//Position - 0x8130
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_153(var uParam0, int iParam1)//Position - 0x81B6
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)//Position - 0x81E9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_147(*uParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_155(var uParam0, int iParam1)//Position - 0x823A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_156(var uParam0, int iParam1)//Position - 0x8274
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_157(var uParam0, int iParam1)//Position - 0x82AF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_158(int iParam0)//Position - 0x82EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_147(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_149(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_146(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, bool bParam1)//Position - 0x83C7
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x83E7
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_50();
				if (!func_52(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_112433) || Global_31962) || func_167()) || func_87(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_168()) || Global_31962) || func_167()) || func_87(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_112433) || Global_31962) || func_167()) || func_87(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_112433) || Global_31962) || func_167()) || func_87(8, -1)) || func_166()) || func_165()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_87(8, -1)) || func_163()) || func_162()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_87(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_168()) || Global_31962) || func_167()) || func_87(8, -1)) || func_165()) || func_164()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_168()) || func_165()) || Global_112433) || Global_31962) || func_167()) || Global_44238) || func_87(8, -1)) || func_164()) || func_162()) || func_163()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_168()) || Global_112433) || Global_31962) || func_167()) || func_87(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_161()//Position - 0x8B04
{
	return Global_100480.f_1;
}

int func_162()//Position - 0x8B12
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_163()//Position - 0x8B35
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()//Position - 0x8B4F
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_165()//Position - 0x8B79
{
	return Global_100493.f_376 > 0;
}

bool func_166()//Position - 0x8B8A
{
	return Global_100493.f_375 > 0;
}

var func_167()//Position - 0x8B9B
{
	return Global_1575058;
}

int func_168()//Position - 0x8BA7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_169()//Position - 0x8BC3
{
	func_85();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0)//Position - 0x8BEB
{
	return func_150(func_151(), iParam0);
}

int func_171(int iParam0, int iParam1, int iParam2)//Position - 0x8BFD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_50();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_172(int iParam0)//Position - 0x8CE1
{
	if (!func_52(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_173(int iParam0)//Position - 0x8D05
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_176())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_174()//Position - 0x8D5D
{
	int iVar0;
	
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_175(bool bParam0)//Position - 0x8DA1
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_176()//Position - 0x8DC9
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_177()//Position - 0x8E81
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_206(6);
				func_191();
				break;
			
			case 3:
				func_206(5);
				func_191();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 9000f, -1, false, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 9000f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_KEEP_TASK(iLocal_52, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
				PED::SET_PED_AS_COP(iLocal_52, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_64();
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
				PED::SET_PED_AS_COP(iLocal_54, true);
			}
		}
		if (func_190())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
		}
		if (iLocal_71)
		{
			VEHICLE::SET_RANDOM_TRAINS(true);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_275)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	func_178(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_178(int iParam0)//Position - 0x9010
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_190())
	{
		func_183(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_182(30000);
		StringCopy(&cVar0, func_181(Global_113375, 1), 64);
		if (func_180(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_179(&Global_32019);
	Global_113376 = 0;
	func_131(-1);
}

void func_179(var uParam0)//Position - 0x90C2
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

int func_180(int iParam0)//Position - 0x90FF
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_181(int iParam0, bool bParam1)//Position - 0x91B0
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_182(int iParam0)//Position - 0x93F9
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_183(int iParam0)//Position - 0x940B
{
	func_184(iParam0, 0, func_189(iParam0));
}

void func_184(int iParam0, int iParam1, int iParam2)//Position - 0x9420
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_151();
	func_187(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_186(iParam0, &uVar0);
	Var1 = { func_185(&uVar0) };
}

struct<16> func_185(var uParam0)//Position - 0x944F
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_145(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_144(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_146(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_147(*uParam0), 64);
	return Var0;
}

void func_186(int iParam0, var uParam1)//Position - 0x9520
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9538
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_149(*uParam0);
	iVar2 = func_146(*uParam0);
	iVar3 = func_145(*uParam0);
	iVar4 = func_144(*uParam0);
	iVar5 = func_143(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_188(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x96BA
{
	func_157(uParam0, iParam1);
	func_156(uParam0, iParam2);
	func_155(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

int func_189(int iParam0)//Position - 0x96F2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_190()//Position - 0x9895
{
	if ((Global_113375 == func_132() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_191()//Position - 0x98C0
{
	if (!bLocal_70)
	{
		func_205();
	}
	func_194(15, iLocal_51);
	func_192();
}

void func_192()//Position - 0x98DF
{
	func_193();
}

int func_193()//Position - 0x98EC
{
	if (func_175(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

void func_194(int iParam0, int iParam1)//Position - 0x9937
{
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_180(iParam0))
	{
		func_204(iParam0, iParam1);
		if (!func_203(51))
		{
			func_200("RE_REWARD", 1, 0, 4000, 10000, func_122(), 0, 138, 0);
			func_199(51);
		}
		if (func_101(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_198(iParam0, iParam1) != 322)
		{
			func_195(func_198(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_206(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_206(7);
			}
			else
			{
				func_206(1);
			}
		}
	}
}

void func_195(int iParam0, var uParam1, var uParam2)//Position - 0x9A3B
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_25((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_196();
	}
}

void func_196()//Position - 0x9B21
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_45(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_197() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_193();
				}
			}
		}
	}
}

int func_197()//Position - 0x9FDF
{
	return Global_31959;
}

int func_198(int iParam0, int iParam1)//Position - 0x9FEA
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_199(int iParam0)//Position - 0xA35E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_200(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA3A0
{
	func_201(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_201(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xA3C2
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_202();
	}
}

void func_202()//Position - 0xA596
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_203(int iParam0)//Position - 0xA6AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_204(int iParam0, int iParam1)//Position - 0xA6ED
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_205()//Position - 0xA708
{
	return 1;
}

void func_206(int iParam0)//Position - 0xA711
{
	Global_113372 = iParam0;
}

void func_207()//Position - 0xA71F
{
	if (!bLocal_68 && iLocal_49 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_52, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 3f, 20000, 40000f, 0.5f);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			SYSTEM::WAIT(0);
		}
	}
}

