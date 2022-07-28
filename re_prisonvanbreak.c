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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 16;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	struct<3> Local_217 = { 0, 0, 0 } ;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222[3] = { 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	struct<3> Local_245 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[3] = { 0, 0, 0 };
	var uLocal_268[2] = { 0, 0 };
	struct<2> Local_269 = { 0, 5 } ;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 5;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_217 = { ScriptParam_269.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_148();
	}
	if (func_95(Local_217, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_246)
		{
			RECORDING::_0x208784099002BC30("RE_CR", 0);
			switch (iLocal_44)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_217, 100f, 100f, 100f, false, true, 0))
					{
						func_148();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
					}
					else
					{
						func_91();
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_47)
					{
						func_73();
					}
					if (!bLocal_48 && !bLocal_256)
					{
						func_69();
					}
					if (iLocal_240 && !bLocal_47)
					{
						func_68(iLocal_222[0]);
						func_68(iLocal_222[1]);
						func_68(iLocal_222[2]);
					}
					if ((!iLocal_240 && !bLocal_256) && func_87())
					{
						func_67(iLocal_225[0], &(uLocal_233[0]), 1, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[1]), 5, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[2]), 0, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[3]), 4, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[4]), 1, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[5]), 5, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[6]), 0, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[7]), 4, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[8]), 1, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[9]), 5, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[10]), 0, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[11]), 4, 0.7f);
						func_67(iLocal_226, &(uLocal_233[12]), 1, 0.7f);
						func_67(iLocal_226, &(uLocal_233[13]), 5, 0.7f);
						func_67(iLocal_226, &(uLocal_233[14]), 0, 0.7f);
						func_67(iLocal_226, &(uLocal_233[15]), 4, 0.7f);
					}
					if (!iLocal_238)
					{
						func_65();
					}
					else
					{
						if (!bLocal_256)
						{
							func_64();
						}
						else if (!iLocal_253 && bLocal_47)
						{
							func_62();
						}
						if (!iLocal_257)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()//Position - 0x31D
{
}

void func_2()//Position - 0x325
{
	int iVar0;
	
	if (!iLocal_251)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false) || PED::IS_PED_INJURED(iLocal_222[0]))
		{
			func_59(&uLocal_52, 4);
			iLocal_251 = 1;
		}
	}
	if (!bLocal_234)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || PED::IS_PED_INJURED(iLocal_218)) || PED::IS_PED_HURT(iLocal_218))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_218, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]))
				{
					uLocal_268[0] = func_57(iLocal_264[0]);
				}
				bLocal_234 = true;
				func_59(&uLocal_52, 5);
			}
		}
	}
	if (!bLocal_235)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || PED::IS_PED_INJURED(iLocal_219)) || PED::IS_PED_HURT(iLocal_219))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_245 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_219, 1.2f, 1.5f) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, true, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_268[1]))
				{
					uLocal_268[1] = func_57(iLocal_264[1]);
				}
				bLocal_235 = true;
				func_59(&uLocal_52, 6);
			}
		}
	}
	if (!bLocal_256)
	{
		if (!iLocal_248)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || PED::IS_PED_INJURED(iLocal_218))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
					{
						HUD::REMOVE_BLIP(&iLocal_265);
						iLocal_248 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
						if (!PED::IS_PED_INJURED(iLocal_219))
						{
							TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_219, true);
							PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
							func_59(&uLocal_52, 5);
							func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_247)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || PED::IS_PED_INJURED(iLocal_219))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
					{
						HUD::REMOVE_BLIP(&iLocal_266);
						iLocal_247 = 1;
						bLocal_48 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
						if (!PED::IS_PED_INJURED(iLocal_218))
						{
							TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_218, true);
							PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (PED::IS_PED_INJURED(iLocal_218) && PED::IS_PED_INJURED(iLocal_219))
			{
				if (func_38() && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_217, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (bLocal_48 && !bLocal_47)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_256)
	{
		if (func_38())
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				func_7();
			}
			if (bLocal_256)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_218, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_219))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_219, 150f, 150f, 150f, false, false, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_240 && !bLocal_47)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		STREAMING::REQUEST_MODEL(joaat("ambulance"));
		STREAMING::REQUEST_ANIM_DICT("random@countrysiderobbery");
		if (((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false)) && STREAMING::HAS_MODEL_LOADED(joaat("ambulance"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countrysiderobbery"))
		{
			HUD::REMOVE_BLIP(&iLocal_265);
			HUD::REMOVE_BLIP(&iLocal_266);
			func_59(&uLocal_52, 5);
			func_59(&uLocal_52, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("player"));
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, true, true, false);
			}
			else
			{
				iLocal_227 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_227, true);
			iLocal_220 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("s_m_m_paramedic_01"), -1, true, true);
			iLocal_221 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_227, 20, joaat("s_m_m_paramedic_01"), 0, true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_220, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_221, 17, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_220, 185, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_221, 185, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_227, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_218, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_218, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_218, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_220, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_220, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_PAUSE(0, 15000);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_219, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_219, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_219, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_221, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_222[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_226))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[0], 185, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_226, false) + Vector(0f, 5f, 0f), 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_SWAP_WEAPON(0, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_222[0], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[0], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false) && ENTITY::DOES_ENTITY_EXIST(iLocal_223))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[1], 185, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222[1], joaat("weapon_unarmed"), true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false) + Vector(0f, 1f, 0f), 2f, -1, 0.25f, false, 40000f);
				TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false), -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_223, false), 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_222[1], iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				PED::SET_PED_KEEP_TASK(iLocal_222[1], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_222[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_219))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222[2], 185, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_219))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_219, false) + Vector(0f, 1f, 0f), 1f, -1, 0.25f, false, 40000f);
					TASK::TASK_SWAP_WEAPON(0, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_222[2], iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				}
				PED::SET_PED_KEEP_TASK(iLocal_222[2], true);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_240 = 1;
		}
	}
	if (iLocal_238 && !func_87())
	{
		func_5();
	}
	if (((((ENTITY::IS_ENTITY_DEAD(iLocal_218, false) && ENTITY::IS_ENTITY_DEAD(iLocal_219, false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[2], false)) && (func_38() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		func_7();
	}
}

void func_3()//Position - 0xEA5
{
	Global_20471 = 0;
	func_4();
}

void func_4()//Position - 0xEB5
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_5()//Position - 0xED6
{
	func_148();
}

void func_6(int iParam0)//Position - 0xEE2
{
	Global_113372 = iParam0;
}

void func_7()//Position - 0xEF0
{
	if (!bLocal_47)
	{
	}
	while (func_37())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_36())
	{
		SYSTEM::WAIT(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()//Position - 0xF2B
{
	func_9();
}

int func_9()//Position - 0xF38
{
	if (func_10(0))
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

int func_10(bool bParam0)//Position - 0xF83
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_11(int iParam0, int iParam1)//Position - 0xFAB
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_6(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)//Position - 0x10AE
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
		func_16((891 + iParam0), 1, -1);
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
		func_13();
	}
}

void func_13()//Position - 0x1194
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
		func_15(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_14() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()//Position - 0x1652
{
	return Global_31959;
}

int func_15(int iParam0, int iParam1)//Position - 0x165D
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

void func_16(int iParam0, bool bParam1, int iParam2)//Position - 0x16AE
{
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_17()//Position - 0x16CC
{
	return Global_1574918;
}

int func_18(int iParam0, int iParam1)//Position - 0x16D8
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

int func_19(int iParam0)//Position - 0x1A4C
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

void func_20(int iParam0)//Position - 0x1A7B
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1ABD
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1ADE
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
		func_23();
	}
}

void func_23()//Position - 0x1CB1
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

int func_24()//Position - 0x1DC8
{
	func_25();
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

void func_25()//Position - 0x1E0E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
			if (func_27(iVar0) && (!func_26(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_27(Global_113386.f_2363.f_539.f_4321))
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

bool func_26(int iParam0)//Position - 0x1F0B
{
	return Global_43052 == iParam0;
}

bool func_27(int iParam0)//Position - 0x1F19
{
	return iParam0 < 3;
}

int func_28(int iParam0)//Position - 0x1F25
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)//Position - 0x1F62
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)//Position - 0x1F87
{
	return Global_1998[iParam0 /*29*/];
}

int func_31(int iParam0)//Position - 0x1F96
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

void func_32(int iParam0, int iParam1)//Position - 0x1FD6
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)//Position - 0x1FF1
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

int func_34()//Position - 0x20A2
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_35(Var0);
	return uVar1;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x20BF
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

int func_36()//Position - 0x2299
{
	return 1;
}

int func_37()//Position - 0x22A2
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x22C4
{
	if (bLocal_234 || bLocal_235)
	{
		if (bLocal_234 && bLocal_235)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]) && !HUD::DOES_BLIP_EXIST(uLocal_268[1]))
			{
				return 1;
			}
		}
		if (bLocal_234 && !bLocal_235)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[0]))
			{
				return 1;
			}
		}
		if (bLocal_235 && !bLocal_234)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_268[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2355
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)//Position - 0x23A3
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()//Position - 0x2671
{
	if (!func_42())
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

int func_42()//Position - 0x26A8
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_45())
	{
		return 0;
	}
	if (func_43(PLAYER::PLAYER_ID()))
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

bool func_43(int iParam0)//Position - 0x270B
{
	return func_44(iParam0, 20);
}

var func_44(int iParam0, int iParam1)//Position - 0x271B
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_45()//Position - 0x2733
{
	return -1;
}

void func_46()//Position - 0x273C
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

void func_47()//Position - 0x276D
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

int func_48()//Position - 0x2802
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()//Position - 0x2829
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

void func_50()//Position - 0x28C2
{
	if (func_26(14))
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
		Global_20266 = func_51();
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

int func_51()//Position - 0x2964
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_52()//Position - 0x297D
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

bool func_53(int iParam0, int iParam1)//Position - 0x29D4
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

void func_54()//Position - 0x2A0C
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2A63
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2AB9
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

int func_57(int iParam0)//Position - 0x2B54
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x2B8C
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)//Position - 0x2BA3
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60()//Position - 0x2BC0
{
	if (!iLocal_254)
	{
		if (!PED::IS_PED_INJURED(iLocal_218))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false))
			{
				iLocal_263 = PED::GET_VEHICLE_PED_IS_IN(iLocal_218, false);
				if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0)) || PED::IS_PED_BEING_JACKED(iLocal_218)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_263, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("weapon_microsmg"), true);
						TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
					}
					if (!PED::IS_PED_INJURED(iLocal_219))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("weapon_microsmg"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						}
					}
					bLocal_48 = true;
					iLocal_254 = 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("weapon_microsmg"), true);
						TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_219))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("weapon_microsmg"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_219))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false))
			{
				iLocal_263 = PED::GET_VEHICLE_PED_IS_IN(iLocal_219, false);
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_BEING_JACKED(iLocal_219)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_263, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("weapon_microsmg"), true);
								TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
								bLocal_48 = true;
								iLocal_254 = 1;
							}
						}
					}
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("weapon_microsmg"), true);
							TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
				if (!PED::IS_PED_INJURED(iLocal_218))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_218, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("weapon_microsmg"), true);
							TASK::TASK_DRIVE_BY(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_219, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_263, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_219, joaat("weapon_microsmg"), true);
						TASK::TASK_DRIVE_BY(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, false, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
			}
		}
	}
}

void func_61()//Position - 0x30FE
{
	if (!PED::IS_PED_INJURED(iLocal_218) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_218, iLocal_226, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_218, iLocal_226, 0, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_218, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_218, true);
			iLocal_257 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_219) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_219, iLocal_226, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_219, iLocal_226, 0, false, false))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_219, Local_217, 1000f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_219, true);
			iLocal_257 = 1;
		}
	}
}

void func_62()//Position - 0x31AE
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		Local_245 = { ENTITY::GET_ENTITY_COORDS(iLocal_218, true) };
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
	{
		Local_245 = { ENTITY::GET_ENTITY_COORDS(iLocal_219, true) };
	}
	Local_245.f_2 = (Local_245.f_2 - 0.11f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		SYSTEM::SETTIMERA(0);
		if (!bLocal_48)
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			OBJECT::CREATE_MONEY_PICKUPS(OBJECT::GET_SAFE_PICKUP_COORDS(Local_245, 1.2f, 1.5f), 1000, 5, 0);
			iLocal_253 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
		{
			SYSTEM::SETTIMERA(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
			}
			iLocal_253 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x32D0
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_64()//Position - 0x3324
{
	if (!bLocal_256)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_260)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (PED::IS_PED_JACKING(iLocal_218))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (PED::IS_PED_JACKING(iLocal_219))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
		if (iLocal_239 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_218) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_218, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(iLocal_218, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_219) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_219, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_PED_KEEP_TASK(iLocal_219, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 3)
		{
			if ((!PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_INJURED(iLocal_218)) && !ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false) && PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_218, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_219, 2, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_226, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
					PED::SET_PED_KEEP_TASK(iLocal_218, true);
					bLocal_256 = true;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_INJURED(iLocal_219))
			{
				func_59(&uLocal_52, 5);
				TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 2;
			}
			if (PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_INJURED(iLocal_218))
			{
				func_59(&uLocal_52, 6);
				TASK::TASK_ENTER_VEHICLE(iLocal_218, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 1;
			}
		}
		if (iLocal_239 == 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::CLEAR_PED_TASKS(iLocal_218);
				TASK::TASK_SMART_FLEE_COORD(iLocal_218, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::CLEAR_PED_TASKS(iLocal_219);
				TASK::TASK_SMART_FLEE_COORD(iLocal_219, Local_217, 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
			}
			bLocal_256 = true;
		}
	}
}

void func_65()//Position - 0x362E
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_222[0], false) && ENTITY::IS_ENTITY_DEAD(iLocal_222[1], false)) && ENTITY::IS_ENTITY_DEAD(iLocal_222[2], false))
	{
		func_59(&uLocal_52, 4);
		iLocal_246 = 1;
		iLocal_238 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, joaat("player"));
		if (!bLocal_48 && bLocal_47)
		{
			HUD::REMOVE_BLIP(&iLocal_265);
			HUD::REMOVE_BLIP(&iLocal_266);
		}
		if (!bLocal_48)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
			{
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
			if (!PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_HURT(iLocal_218))
			{
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_218, true, true, true, false);
				iLocal_239 = 1;
				TASK::CLEAR_PED_TASKS(iLocal_218);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_218);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_226, -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_218, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				if (!PED::IS_PED_INJURED(iLocal_219) && !PED::IS_PED_HURT(iLocal_219))
				{
					TASK::CLEAR_PED_TASKS(iLocal_219);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_219);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
					TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, 0, 2f, 1, 0);
					iLocal_239 = 3;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_219, true, true, true, false);
				TASK::CLEAR_PED_TASKS(iLocal_219);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_219);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_226);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_243);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_226, -1, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_219, iLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_243);
				iLocal_239 = 2;
			}
		}
		else
		{
			iLocal_239 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3824
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x3878
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var1 = { -0.5f, 0.75f, 0.05f };
					iVar2 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var1 = { 0.5f, 0.75f, 0.05f };
					iVar2 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var1 = { -0.5f, -0.75f, 0.05f };
					iVar2 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var1 = { 0.5f, -0.75f, 0.05f };
					iVar2 = 3;
					break;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, true, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, false, true))
			{
				switch (*uParam1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, iParam2, false, 1000f);
						*uParam1++;
						break;
					
					case 1:
						VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, iVar2);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Var1, 150f, 50f, true);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)//Position - 0x39F6
{
	if ((!PED::IS_PED_INJURED(iParam0) && !func_37()) && SYSTEM::TIMERA() > 12000)
	{
		func_56(&uLocal_52, 4, iParam0, "RECSBCop1", 0, 1);
		if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
		{
			func_39(&uLocal_52, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_69()//Position - 0x3A62
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_218))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_218) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_218))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_218, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()))
					{
						iLocal_230++;
						if (!iLocal_231 && !func_70("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_231 = 1;
						}
						if (iLocal_230 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), true))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_219))
		{
			if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_219) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_219))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_219, 20f, 20f, 20f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()))
					{
						if ((!iLocal_232 && !PED::IS_PED_INJURED(iLocal_218)) && !func_70("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_232 = 1;
						}
						iLocal_229++;
						if (iLocal_229 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_222[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!iLocal_261 && bLocal_234)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
		}
	}
	if (!iLocal_262 && bLocal_235)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_218, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_218, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_219, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_219, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_226, joaat("weapon_stickybomb"), -1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_218, iLocal_226, -1, -1, 2f, 524296, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_219, iLocal_226, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_47)
				{
					if (!PED::IS_PED_INJURED(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)//Position - 0x4492
{
	var uVar0;
	
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_71()//Position - 0x44BA
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_72()//Position - 0x44DE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()//Position - 0x452B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_258)
	{
		PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iLocal_244);
		if (ENTITY::IS_ENTITY_A_PED(iLocal_244))
		{
			iLocal_224 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_244);
		}
		if ((iLocal_224 == iLocal_222[0] || iLocal_224 == iLocal_222[1]) || iLocal_224 == iLocal_222[2])
		{
			if (!PED::IS_PED_INJURED(iLocal_224))
			{
				if (!func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_224) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_224))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_224, 20f, 20f, 20f, false, true, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_224, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_224, 8f, 8f, 8f, false, true, 0))
							{
								if (!bLocal_259)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!PED::IS_PED_INJURED(iLocal_222[0]))
										{
											func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_222[1]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_222[2]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
									}
								}
								iLocal_228++;
								if (iLocal_228 > 40)
								{
									bLocal_258 = true;
									bLocal_47 = true;
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_244, false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
										iVar0 = 0;
										while (iVar0 < iLocal_222)
										{
											if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
												PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
												PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_259)
					{
						iLocal_228 = 40;
					}
					else
					{
						iLocal_228 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_222)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), true))
			{
				bLocal_47 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_258)
	{
	}
	if (iLocal_240)
	{
		if (SYSTEM::TIMERB() > 6000)
		{
			if (SYSTEM::TIMERB() > 6000 && SYSTEM::TIMERB() < 7000)
			{
				FIRE::STOP_FIRE_IN_RANGE(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_236)
			{
				if (bLocal_48)
				{
					if (!func_37())
					{
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
				else if (!iLocal_238)
				{
					if (!func_37())
					{
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), false, true))
			{
				bLocal_47 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
				{
					bLocal_47 = true;
					func_3();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar1]))
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[0]) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_264[1]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_222[iVar1]))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_242, joaat("player"));
					bLocal_47 = true;
				}
			}
			iVar1++;
		}
		if (!PED::IS_PED_INJURED(iLocal_222[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_225[2], false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222[1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_222[1]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_225[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar1], false))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar1], false)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_47 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_227, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_227, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_227, false))
		{
			bLocal_47 = true;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iLocal_240)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_226))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_222[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar1], false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_225[iVar1]))
					{
						bLocal_47 = true;
					}
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_227, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, iLocal_227))
				{
					bLocal_47 = true;
				}
			}
		}
	}
	if (bLocal_47 || bLocal_258)
	{
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(350f);
		bLocal_47 = true;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_226, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_226, false))
		{
		}
		else
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!iLocal_240)
			{
				if (PED::IS_PED_INJURED(iLocal_218) && !PED::IS_PED_INJURED(iLocal_219))
				{
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
		if (!func_87())
		{
			SYSTEM::SETTIMERA(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_240)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar1], true);
					PED::REGISTER_TARGET(iLocal_222[iVar1], PLAYER::PLAYER_PED_ID());
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_222[iVar1], true, true, true, false);
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar1], true);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_222[iVar1], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_220))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_220, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
			bLocal_47 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
			bLocal_47 = true;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		bLocal_47 = true;
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
	}
}

int func_74(int iParam0)//Position - 0x5225
{
	if (func_78())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_19(Global_113375))
		{
			func_75(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_19(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)//Position - 0x5278
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_76(char* sParam0, int iParam1)//Position - 0x5353
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_77(int iParam0)//Position - 0x536A
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

int func_78()//Position - 0x53AD
{
	switch (func_79(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x53E3
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
		if (func_83(0))
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
		if (!func_81(iParam2))
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
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)//Position - 0x551A
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

bool func_81(int iParam0)//Position - 0x5569
{
	return func_82(iParam0, Global_43052);
}

int func_82(int iParam0, int iParam1)//Position - 0x557A
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

int func_83(int iParam0)//Position - 0x575B
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()//Position - 0x577D
{
	int iVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_222[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_218))
	{
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_217, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[iVar0], true, iLocal_241);
				if (!HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
				{
					iLocal_267[iVar0] = func_85(iLocal_222[iVar0], 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_267[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false) || (!PED::IS_PED_INJURED(iLocal_218) && !iLocal_249))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_218, true, iLocal_242);
			iLocal_265 = func_85(iLocal_218, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, false);
			iLocal_248 = 0;
			iLocal_249 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_219, false) || (!PED::IS_PED_INJURED(iLocal_219) && !iLocal_250))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_219, true, iLocal_242);
			iLocal_266 = func_85(iLocal_219, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, false);
			iLocal_247 = 0;
			iLocal_250 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

int func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x5919
{
	int iVar0;
	
	iVar0 = func_86(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_86(int iParam0, bool bParam1, bool bParam2)//Position - 0x5963
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_87()//Position - 0x5A07
{
	if ((Global_113375 == func_34() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_88()//Position - 0x5A32
{
	int iVar0;
	
	if (!iLocal_252)
	{
		if (!bLocal_47 && !iLocal_240)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_267[iVar0], true);
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_265, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_266, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_222[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_252 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_238) && !iLocal_240)
	{
		if (iLocal_255 == 0 && !func_37())
		{
			SYSTEM::SETTIMERA(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_255 == 1 && !func_37())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_255 == 2 && SYSTEM::TIMERA() > 2000) && !func_37())
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_219))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
		if ((iLocal_255 == 3 && SYSTEM::TIMERA() > 2000) && !func_37())
		{
			if (!bLocal_48)
			{
				if (!iLocal_237)
				{
					if (!PED::IS_PED_INJURED(iLocal_218))
					{
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_237 = 1;
				}
			}
			if (!bLocal_47)
			{
				func_89(&(iLocal_222[0]), "recsb_copclo");
				func_89(&(iLocal_222[1]), "recsb_copclo");
				func_89(&(iLocal_222[2]), "recsb_copclo");
			}
		}
		if (iLocal_255 == 4 && SYSTEM::TIMERA() > 5000)
		{
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_89(var uParam0, char* sParam1)//Position - 0x5E49
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0, 4f, 4f, 4f, false, true, 0))
		{
			if (!bLocal_47)
			{
				func_56(&uLocal_52, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", sParam1, 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 10000, 48, 4);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_90()//Position - 0x5EB3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (PED::IS_PED_INJURED(iLocal_222[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_218))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_265))
		{
			HUD::REMOVE_BLIP(&iLocal_265);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_219))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_266))
		{
			HUD::REMOVE_BLIP(&iLocal_266);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[iVar0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar0], false))
			{
				VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[iVar0], false);
			}
		}
		iVar0++;
	}
	if (bLocal_48)
	{
		if (!iLocal_50)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, joaat("player"));
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					HUD::REMOVE_BLIP(&iLocal_265);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_265))
				{
					iLocal_265 = func_85(iLocal_218, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, true);
				}
				TASK::TASK_COMBAT_PED(iLocal_218, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_218, true);
				PED::REGISTER_TARGET(iLocal_218, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_218, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					HUD::REMOVE_BLIP(&iLocal_266);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_266))
				{
					iLocal_266 = func_85(iLocal_219, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_219, true);
				}
				TASK::TASK_COMBAT_PED(iLocal_219, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_219, true);
				PED::REGISTER_TARGET(iLocal_219, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_219, true);
			}
			iLocal_50 = 1;
		}
		if (bLocal_47)
		{
			if (!iLocal_51)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
						if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
						{
							HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
						}
						TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
						PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
						PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
					}
					iVar0++;
				}
				iLocal_51 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_47)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_219, false);
			}
			iLocal_49 = 1;
		}
		if (!iLocal_51)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, joaat("player"));
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222[iVar0], true);
					HUD::_0xC594B315EDF2D4AF(iLocal_222[iVar0]);
					if (HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_267[iVar0]));
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_267[iVar0]))
					{
						iLocal_267[iVar0] = func_85(iLocal_222[iVar0], 1, 145);
					}
					TASK::TASK_COMBAT_PED(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
					PED::REGISTER_TARGET(iLocal_222[iVar0], PLAYER::PLAYER_PED_ID());
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222[iVar0], true);
				}
				iVar0++;
			}
			iLocal_51 = 1;
		}
	}
}

void func_91()//Position - 0x61F2
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_paramedic_01"));
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("phoenix"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_paramedic_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("phoenix")))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phoenix"), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), false, true, true, true);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, false, false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(328.0555f, 2612.694f, 43.4932f, 5f, false, false, false, false, false, false, 0);
		iLocal_226 = VEHICLE::CREATE_VEHICLE(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, true, true, false);
		iLocal_225[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, true, true, false);
		iLocal_225[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, true, true, false);
		iLocal_225[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, true, true, false);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[2], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[1], true);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[2], true);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_226, true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[0], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[1], true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_225[2], true);
		iLocal_218 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, true, true);
		iLocal_219 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, true, true);
		iLocal_223 = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, true, true);
		iLocal_222[0] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, true, true);
		iLocal_222[1] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, true, true);
		iLocal_222[2] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_222[0], "ped_cops[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[1], "ped_cops[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_222[2], "ped_cops[2]");
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[0], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[1], true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_222[2], true, -1, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_219, 326.25f, 2624.51f, 43.4846f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_218, 321.31f, 2615.66f, 43.4963f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, false, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, false, false);
		TASK::TASK_STAY_IN_COVER(iLocal_222[0]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[1]);
		TASK::TASK_STAY_IN_COVER(iLocal_222[2]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222[2], 1, true);
		PED::SET_PED_ACCURACY(iLocal_222[0], 13);
		PED::SET_PED_ACCURACY(iLocal_222[1], 13);
		PED::SET_PED_ACCURACY(iLocal_222[2], 13);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_219, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_218, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_219, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_218, 1, true);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[0], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[1], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225[2], 0, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_226, 1, false, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_226, 0, false, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_226, true, 1);
		PED::ADD_RELATIONSHIP_GROUP("robbers", &iLocal_241);
		PED::ADD_RELATIONSHIP_GROUP("cops", &iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_223, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_219, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_219, false, iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_219, 300, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_219, joaat("weapon_pistol"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_219, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_219, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_219, 35f, 35f, true);
		PED::SET_PED_ACCURACY(iLocal_219, 13);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_218, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_218, false, iLocal_242);
		ENTITY::SET_ENTITY_HEALTH(iLocal_218, 300, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_218, joaat("weapon_pistol"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_218, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_218, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_218, 35f, 35f, true);
		PED::SET_PED_ACCURACY(iLocal_218, 13);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[0], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[1], false, iLocal_241);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222[2], false, iLocal_241);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[0], joaat("weapon_pumpshotgun"), 200, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[1], joaat("weapon_pistol"), 200, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222[2], joaat("weapon_pumpshotgun"), 200, true, true);
		PED::SET_PED_SEEING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[0], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[1], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222[2], 100f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[0], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[1], iLocal_242);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222[2], iLocal_242);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_242);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_242, joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_241, joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_242, iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_241);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_241, iLocal_242);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[0], iLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[1], iLocal_218, 3000, false);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_222[2], iLocal_218, 3000, false);
		if (func_51() == 0)
		{
			func_56(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_52, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_52, 5, iLocal_218, "RECSBRobber1", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_222[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_45 = 1;
	}
}

void func_92(int iParam0)//Position - 0x69E8
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_93();
}

void func_93()//Position - 0x6A1E
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

void func_94(int iParam0)//Position - 0x6A5B
{
	Global_113375 = iParam0;
}

int func_95(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6A69
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
		iParam1 = func_34();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_134(iParam1))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_130())
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
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_119(iVar4))
				{
					if (func_97(iVar2))
					{
						if (!func_96(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_51() != iVar2)
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

bool func_96(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x6E03
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_97(int iParam0)//Position - 0x6E4A
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)//Position - 0x6E6B
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)//Position - 0x6E7A
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6ECD
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x6EEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_102(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_102(float fParam0, float fParam1, float fParam2)//Position - 0x70EC
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

int func_103(int iParam0, int iParam1)//Position - 0x712E
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

int func_104(int iParam0)//Position - 0x71D0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0)//Position - 0x71E3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0)//Position - 0x71F6
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0)//Position - 0x7209
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(int iParam0)//Position - 0x721B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_109(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)//Position - 0x723D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)//Position - 0x7254
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)//Position - 0x7261
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()//Position - 0x736D
{
	var uVar0;
	
	func_118(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_117(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_116(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_115(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_114(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_113(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_113(var uParam0, int iParam1)//Position - 0x73B3
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

void func_114(var uParam0, int iParam1)//Position - 0x7439
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)//Position - 0x746C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_116(var uParam0, int iParam1)//Position - 0x74BD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_117(var uParam0, int iParam1)//Position - 0x74F7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_118(var uParam0, int iParam1)//Position - 0x7532
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_119(int iParam0)//Position - 0x756E
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
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, bool bParam1)//Position - 0x764A
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x766A
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_129()) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_129()) || Global_31962) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_129()) || func_126()) || Global_112433) || Global_31962) || func_128()) || Global_44238) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
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

var func_122()//Position - 0x7D87
{
	return Global_100480.f_1;
}

int func_123()//Position - 0x7D95
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()//Position - 0x7DB8
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()//Position - 0x7DD2
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

bool func_126()//Position - 0x7DFC
{
	return Global_100493.f_376 > 0;
}

bool func_127()//Position - 0x7E0D
{
	return Global_100493.f_375 > 0;
}

var func_128()//Position - 0x7E1E
{
	return Global_1575058;
}

int func_129()//Position - 0x7E2A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_130()//Position - 0x7E46
{
	func_50();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)//Position - 0x7E6E
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)//Position - 0x7E80
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_133(int iParam0)//Position - 0x7F64
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_134(int iParam0)//Position - 0x7F88
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
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

int func_135(float fParam0, bool bParam1)//Position - 0x7FE0
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
		if (func_27(func_51()))
		{
			iVar5 = func_24();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_136(iVar1, &Var0);
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

void func_136(int iParam0, var uParam1)//Position - 0x8092
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9247
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

int func_138(int iParam0)//Position - 0x92D8
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

struct<2> func_139(int iParam0)//Position - 0x961E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_140(iParam0) };
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

struct<2> func_140(int iParam0)//Position - 0x9655
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

int func_141()//Position - 0x9AA1
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

int func_142()//Position - 0x9AE5
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()//Position - 0x9B17
{
	return Global_113104 > 0;
}

int func_144()//Position - 0x9B25
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x9B3A
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_146()//Position - 0x9B5D
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

int func_147()//Position - 0x9B7A
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

void func_148()//Position - 0x9C32
{
	int iVar0;
	
	if (iLocal_46)
	{
		HUD::REMOVE_BLIP(&iLocal_265);
		HUD::REMOVE_BLIP(&iLocal_266);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), true, true);
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!PED::IS_PED_INJURED(iLocal_222[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222[iVar0], false);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_STAY_IN_COVER(iLocal_222[iVar0]);
					PED::SET_PED_KEEP_TASK(iLocal_222[iVar0], true);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_218))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_218, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, false);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_218, iLocal_226, false))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_226, true);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_219, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_219, false);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_219, iLocal_226, false))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_226, true);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_149(int iParam0)//Position - 0x9D9E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_113375, 1), 64);
		if (func_33(Global_113375) > 0)
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
	func_150(&Global_32019);
	Global_113376 = 0;
	func_94(-1);
}

void func_150(var uParam0)//Position - 0x9E50
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

char* func_151(int iParam0, bool bParam1)//Position - 0x9E8D
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

void func_152(int iParam0)//Position - 0xA0D6
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_153(int iParam0)//Position - 0xA0E8
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)//Position - 0xA0FD
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)//Position - 0xA12C
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_106(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_105(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)//Position - 0xA1FC
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA214
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA396
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)//Position - 0xA3CE
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

