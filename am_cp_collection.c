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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
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
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_230[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	var uLocal_364[4] = { 0, 0, 0, 0 };
	var uLocal_369[4] = { 0, 0, 0, 0 };
	int iLocal_374[4] = { 0, 0, 0, 0 };
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	struct<3> Local_388[130];
	var uLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	int iLocal_789[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_800 = 0;
	int iLocal_801[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	struct<2> Local_814 = { -1, -1 } ;
	struct<730> Local_816 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	struct<535> Local_1566 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_2101 = -1;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = -1082130432;
	var uLocal_2124 = 3;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = -1;
	var uLocal_2141 = 0;
	var uLocal_2142 = -1;
	var uLocal_2143 = -1;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = -1082130432;
	var uLocal_2166 = 3;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = -1;
	var uLocal_2183 = 0;
	var uLocal_2184 = -1;
	var uLocal_2185 = -1;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = -1082130432;
	var uLocal_2208 = 3;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = -1;
	var uLocal_2225 = 0;
	var uLocal_2226 = -1;
	var uLocal_2227 = -1;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = -1082130432;
	var uLocal_2250 = 3;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = -1;
	var uLocal_2267 = 0;
	var uLocal_2268 = -1;
	var uLocal_2269 = -1;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = -1082130432;
	var uLocal_2292 = 3;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = -1;
	var uLocal_2309 = 0;
	var uLocal_2310 = -1;
	var uLocal_2311 = -1;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = -1082130432;
	var uLocal_2334 = 3;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = -1;
	var uLocal_2351 = 0;
	var uLocal_2352 = -1;
	var uLocal_2353 = -1;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = -1082130432;
	var uLocal_2376 = 3;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = -1;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = -1;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = -1082130432;
	var uLocal_2418 = 3;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = -1;
	var uLocal_2435 = 0;
	var uLocal_2436 = -1;
	var uLocal_2437 = -1;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = -1082130432;
	var uLocal_2460 = 3;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = -1;
	var uLocal_2477 = 0;
	var uLocal_2478 = -1;
	var uLocal_2479 = -1;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = -1082130432;
	var uLocal_2502 = 3;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = -1;
	var uLocal_2519 = 0;
	var uLocal_2520 = -1;
	var uLocal_2521 = -1;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = -1082130432;
	var uLocal_2544 = 3;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = -1;
	var uLocal_2561 = 0;
	var uLocal_2562 = -1;
	var uLocal_2563 = -1;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = -1082130432;
	var uLocal_2586 = 3;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = -1;
	var uLocal_2603 = 0;
	var uLocal_2604 = -1;
	var uLocal_2605 = -1;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = -1082130432;
	var uLocal_2628 = 3;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = -1;
	var uLocal_2645 = 0;
	var uLocal_2646 = -1;
	var uLocal_2647 = -1;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = -1082130432;
	var uLocal_2670 = 3;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = -1;
	var uLocal_2687 = 0;
	var uLocal_2688 = -1;
	var uLocal_2689 = -1;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1082130432;
	var uLocal_2712 = 3;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = -1;
	var uLocal_2729 = 0;
	var uLocal_2730 = -1;
	var uLocal_2731 = -1;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = -1082130432;
	var uLocal_2754 = 3;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = -1;
	var uLocal_2771 = 0;
	var uLocal_2772 = -1;
	var uLocal_2773 = -1;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = -1082130432;
	var uLocal_2796 = 3;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = -1;
	var uLocal_2813 = 0;
	var uLocal_2814 = -1;
	var uLocal_2815 = -1;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = -1082130432;
	var uLocal_2838 = 3;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = -1;
	var uLocal_2855 = 0;
	var uLocal_2856 = -1;
	var uLocal_2857 = -1;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = -1082130432;
	var uLocal_2880 = 3;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = -1;
	var uLocal_2897 = 0;
	var uLocal_2898 = -1;
	var uLocal_2899 = -1;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = -1082130432;
	var uLocal_2922 = 3;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = -1;
	var uLocal_2939 = 0;
	var uLocal_2940 = -1;
	var uLocal_2941 = -1;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = -1082130432;
	var uLocal_2964 = 3;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = -1;
	var uLocal_2981 = 0;
	var uLocal_2982 = -1;
	var uLocal_2983 = -1;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = -1082130432;
	var uLocal_3006 = 3;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = -1;
	var uLocal_3023 = 0;
	var uLocal_3024 = -1;
	var uLocal_3025 = -1;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = -1082130432;
	var uLocal_3048 = 3;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = -1;
	var uLocal_3065 = 0;
	var uLocal_3066 = -1;
	var uLocal_3067 = -1;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = -1082130432;
	var uLocal_3090 = 3;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = -1;
	var uLocal_3107 = 0;
	var uLocal_3108 = -1;
	var uLocal_3109 = -1;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = -1082130432;
	var uLocal_3132 = 3;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = -1;
	var uLocal_3149 = 0;
	var uLocal_3150 = -1;
	var uLocal_3151 = -1;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = -1082130432;
	var uLocal_3174 = 3;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = -1;
	var uLocal_3191 = 0;
	var uLocal_3192 = -1;
	var uLocal_3193 = -1;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = -1082130432;
	var uLocal_3216 = 3;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = -1;
	var uLocal_3233 = 0;
	var uLocal_3234 = -1;
	var uLocal_3235 = -1;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = -1082130432;
	var uLocal_3258 = 3;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = -1;
	var uLocal_3275 = 0;
	var uLocal_3276 = -1;
	var uLocal_3277 = -1;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = -1082130432;
	var uLocal_3300 = 3;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = -1;
	var uLocal_3317 = 0;
	var uLocal_3318 = -1;
	var uLocal_3319 = -1;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = -1082130432;
	var uLocal_3342 = 3;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = -1;
	var uLocal_3359 = 0;
	var uLocal_3360 = -1;
	var uLocal_3361 = -1;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = -1082130432;
	var uLocal_3384 = 3;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = -1;
	var uLocal_3401 = 0;
	var uLocal_3402 = -1;
	var uLocal_3403 = -1;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = -1082130432;
	var uLocal_3426 = 3;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = -1;
	var uLocal_3443 = 0;
	var uLocal_3444 = -1;
	struct<12> Local_3445 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_3457[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_748(ScriptParam_0))
		{
			func_710();
		}
	}
	while (true)
	{
		func_709();
		if (func_705() || func_703())
		{
			func_710();
		}
		func_675();
		switch (func_674(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_673() == 1)
				{
					if (func_671())
					{
						func_670(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_673() == 1)
				{
					func_149();
					func_137();
				}
				else if (func_673() == 3)
				{
					func_670(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_710();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_673())
			{
				case 0:
					if (func_119())
					{
						func_118(1);
					}
					break;
				
				case 1:
					if (Local_816.f_8 == 6)
					{
						func_118(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_386, 1000, 0))
					{
						func_118(3);
					}
					break;
				
				case 3:
					func_710();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x195
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F3
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()//Position - 0x238
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_816.f_2, 2))
		{
			Local_816.f_1 = NETWORK::GET_NETWORK_TIME();
			MISC::SET_BIT(&(Local_816.f_2), 2);
		}
	}
	switch (Local_816.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_816.f_667), Global_262145.f_11761 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */, 0) || BitTest(Local_816.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_816.f_9 = NETWORK::GET_NETWORK_TIME();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_816.f_661), Global_262145.f_11760 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */, 0)) || BitTest(Local_816.f_2, 2))
			{
				if (!BitTest(Local_816.f_2, 1) && func_21())
				{
					func_20(&(Local_816.f_661), 0, 0);
					MISC::SET_BIT(&(Local_816.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_816.f_1 = NETWORK::GET_NETWORK_TIME();
				}
			}
			func_8();
			iLocal_95++;
			if (iLocal_95 >= Local_816.f_709)
			{
				iLocal_95 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_816.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_816.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_816.f_729[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_816.f_729[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x426
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_6(bVar1))
			{
				if ((!BitTest(Local_3457[iVar0 /*5*/].f_2, 0) || Local_3457[iVar0 /*5*/].f_3 != 6) || (BitTest(Local_816.f_2, 0) && !BitTest(Local_3457[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_6(bool bParam0)//Position - 0x4A9
{
	if (func_7(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 8);
}

bool func_7(bool bParam0)//Position - 0x4CC
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 2);
}

void func_8()//Position - 0x4E1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)))
		{
			MISC::SET_BIT(&uVar3, bVar2);
		}
		else
		{
			func_19(bVar2);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar2))
		{
			if (func_18(bVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(bVar2);
			func_9(bVar2);
			MISC::SET_BIT(&(Local_816.f_673), bVar2);
		}
		bVar2++;
	}
	if (iVar0 > Local_816.f_727)
	{
		Local_816.f_727 = iVar0;
	}
	else
	{
		Local_816.f_726 = (Local_816.f_727 - iVar0);
	}
	if (iVar1 > Local_816.f_728)
	{
		Local_816.f_728 = iVar1;
	}
}

void func_9(bool bParam0)//Position - 0x59E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_3457[bParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_816.f_674[iVar1] == bParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_816.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_816.f_674[iVar1] < 0 || iVar0 > Local_3457[Local_816.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_816.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_816.f_674[iVar1], bParam0, iVar1);
			}
			Local_816.f_674[iVar1] = bParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_816.f_674[iVar3] == bParam0)
				{
					Local_816.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x687
{
	struct<14> Var0;
	int iVar14;
	
	iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -154142402;
		Var0.f_10 = iVar14;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x6BE
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_12(int iParam0)//Position - 0x6EB
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_13(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(bool bParam0, bool bParam1, bool bParam2)//Position - 0x748
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_14(var uParam0, int iParam1)//Position - 0x7A8
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(bool bParam0)//Position - 0x7CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0));
	iVar0 = iVar3;
	if (Global_2794162.f_5079.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2794162.f_5079.f_38[iVar0];
		iVar1 = Global_2794162.f_5079.f_5[iVar0];
		if (!BitTest(Local_816.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (BitTest(Global_2794162.f_5079[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_384, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_816.f_10[iVar4 /*5*/].f_3 = bParam0;
							Global_2794162.f_5079.f_38[iVar0] = -1;
							MISC::SET_BIT(&(Local_816.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_816.f_708 = (Local_816.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)//Position - 0x8B0
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8E1
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_18(bool bParam0)//Position - 0x907
{
	if (bParam0 >= 0 && bParam0 < 32)
	{
		return Local_3457[bParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(bool bParam0)//Position - 0x92F
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_816.f_673, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_816.f_674[iVar0] == bParam0)
			{
				Local_816.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_816.f_709)
		{
			if (Local_816.f_10[iVar1 /*5*/].f_3 == bParam0)
			{
				Local_816.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		MISC::CLEAR_BIT(&(Local_816.f_673), bParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9B3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_21()//Position - 0x9F0
{
	return 0;
}

int func_22()//Position - 0x9F9
{
	if (Local_816.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_816.f_671), 750, 0))
	{
		MISC::SET_BIT(&(Local_816.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA2F
{
	Local_816.f_8 = iParam0;
}

int func_24()//Position - 0xA3E
{
	struct<2> Var0;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	
	if (func_34())
	{
		Var0 = { Local_816.f_729[iLocal_97 /*2*/] };
		if (func_33(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_32(iLocal_97, &Var2, &fVar5))
				{
					Local_816.f_713[iLocal_97] = func_29(iLocal_97);
					if (BitTest(Local_3457[Local_816.f_713[iLocal_97] /*5*/].f_1, iLocal_97))
					{
						if (func_26(&(Local_816.f_729[iLocal_97 /*2*/].f_1), Var0.f_0, Var2, fVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), false);
							func_25(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar6, 10);
								MISC::SET_BIT(&iVar6, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_97 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_816.f_713[iLocal_97] = -1;
						}
					}
				}
			}
			iLocal_97++;
			if (iLocal_97 >= 10)
			{
				iLocal_97 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBD0
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xC1E
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2794162.f_6737 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_27(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_27(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xD27
{
	int iVar0;
	
	if (func_28(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635560.f_3026[1 /*6*/].f_5 == iParam5 && Global_2635560.f_3026[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635560.f_3026[iVar0 /*6*/] = { Global_2635560.f_3026[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635560.f_3026[1 /*6*/] = { Param0 };
		Global_2635560.f_3026[1 /*6*/].f_3 = fParam3;
		Global_2635560.f_3026[1 /*6*/].f_4 = iParam4;
		Global_2635560.f_3026[1 /*6*/].f_5 = iParam5;
	}
}

int func_28(int iParam0, struct<3> Param1, int iParam4)//Position - 0xDFA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_29(int iParam0)//Position - 0xE98
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	bool bVar8;
	
	fVar2 = 1000000f;
	if (func_32(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_13(bVar8, 1, 1))
				{
					fVar3 = func_30(func_31(bVar8), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_30(struct<3> Param0, struct<3> Param3)//Position - 0xF11
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param3);
}

Vector3 func_31(bool bParam0)//Position - 0xF2F
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_32(int iParam0, var uParam1, var uParam2)//Position - 0xF42
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.5818f, -2943.7695f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.8894f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.3267f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.6503f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.4066f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.5889f, 2925.5627f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.4181f, -2442.9897f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

bool func_33(int iParam0)//Position - 0x10BE
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34()//Position - 0x10DC
{
	return Local_816.f_707;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x10EA
{
	if (func_117(PLAYER::PLAYER_ID(), 0) || func_114(PLAYER::PLAYER_ID(), 0))
	{
		if (func_113(PLAYER::PLAYER_ID()) || func_111(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (func_38(&(Global_1836866.f_18)))
	{
		if (!func_1(&(Global_1836866.f_18), 7500, 0))
		{
			return 0;
		}
		func_37(&(Global_1836866.f_18));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_36()//Position - 0x11E1
{
	return BitTest(Global_1836866.f_1, 0);
}

void func_37(var uParam0)//Position - 0x11F1
{
	uParam0->f_1 = 0;
}

bool func_38(var uParam0)//Position - 0x11FE
{
	return uParam0->f_1;
}

void func_39(bool bParam0, int iParam1)//Position - 0x120A
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_40(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_40(int iParam0)//Position - 0x1263
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_41()//Position - 0x12C6
{
	return Global_1574918;
}

bool func_42(int iParam0, int iParam1)//Position - 0x12D2
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = func_40(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)//Position - 0x12FB
{
	if ((!BitTest(Global_1836866.f_1, 2) && !func_7(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836866.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x136F
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_110(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_108(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)//Position - 0x13EF
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672524.f_2836)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2672524.f_2514[0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[0 /*80*/] = { *uParam0 };
			if (func_47(uParam0->f_69, 8192))
			{
				Global_1935885 = 1;
			}
			return 1;
		}
		if (((Global_2672524.f_2514[0 /*80*/].f_1 == 13 || Global_2672524.f_2514[0 /*80*/].f_1 == 53) || Global_2672524.f_2514[0 /*80*/].f_1 == 54) || Global_2672524.f_2514[0 /*80*/].f_1 == 58)
		{
			Global_2672524.f_2514[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672524.f_2514[iVar0 + 1 /*80*/] = { Global_2672524.f_2514[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672524.f_2514[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_48();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_108(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
				Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2672524.f_2514[iVar0 /*80*/].f_1))
				{
					Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
					func_108(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x15D4
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_47(var uParam0, int iParam1)//Position - 0x165A
{
	return (uParam0 && iParam1) != 0;
}

void func_48()//Position - 0x1669
{
	bool bVar0;
	
	if (Global_2672524.f_2837)
	{
		return;
	}
	if (!Global_78958)
	{
		Global_78958 = 1;
		bVar0 = true;
	}
	else if (Global_78959)
	{
		Global_78959 = 0;
		bVar0 = true;
	}
	func_49();
	if (bVar0)
	{
		Global_78958 = 0;
	}
}

void func_49()//Position - 0x16AE
{
	Global_2672524.f_2838 = 0;
	Global_2672524.f_2838.f_582 = 0;
	func_53(&(Global_2672524.f_2838.f_1));
	Global_2672524.f_2838.f_1.f_1 = 0;
	func_50(&(Global_2672524.f_2838.f_1), 1);
}

void func_50(var uParam0, int iParam1)//Position - 0x16F0
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78958)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78960)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_52(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_51(0);
}

void func_51(int iParam0)//Position - 0x179E
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

int func_52(bool bParam0)//Position - 0x17B2
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_53(var uParam0)//Position - 0x17DA
{
	func_54(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_54(var uParam0)//Position - 0x1804
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_55(int iParam0)//Position - 0x1883
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_56()//Position - 0x199B
{
	return Global_2683883.f_19;
}

void func_57(var uParam0)//Position - 0x19A9
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_72 = func_58();
	}
}

int func_58()//Position - 0x19C4
{
	return 21;
}

int func_59(int iParam0)//Position - 0x19CE
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_60(var uParam0, bool bParam1)//Position - 0x1A60
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_107() || !func_13(bParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1AB7
{
	int iVar0;
	int iVar1;
	
	if (!func_106(bParam0))
	{
		return 1;
	}
	if (func_104(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_112316[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_104(PLAYER::PLAYER_ID()) || (func_103() && func_102())) && !BitTest(Global_2794162.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_101();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_13(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_112316[iParam1] != -1)
							{
								return func_99(iParam1, bParam0, 0);
							}
							else
							{
								return func_78(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_78(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_112316[iParam1] != -1)
				{
					return func_99(iParam1, bParam0, 0);
				}
				else
				{
					return func_62(0, -1, 0);
				}
			}
			else
			{
				return func_62(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_112316[iParam1] != -1)
		{
			return func_99(iParam1, bParam0, 0);
		}
		else
		{
			return func_78(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_78(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)//Position - 0x1CA2
{
	return func_63(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_63(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1CB8
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_77() || (func_76() && func_74())) && Global_1665516.f_1)
	{
		if (bParam1)
		{
			return func_73(iParam2, iVar0);
		}
		else
		{
			return func_73(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_68(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_67(1);
				}
				else
				{
					return func_67(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_64(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_64(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_67(1);
	}
	return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1DBA
{
	int iVar0;
	
	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_4718592.f_117591, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_65(int iParam0, bool bParam1)//Position - 0x1ED2
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_171044 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9658[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x1F23
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_68(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(bool bParam0)//Position - 0x1F6B
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F82
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058071.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0))
			{
				bVar1 = Global_1058071.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_69(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x22CD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_13(bVar1, 1, 1) || func_71(bVar1, 0)) || BitTest(Global_2657704[bVar1 /*463*/].f_199, 2)) || func_70(bVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_70(bool bParam0)//Position - 0x23F9
{
	return BitTest(Global_1853988[bParam0 /*867*/].f_36.f_18, 14);
}

bool func_71(bool bParam0, int iParam1)//Position - 0x2411
{
	bool bVar0;
	
	if (!func_106(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_72(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[bParam0 /*867*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_72(int iParam0, bool bParam1)//Position - 0x246A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1575043[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1)//Position - 0x24AB
{
	if (iParam0 == -1)
	{
		iParam0 = func_66(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_74()//Position - 0x24F9
{
	if (func_75())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_175236, 4);
}

bool func_75()//Position - 0x2518
{
	return BitTest(Global_4718592.f_164769, 12);
}

bool func_76()//Position - 0x252D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_175236, 0);
	}
	return ((BitTest(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_77()//Position - 0x2574
{
	if (func_75() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2591
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853988[iVar2 /*867*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_87())
			{
				iVar3 = func_83(bParam0);
				if (!iVar3 == -1)
				{
					return func_81(iVar3);
				}
			}
			if ((func_80(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_68(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_67(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_79(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836600 || Global_1836590) || Global_1853988[bParam0 /*867*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836600 == 1 && Global_1836610 == 0))
			{
				return func_67(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836594 && Global_1836080.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_83(bParam0);
	if (!iVar4 == -1)
	{
		return func_81(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_79(bool bParam0)//Position - 0x2729
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_80(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2740
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_81(int iParam0)//Position - 0x27B8
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_82(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_82(int iParam0)//Position - 0x287B
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_83(bool bParam0)//Position - 0x2892
{
	if (func_106(bParam0))
	{
		if (func_85(bParam0, 1))
		{
			return Global_2648711.f_818.f_11[func_84(bParam0)];
		}
	}
	return -1;
}

int func_84(bool bParam0)//Position - 0x28C2
{
	if (func_106(bParam0))
	{
		return Global_1895156[bParam0 /*609*/].f_10;
	}
	return func_107();
}

bool func_85(bool bParam0, bool bParam1)//Position - 0x28E5
{
	if (!func_106(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_86(bParam0))
		{
			return 0;
		}
	}
	return Global_1895156[bParam0 /*609*/].f_10 != func_107();
}

int func_86(bool bParam0)//Position - 0x291E
{
	if (func_106(bParam0))
	{
		if (Global_1895156[bParam0 /*609*/].f_10 != func_107())
		{
			return Global_1895156[bParam0 /*609*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_87()//Position - 0x2953
{
	if (((((((func_98() || func_97()) || func_56()) || func_96()) || func_95()) || func_93()) || func_91()) || func_88())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x29C5
{
	return func_89(Global_4718592.f_117591);
}

int func_89(int iParam0)//Position - 0x29DB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_90(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x2A05
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33923 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_91()//Position - 0x2A24
{
	return func_92(Global_4718592.f_117591);
}

int func_92(int iParam0)//Position - 0x2A3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31922[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93()//Position - 0x2A69
{
	return func_94(Global_4718592.f_117591);
}

int func_94(int iParam0)//Position - 0x2A7F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_95()//Position - 0x2AB9
{
	return Global_2683883.f_24;
}

bool func_96()//Position - 0x2AC7
{
	return Global_2683883.f_21;
}

var func_97()//Position - 0x2AD5
{
	return Global_2683883.f_18;
}

var func_98()//Position - 0x2AE3
{
	return Global_2683883.f_17;
}

int func_99(int iParam0, bool bParam1, bool bParam2)//Position - 0x2AF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058071.f_14[iParam0];
	if (func_87())
	{
		iVar2 = func_83(bParam1);
		if (!iVar2 == -1)
		{
			return func_81(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_107())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
		{
			if (Global_4718592.f_112316[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_112316[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_112316[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_112316[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_112316[iParam0];
			}
		}
		else
		{
			iVar0 = func_63(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_100(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_68(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
		{
			iVar0 = func_79(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_100(int iParam0)//Position - 0x2C71
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_171203;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_171204;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_171205;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_171206;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_101()//Position - 0x2D46
{
	return Global_2621446.f_2;
}

var func_102()//Position - 0x2D54
{
	return BitTest(Global_2621446, 4);
}

var func_103()//Position - 0x2D62
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_104(bool bParam0)//Position - 0x2D7C
{
	if (func_71(bParam0, 0))
	{
		return 1;
	}
	if (func_105())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[bParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_105()//Position - 0x2DBB
{
	return BitTest(Global_2621446, 3);
}

int func_106(int iParam0)//Position - 0x2DC9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_107()//Position - 0x2DEB
{
	return -1;
}

void func_108(var uParam0, int iParam1)//Position - 0x2DF4
{
	func_109(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1)//Position - 0x2E04
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_110(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2E15
{
	uParam1->f_17 = func_107();
	uParam1->f_18 = func_107();
	uParam1->f_19 = func_107();
	uParam1->f_20 = func_107();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_111(bool bParam0)//Position - 0x2E93
{
	return func_112(bParam0, 20);
}

var func_112(bool bParam0, int iParam1)//Position - 0x2EA3
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_10.f_4, iParam1);
}

int func_113(bool bParam0)//Position - 0x2EBB
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_112(bParam0, 9);
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x2ED9
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 && func_115(Global_1895156[iParam0 /*609*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1)
	{
		if (func_115(Global_1895156[iParam0 /*609*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x2F3F
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_116(iParam0, 0);
	return 0;
}

int func_116(int iParam0, int iParam1)//Position - 0x2F99
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_117(bool bParam0, int iParam1)//Position - 0x2FEE
{
	if (func_106(bParam0))
	{
		if (Global_1895156[bParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[bParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)//Position - 0x3032
{
	Local_816.f_0 = iParam0;
}

int func_119()//Position - 0x303F
{
	int iVar0;
	
	if (func_1(&(Local_816.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_816.f_674[iVar0] = -1;
			iVar0++;
		}
		func_37(&(Local_816.f_661));
		func_122();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_816.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_120();
		}
		return 1;
	}
	return 0;
}

void func_120()//Position - 0x30B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_816.f_729[iVar0 /*2*/] = func_121();
		iVar0++;
	}
}

int func_121()//Position - 0x30E0
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_122()//Position - 0x3114
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_816.f_709 = func_136();
	Local_816.f_708 = Local_816.f_709;
	Local_816.f_712 = func_132();
	Local_816.f_707 = func_129();
	iVar0 = func_128();
	if (Local_816.f_707)
	{
		iVar1 = 1;
	}
	func_124(func_126(132, Local_816.f_712, iVar1, 0));
	if (Local_816.f_712 == 1 && !Local_816.f_707)
	{
		Local_816.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_816.f_709)
	{
		Local_816.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_816.f_10[iVar2 /*5*/] = { func_123(Local_816.f_712, Local_816.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_123(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x31CC
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.6509f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.0992f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.2948f, 350.0934f;
							
							case 3:
								return 1779.2795f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.2144f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.9426f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.5355f, -1594.8741f, 262.0831f;
							
							case 7:
								return 2139.4236f, -2613.5798f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.9011f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.6445f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.8013f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.4192f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.6746f, 60.143f;
							
							case 13:
								return 872.454f, -1929.2372f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.1902f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.8324f, 1113.6754f, 134.9644f;
							
							case 21:
								return 1539.3142f, 1716.1719f, 125.0574f;
							
							case 22:
								return 1875.1918f, 1698.9182f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.4021f, 86.7663f;
							
							case 24:
								return 2337.8914f, 1358.5363f, 100.8737f;
							
							case 25:
								return 2727.7856f, 1558.7285f, 83.66f;
							
							case 26:
								return 3112.1768f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.8167f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.2063f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.2944f, -1652.9478f, 154.2478f;
							
							case 31:
								return 1096.7933f, -1141.6932f, 96.1055f;
							
							case 32:
								return 3042.8997f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.3508f, -1492.0433f, 30.646f;
							
							case 34:
								return 1214.3737f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.6165f, -2497.9714f, 101.8039f;
							
							case 36:
								return 1872.0353f, -761.149f, 105f;
							
							case 37:
								return 1657.6649f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.2289f, -1981.9009f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.0642f, 60.0276f;
							
							case 40:
								return 2609.9119f, -2096.3584f, 35.0044f;
							
							case 41:
								return 1121.1902f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.0846f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.9645f, -3285.5398f, 19.5936f;
							
							case 45:
								return 1499.8833f, -1276.2072f, 131.5493f;
							
							case 46:
								return 3381.4421f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.6892f, 120f;
							
							case 49:
								return 757.5558f, -1196.3629f, 232.0553f;
							
							case 50:
								return 1887.7737f, -3474.9705f, 77.8727f;
							
							case 51:
								return 1083.2245f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.8213f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.5414f, -1883.8093f, 50f;
							
							case 55:
								return 847.74f, 1781.9033f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.3456f, 52f;
							
							case 57:
								return 2648.1313f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.1173f, 1337.4464f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.9081f, 136.1568f;
							
							case 61:
								return 2099.7317f, -1212.7279f, 178.3343f;
							
							case 62:
								return 1945.1599f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.8097f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.3923f, -1571.6293f, 90.566f;
							
							case 65:
								return 1818.0228f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.0505f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.6459f, -2126.0718f, 60.6975f;
							
							case 68:
								return 1088.6792f, -1982.8197f, 84.1204f;
							
							case 69:
								return 1597.2175f, -2817.0425f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.2256f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.5833f, 60.7022f;
							
							case 72:
								return 1070.3999f, -1835.1484f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.3177f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.3203f, 46.5743f;
							
							case 75:
								return 2651.6392f, -1230.8496f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.1727f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 79:
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.6661f, 1222.3273f, 202.4859f;
							
							case 81:
								return 1978.5428f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.9934f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.0201f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.0121f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.3184f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.4021f, -2179.3965f, 105.5733f;
							
							case 90:
								return 1131.1833f, -2929.7693f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.7358f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.9685f, 73.6448f;
							
							case 94:
								return 638.4819f, -1020.9998f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.9851f, -2243.761f, 136f;
							
							case 97:
								return 2947.7463f, 792.9475f, 45f;
							
							case 98:
								return 2608.7327f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.2085f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.5134f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.2185f, -2129.6113f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.0422f, 145.6704f;
							
							case 104:
								return 2052.6917f, -252.931f, 228.334f;
							
							case 105:
								return 2394.9023f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.0494f, 1472.5686f, 179.2061f;
							
							case 108:
								return 1898.3542f, 1020.6713f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.5793f, -685.6392f, 126f;
							
							case 111:
								return 2734.2344f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.8055f, 86.3959f;
							
							case 113:
								return 3033.1602f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.3225f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.2625f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.6957f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.7769f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.4746f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.4287f, 1273.0941f, 63.9814f;
							
							case 1:
								return 2545.4219f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.1711f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.8348f, -1005.5316f, 50.5682f;
							
							case 4:
								return 1078.8529f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.8582f, 8.6817f;
							
							case 6:
								return 1216.2662f, -2907.2776f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.0935f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.2349f, 4.7518f;
							
							case 9:
								return 1130.2137f, -2082.8108f, 30.0089f;
							
							case 10:
								return 1506.7013f, -2135.6372f, 75.4567f;
							
							case 11:
								return 1759.2767f, -1579.9696f, 117.9f;
							
							case 12:
								return 2510.4497f, -1219.3317f, 1.89f;
							
							case 13:
								return 2855.6038f, -1339.6016f, 14.7183f;
							
							case 14:
								return 2826.4104f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.5992f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.5343f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.6082f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.0034f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.7374f, 1111.8481f, 113.334f;
							
							case 20:
								return 1135.6199f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.6863f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.9417f, -1918.7502f, 30.1432f;
							
							case 28:
								return 1183.3127f, -1550.9458f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.0587f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.0901f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.7255f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1002f, 23.5193f;
							
							case 34:
								return 1405.6907f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.3667f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.3922f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.3796f, 1711.9495f, 67.0413f;
							
							case 38:
								return 2307.0034f, -1750.4208f, 133.7737f;
							
							case 39:
								return 2172.2263f, -1069.3674f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.7968f, 27.2597f;
							
							case 43:
								return 1289.9077f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.1707f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.1862f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.7699f, 30.3237f;
							
							case 47:
								return 1874.7408f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.7603f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.9073f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.0898f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.8242f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.1042f, -1759.1979f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.0814f, 108.769f;
							
							case 61:
								return 1188.1104f, 1556.9788f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.4843f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.0273f, 1152.2218f, 64.0942f;
							
							case 67:
								return 2474.0903f, 1484.1034f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.1063f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.7286f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.4331f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.2195f, 29.5831f;
							
							case 73:
								return 1434.7068f, -2315.0417f, 65.927f;
							
							case 74:
								return 1882.2542f, -1873.2075f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.4055f, 249.303f;
							
							case 76:
								return 1969.7476f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.4316f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.4655f, 336.8802f, 80.9909f;
							
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.2932f, 7.9233f;
							
							case 82:
								return 1223.1305f, -2338.6213f, 59.8673f;
							
							case 83:
								return 1747.1515f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.6455f, -1476.4724f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.0752f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.5789f, 1073.3276f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.5895f, 20.7017f;
							
							case 90:
								return 1360.9276f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.3726f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.5105f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.3606f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.8307f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.4712f, 98.4293f;
							
							case 99:
								return 1071.8425f, -1841.3043f, 36.3069f;
							
							case 100:
								return 1133.0865f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.9121f, -2385.5503f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.6063f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.2129f, 17.7764f;
							
							case 107:
								return 2638.0774f, 1346.6411f, 25.4338f;
							
							case 108:
								return 1910.6632f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.9666f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.1196f, 1471.5317f, 0f;
							
							case 111:
								return 2348.98f, -2281.0046f, 0.1697f;
							
							case 112:
								return 2681.4158f, -1560.3545f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.4233f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.1917f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.4597f, -1073.7024f, 0.6712f;
							
							case 119:
								return 1423.5059f, -2790.9116f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.0068f, 58f;
							
							case 1:
								return -1343.7191f, -3336.7954f, 30.5601f;
							
							case 2:
								return -1336.2388f, -3044.0593f, 300.803f;
							
							case 3:
								return -1833.8517f, -1191.0569f, 41.1411f;
							
							case 4:
								return -1955.7803f, 1776.5697f, 195.8577f;
							
							case 5:
								return -2166.6292f, 1607.5665f, 260f;
							
							case 6:
								return -417.0685f, 1153.3469f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.1272f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.8037f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.0376f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.3682f, 50f;
							
							case 18:
								return -1357.9733f, -1476.3955f, 40.9274f;
							
							case 19:
								return -2004.3339f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.3809f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.5632f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.6938f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.0818f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504.0001f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.0565f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.5894f, 1428.9675f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.5255f, 500.0109f;
							
							case 34:
								return -1621.8411f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.1433f, 92.8559f;
							
							case 37:
								return -1879.5746f, -2634.0015f, 11.491f;
							
							case 38:
								return -1459.7344f, -2141.9648f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.0134f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.2217f, 1543.2274f, 33.8091f;
							
							case 44:
								return -2753.0872f, 1229.0054f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.2404f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.1987f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.0714f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.9827f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.2928f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.8127f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.4425f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.5354f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.0549f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.4211f, 1110.1798f, 37.6606f;
							
							case 61:
								return -2256.7175f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.0941f, 1330.4803f, 236.7105f;
							
							case 63:
								return -1030.2206f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.4282f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.9943f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.5049f, -1070.0377f, 21.0905f;
							
							case 72:
								return -1013.9092f, -1763.9242f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.0613f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.2694f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.0679f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.6743f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.6487f, 33.5782f;
							
							case 78:
								return -1100.7927f, -2846.7046f, 53.132f;
							
							case 79:
								return -1274.3236f, -2448.8486f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.3184f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9004f, 23.1103f;
							
							case 82:
								return -1907.1514f, -3034.5771f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.8342f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.4908f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.7456f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.1565f, 76.1713f;
							
							case 88:
								return -1106.9393f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.8302f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.4479f, -1043.7633f, 29.6876f;
							
							case 91:
								return -1618.3667f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.5116f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.7985f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.4581f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.3586f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.7861f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.6207f, 168.2627f;
							
							case 100:
								return -3029.2344f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.2069f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.7484f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.9946f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.3481f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.2394f, 50f;
							
							case 112:
								return 397.6461f, -1929.7805f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.3962f, 20.0582f;
							
							case 115:
								return -2440.5273f, -1654.1301f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.0261f, 26.3869f;
							
							case 117:
								return -1374.6372f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.1765f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.0901f, 1324.1405f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.1377f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2002f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.9602f, 1209.5901f, 13.7743f;
							
							case 4:
								return -2502.5288f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.5457f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.2104f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4001f, -1054.2262f, 12.1522f;
							
							case 8:
								return -1268.6067f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.6146f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.7982f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.2786f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.2584f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.4885f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.9182f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.7855f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.8853f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.4352f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.5298f, 1493.7648f, 110.5947f;
							
							case 26:
								return -1173.2635f, -2037.8196f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.7375f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.7996f, 4.8963f;
							
							case 29:
								return -1177.2716f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.9344f, -1447.0367f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.1616f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.6643f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.0776f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.5354f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.4644f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.6049f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.0679f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.5466f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.6864f, 23.8153f;
							
							case 47:
								return -1024.8899f, 1012.2385f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.2896f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.3716f, 12.06f;
							
							case 53:
								return -2971.7314f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.1375f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.9119f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.2563f, 6.6082f;
							
							case 58:
								return -1213.1215f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.8069f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.1904f, 1185.7819f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.9917f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.7883f, -1435.0022f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.3552f, 302.9701f;
							
							case 71:
								return -1284.4252f, -3403.2993f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.7793f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.0615f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.5261f, 12.9452f;
							
							case 75:
								return -1336.2744f, -3044.1025f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.5189f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.8809f, 5.0014f;
							
							case 79:
								return 109.4531f, -2816.0366f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.8938f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.4368f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.0515f, -1759.3016f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.5906f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.5037f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.3859f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.4319f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.7078f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.6127f, 6.5852f;
							
							case 93:
								return -1730.8298f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.0054f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.8158f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.7769f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.6882f, 1551.6466f, 272.9088f;
							
							case 98:
								return -2780.1494f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.9355f, 1930.8761f, 166.0052f;
							
							case 100:
								return -3017.5708f, 1860.0577f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.0972f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.8601f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.9192f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.2247f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.8306f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.2915f, 0.1193f;
							
							case 112:
								return -3046.1326f, 1570.5392f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.2308f, -2724.3145f, -0.3275f;
							
							case 116:
								return -1029.4409f, -1778.1066f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.9973f, 0.4963f;
							
							case 118:
								return -1546.0536f, -1509.9126f, 0.409f;
							
							case 119:
								return -1678.1943f, -2238.9858f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.2424f, 164.0655f;
							
							case 1:
								return -2398.2444f, 2197.3228f, 103.0324f;
							
							case 2:
								return -2470.9666f, 2693.0068f, 16.093f;
							
							case 3:
								return -1417.1256f, 2634.2346f, 3.8116f;
							
							case 4:
								return -1617.5188f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.5358f, 3851.9265f, 510.4073f;
							
							case 6:
								return -1243.2103f, 4536.3325f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.3345f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.5493f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.9617f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.5798f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.2268f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.4565f, 238.4183f;
							
							case 14:
								return -1185.3284f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.4158f, 3363.4365f, 44.4458f;
							
							case 16:
								return -2188.7888f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.2676f, 5204.9966f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.0225f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.3687f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.5103f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.6235f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.1406f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.2017f, 317.838f;
							
							case 27:
								return -1179.4015f, 4926.9224f, 230.3542f;
							
							case 28:
								return -1801.7695f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.7214f, 3964.1711f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.4136f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.4746f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.9596f, 35.4066f;
							
							case 34:
								return -2597.6538f, 1922.0712f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.9463f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.7627f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.7197f, 53f;
							
							case 41:
								return -1599.9713f, 2104.1846f, 80.8163f;
							
							case 42:
								return -1626.4868f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064.0005f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.9163f, 117.4892f;
							
							case 45:
								return -2684.9463f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.5522f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.8757f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.5616f, 221.1006f;
							
							case 50:
								return -1235.5541f, 1879.0356f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.3142f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.4677f, 5984.9546f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.4365f, 55.2519f;
							
							case 57:
								return -1096.9625f, 3225.6072f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.2524f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.2598f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.7595f, 2011.2108f, 153.3448f;
							
							case 82:
								return -2254.3137f, 1680.5056f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.4076f, 201.629f;
							
							case 84:
								return -1751.7631f, 1998.5481f, 129.1121f;
							
							case 85:
								return -1453.8889f, 2069.2202f, 65.2848f;
							
							case 86:
								return -1479.3862f, 2405.9797f, 37.5402f;
							
							case 87:
								return -1041.6007f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.2303f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.5232f, 4386.9385f, 1000f;
							
							case 92:
								return -1508.0304f, 4446.5464f, 59.4166f;
							
							case 93:
								return -1449.3313f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.1833f, 5440.6304f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.3625f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.4348f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.4355f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.4592f, 256.6769f;
							
							case 102:
								return -2092.0813f, 2518.0164f, 800f;
							
							case 103:
								return -2536.6838f, 1678.4497f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.6396f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.2322f, 5711.0635f, 333.8782f;
							
							case 108:
								return -1786.0522f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.1886f, 3295.0955f, 245.8079f;
							
							case 110:
								return -2149.1445f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.0923f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.9893f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.6362f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.6753f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.3983f, 2886.0444f, 1000f;
							
							case 118:
								return -3004.9878f, 2333.0999f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.6196f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.7861f, 3429.2134f, 31.6018f;
							
							case 1:
								return -1873.9148f, 2090.5955f, 139.9944f;
							
							case 2:
								return -1674.2521f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.9375f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.5168f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.9268f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.8599f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.3577f, 28.941f;
							
							case 11:
								return -288.922f, 2524.7224f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.9834f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.1294f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.8457f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.4443f, 6.3939f;
							
							case 16:
								return -1444.4702f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.0414f, 5258.6846f, 2.9791f;
							
							case 18:
								return -1823.2031f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.1113f, 2740.8389f, 1.8909f;
							
							case 20:
								return -1626.5487f, 2587.9238f, 1.6362f;
							
							case 21:
								return -1575.2991f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.6404f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.1936f, 33.1315f;
							
							case 26:
								return -2584.9226f, 1931.1104f, 166.3129f;
							
							case 27:
								return -1618.1613f, 3184.1265f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.9229f, 2408.9934f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.0298f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.7505f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.5576f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.1248f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.0144f, 172.9345f;
							
							case 35:
								return -1347.7264f, 4127.4155f, 61.6295f;
							
							case 36:
								return -1364.7091f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.3364f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.1147f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.8306f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.4585f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.8613f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.2964f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.7583f, 238.1628f;
							
							case 47:
								return -2228.8174f, 4218.2476f, 45.7951f;
							
							case 48:
								return -2493.3613f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.0884f, 3200.4133f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.9249f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.7976f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.0967f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.7847f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.7163f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.0757f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.4795f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.0073f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.0864f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.7104f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.6733f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.1726f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.9836f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.9968f, 271.9911f;
							
							case 71:
								return -2432.3372f, 3535.9397f, 33.3233f;
							
							case 72:
								return -1440.5262f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.7593f, 118.1093f;
							
							case 74:
								return -1577.4941f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.3337f, 4525.6006f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.4487f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.7383f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.9893f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.1753f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.5942f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.7502f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.4897f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.4707f, 63.3434f;
							
							case 90:
								return -1474.2874f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.1458f, 4927.8086f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.1826f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.7778f, 73.9626f;
							
							case 96:
								return -2077.6355f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.1135f, 29.7812f;
							
							case 98:
								return -2686.1533f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.3872f, 4649.4917f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.8457f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.2314f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.7944f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.4214f, 30.6801f;
							
							case 108:
								return -1804.9352f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.0576f, 29.4f;
							
							case 110:
								return -1191.0557f, 4389.1504f, 4.3f;
							
							case 111:
								return -2188.3345f, 2590.9434f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.0908f, 0.5703f;
							
							case 113:
								return -2047.6958f, 4852.3037f, 0.6241f;
							
							case 114:
								return -2664.6147f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.6035f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.1764f, 4848.0747f, 247.0701f;
							
							case 2:
								return 1676.7766f, 5140.2563f, 160.2494f;
							
							case 3:
								return 1995.3395f, 5021.6704f, 68.695f;
							
							case 4:
								return 2599.9524f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.3093f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.9922f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.9043f, 6144.4165f, 10.0202f;
							
							case 8:
								return 3431.1064f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.0906f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.8005f, 4619.8936f, 65f;
							
							case 11:
								return 3378.0361f, 4079.5244f, 229.1767f;
							
							case 12:
								return 3944.4033f, 3729.6572f, 19.5046f;
							
							case 13:
								return 3556.3828f, 3684.9868f, 67.2346f;
							
							case 14:
								return 3296.1213f, 3365.1982f, 125f;
							
							case 15:
								return 3289.9995f, 3140.4368f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.1707f, 95f;
							
							case 18:
								return 1397.0093f, 2116.5027f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.6946f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.4136f, 161f;
							
							case 21:
								return 564.4257f, 3392.3542f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.2646f, 78.9779f;
							
							case 23:
								return 1279.7393f, 3100.2595f, 53.8507f;
							
							case 24:
								return 1415.4867f, 3833.4768f, 52.6619f;
							
							case 25:
								return 1488.6566f, 3946.2244f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.6147f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.7915f, 171f;
							
							case 28:
								return 1502.5463f, 6159.0796f, 230.8224f;
							
							case 29:
								return 1163.8906f, 5965.0967f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.5984f;
							
							case 32:
								return 1002.1407f, 4786.2705f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.8699f, 6384.9634f, 52.4688f;
							
							case 35:
								return 754.4042f, 6465.9995f, 49f;
							
							case 36:
								return 1042.2163f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.1155f, 5662.172f, 274f;
							
							case 38:
								return 2898.0984f, 4327.4565f, 107.9208f;
							
							case 39:
								return 2634.3499f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.5237f, 56.3868f;
							
							case 41:
								return 1563.0648f, 3572.8215f, 41f;
							
							case 42:
								return 2276.492f, 1955.5419f, 146.9525f;
							
							case 43:
								return 2379.7468f, 2604.9822f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.7087f, 63f;
							
							case 45:
								return 2264.6035f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.1868f, 2908.3357f, 373.9144f;
							
							case 47:
								return 3510.4792f, 2569.0525f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.0789f, 30f;
							
							case 49:
								return 3319.3398f, 2272.2173f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.3354f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.6204f, 3760.0535f, 53f;
							
							case 54:
								return 1824.4987f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.7646f, 2384.3997f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.6167f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.1936f, 84.9932f;
							
							case 58:
								return 2767.5425f, 2047.1622f, 126.1494f;
							
							case 59:
								return 2061.3596f, 3941.4512f, 200f;
							
							case 60:
								return 873.5367f, 2867.7366f, 73.5925f;
							
							case 61:
								return 1752.1415f, 3052.5417f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.8853f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.4663f, 81.564f;
							
							case 64:
								return 2285.0886f, 3289.1294f, 86.2814f;
							
							case 65:
								return 1745.8994f, 3756.1274f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.7583f, 55f;
							
							case 67:
								return 1552.003f, 2186.4058f, 96f;
							
							case 68:
								return 2716.3765f, 4132.6562f, 63.7827f;
							
							case 69:
								return 3809.8135f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.8203f, 4308.5405f, 140f;
							
							case 71:
								return 2268.876f, 5381.4316f, 328.4639f;
							
							case 72:
								return 2236.3894f, 5604.6826f, 71.034f;
							
							case 73:
								return 1986.6572f, 6201.7393f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.2634f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.9834f, 6702.2334f, 14.7976f;
							
							case 77:
								return 2149.8113f, 3844.9988f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 79:
								return 1791.8972f, 4595.9546f, 48.6224f;
							
							case 80:
								return 1181.1326f, 5151.4165f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.5356f, 665.041f;
							
							case 82:
								return 1410.6505f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.4656f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.7383f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.1523f, 618.67f;
							
							case 87:
								return 3941.7615f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.5806f, 4262.1035f, 887.18f;
							
							case 89:
								return 3535.1663f, 3778.2424f, 46.4187f;
							
							case 90:
								return 3638.8545f, 3108.9526f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.3755f, 59f;
							
							case 92:
								return 1052.2137f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.8223f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.5186f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.7444f, 4745.3916f, 370.3547f;
							
							case 98:
								return 2721.0613f, 1556.4155f, 101.1161f;
							
							case 99:
								return 1855.2839f, 1600.6653f, 116.8989f;
							
							case 100:
								return 1623.4694f, 1518.1221f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.3481f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.8708f, 135.5203f;
							
							case 103:
								return 1294.0507f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.6367f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.3999f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.6504f, 4160.2153f, 883.122f;
							
							case 108:
								return 2191.1565f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.6396f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.2065f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.1143f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.7095f, 1000f;
							
							case 114:
								return 469.5136f, 6745.1055f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.7927f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.2307f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.2542f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.3237f, 6196.4893f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.9629f, 2200.2444f, 78.0226f;
							
							case 1:
								return 1104.1044f, 2399.3965f, 53.529f;
							
							case 2:
								return 1089.4886f, 2132.9426f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.2637f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.3125f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.2847f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.1167f, 35.1053f;
							
							case 7:
								return 1528.5854f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.3997f, 3468.0645f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.5398f, 40.6483f;
							
							case 10:
								return 2722.3074f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.2578f, 2881.7495f, 85.959f;
							
							case 12:
								return 2096.6426f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.6575f, 3485.9587f, 70.4429f;
							
							case 14:
								return 3390.0796f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.2136f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.1014f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.8096f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.2627f, 49.634f;
							
							case 19:
								return 1601.4633f, 6624.7603f, 14.7707f;
							
							case 20:
								return 1406.9279f, 6568.6206f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.8657f, 34.8699f;
							
							case 22:
								return 1503.6865f, 6360.8555f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.3594f, 17.4152f;
							
							case 24:
								return 3632.8904f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.6587f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.5337f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.0146f, 15.6116f;
							
							case 28:
								return 3859.2837f, 4226.9053f, 2.7151f;
							
							case 29:
								return 3692.6836f, 4570.5947f, 24.1191f;
							
							case 30:
								return 1830.9161f, 2542.0051f, 44.8856f;
							
							case 31:
								return 2424.3083f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.9343f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.4683f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.9836f, 58.1331f;
							
							case 35:
								return 2041.7131f, 2002.4792f, 84.9881f;
							
							case 36:
								return 2431.8535f, 1986.8691f, 82.1812f;
							
							case 37:
								return 1190.8721f, 3401.1887f, 67.3338f;
							
							case 38:
								return 1943.9834f, 3817.8528f, 31.0619f;
							
							case 39:
								return 1977.6792f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.8683f, 5804.8296f, 414.5815f;
							
							case 43:
								return 1412.0156f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.1729f, 4997.5474f, 41.5868f;
							
							case 46:
								return 2391.9185f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.9434f, 4385.9746f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.4995f, 41.1966f;
							
							case 52:
								return 1219.4437f, 2744.5312f, 37.0054f;
							
							case 53:
								return 2564.3203f, 2578.4934f, 36.9367f;
							
							case 54:
								return 2827.7437f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.3967f, 5326.4736f, 100.269f;
							
							case 56:
								return 2211.1536f, 3593.3242f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.1445f, 129.2854f;
							
							case 58:
								return 3345.3003f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.7852f, 39.4652f;
							
							case 60:
								return 2184.8909f, 3724.3684f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.9963f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.5576f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.7498f, 3281.4016f, 54.2127f;
							
							case 65:
								return 2210.9763f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.3276f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.2915f, 95.3074f;
							
							case 68:
								return 1844.4783f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.1277f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.2944f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.0092f, 3591.0657f, 34.3615f;
							
							case 72:
								return 2008.2645f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.0587f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.8948f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.7563f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.2915f, 4784.6743f, 33.6784f;
							
							case 77:
								return 2005.1091f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.6768f, 3692.7432f, 33.513f;
							
							case 79:
								return 1530.7114f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.3663f, 3301.0066f, 40.1368f;
							
							case 81:
								return 3481.6025f, 3740.4883f, 35.6427f;
							
							case 82:
								return 2392.4253f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.1538f, 3168.9421f, 50.5572f;
							
							case 84:
								return 2354.4958f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.9377f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.8193f, 23.6943f;
							
							case 87:
								return 3239.6626f, 3501.2231f, 67.723f;
							
							case 88:
								return 2672.9524f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.9617f, 3661.8643f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.2297f, 37.0001f;
							
							case 91:
								return 1685.5979f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.6531f, 3818.3943f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.6475f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.5645f, 55.9249f;
							
							case 95:
								return 1352.4126f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.8578f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.8472f, 6219.9585f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.9685f, 15.0641f;
							
							case 99:
								return 2625.7957f, 2809.9785f, 32.439f;
							
							case 100:
								return 1302.9315f, 4234.5405f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.3113f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.4872f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.2493f, 6219.2285f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.0884f, 67.6632f;
							
							case 107:
								return 2537.3413f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.7302f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.2324f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.6238f, 5135.3765f, -0.3837f;
							
							case 111:
								return 4054.2263f, 4518.3857f, 0.4f;
							
							case 112:
								return 1074.3125f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.2747f, 6151.5703f, 161.1609f;
							
							case 115:
								return 3646.3347f, 2977.0486f, 0.6928f;
							
							case 116:
								return 1938.3722f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.8413f, 1.2201f;
							
							case 118:
								return 1582.6128f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.5195f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_124(var uParam0)//Position - 0x8F75
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar3 = func_125(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_125(int iParam0, bool bParam1)//Position - 0x8FAF
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_13(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_71(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9014
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_127(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_127(int iParam0)//Position - 0x988E
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_128()//Position - 0x9A9C
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
}

bool func_129()//Position - 0x9AAA
{
	if (func_131(Local_816.f_712))
	{
		return 0;
	}
	else if (func_130(Local_816.f_712))
	{
		return 1;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1;
}

int func_130(int iParam0)//Position - 0x9ADF
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11772 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_LAND_VARIATION */ || Global_262145.f_11764 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 1:
			return (Global_262145.f_11771 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_LAND_VARIATION */ || Global_262145.f_11764 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 2:
			return (Global_262145.f_11769 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_LAND_VARIATION */ || Global_262145.f_11764 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 3:
			return (Global_262145.f_11770 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_LAND_VARIATION */ || Global_262145.f_11764 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		default:
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x9B63
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11768 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_AIR_VARIATION */ || Global_262145.f_11763 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 1:
			return (Global_262145.f_11767 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_AIR_VARIATION */ || Global_262145.f_11763 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 2:
			return (Global_262145.f_11765 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_AIR_VARIATION */ || Global_262145.f_11763 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 3:
			return (Global_262145.f_11766 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_AIR_VARIATION */ || Global_262145.f_11763 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		default:
	}
	return 0;
}

int func_132()//Position - 0x9BE7
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iLocal_380 = 1;
	switch (iLocal_380)
	{
		case 0:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
		
		case 1:
			iVar5 = func_133(&uVar0);
			iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar6 >= iVar8 && iVar6 < (uVar0[iVar7] + iVar8))
				{
					return iVar7;
				}
				iVar8 = (iVar8 + uVar0[iVar7]);
				iVar7++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}

int func_133(var uParam0)//Position - 0x9C7F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	bVar8 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_13(bVar10, 1, 1))
			{
				iVar11 = PLAYER::GET_PLAYER_PED(bVar10);
				if (!PED::IS_PED_INJURED(iVar11))
				{
					iVar9 = 0;
					while (iVar9 < 4)
					{
						if (!func_135(iVar9))
						{
							if (func_134(iVar9, &Var2, &Var5))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar11, Var2, Var5, false, false, 0))
								{
									bVar8 = false;
									(*uParam0)[iVar9]++;
									iVar1++;
								}
							}
						}
						iVar9++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		iVar9 = 0;
		while (iVar9 < 4)
		{
			if (!func_135(iVar9))
			{
				(*uParam0)[iVar9] = 1;
			}
			iVar9++;
		}
	}
	return iVar1;
}

int func_134(int iParam0, var uParam1, var uParam2)//Position - 0x9D53
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_135(int iParam0)//Position - 0x9E03
{
	return (func_131(iParam0) && func_130(iParam0));
}

var func_136()//Position - 0x9E1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_11777 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_3 */)
	{
		return Global_262145.f_11663 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS_3 */;
	}
	if (iVar1 >= Global_262145.f_11776 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_2 */)
	{
		return Global_262145.f_11662 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS_2 */;
	}
	if (iVar1 >= Global_262145.f_11775 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_1 */)
	{
		return Global_262145.f_10834 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS */;
	}
	return Global_262145.f_10834 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS */;
}

void func_137()//Position - 0x9EA2
{
	bool bVar0;
	
	if (func_34())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_816.f_713[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_138(bVar0))
				{
					if (!BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
					{
						MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
					}
				}
				else if (BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
				}
			}
			else if (BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
			}
			bVar0++;
		}
	}
}

int func_138(int iParam0)//Position - 0x9F4B
{
	struct<3> Var0;
	var uVar3;
	
	if (func_32(iParam0, &Var0, &uVar3))
	{
		if (func_139(Var0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x9F90
{
	Global_2635560.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (fParam14 > 0f)
	{
		if (func_144(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_140(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635560.f_2++;
	return 1;
}

int func_140(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xA0A2
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_142(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_13(bVar1, 1, 1))
		{
			if (!func_71(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_141(bVar1) || !bParam10) && !Global_2657704[bVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_142(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_142(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_141(bool bParam0)//Position - 0xA25A
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657704[bParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_142(bool bParam0)//Position - 0xA285
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_56() && Global_1853988[iVar0 /*867*/].f_834) && !func_143(Global_1853988[iVar0 /*867*/].f_835))
	{
		return Global_1853988[iVar0 /*867*/].f_835;
	}
	return func_31(bParam0);
}

int func_143(struct<3> Param0)//Position - 0xA2D8
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_144(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0xA302
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_13(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_141(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_145(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_31(bVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_145(bool bParam0)//Position - 0xA406
{
	if (func_148(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2764376 = { func_147(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764376))
	{
		return 1;
	}
	if (func_146(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1)//Position - 0xA44D
{
	int iVar0;
	
	iVar0 = func_84(bParam0);
	if (func_106(iVar0))
	{
		if (iVar0 == func_84(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_147(bool bParam0)//Position - 0xA476
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_148(bool bParam0, bool bParam1)//Position - 0xA48D
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_147(bParam0) };
		Global_2764389 = { func_147(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_149()//Position - 0xA4FA
{
	int iVar0;
	int iVar1;
	
	func_667();
	if (func_665())
	{
		func_544();
	}
	if (func_543(PLAYER::PLAYER_ID()) || func_542(PLAYER::PLAYER_ID()))
	{
		func_541();
	}
	if (!func_6(PLAYER::PLAYER_ID()) && !func_539(func_540(132)))
	{
		if (func_511(0, 1, 1))
		{
			if (BitTest(uLocal_98, 3))
			{
				MISC::CLEAR_BIT(&uLocal_98, 3);
			}
			switch (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3)
			{
				case 0:
					if (Local_816.f_8 == 1)
					{
						func_510(1);
						func_509(1);
					}
					else if (Local_816.f_8 >= 2)
					{
						func_509(1);
					}
					break;
				
				case 1:
					func_505(6);
					if (Local_816.f_8 >= 2)
					{
						func_509(2);
					}
					func_505(2);
					func_503(0);
					func_501((Global_262145.f_11761 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - func_502(&(Local_816.f_667), 0, 0)));
					func_498(func_500((Global_262145.f_11761 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - func_502(&(Local_816.f_667), 0, 0)), 0), func_499(-1));
					func_479();
					break;
				
				case 2:
					if (Local_816.f_8 > 2)
					{
						func_510(0);
						func_460(132, 1065353216, 1065353216, 1, 0, 0, 0);
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							func_459();
						}
						else
						{
							MISC::SET_BIT(&uLocal_98, 5);
						}
						if (Local_816.f_710)
						{
							func_458();
						}
						if (Local_816.f_707)
						{
							Global_2794162.f_5150 = 1;
						}
						else
						{
							Global_2794162.f_5150 = 0;
						}
						func_457();
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							if (func_34())
							{
								func_442(678f, 794f, 206f, 8f, 0);
								func_442(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_442(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_509(3);
					}
					break;
				
				case 3:
					if (Local_816.f_8 > 3)
					{
						func_509(4);
					}
					else
					{
						if (!iLocal_780)
						{
							if (func_441())
							{
								iLocal_780 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_816.f_709)
						{
							if (uLocal_230[iVar1] || iLocal_780)
							{
								func_332(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_230[iLocal_94] = func_331(iLocal_94);
							uLocal_99[iLocal_94] = func_329(iLocal_94);
							if (!uLocal_99[iLocal_94])
							{
								func_332(iLocal_94);
							}
							iLocal_94++;
							if (iLocal_94 >= Local_816.f_709)
							{
								iLocal_94 = 0;
							}
							iVar0++;
						}
						func_503(0);
						func_505(4);
						func_505(5);
						if (func_327(0) && !func_326(0))
						{
							func_325();
						}
						if ((!func_324(PLAYER::PLAYER_ID()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							func_323();
						}
						func_322();
					}
					func_319();
					func_318();
					func_459();
					func_298();
					func_479();
					break;
				
				case 4:
					func_205();
					func_188();
					func_187();
					func_503(1);
					func_186();
					func_298();
					if (func_174(&uLocal_782, !BitTest(Local_816.f_2, 2)) || BitTest(Local_816.f_2, 2))
					{
						if (func_34())
						{
							func_509(5);
						}
						else
						{
							func_509(6);
						}
					}
					break;
				
				case 5:
					if (Local_816.f_8 > 5)
					{
						func_509(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_169();
		}
	}
	else
	{
		func_541();
		func_169();
	}
	func_156();
	func_151();
	func_150();
}

void func_150()//Position - 0xA879
{
	struct<2> Var0;
	int iVar2;
	
	if (func_34())
	{
		Var0 = { Local_816.f_729[iLocal_381 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iLocal_381++;
		if (iLocal_381 >= 10)
		{
			iLocal_381 = 0;
			iLocal_813 = iLocal_812;
			iLocal_812 = 0;
		}
	}
}

void func_151()//Position - 0xA8E6
{
	if (Local_816.f_8 == 5)
	{
		if (func_38(&(Local_816.f_669)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_816.f_729[iLocal_381 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_381 /*2*/].f_1), false))
				{
					if (!BitTest(uLocal_800, iLocal_381))
					{
						MISC::SET_BIT(&uLocal_800, iLocal_381);
						iLocal_801[iLocal_381] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_801[iLocal_381], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_381 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_801[iLocal_381], "Time", 30f);
					}
					if ((30000 - func_502(&(Local_816.f_669), 0, 0)) >= 0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_381 /*2*/].f_1), false))
						{
							func_505(3);
							iLocal_812 = 1;
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_816.f_729[iLocal_381 /*2*/].f_1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_381 /*2*/].f_1));
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_816.f_729[iLocal_381 /*2*/].f_1), true, false, -1);
					}
				}
				else if (BitTest(uLocal_800, iLocal_381) && !AUDIO::HAS_SOUND_FINISHED(iLocal_801[iLocal_381]))
				{
					AUDIO::STOP_SOUND(iLocal_801[iLocal_381]);
				}
			}
			if (iLocal_813)
			{
				if (!func_104(PLAYER::PLAYER_ID()))
				{
					func_153(func_500((30000 - func_502(&(Local_816.f_669), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					func_152();
				}
			}
		}
	}
}

void func_152()//Position - 0xAA78
{
	Global_1655612.f_1172 = 1;
}

void func_153(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xAA88
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_154(7, iVar0);
		Global_1655612.f_4659[iVar0] = uParam0;
		StringCopy(&(Global_1655612.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4659.f_172[iVar0] = iParam2;
		Global_1655612.f_4659.f_216[iVar0] = iParam3;
		Global_1655612.f_4659.f_183[iVar0] = iParam4;
		Global_1655612.f_4659.f_194[iVar0] = iParam5;
		Global_1655612.f_4659.f_249[iVar0] = iParam6;
		Global_1655612.f_4659.f_260[iVar0] = iParam7;
		Global_1655612.f_4659.f_205[iVar0] = iParam8;
		Global_1655612.f_4659.f_314[iVar0] = iParam9;
		Global_1655612.f_4659.f_325[iVar0] = iParam10;
		Global_1655612.f_4659.f_357[iVar0] = iParam11;
		Global_1655612.f_4659.f_238[iVar0] = iParam12;
		Global_1655612.f_4659.f_271[iVar0] = iParam13;
		Global_1655612.f_4659.f_368[iVar0] = iParam14;
		Global_1655612.f_4659.f_379[iVar0] = iParam15;
		Global_1655612.f_4659.f_390[iVar0] = iParam16;
		Global_1655612.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_154(int iParam0, int iParam1)//Position - 0xABE5
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_155(int iParam0, int iParam1)//Position - 0xABFE
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

void func_156()//Position - 0xAC14
{
	char* sVar0;
	
	if (((func_13(PLAYER::PLAYER_ID(), 1, 1) && !func_6(PLAYER::PLAYER_ID())) && !func_542(PLAYER::PLAYER_ID())) && func_511(0, 1, 1))
	{
		if (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 == 1)
		{
			if (Local_816.f_707)
			{
				sVar0 = "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			else
			{
				sVar0 = "CPC_TILEL" /* GXT: Checkpoints */;
			}
			if (func_34() && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_157("CPC_PREPAIR" /* GXT: Find an air vehicle and prepare for ~a~ in the ~a~. */, sVar0, func_168(), 0);
			}
			else
			{
				func_157("CPC_PREP" /* GXT: Prepare for ~a~ in the ~a~. */, sVar0, func_168(), 0);
			}
		}
		else
		{
			func_457();
		}
	}
	else
	{
		func_457();
	}
}

int func_157(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xACBA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 23)
	{
		return 0;
	}
	if (func_167(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_161();
	Global_1574757 = 4;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	StringCopy(&(Global_1574757.f_32), sParam2, 64);
	func_160();
	func_159(bParam3);
	func_158();
	return 1;
}

void func_158()//Position - 0xAD79
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_159(bool bParam0)//Position - 0xAD8C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_160()//Position - 0xADB2
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_161()//Position - 0xADD7
{
	func_163();
	func_162(0);
}

void func_162(bool bParam0)//Position - 0xADE8
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_163()//Position - 0xAE7A
{
	if (!func_166())
	{
	}
	if (func_165())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_164();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_164()//Position - 0xAEA3
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

int func_165()//Position - 0xB115
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_166()//Position - 0xB12B
{
	if (!func_165())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_164();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_167(char* sParam0, char* sParam1, char* sParam2)//Position - 0xB151
{
	if (!func_165())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574757.f_32));
}

char* func_168()//Position - 0xB1CF
{
	switch (Local_816.f_712)
	{
		case 0:
			return "CPC_WARN0" /* GXT: South East */;
			break;
		
		case 1:
			return "CPC_WARN1" /* GXT: South West */;
			break;
		
		case 2:
			return "CPC_WARN2" /* GXT: North West */;
			break;
		
		case 3:
			return "CPC_WARN3" /* GXT: North East */;
			break;
	}
	return "";
}

void func_169()//Position - 0xB221
{
	if (!BitTest(uLocal_98, 3))
	{
		iLocal_780 = 1;
		func_187();
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_503(1);
		func_173();
		func_171();
		MISC::SET_BIT(&uLocal_98, 3);
		func_170();
	}
}

void func_170()//Position - 0xB255
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_7 = 0;
}

void func_171()//Position - 0xB26B
{
	if (Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_172();
	}
}

void func_172()//Position - 0xB284
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		if (!Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644655 = { Var0 };
	Global_2644655.f_6 = -1;
}

void func_173()//Position - 0xB2E1
{
	struct<6> Var0;
	
	if (Global_2635560.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635560.f_490 = { Var0 };
	}
}

int func_174(var uParam0, bool bParam1)//Position - 0xB306
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_185()) && !(func_117(PLAYER::PLAYER_ID(), 0) && (func_113(PLAYER::PLAYER_ID()) || func_184(PLAYER::PLAYER_ID())))) && !func_182(PLAYER::PLAYER_ID())) && !func_181(PLAYER::PLAYER_ID()))
	{
		func_180();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2794162.f_4694), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_179(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_38(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_176();
				func_179(uParam0, 2);
			}
			break;
		
		case 2:
			func_176();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_175("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_179(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2794162.f_4694), 1);
				func_179(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2794162.f_4694), 1);
			return 1;
	}
	return 0;
}

bool func_175(char* sParam0)//Position - 0xB48F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_176()//Position - 0xB4A2
{
	if (BitTest(Global_2794162.f_4694, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2794162.f_853, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2794162.f_4694), 1);
			func_178("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_177(1);
			MISC::CLEAR_BIT(&(Global_2794162.f_4694), 0);
		}
	}
}

void func_177(int iParam0)//Position - 0xB51E
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_185())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_178(char* sParam0, int iParam1)//Position - 0xB54B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_179(var uParam0, int iParam1)//Position - 0xB562
{
	*uParam0 = iParam1;
}

void func_180()//Position - 0xB56F
{
	Global_2696290 = 1;
}

int func_181(int iParam0)//Position - 0xB57C
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

int func_182(bool bParam0)//Position - 0xB5A1
{
	int iVar0;
	
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				iVar0 = func_183(Global_2657704[bParam0 /*463*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xB5F6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

bool func_184(bool bParam0)//Position - 0xBAAA
{
	return func_112(bParam0, 19);
}

bool func_185()//Position - 0xBABA
{
	return Global_2672524.f_2514[0 /*80*/].f_1 != 0;
}

void func_186()//Position - 0xBAD0
{
	if (BitTest(Global_2794162.f_5068, 1))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_5068), 1);
	}
	if (Global_2794162.f_5068 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2794162.f_5068 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2794162.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
				Global_2794162.f_5078 = -1;
			}
		}
	}
}

void func_187()//Position - 0xBB6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_816.f_709)
	{
		if (HUD::DOES_BLIP_EXIST(Local_388[iVar0 /*3*/]))
		{
			HUD::REMOVE_BLIP(&(Local_388[iVar0 /*3*/]));
			GRAPHICS::DELETE_CHECKPOINT(Local_388[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_374[iVar0] = 0;
		iVar0++;
	}
}

void func_188()//Position - 0xBBCA
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	
	if (!BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) && (func_204() || BitTest(Local_816.f_2, 2)))
	{
		if (func_59(func_203()))
		{
			func_202();
		}
		if (!BitTest(Local_816.f_2, 2))
		{
			if (func_327(0))
			{
				if (func_326(0))
				{
					if (!BitTest(Local_816.f_2, 0))
					{
						sVar0 = "CPC_END" /* GXT: You won Checkpoints with a score of ~1~ */;
					}
					else
					{
						sVar0 = "CPC_ENDBONUS" /* GXT: You won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
					}
					func_201(64, Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "AMCH_WIN" /* GXT: WINNER */, 1, 15000, -1082130432, 2, 0);
				}
				else
				{
					iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_816.f_674[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
						if (func_326(1))
						{
							if (!BitTest(Local_816.f_2, 0))
							{
								sVar0 = "CPC_2ND" /* GXT: You came second in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_2NDBONUS" /* GXT: You came second in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_201(67, Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else if (func_326(2))
						{
							if (!BitTest(Local_816.f_2, 0))
							{
								sVar0 = "CPC_3RD" /* GXT: You came third in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_3RDBONUS" /* GXT: You came third in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_201(67, Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else
						{
							if (BitTest(Local_816.f_2, 0) && Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11921 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
							{
								sVar0 = "CPC_LOSEBONUS" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							else
							{
								sVar0 = "CPC_LOSE" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~ */;
							}
							sVar3 = PLAYER::GET_PLAYER_NAME(bVar2);
							if (func_85(bVar2, 1))
							{
								sVar3 = func_191(bVar2);
							}
							func_190(66, Local_3457[Local_816.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER" /* GXT: EVENT OVER */, "CPC_NOWIN" /* GXT: No checkpoints were collected */, 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
		func_189(132);
	}
}

void func_189(int iParam0)//Position - 0xBDBF
{
	if (iParam0 == iParam0)
	{
	}
}

int func_190(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBDCE
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_110(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

char* func_191(bool bParam0)//Position - 0xBE41
{
	char* sVar0;
	bool bVar1;
	
	if (!func_106(bParam0))
	{
		sVar0 = func_196(bParam0, 0);
		return sVar0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_195(&(Global_1895156[bParam0 /*609*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1895156[bParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		sVar0 = func_196(bParam0, 0);
		return sVar0;
	}
	if (((func_112(bParam0, 28) || func_112(PLAYER::PLAYER_ID(), 28)) || func_194(bParam0)) && !func_193(bParam0))
	{
		return func_196(bParam0, 0);
	}
	bVar1 = func_84(bParam0);
	if (bVar1 != func_107())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_192() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_196(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_107())
	{
		sVar0 = func_195(&(Global_1895156[bVar1 /*609*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_196(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_192()//Position - 0xBF5F
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_193(bool bParam0)//Position - 0xBF75
{
	struct<13> Var0;
	
	Var0 = { func_147(bParam0) };
	if (func_192())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_194(bool bParam0)//Position - 0xBFB5
{
	struct<13> Var0;
	
	if (bParam0 != func_107())
	{
		Var0 = { func_147(bParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_192() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_195(var uParam0)//Position - 0xC024
{
	return uParam0;
}

char* func_196(bool bParam0, bool bParam1)//Position - 0xC02E
{
	if (!bParam1)
	{
		if (func_198(bParam0, 1))
		{
			return func_197();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_197()//Position - 0xC055
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

bool func_198(bool bParam0, bool bParam1)//Position - 0xC065
{
	return func_199(bParam0, bParam1, 1);
}

int func_199(int iParam0, bool bParam1, int iParam2)//Position - 0xC076
{
	int iVar0;
	
	if (!func_106(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_200(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_107() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_200(bool bParam0, int iParam1)//Position - 0xC0D3
{
	if (func_106(bParam0))
	{
		if (Global_1895156[bParam0 /*609*/].f_10 != func_107())
		{
			if (Global_1895156[bParam0 /*609*/].f_10 == bParam0 && Global_1895156[bParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xC122
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_110(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_108(&(Var0.f_69), iParam8);
	}
	return func_45(&Var0);
}

void func_202()//Position - 0xC1A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_203()//Position - 0xC1EE
{
	return Global_2672524.f_2514[0 /*80*/].f_1;
}

var func_204()//Position - 0xC202
{
	return BitTest(Global_1836866.f_1, 25);
}

void func_205()//Position - 0xC213
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 1))
	{
		if (func_6(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (func_542(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11921 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_816.f_1 - iLocal_96)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_12082 /* Tunable: PARTICIPATION_T_CAP */)
			{
				iVar3 = Global_262145.f_12082 /* Tunable: PARTICIPATION_T_CAP */;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_297() * iVar3);
			iVar1 = (func_296() * iVar3);
		}
		else
		{
			func_294(0);
		}
		if (!BitTest(Local_816.f_2, 2))
		{
			if (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11921 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
			{
				if (BitTest(Local_816.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_293()) * Global_262145.f_12093 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */)));
				}
			}
			if (func_326(0))
			{
				Local_3445.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_292()) * Global_262145.f_12094 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */)));
			}
			if ((Local_816.f_674[0] != NETWORK::PARTICIPANT_ID_TO_INT() && Local_816.f_674[1] != NETWORK::PARTICIPANT_ID_TO_INT()) && Local_816.f_674[2] != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11921 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
				{
					func_294(1);
				}
			}
		}
		func_273(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_272())
			{
				func_260(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_3445.f_6 = iVar0;
		if (!Global_262145.f_12146 /* Tunable: CHECKPOINTS_DISABLE_SHARE_CASH */)
		{
			if (Local_3445.f_6 > 0)
			{
				func_258(8, Local_3445.f_6);
			}
		}
		Global_2696952 = iVar0;
		func_257();
		func_206(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		Local_3445.f_7 = (Local_3445.f_7 + iVar1);
		MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
	}
}

int func_206(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC430
{
	return func_207(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_207(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC452
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_217(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_213(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_208(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_208(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xC4E5
{
	struct<3> Var0;
	
	Var0 = { func_211(iParam0, 1) };
	if (iParam0 == func_210(PLAYER::PLAYER_PED_ID()))
	{
		func_209(1);
	}
	func_213(Var0, iParam1, 0, sParam2, iParam3);
}

void func_209(int iParam0)//Position - 0xC519
{
	Global_2672524.f_1682 = iParam0;
}

int func_210(int iParam0)//Position - 0xC52A
{
	return iParam0;
}

Vector3 func_211(int iParam0, bool bParam1)//Position - 0xC534
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_212(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_212(int iParam0)//Position - 0xC5F8
{
	return iParam0;
}

void func_213(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xC602
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672524.f_1081[iVar0 /*30*/].f_6 == 0 || Global_2672524.f_1081[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672524.f_1081[iVar1 /*30*/] = { Param0 };
			Global_2672524.f_1081[iVar1 /*30*/].f_6 = 1;
			Global_2672524.f_1081[iVar1 /*30*/].f_4 = func_216(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672524.f_1081[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1081[iVar1 /*30*/].f_3 = iParam3;
			Global_2672524.f_1081[iVar1 /*30*/].f_8 = iParam4;
			Global_2672524.f_1081[iVar1 /*30*/].f_9 = func_215();
			Global_2672524.f_1081[iVar1 /*30*/].f_10 = func_214();
			StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672524.f_1081[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_214()//Position - 0xC719
{
	if (Global_2672524.f_1682)
	{
		Global_2672524.f_1682 = 0;
		return 1;
	}
	Global_2672524.f_1682 = 0;
	return 0;
}

var func_215()//Position - 0xC743
{
	var uVar0;
	
	uVar0 = Global_2672524.f_1684;
	Global_2672524.f_1684 = 1;
	return uVar0;
}

float func_216(struct<3> Param0, var uParam3, var uParam4)//Position - 0xC75E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_217(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC7F7
{
	var uVar0;
	
	uVar0 = func_218(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_218(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC81A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_249();
	if (func_248(sParam2))
	{
	}
	if (func_247())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_245(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_244(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_242(0, &iVar1);
					break;
				
				case 3:
					func_242(1, &iVar1);
					break;
				
				case 1:
					func_240(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1962798)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_239(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_226((func_238(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_239(1166, iVar1, -1);
				}
				func_223(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_219((func_221(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_219((func_221(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_219(int iParam0)//Position - 0xC985
{
	if (func_247())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_220(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_220(int iParam0, int iParam1)//Position - 0xC9B0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_221(bool bParam0)//Position - 0xC9CC
{
	if (bParam0 > -1)
	{
		if (func_13(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_222(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[bParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_222(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xCA1D
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_223(int iParam0)//Position - 0xCA3B
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_147(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_224(func_225(&Var0));
			if (iVar13 == 0)
			{
				func_220(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_222(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_220(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_222(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_220(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_222(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_220(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_222(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_220(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_222(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_224(int iParam0)//Position - 0xCB05
{
	if (iParam0 == func_222(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_222(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_222(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_222(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_222(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_225(var* uParam0)//Position - 0xCB7B
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694518;
		}
	}
	return Global_2694518;
}

void func_226(int iParam0, int iParam1, int iParam2)//Position - 0xCB9E
{
	if (func_247())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_237(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_237(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_236(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_233(iParam0, 1);
		}
		func_230(640, iParam0, -1, 1);
		func_230(641, func_233(iParam0, 1), -1, 1);
		func_227(-1109644434, 7, 0);
	}
}

void func_227(int iParam0, int iParam1, int iParam2)//Position - 0xCCB0
{
	int iVar0;
	
	if (func_229(iParam1, iParam2))
	{
		iVar0 = func_228();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_228()//Position - 0xCCDD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694470[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_229(int iParam0, var uParam1)//Position - 0xCD12
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_230(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xCD98
{
	int iVar0;
	
	iVar0 = func_231(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_231(int iParam0, var uParam1)//Position - 0xCDBB
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_232(uParam1));
}

int func_232(var uParam0)//Position - 0xCDD0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_233(int iParam0, bool bParam1)//Position - 0xCE04
{
	if (bParam1)
	{
	}
	return func_234(iParam0, 0);
}

int func_234(int iParam0, int iParam1)//Position - 0xCE18
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_235(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_235(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_235(int iParam0)//Position - 0xCED3
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_236(int iParam0)//Position - 0xD40E
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_237(int iParam0, int iParam1)//Position - 0xD42D
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_231(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_238(int iParam0)//Position - 0xD45C
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_237(640, -1);
			}
			else if (func_236(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_237(640, -1);
	}
	return 0;
}

void func_239(int iParam0, int iParam1, int iParam2)//Position - 0xD4B3
{
	int iVar0;
	
	iVar0 = func_237(iParam0, func_232(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_230(iParam0, iVar0, iParam2, 1);
}

void func_240(int iParam0)//Position - 0xD4DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_68(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_148(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_241(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_241(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_241(int iParam0, int iParam1)//Position - 0xD5C7
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_242(bool bParam0, int iParam1)//Position - 0xD5E8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_13(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_148(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_13(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_243(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_148(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_241(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_241(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_243(bool bParam0, bool bParam1)//Position - 0xD700
{
	return SYSTEM::VDIST(func_31(bParam0), func_31(bParam1));
	return 0f;
}

int func_244(int iParam0)//Position - 0xD71C
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_241(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_245(int iParam0)//Position - 0xD753
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_238(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_238(PLAYER::PLAYER_ID());
		}
	}
	if (func_246(8000, 0, 0) > 0)
	{
		if (func_246(8000, 0, 0) < (iParam0 + func_238(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_246(8000, 0, 0) - func_238(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_246(int iParam0, bool bParam1, int iParam2)//Position - 0xD7B7
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_235(iParam0);
}

int func_247()//Position - 0xD7DD
{
	return 1;
}

int func_248(char* sParam0)//Position - 0xD7E6
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0xD81F
{
	int iVar0;
	
	if (func_256(PLAYER::PLAYER_ID()) || func_255(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_253() || func_250(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7178 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7178 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_250(int iParam0)//Position - 0xD8B9
{
	return func_251(func_252(iParam0));
}

int func_251(int iParam0)//Position - 0xD8CB
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_252(int iParam0)//Position - 0xD8E5
{
	if (func_106(iParam0))
	{
		if (func_117(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

bool func_253()//Position - 0xD911
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_56();
	}
	return func_254(Global_4718592.f_117591);
}

int func_254(int iParam0)//Position - 0xD935
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5043[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_255(int iParam0)//Position - 0xD96F
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_256(int iParam0)//Position - 0xD984
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

void func_257()//Position - 0xD999
{
	Global_2696289 = 1;
}

void func_258(int iParam0, int iParam1)//Position - 0xD9A6
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24178 /* Tunable: 277748102 */ != -1)
		{
			if (func_259())
			{
				Global_2794162.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2794162.f_284 = iParam1;
				Global_2794162.f_285 = 0;
			}
		}
	}
}

int func_259()//Position - 0xD9FB
{
	if (MISC::IS_PC_VERSION() && Global_1984719 == 0)
	{
		return 0;
	}
	return 0;
}

void func_260(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDA1A
{
	int iVar0;
	
	if (!func_272())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_261(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_261(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_261(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
			func_261(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_261(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE2DF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_272())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_41()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_268(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536677 = 1;
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_267(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_262(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE48C
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_263(iParam0);
	}
}

void func_263(int iParam0)//Position - 0xE4C4
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_272())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_266(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_264(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_264(var uParam0)//Position - 0xE518
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_265(&(uParam0->f_14));
	func_265(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_265(var uParam0)//Position - 0xE624
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_266(int iParam0)//Position - 0xE66C
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_267(int iParam0, int iParam1)//Position - 0xE697
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xE6AB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_272())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_269(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_269(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0xE7E8
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_271(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_270();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_270()//Position - 0xE87A
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_271(bool bParam0)//Position - 0xE88A
{
	var uVar0;
	
	if (func_106(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_272()//Position - 0xE8A5
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_273(int iParam0, int iParam1)//Position - 0xE8BC
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_291())
		{
			if (func_290(0))
			{
				if (!func_289(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_288()))
					{
						if (func_287() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_287());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_285(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_278("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_288(), iVar0, 0, 0, 1);
						}
						func_277(20);
						func_274(func_288(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_274(bool bParam0, int iParam1, int iParam2)//Position - 0xE95C
{
	struct<8> Var0;
	
	if (func_13(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_276(bParam0);
		func_275(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_271(bParam0));
	}
}

void func_275(var uParam0, var uParam1)//Position - 0xE9B2
{
	*uParam0 = Global_1924276.f_9;
	*uParam1 = Global_1924276.f_10;
}

var func_276(bool bParam0)//Position - 0xE9CC
{
	return Global_1895156[bParam0 /*609*/].f_511;
}

void func_277(int iParam0)//Position - 0xE9E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), iVar1);
}

int func_278(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xEA09
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_61(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_283(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_279(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_279(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xEAA1
{
	int iVar0;
	
	if ((!func_282() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_71(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_280(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944768.f_5[iVar0 /*53*/] = iParam0;
		Global_1944768.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944768.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944768.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944768.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944768.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944768.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_280(int iParam0)//Position - 0xEBA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944768 - 1))
	{
		if (iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1)
		{
			func_281(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944768++;
	if (Global_1944768 > 5)
	{
		Global_1944768 = 5;
		return Global_1944768;
	}
	return (Global_1944768 - 1);
}

void func_281(int iParam0)//Position - 0xEC0B
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944768.f_5[iVar0 /*53*/] = { Global_1944768.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_282()//Position - 0xEC44
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_283(char* sParam0)//Position - 0xEC55
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_284(&cVar0);
}

var func_284(char[4] cParam0)//Position - 0xEC79
{
	return cParam0;
}

void func_285(int iParam0, bool bParam1)//Position - 0xEC83
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_286(1);
	}
	else
	{
		iVar1 = func_286(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_286(bool bParam0)//Position - 0xECB5
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13038 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_287()//Position - 0xECDB
{
	return Global_262145.f_13037 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

bool func_288()//Position - 0xECEA
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_289(bool bParam0)//Position - 0xECFF
{
	return func_198(PLAYER::PLAYER_ID(), bParam0);
}

bool func_290(bool bParam0)//Position - 0xED11
{
	return func_85(PLAYER::PLAYER_ID(), bParam0);
}

bool func_291()//Position - 0xED23
{
	return func_86(PLAYER::PLAYER_ID());
}

int func_292()//Position - 0xED33
{
	return Global_262145.f_11904 /* Tunable: CHECKPOINT_BONUS_RP */;
}

int func_293()//Position - 0xED42
{
	return Global_262145.f_11903 /* Tunable: CHECKPOINT_BONUS_CASH */;
}

void func_294(bool bParam0)//Position - 0xED51
{
	if (bParam0)
	{
		if (func_295(1))
		{
			MISC::SET_BIT(&Global_1836891, 1);
		}
	}
	else if (func_295(2))
	{
		MISC::SET_BIT(&Global_1836891, 2);
	}
}

int func_295(int iParam0)//Position - 0xED83
{
	var uVar0;
	
	uVar0 = func_237(2537, -1);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_296()//Position - 0xEE2F
{
	return Global_262145.f_11923 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_RP */;
}

int func_297()//Position - 0xEE3E
{
	return Global_262145.f_11922 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_CASH */;
}

void func_298()//Position - 0xEE4D
{
	if (BitTest(uLocal_98, 5))
	{
		func_299();
	}
	func_544();
}

void func_299()//Position - 0xEE64
{
	bool bVar0[3];
	bool bVar4;
	var uVar5[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (Local_816.f_674[0] > -1)
	{
		iVar15 = 0;
		iVar13 = 0;
		while (iVar13 < 3)
		{
			bVar0[iVar13] = func_107();
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < 3)
		{
			if (Local_816.f_674[iVar13] > -1)
			{
				iVar21 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_816.f_674[iVar13]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar21);
					if (func_13(bVar4, 0, 1))
					{
						if (!func_71(bVar4, 0))
						{
							bVar0[iVar13] = bVar4;
							uVar5[iVar13] = Local_3457[Local_816.f_674[iVar13] /*5*/].f_4;
							if (func_290(1))
							{
								if (func_85(bVar4, 1))
								{
									uVar17[iVar13] = func_61(bVar4, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		iVar14 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_104(PLAYER::PLAYER_ID()))
		{
			iVar22 = func_316();
			iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar22);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
			{
				iVar24 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar23);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar24))
				{
					iVar14 = iVar24;
				}
			}
		}
		iVar9 = func_500(0, Local_816.f_708);
		iVar10 = Local_816.f_709;
		iVar11 = func_500(0, Local_3457[iVar14 /*5*/].f_4);
		iVar12 = func_500(0, (Global_262145.f_11760 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */ - func_502(&(Local_816.f_661), 0, 0)));
		func_313(iVar12);
		if (iVar12 > 30000)
		{
			iVar16 = 1;
		}
		else
		{
			iVar16 = 6;
		}
		func_300(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, iVar11, iVar12, &iVar15, iVar16, func_310(), uVar17[0], uVar17[1], uVar17[2]);
	}
}

void func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xF016
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_307(0) == 0)
	{
		return;
	}
	func_306();
	iVar1 = 0;
	if (((Global_2695780[0] != iParam0 || Global_2695780[1] != iParam1) || Global_2695780[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695780[0] = iParam0;
	Global_2695780[1] = iParam1;
	Global_2695780[2] = iParam2;
	Global_2695780[3] = 0;
	Global_2695780[4] = 0;
	if (Global_2695780[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[0]);
			Global_2695786[0 /*16*/] = { func_305(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_302(iParam3, &(Global_2695786[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[1]);
			Global_2695786[1 /*16*/] = { func_305(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_302(iParam4, &(Global_2695786[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[2]);
			Global_2695786[2 /*16*/] = { func_305(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_302(iParam5, &(Global_2695786[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	func_301(iParam6, iParam7, "HUD_CHECKPOINTS" /* GXT: REMAINING */, -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_542(PLAYER::PLAYER_ID()) == 0)
	{
		func_302(iParam8, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_248(sParam12))
	{
		sVar2 = sParam12;
	}
	func_153(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_152();
}

void func_301(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xF237
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_154(4, iVar0);
		Global_1655612.f_3347[iVar0] = iParam0;
		Global_1655612.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1655612.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1655612.f_3347.f_183[iVar0] = iParam3;
		Global_1655612.f_3347.f_216[iVar0] = iParam5;
		Global_1655612.f_3347.f_194[iVar0] = iParam4;
		Global_1655612.f_3347.f_227[iVar0] = iParam6;
		Global_1655612.f_3347.f_270[iVar0] = iParam7;
		Global_1655612.f_3347.f_281[iVar0] = iParam8;
		Global_1655612.f_3347.f_292[iVar0] = iParam9;
		Global_1655612.f_3347.f_303[iVar0] = iParam10;
		Global_1655612.f_3347.f_314[iVar0] = iParam11;
		Global_1655612.f_3347.f_325[iVar0] = iParam13;
		Global_1655612.f_3347.f_336[iVar0] = iParam14;
		Global_1655612.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1655612.f_1172 = 1;
		}
	}
}

void func_302(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xF391
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_154(6, iVar0);
		Global_1655612.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4041.f_183[iVar0] = iParam3;
		Global_1655612.f_4041.f_172[iVar0] = iParam2;
		Global_1655612.f_4041.f_260[iVar0] = iParam4;
		Global_1655612.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1655612.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1655612.f_4041.f_443[iVar0] = iParam7;
		Global_1655612.f_4041.f_454[iVar0] = iParam8;
		Global_1655612.f_4041.f_497[iVar0] = iParam9;
		Global_1655612.f_4041.f_508[iVar0] = iParam10;
		Global_1655612.f_4041.f_205[iVar0] = iParam11;
		Global_1655612.f_4041.f_216[iVar0] = iParam12;
		Global_1655612.f_4041.f_227[iVar0] = iParam13;
		Global_1655612.f_4041.f_238[iVar0] = iParam14;
		Global_1655612.f_4041.f_249[iVar0] = iParam15;
		Global_1655612.f_4041.f_519[iVar0] = iParam16;
		Global_1655612.f_4041.f_530[iVar0] = iParam17;
		Global_1655612.f_4041.f_541[iVar0] = iParam18;
		Global_1655612.f_4041.f_552[iVar0] = iParam19;
		Global_1655612.f_4041.f_563[iVar0] = iParam20;
		Global_1655612.f_4041.f_574[iVar0] = iParam21;
		Global_1655612.f_4041.f_585[iVar0] = iParam22;
		Global_1655612.f_4041.f_596[iVar0] = iParam23;
		Global_1655612.f_4041.f_607[iVar0] = iParam24;
		Global_1655612.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_304())
		{
			Global_1655612.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1655612.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655612.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655612.f_1172 = 1;
			}
			if (func_303())
			{
				Global_1655612.f_1176 = 1;
			}
		}
	}
}

int func_303()//Position - 0xF602
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_304()//Position - 0xF626
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_305(int iParam0, char* sParam1)//Position - 0xF664
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST" /* GXT: 1st: */), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND" /* GXT: 2nd: */), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD" /* GXT: 3rd: */), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH" /* GXT: 4th: */), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH" /* GXT: 5th: */), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_306()//Position - 0xF706
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2696293 = 1;
}

int func_307(bool bParam0)//Position - 0xF729
{
	if (func_309())
	{
		return 0;
	}
	if (func_308())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_308()//Position - 0xF760
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_309()//Position - 0xF777
{
	return BitTest(Global_2621446, 12);
}

char* func_310()//Position - 0xF786
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_312(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_311())
			{
				case 0:
					return "AET_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE END */;
				
				case 1:
					return "AET_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE END */;
				
				case 2:
					return "AET_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE END */;
				
				case 3:
					return "AET_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE END */;
				
				case 4:
					return "AET_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE END */;
				
				case 5:
					return "AET_CHALL_NC" /* GXT: NO CRASHES CHALLENGE END */;
				
				case 6:
					return "AET_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE END */;
				
				case 7:
					return "AET_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE END */;
				
				case 8:
					return "AET_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE END */;
				
				case 9:
					return "AET_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE END */;
				
				case 10:
					return "AET_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE END */;
				
				case 11:
					return "AET_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE END */;
				
				case 12:
					return "AET_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE END */;
				
				case 13:
					return "AET_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE END */;
				
				case 14:
					return "AET_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE END */;
				
				case 15:
					return "AET_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE END */;
				
				case 16:
					return "AET_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE END */;
				
				case 17:
					return "AET_CHALL_ML" /* GXT: MELEE CHALLENGE END */;
				
				case 18:
					return "AET_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE END */;
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED" /* GXT: PENNED IN END */;
		
		case 138:
			return "AET_PARCEL" /* GXT: HOLD THE WHEEL END */;
		
		case 139:
			return "AET_PROPERTY" /* GXT: HOT PROPERTY END */;
		
		case 140:
			return "AET_DDROP" /* GXT: DEAD DROP END */;
		
		case 141:
			return "AET_KCASTLE" /* GXT: KING OF THE CASTLE END */;
		
		case 144:
			return "AET_BLAST" /* GXT: CRIMINAL DAMAGE END */;
		
		case 129:
			return "AET_UWARF" /* GXT: KILL LIST END */;
		
		case 146:
			return "AET_BEAST" /* GXT: HUNT THE BEAST END */;
	}
	return "";
}

int func_311()//Position - 0xF930
{
	if (func_312(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2794162.f_5152;
	}
	return -1;
}

int func_312(int iParam0)//Position - 0xF953
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/];
	}
	return -1;
}

void func_313(int iParam0)//Position - 0xF972
{
	if (func_315(PLAYER::PLAYER_ID()) || func_314(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2794162.f_5068, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2794162.f_5070));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2794162.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
				Global_2794162.f_5078 = -1;
			}
			Global_2794162.f_5068 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2794162.f_5068, 0))
		{
			if (BitTest(Global_2794162.f_5068, 4))
			{
				if (!BitTest(Global_2794162.f_5068, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070)))
						{
							StringCopy(&(Global_2794162.f_5070), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2794162.f_5068), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2794162.f_5068, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2794162.f_5068, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2794162.f_5068), 1);
			}
			else if (!BitTest(Global_2794162.f_5068, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2794162.f_5070), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2794162.f_5068), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2794162.f_5068, 3))
				{
					Global_2794162.f_5078 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2794162.f_5078, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2794162.f_5068), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2794162.f_5068, 0))
			{
				Global_2794162.f_5068 = 0;
				Global_2794162.f_5078 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2794162.f_5068), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2794162.f_5068, 2))
				{
					MISC::SET_BIT(&(Global_2794162.f_5068), 2);
					MISC::SET_BIT(&(Global_2794162.f_5068), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
					MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2794162.f_5068, 0))
		{
			Global_2794162.f_5068 = 0;
			Global_2794162.f_5078 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2794162.f_5068), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2794162.f_5068), 2);
				MISC::SET_BIT(&(Global_2794162.f_5068), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
				MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
			}
		}
	}
}

int func_314(bool bParam0)//Position - 0xFD53
{
	if (bParam0 != func_107() && func_13(bParam0, 1, 1))
	{
		return Global_2657704[bParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_315(bool bParam0)//Position - 0xFD84
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

var func_316()//Position - 0xFDCB
{
	if (ENTITY::DOES_ENTITY_EXIST(func_317()))
	{
		return func_317();
	}
	return func_101();
}

var func_317()//Position - 0xFDE9
{
	return Global_2621446.f_3;
}

void func_318()//Position - 0xFDF7
{
	int iVar0;
	struct<42> Var1;
	bool bVar43;
	int iVar44;
	var uVar45;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_1566.f_534[iVar0 /*42*/] = { Var1 };
		Local_1566.f_534[iVar0 /*42*/].f_1 = func_107();
		if (Local_816.f_674[iVar0] > -1)
		{
			iVar44 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_816.f_674[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar44))
			{
				bVar43 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar44);
				if (!func_71(bVar43, 0))
				{
					Local_1566.f_534[iVar0 /*42*/] = Local_816.f_674[iVar0];
					Local_1566.f_534[iVar0 /*42*/].f_1 = bVar43;
					uVar45 = Local_3457[Local_816.f_674[iVar0] /*5*/].f_4;
					Local_1566.f_534[iVar0 /*42*/].f_7 = uVar45;
					Local_1566.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_319()//Position - 0xFEE3
{
	if (Local_814.f_0 != -1 && Local_814.f_1 != -1)
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_321() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
		{
			func_320(Local_814.f_1, Local_814.f_0, func_271(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
			Local_814.f_0 = -1;
			Local_814.f_1 = -1;
		}
	}
}

void func_320(int iParam0, int iParam1, int iParam2)//Position - 0xFF3A
{
	struct<4> Var0;
	
	Var0.f_0 = -1091407522;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_321()//Position - 0xFF72
{
	return -1;
}

void func_322()//Position - 0xFF7B
{
	if (func_326(0))
	{
		if (!BitTest(uLocal_98, 4))
		{
			if (func_289(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_98, 4);
		}
	}
	else if (BitTest(uLocal_98, 4))
	{
		if (func_289(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_98, 4);
	}
}

void func_323()//Position - 0xFFF7
{
	MISC::SET_BIT(&(Global_2794162.f_1834), 26);
}

int func_324(int iParam0)//Position - 0x10010
{
	if ((BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 9) && !(BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 6) && BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 7))) || ((BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 6) && !BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 7)) && !BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_325()//Position - 0x10099
{
	MISC::SET_BIT(&(Global_2794162.f_1834), 19);
}

int func_326(int iParam0)//Position - 0x100AE
{
	if (iParam0 >= 0)
	{
		if (Local_816.f_674[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x100E5
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_816.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_328(Local_3457[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_328(int iParam0, int iParam1)//Position - 0x1011B
{
	return iParam0 > iParam1;
}

bool func_329(int iParam0)//Position - 0x10128
{
	return func_330(PLAYER::PLAYER_PED_ID(), Local_816.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_330(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x1014A
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

bool func_331(int iParam0)//Position - 0x10184
{
	return func_330(PLAYER::PLAYER_PED_ID(), Local_816.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_332(int iParam0)//Position - 0x101A6
{
	func_365(&(Local_388[iParam0 /*3*/]), Local_816.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_99[iParam0])
	{
		func_360(Local_816.f_10[iParam0 /*5*/], iParam0);
		func_333(Local_816.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_333(struct<4> Param0, var uParam4, int iParam5)//Position - 0x101F1
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == NETWORK::PARTICIPANT_ID_TO_INT() && !BitTest(uLocal_369[func_17(iParam5)], func_16(iParam5)))
	{
		Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4++;
		if (iLocal_96 == 0)
		{
			iLocal_96 = NETWORK::GET_NETWORK_TIME();
		}
		iVar0 = func_358(SYSTEM::CEIL((IntToFloat(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_359())));
		iVar1 = func_356(SYSTEM::CEIL((IntToFloat(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_357())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_12093 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_262145.f_12094 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */));
		if (func_34())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_355()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_354()));
		}
		if (func_272())
		{
			func_260(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_257();
		func_206(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
		iLocal_379 = (iLocal_379 + iVar0);
		Global_2696952 = iVar0;
		Local_3445.f_7 = (Local_3445.f_7 + iVar1);
		MISC::SET_BIT(&(uLocal_369[func_17(iParam5)]), func_16(iParam5));
		if (Local_3445.f_11 == 0)
		{
			Local_3445.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		func_334();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", false);
	}
}

void func_334()//Position - 0x10358
{
	if (!BitTest(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 2))
	{
		MISC::SET_BIT(&(Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 2);
		func_335(1);
	}
}

void func_335(bool bParam0)//Position - 0x10386
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
		{
			if (((!func_111(PLAYER::PLAYER_ID()) && !func_6(PLAYER::PLAYER_ID())) && !func_542(PLAYER::PLAYER_ID())) && !func_353(PLAYER::PLAYER_ID()))
			{
				if (func_352())
				{
					func_345(2, 0, 1);
					func_344();
				}
				if (func_539(func_540(func_312(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_237(2483, -1);
					MISC::CLEAR_BIT(&uVar0, func_540(func_312(PLAYER::PLAYER_ID())));
					func_344();
				}
				if (func_343())
				{
					func_344();
				}
				if (func_312(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
					if (func_342(PLAYER::PLAYER_ID()))
					{
						func_341();
					}
					func_338(func_340(func_312(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
		func_336();
	}
}

void func_336()//Position - 0x10494
{
	if (func_337())
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

bool func_337()//Position - 0x104B6
{
	return BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 17);
}

void func_338(int iParam0)//Position - 0x104CE
{
	int iVar0;
	
	if (Global_262145.f_9208 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_339() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_339()//Position - 0x10531
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_340(int iParam0)//Position - 0x1053E
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_341()//Position - 0x10570
{
	if (!func_337())
	{
		Global_2794162.f_6871 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

int func_342(int iParam0)//Position - 0x1059E
{
	if (func_312(iParam0) == 236 || func_312(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_343()//Position - 0x105C6
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_344()//Position - 0x105E0
{
	if (func_343())
	{
		Global_2672524.f_947.f_16 = 1;
	}
}

void func_345(int iParam0, int iParam1, bool bParam2)//Position - 0x105F9
{
	if (func_352())
	{
		if (iParam1 == 1)
		{
			if (Global_2794162.f_4499 == -1)
			{
				Global_2794162.f_4499 = Global_262145.f_27370 /* Tunable: 945146471 */;
			}
			func_20(&(Global_2794162.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2794162.f_4502 == -1)
				{
					Global_2794162.f_4502 = Global_262145.f_27371 /* Tunable: -29732167 */;
				}
				func_20(&(Global_2794162.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_351(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_351(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_350()) && !func_346(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_346(int iParam0)//Position - 0x106C3
{
	if (func_347(iParam0, 1, 0))
	{
		if (Global_1853988[iParam0 /*867*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_347(bool bParam0, bool bParam1, bool bParam2)//Position - 0x106E8
{
	if (bParam1)
	{
		if (func_348(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[bParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_348(int iParam0)//Position - 0x1071A
{
	return func_349(iParam0);
}

var func_349(int iParam0)//Position - 0x10728
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

bool func_350()//Position - 0x1073F
{
	return Global_2683883.f_841;
}

void func_351(bool bParam0)//Position - 0x1074E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_352())
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_352()//Position - 0x10847
{
	return Global_1574582;
}

int func_353(int iParam0)//Position - 0x10853
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2765083;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_354()//Position - 0x108BF
{
	return Global_262145.f_11906 /* Tunable: CHECKPOINT_AIR_CHECKPOINT_MULTIPLIER_RP */;
}

float func_355()//Position - 0x108CE
{
	return Global_262145.f_11905 /* Tunable: CHECKPOINT_AIR_CHECKPOINT_MULTIPLIER_CASH */;
}

var func_356(int iParam0)//Position - 0x108DD
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11917 /* Tunable: CHECKPOINT_SET_1_RP_VALUE */;
		
		case 2:
			return Global_262145.f_11918 /* Tunable: CHECKPOINT_SET_2_RP_VALUE */;
		
		case 3:
			return Global_262145.f_11919 /* Tunable: CHECKPOINT_SET_3_RP_VALUE */;
		
		case 4:
			return Global_262145.f_11920 /* Tunable: CHECKPOINT_SET_4_RP_VALUE */;
		
		default:
	}
	return Global_262145.f_11920 /* Tunable: CHECKPOINT_SET_4_RP_VALUE */;
}

float func_357()//Position - 0x10933
{
	return Global_262145.f_11665 /* Tunable: CP_COLLECTION_RP_REWARD_CHECKPOINT_SPACER */;
}

var func_358(int iParam0)//Position - 0x10942
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11907 /* Tunable: CHECKPOINT_SET_1CASH_VALUE */;
		
		case 2:
			return Global_262145.f_11908 /* Tunable: CHECKPOINT_SET_2_CASH_VALUE */;
		
		case 3:
			return Global_262145.f_11909 /* Tunable: CHECKPOINT_SET_3_CASH_VALUE */;
		
		case 4:
			return Global_262145.f_11910 /* Tunable: CHECKPOINT_SET_4_CASH_VALUE */;
		
		case 5:
			return Global_262145.f_11911 /* Tunable: CHECKPOINT_SET_5_CASH_VALUE */;
		
		case 6:
			return Global_262145.f_11912 /* Tunable: CHECKPOINT_SET_6_CASH_VALUE */;
		
		case 7:
			return Global_262145.f_11913 /* Tunable: CHECKPOINT_SET_7_CASH_VALUE */;
		
		case 8:
			return Global_262145.f_11914 /* Tunable: CHECKPOINT_SET_8_CASH_VALUE */;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11915 /* Tunable: CHECKPOINT_SET_9_CASH_VALUE */;
		
		default:
	}
	return Global_262145.f_11916 /* Tunable: CHECKPOINT_SET_10_CASH_VALUE */;
}

float func_359()//Position - 0x109FA
{
	return Global_262145.f_11664 /* Tunable: CP_COLLECTION_CASH_REWARD_CHECKPOINT_SPACER */;
}

void func_360(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x10A09
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_816.f_3[func_17(iParam5)], func_16(iParam5)))
	{
		if (!BitTest(uLocal_364[func_17(iParam5)], func_16(iParam5)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, false, true, 0))
			{
				if (func_361())
				{
					iLocal_363 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_816.f_9);
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_321() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
					{
						func_320(iLocal_363, iParam5, func_271(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
						Local_814.f_0 = -1;
						Local_814.f_1 = -1;
					}
					else
					{
						Local_814.f_0 = iParam5;
						Local_814.f_1 = iLocal_363;
					}
					MISC::SET_BIT(&(uLocal_364[func_17(iParam5)]), func_16(iParam5));
				}
			}
		}
		else if (func_1(&uLocal_382, 250, 0))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_321() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
			{
				func_320(iLocal_363, iParam5, func_271(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				Local_814.f_1 = -1;
				Local_814.f_0 = -1;
			}
			else
			{
				Local_814.f_0 = iParam5;
				Local_814.f_1 = iLocal_363;
			}
			func_37(&uLocal_382);
		}
	}
}

int func_361()//Position - 0x10B53
{
	if (!func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_542(PLAYER::PLAYER_ID()))
	{
		if (((func_352() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			func_505(0);
		}
		else
		{
			func_505(7);
		}
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_362(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_71(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_34())
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_505(1);
			return 0;
		}
	}
	return 1;
}

int func_362(int iParam0, bool bParam1)//Position - 0x10C04
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_363(int iParam0, int iParam1)//Position - 0x10C89
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

bool func_364()//Position - 0x10C9F
{
	return Global_1574582.f_1;
}

void func_365(int* iParam0, struct<3> Param1, var uParam4, var uParam5, int iParam6)//Position - 0x10CAD
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { Param1 };
	HUD::GET_HUD_COLOUR(12, &iVar3, &iVar4, &iVar5, &uVar6);
	if (!BitTest(uLocal_364[func_17(iParam6)], func_16(iParam6)) && !BitTest(Local_816.f_3[func_17(iParam6)], func_16(iParam6)))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (!func_440(Var0, 0f, 0f, 0f, 0) && !func_440(Var0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP" /* GXT: Checkpoint */);
				func_372(*iParam0, 25, 1152319488, 1137180672);
				func_370(iParam0, 12);
				HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(*iParam0, 255);
		}
		else
		{
			func_372(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_230[iParam6])
		{
			if (!BitTest(iLocal_374[func_17(iParam6)], func_16(iParam6)))
			{
				iVar7 = 54;
				if (func_34())
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0 + Vector(4f, 0f, 0f), Var0, 10f, iVar3, iVar4, iVar5, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, iVar3, iVar4, iVar5, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 5f, 5f, 100f);
				}
				MISC::SET_BIT(&(iLocal_374[func_17(iParam6)]), func_16(iParam6));
			}
			else
			{
				func_369(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_368(&Param1);
		}
		else if (BitTest(iLocal_374[func_17(iParam6)], func_16(iParam6)))
		{
			if (func_367(&(iParam0->f_1), &(iParam0->f_2)))
			{
				GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
				MISC::CLEAR_BIT(&(iLocal_374[func_17(iParam6)]), func_16(iParam6));
			}
		}
	}
	else if (BitTest(iLocal_374[func_17(iParam6)], func_16(iParam6)))
	{
		func_366(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam6);
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_366(var uParam0, var uParam1, int* iParam2, int iParam3)//Position - 0x10EEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
			GRAPHICS::DELETE_CHECKPOINT(*uParam0);
			*uParam0 = 0;
			MISC::CLEAR_BIT(&(iLocal_374[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_367(var uParam0, var uParam1)//Position - 0x10F6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_368(var uParam0)//Position - 0x10FBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_143(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_369(var uParam0, var uParam1)//Position - 0x11023
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_370(var uParam0, int iParam1)//Position - 0x11075
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_371(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_371(int iParam0)//Position - 0x1109B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_372(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x11303
{
	HUD::SET_BLIP_ALPHA(iParam0, func_373(iParam0, iParam1, fParam2, fParam3));
}

int func_373(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1131D
{
	float fVar0;
	
	if (!func_324(Global_2672524) && !func_77())
	{
		fVar0 = func_378(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_374();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_374()//Position - 0x1136B
{
	if (func_375(Global_2672524, 1))
	{
		return 50;
	}
	return 0;
}

bool func_375(bool bParam0, bool bParam1)//Position - 0x11385
{
	if (func_377() != 0)
	{
		return func_376(bParam0) != 0;
	}
	return func_347(bParam0, bParam1, 0);
}

int func_376(bool bParam0)//Position - 0x113AC
{
	if (func_13(bParam0, 0, 1))
	{
		return Global_2657704[bParam0 /*463*/].f_1;
	}
	return 0;
}

int func_377()//Position - 0x113CE
{
	return Global_32283;
}

float func_378(int iParam0, float fParam1, float fParam2)//Position - 0x113D9
{
	bool bVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	bVar0 = Global_2672524;
	Var2 = { func_439(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581982 || func_435())
	{
		if (func_434(bVar0))
		{
			Var5 = { func_381(bVar0) };
		}
		else if (func_380(bVar0))
		{
			Var5 = { func_379(bVar0) };
		}
	}
	else
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar0), false) };
	}
	Var5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_379(bool bParam0)//Position - 0x11489
{
	int iVar0;
	
	if (func_380(bParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_380(bool bParam0)//Position - 0x114BD
{
	int iVar0;
	
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_381(bool bParam0)//Position - 0x11519
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (bParam0 == func_107())
	{
	}
	if (func_433(bParam0))
	{
		iVar0 = func_432(bParam0);
		if (iVar0 != func_107())
		{
			if (!func_431(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_254[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_254[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657704[func_432(bParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_428(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950844.f_543[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_427(bParam0))
	{
		iVar2 = func_426(bParam0);
		if (iVar2 != func_107())
		{
			if (!func_425(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1968944[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1968944[iVar2], false);
				}
				else
				{
					return Global_2657704[func_432(bParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950844.f_543[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_424(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_308, false);
		}
	}
	else if (func_423(bParam0) && !func_422(bParam0))
	{
		iVar4 = Global_2657704[bParam0 /*463*/].f_321.f_10;
		if (iVar4 != func_107())
		{
			iVar5 = func_428(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950844.f_543[iVar5 /*3*/];
			}
		}
	}
	else if (func_421(bParam0) && !func_420(bParam0))
	{
		if (func_434(bParam0) && func_419())
		{
			return Global_1950844.f_543[Global_2657704[bParam0 /*463*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657704[bParam0 /*463*/].f_321.f_10;
		if (iVar6 != func_107())
		{
			if (func_418(iVar6))
			{
				iVar7 = func_415(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950844.f_543[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_414(bParam0))
	{
		iVar8 = func_413(bParam0);
		if (iVar8 != func_107())
		{
			if (!func_412(iVar8) && !func_411(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_351[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_351[iVar8], false);
				}
				else
				{
					return Global_2657704[func_413(bParam0) /*463*/].f_321.f_20;
				}
			}
			else if (func_418(iVar8) && func_412(iVar8))
			{
				iVar9 = func_415(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950844.f_543[iVar9 /*3*/];
				}
			}
			else if (func_410(iVar8) && func_411(iVar8))
			{
				iVar10 = func_407(iVar8);
				if (!iVar10 == -1)
				{
					return Global_1950844.f_543[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_406(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_310, false);
		}
	}
	else if (func_405(bParam0) && !func_404(bParam0))
	{
		iVar11 = Global_2657704[bParam0 /*463*/].f_321.f_10;
		if (iVar11 != func_107())
		{
			if (func_403(iVar11))
			{
				iVar12 = func_400(iVar11);
				if (iVar12 != -1)
				{
					return func_399(iVar12);
				}
			}
		}
	}
	else if (func_398(bParam0) && !func_397(bParam0))
	{
		iVar13 = Global_2657704[bParam0 /*463*/].f_321.f_10;
		if (iVar13 != func_107())
		{
			if (func_396(iVar13))
			{
				iVar14 = func_393(iVar13);
				if (iVar14 != -1)
				{
					return Global_1950844.f_543[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_392(bParam0, 0))
	{
		iVar15 = func_391(bParam0);
		if (iVar15 != func_107())
		{
			if (!func_390(iVar15))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_384[iVar15]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_384[iVar15], false);
				}
				else
				{
					return Global_1895156[func_391(bParam0) /*609*/].f_591;
				}
			}
			else
			{
				iVar16 = func_393(iVar15);
				if (!iVar16 == -1)
				{
					return Global_1950844.f_543[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_389(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_388(bParam0))
	{
		iVar17 = func_386(bParam0);
		if (iVar17 != func_107())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_417[iVar17]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_417[iVar17], false);
			}
			else
			{
				return Global_1914706[iVar17 /*299*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_405(bParam0))
	{
		return func_399(Global_2657704[bParam0 /*463*/].f_321.f_7);
	}
	if (func_382(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950844.f_543[Global_2657704[bParam0 /*463*/].f_321.f_7 /*3*/];
}

int func_382(bool bParam0)//Position - 0x11A62
{
	if (((func_385(bParam0) || func_384(bParam0)) || func_383(bParam0)) || func_315(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_383(bool bParam0)//Position - 0x11A9C
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_384(bool bParam0)//Position - 0x11AE3
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_385(bool bParam0)//Position - 0x11B2A
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_386(bool bParam0)//Position - 0x11B71
{
	int iVar0;
	
	if (bParam0 == func_107())
	{
		return bParam0;
	}
	if (func_387(bParam0) != -1)
	{
		iVar0 = func_183(func_387(bParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_85(bParam0, 0))
			{
				return func_84(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_107();
		}
		return Global_2657704[bParam0 /*463*/].f_321.f_10;
	}
	return func_107();
}

int func_387(bool bParam0)//Position - 0x11C00
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

int func_388(bool bParam0)//Position - 0x11C6F
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_1575063) && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_389(bool bParam0)//Position - 0x11D06
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_390(int iParam0)//Position - 0x11D4D
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

bool func_391(bool bParam0)//Position - 0x11D72
{
	if (bParam0 == func_107())
	{
		return bParam0;
	}
	return Global_2657704[bParam0 /*463*/].f_321.f_10;
}

int func_392(bool bParam0, bool bParam1)//Position - 0x11D96
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_107())
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x11E24
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_395(iParam0);
		if (iVar0 != 0)
		{
			return func_394(iVar0);
		}
	}
	return -1;
}

int func_394(int iParam0)//Position - 0x11E4D
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_395(int iParam0)//Position - 0x11ECB
{
	if (iParam0 != func_107())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_311;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x11EEF
{
	if (iParam0 != func_107())
	{
		if (Global_1853988[iParam0 /*867*/].f_267.f_311 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_397(bool bParam0)//Position - 0x11F18
{
	if (bParam0 != func_107())
	{
		if (func_398(bParam0) && Global_2657704[bParam0 /*463*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_398(bool bParam0)//Position - 0x11F4D
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_399(int iParam0)//Position - 0x11F94
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1950844.f_543[iParam0 /*3*/];
}

int func_400(int iParam0)//Position - 0x120A0
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_402(iParam0);
		if (iVar0 != 0)
		{
			return func_401(iVar0);
		}
	}
	return -1;
}

int func_401(int iParam0)//Position - 0x120C9
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_402(int iParam0)//Position - 0x12147
{
	if (iParam0 != func_107())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_354;
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x1216B
{
	if (iParam0 != func_107())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_354 != 0;
	}
	return 0;
}

int func_404(bool bParam0)//Position - 0x12191
{
	if (bParam0 != func_107())
	{
		if (func_405(bParam0) && Global_2657704[bParam0 /*463*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_405(bool bParam0)//Position - 0x121C6
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_406(bool bParam0)//Position - 0x1220D
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x12254
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_409(iParam0);
	if (!iVar0 == 0)
	{
		return func_408(iVar0);
	}
	return -1;
}

int func_408(int iParam0)//Position - 0x12283
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_409(int iParam0)//Position - 0x122D9
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_293;
}

int func_410(int iParam0)//Position - 0x122FD
{
	if (iParam0 != func_107())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_411(int iParam0)//Position - 0x12323
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x12349
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

bool func_413(bool bParam0)//Position - 0x1236E
{
	if (bParam0 == func_107())
	{
		return bParam0;
	}
	return Global_2657704[bParam0 /*463*/].f_321.f_10;
}

int func_414(bool bParam0)//Position - 0x12392
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_107())
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x123F2
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_417(iParam0);
	if (!iVar0 == 0)
	{
		return func_416(iVar0);
	}
	return -1;
}

int func_416(int iParam0)//Position - 0x12421
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_417(int iParam0)//Position - 0x124AF
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_300;
}

int func_418(int iParam0)//Position - 0x124D3
{
	if (iParam0 != func_107())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_419()//Position - 0x124F9
{
	if (BitTest(Global_1950844.f_2, 13) || Global_1950844.f_3348)
	{
		return 1;
	}
	return 0;
}

int func_420(bool bParam0)//Position - 0x1251F
{
	if (bParam0 == func_107())
	{
		return 0;
	}
	if (func_421(bParam0) && Global_2657704[bParam0 /*463*/].f_321.f_10 == bParam0)
	{
		return 1;
	}
	return 0;
}

int func_421(bool bParam0)//Position - 0x12558
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_422(bool bParam0)//Position - 0x1259F
{
	if (bParam0 == func_107())
	{
		return 0;
	}
	if (func_423(bParam0) && Global_2657704[bParam0 /*463*/].f_321.f_10 == bParam0)
	{
		return 1;
	}
	return 0;
}

int func_423(bool bParam0)//Position - 0x125D8
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_424(bool bParam0)//Position - 0x1261E
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)//Position - 0x12664
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 26);
	}
	return 0;
}

bool func_426(bool bParam0)//Position - 0x1268A
{
	if (bParam0 == func_107())
	{
		return bParam0;
	}
	return Global_2657704[bParam0 /*463*/].f_321.f_10;
}

int func_427(bool bParam0)//Position - 0x126AE
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_107())
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x1270E
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_430(iParam0);
	if (!iVar0 == 0)
	{
		return func_429(iVar0);
	}
	return -1;
}

int func_429(int iParam0)//Position - 0x1273D
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_430(int iParam0)//Position - 0x1290D
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_193[5 /*13*/];
}

int func_431(int iParam0)//Position - 0x12933
{
	if (iParam0 != func_107())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

bool func_432(bool bParam0)//Position - 0x12956
{
	if (bParam0 == func_107())
	{
		return bParam0;
	}
	return Global_2657704[bParam0 /*463*/].f_321.f_10;
}

int func_433(bool bParam0)//Position - 0x1297A
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_107())
			{
				return func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_434(bool bParam0)//Position - 0x129D9
{
	if (bParam0 != func_107())
	{
		if (func_13(bParam0, 1, 1))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_435()//Position - 0x12A3F
{
	if ((func_438() || func_437()) || func_436(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0)//Position - 0x12A6B
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return BitTest(Global_1890739[iParam0 /*138*/].f_29, 20);
}

var func_437()//Position - 0x12A8D
{
	return BitTest(Global_1963775, 1);
}

bool func_438()//Position - 0x12A9B
{
	return BitTest(Global_1963795, 5);
}

Vector3 func_439(int iParam0)//Position - 0x12AA9
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

bool func_440(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x12AF2
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_441()//Position - 0x12B39
{
	if (func_324(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uLocal_98, 2))
		{
			MISC::SET_BIT(&uLocal_98, 2);
			return 1;
		}
	}
	else if (BitTest(uLocal_98, 2))
	{
		MISC::CLEAR_BIT(&uLocal_98, 2);
		return 1;
	}
	return 0;
}

int func_442(struct<3> Param0, float fParam3, int iParam4)//Position - 0x12B75
{
	int iVar0;
	
	iVar0 = -1;
	if (func_456() < 10)
	{
		iVar0 = func_455();
		func_443(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_443(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0x12BA2
{
	func_444(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_444(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0x12BBC
{
	struct<12> Var0;
	
	if (func_452(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_451(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_446(Var0))
		{
			Global_2635560.f_45.f_64 = func_376(PLAYER::PLAYER_ID());
			func_445(Var0, iParam8);
		}
	}
}

void func_445(struct<12> Param0, int iParam12)//Position - 0x12C32
{
	Global_2635560.f_368[iParam12 /*12*/] = { Param0 };
	Global_2635560.f_368[iParam12 /*12*/].f_9 = 1;
}

int func_446(struct<12> Param0)//Position - 0x12C5B
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635560.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_447(Global_2635560.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_447(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x12CBB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_450(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_448(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_450(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_448(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_448(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x12DF4
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.70710677f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_449(Param0, Param3, Var0, Var3);
}

int func_449(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x12E38
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_450(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x12E8F
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_451(var uParam0, var uParam1)//Position - 0x12EBA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_452(bool bParam0)//Position - 0x12F51
{
	if (((func_375(bParam0, 1) || func_454(bParam0)) || func_117(bParam0, 0)) || func_453(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_453(bool bParam0)//Position - 0x12F8D
{
	if (!func_13(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_454(bool bParam0)//Position - 0x12FB5
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

int func_455()//Position - 0x12FD6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635560.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_456()//Position - 0x13008
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635560.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_457()//Position - 0x1303B
{
	if (!func_165())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_161();
}

void func_458()//Position - 0x13068
{
	Global_1945796 = 1;
	if (!BitTest(Global_2803781, 0))
	{
		MISC::SET_BIT(&Global_2803781, 0);
		MISC::SET_BIT(&Global_1945797, 0);
	}
	if (!BitTest(Global_2803781, 1))
	{
		MISC::SET_BIT(&Global_2803781, 1);
		MISC::SET_BIT(&Global_1945797, 1);
	}
	if (!BitTest(Global_2803781, 5))
	{
		MISC::SET_BIT(&Global_2803781, 5);
		MISC::SET_BIT(&Global_1945797, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

void func_459()//Position - 0x13171
{
	char* sVar0;
	
	if (!BitTest(uLocal_98, 5) && !HUD::IS_RADAR_HIDDEN())
	{
		if (Local_816.f_707)
		{
			sVar0 = "CPC_TITLEA" /* GXT: AIR CHECKPOINTS */;
		}
		else
		{
			sVar0 = "CPC_TITLE" /* GXT: CHECKPOINTS */;
		}
		func_44(63, sVar0, "CPC_START" /* GXT: Compete to collect the most checkpoints in the given time */, func_58(), -1, func_58(), 1, 0);
		HUD::FLASH_MINIMAP_DISPLAY();
		MISC::SET_BIT(&uLocal_98, 5);
	}
}

void func_460(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x131C6
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2794162.f_5078 = -1;
	bVar0 = (func_117(PLAYER::PLAYER_ID(), 0) && func_113(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_477(func_478(iParam0), 1);
	}
	else
	{
		func_476(iParam0, -1);
		if (func_7(PLAYER::PLAYER_ID()))
		{
			Global_1836866.f_3 = iParam0;
		}
		else
		{
			func_475(iParam0);
		}
		Global_1836866.f_4 = -1;
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 5);
		}
		if (((func_352() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
		MISC::SET_BIT(&(Global_1836866.f_1), 20);
		if (func_474(iParam0))
		{
			func_473();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_470(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_468(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836866.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4593985)
			{
				func_466(1);
				if (func_295(0))
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_464(1);
			MISC::SET_BIT(&(Global_1836866.f_1), 12);
		}
		if (bParam5)
		{
			func_463();
			MISC::SET_BIT(&(Global_1836866.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_461(iParam0))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 21);
			}
		}
	}
	Global_2764267 = 1;
}

int func_461(int iParam0)//Position - 0x133AA
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_127(iParam0) == 1)
	{
		return 1;
	}
	if (func_462())
	{
		return 1;
	}
	return 0;
}

int func_462()//Position - 0x13419
{
	switch (func_311())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_463()//Position - 0x13447
{
	MISC::SET_BIT(&(Global_2794162.f_5069), 0);
}

void func_464(bool bParam0)//Position - 0x1345B
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100885.f_8 = 1;
	}
	else
	{
		Global_100885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_465(iVar0);
		iVar0++;
	}
}

void func_465(int iParam0)//Position - 0x13492
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_466(int iParam0)//Position - 0x134AC
{
	if (func_467() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4593985)
	{
		return;
	}
	Global_4593985 = iParam0;
	Global_4593987 = 0;
	Global_4593988 = 0;
}

int func_467()//Position - 0x134E1
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0)//Position - 0x13527
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_469(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_469(bool bParam0)//Position - 0x13565
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

void func_470(float fParam0)//Position - 0x13588
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_471())
	{
		return;
	}
	fVar0 = (Global_2794162.f_5226 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227))
	{
		if (!Global_2794162.f_5227 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2794162.f_5226 = fParam0;
	Global_2794162.f_5227 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_471()//Position - 0x135F4
{
	switch (func_377())
	{
		case 0:
			return func_472();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_472()//Position - 0x13627
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_473()//Position - 0x1364B
{
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2794162.f_4667), 1);
}

int func_474(int iParam0)//Position - 0x1366D
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_475(int iParam0)//Position - 0x13687
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/] = iParam0;
}

void func_476(int iParam0, int iParam1)//Position - 0x1369C
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_539(func_540(iVar0)))
		{
			MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
	}
}

void func_477(bool bParam0, bool bParam1)//Position - 0x136F7
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

int func_478(int iParam0)//Position - 0x13754
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_479()//Position - 0x1377A
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	
	if (func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((!func_308() && !func_497(PLAYER::PLAYER_ID(), 0, -1)) && !func_496(PLAYER::PLAYER_ID()))
		{
			fVar5 = 2.1474836E+09f;
			iVar6 = -1;
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar11 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar12 = func_495();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				iVar13 = Local_816.f_729[iVar4 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar13) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar13), false))
				{
					if (!bVar12)
					{
						if (bVar11 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar13))
						{
							func_335(1);
						}
					}
					if (func_32(iVar4, &Var0, &uVar3))
					{
						Var14 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar13), true) };
						if (SYSTEM::VDIST(Var14, Var0) <= 10f)
						{
							if (func_494(Var14))
							{
								MISC::SET_BIT(&uVar7, iVar4);
							}
							if (func_492(Var14, Var8))
							{
								if (!func_490(Var0, 100f))
								{
									fVar17 = SYSTEM::VDIST(Var14, Var8);
									if (fVar17 < fVar5)
									{
										fVar5 = fVar17;
										iVar6 = iVar4;
									}
								}
							}
						}
					}
				}
				iVar4++;
			}
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_7 = uVar7;
			if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
			{
				if ((fVar5 < 2.1474836E+09f && iVar6 >= 0) && iVar6 < 10)
				{
					if (func_32(iVar6, &Var0, &uVar3))
					{
						iLocal_781 = 1;
						func_489(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_488(Var0, 1, 0);
						func_481(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_480();
			}
		}
		else
		{
			func_480();
		}
	}
}

void func_480()//Position - 0x13982
{
	if (iLocal_781)
	{
		func_173();
		func_171();
		iLocal_781 = 0;
	}
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1399C
{
	if (Global_2672524.f_1685.f_703.f_16 != func_107())
	{
		if (BitTest(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_482())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643396 = 0;
	}
	Global_2635560.f_490 = iParam0;
	Global_2635560.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635560.f_490.f_2 = iParam1;
	Global_2635560.f_490.f_3 = iParam2;
	Global_2635560.f_490.f_4 = iParam3;
	Global_2635560.f_490.f_5 = iParam4;
}

int func_482()//Position - 0x13A38
{
	if ((((((func_252(PLAYER::PLAYER_ID()) == 229 || func_252(PLAYER::PLAYER_ID()) == 191) || func_487()) || func_486()) || func_485()) || Global_2765084.f_227 == 1) || (Global_2635560.f_1853 && func_483(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_483(int iParam0)//Position - 0x13AAA
{
	if (func_484(iParam0))
	{
		return 1;
	}
	if (func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_484(bool bParam0)//Position - 0x13ACD
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

bool func_485()//Position - 0x13AF0
{
	return Global_2765083;
}

bool func_486()//Position - 0x13AFC
{
	return Global_1836594;
}

int func_487()//Position - 0x13B08
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_488(struct<3> Param0, int iParam3, int iParam4)//Position - 0x13B1D
{
	Global_2635560.f_45.f_49 = { Param0 };
	Global_2635560.f_45.f_52 = iParam3;
	Global_2635560.f_45.f_53 = iParam4;
}

void func_489(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x13B47
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		if (!Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		Global_2644655.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2644655.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_452(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2644655 = { Var0 };
}

bool func_490(struct<3> Param0, float fParam3)//Position - 0x13C70
{
	return func_491(Param0, fParam3, PLAYER::PLAYER_ID(), 0, 0);
}

int func_491(struct<3> Param0, float fParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x13C88
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam4 == iVar0 || iParam5 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam4, 0, 1))
				{
					if (Global_2648711.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_31(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648711.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_13(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_31(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_492(struct<3> Param0, struct<3> Param3)//Position - 0x13DA5
{
	struct<3> Var0;
	
	if (Local_816.f_8 == 3)
	{
		Var0 = { func_493(Local_816.f_712) };
		if (SYSTEM::VDIST(Param3, Var0) < 3500f)
		{
			if (SYSTEM::VDIST(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_493(int iParam0)//Position - 0x13DF3
{
	switch (iParam0)
	{
		case 0:
			return 1710.3667f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.0602f, 4123.0723f, 62.2841f;
		
		case 3:
			return 1941.7789f, 3847.1667f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_494(struct<3> Param0)//Position - 0x13E65
{
	struct<3> Var0;
	
	if (Local_816.f_8 == 3)
	{
		Var0 = { func_493(Local_816.f_712) };
		if (SYSTEM::VDIST(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_495()//Position - 0x13E9E
{
	if ((((((func_484(PLAYER::PLAYER_ID()) || func_352()) || func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25)) || func_7(PLAYER::PLAYER_ID())) || func_6(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_496(int iParam0)//Position - 0x13F06
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_497(bool bParam0, bool bParam1, int iParam2)//Position - 0x13F3F
{
	if (Global_1853988[bParam0 /*867*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853988[bParam0 /*867*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_183(Global_2657704[bParam0 /*463*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_386(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

void func_498(var uParam0, char* sParam1)//Position - 0x13FC6
{
	char* sVar0;
	
	if (func_307(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!func_248(sParam1))
	{
		sVar0 = sParam1;
	}
	func_153(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_499(int iParam0)//Position - 0x14007
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING" /* GXT: EVENT START */;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG" /* GXT: MOVING TARGET START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL" /* GXT: CHECKPOINTS START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE START */;
			
			case 1:
				return "AST_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE START */;
			
			case 2:
				return "AST_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE START */;
			
			case 3:
				return "AST_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE START */;
			
			case 4:
				return "AST_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE START */;
			
			case 5:
				return "AST_CHALL_NC" /* GXT: NO CRASHES CHALLENGE START */;
			
			case 6:
				return "AST_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE START */;
			
			case 7:
				return "AST_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE START */;
			
			case 8:
				return "AST_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE START */;
			
			case 9:
				return "AST_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE START */;
			
			case 10:
				return "AST_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE START */;
			
			case 11:
				return "AST_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE START */;
			
			case 12:
				return "AST_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE START */;
			
			case 13:
				return "AST_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE START */;
			
			case 14:
				return "AST_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE START */;
			
			case 15:
				return "AST_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE START */;
			
			case 16:
				return "AST_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE START */;
			
			case 17:
				return "AST_CHALL_ML" /* GXT: MELEE CHALLENGE START */;
			
			case 18:
				return "AST_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE START */;
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED" /* GXT: PENNED IN START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL" /* GXT: HOLD THE WHEEL START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY" /* GXT: HOT PROPERTY START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP" /* GXT: DEAD DROP START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE" /* GXT: KING OF THE CASTLE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST" /* GXT: CRIMINAL DAMAGE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF" /* GXT: KILL LIST START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST" /* GXT: HUNT THE BEAST START */;
	}
	return "";
}

int func_500(int iParam0, int iParam1)//Position - 0x14210
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_501(int iParam0)//Position - 0x14226
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2794162.f_5068 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2794162.f_5068, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2794162.f_5068 = 0;
			MISC::SET_BIT(&(Global_2794162.f_5068), 1);
		}
	}
}

int func_502(var uParam0, bool bParam1, bool bParam2)//Position - 0x1427A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_503(bool bParam0)//Position - 0x142C1
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34())
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_816.f_729[iVar0 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_816.f_729[iVar0 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_816.f_729[iVar0 /*2*/].f_1), -1, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_789[iVar0]))
					{
						iLocal_789[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_816.f_729[iVar0 /*2*/].f_1));
						HUD::SET_BLIP_PRIORITY(iLocal_789[iVar0], 9);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_789[iVar0], "AMCH_AC" /* GXT: Air Vehicle */);
						HUD::SET_BLIP_SPRITE(iLocal_789[iVar0], func_504(iVar0));
						func_370(&(iLocal_789[iVar0]), 9);
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_816.f_729[iVar0 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_789[iVar0], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_789[iVar0], false);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_789[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_789[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_504(int iParam0)//Position - 0x14411
{
	switch (Local_816.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_505(bool bParam0)//Position - 0x14440
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_508("CPC_PASSIVE" /* GXT: Checkpoints may not be collected in passive mode. */, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_508("CPC_NOAIR" /* GXT: These checkpoints cannot be collected in an air vehicle. */, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_779, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_34())
					{
						func_508("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_508("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 4:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_507(63))
					{
						if (Local_816.f_707)
						{
							sVar0 = "CPC_HELPA" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ in the air for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						else
						{
							sVar0 = "CPC_HELP" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						func_508(sVar0, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_507(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_779, 4))
					{
						if (Local_816.f_707)
						{
							sVar1 = "CPC_HELPA2" /* GXT: Checkpoints may be collected in an air vehicle, by parachute, or while freefalling. */;
						}
						else
						{
							sVar1 = "CPC_HELP2" /* GXT: Checkpoints may be collected on foot or in a land or sea vehicle. */;
						}
						func_508(sVar1, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_507(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_779, 5))
					{
						if (Local_816.f_707)
						{
							sVar2 = "CPC_WARNA" /* GXT: Air Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						else
						{
							sVar2 = "CPC_WARN" /* GXT: Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						func_506(sVar2, func_168(), 30000);
						func_177(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_779, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_508("CPC_PASSIV1" /* GXT: Checkpoints cannot be collected if removed from an event by entering passive mode. */, 30000);
						func_177(1);
						MISC::SET_BIT(&uLocal_779, bParam0);
					}
				}
				break;
			}
	}
}

void func_506(char* sParam0, char* sParam1, int iParam2)//Position - 0x146A9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

bool func_507(int iParam0)//Position - 0x146C6
{
	return Global_2672524.f_2514[0 /*80*/].f_1 == iParam0;
}

void func_508(char* sParam0, int iParam1)//Position - 0x146DD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_509(int iParam0)//Position - 0x146F4
{
	Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = iParam0;
}

void func_510(bool bParam0)//Position - 0x14709
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
}

int func_511(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1473D
{
	if (func_538(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_363(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_363(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_346(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_536(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_535())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_111(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_527(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_526(PLAYER::PLAYER_ID()) != func_107() && func_526(PLAYER::PLAYER_ID()) == func_84(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_524(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_523(func_203()) && !func_342(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_522())
	{
		return 0;
	}
	if (func_308())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_348(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_520())
	{
		return 0;
	}
	if (func_363(PLAYER::PLAYER_ID(), 0) || func_363(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_363(PLAYER::PLAYER_ID(), 12) || func_363(PLAYER::PLAYER_ID(), 14)) || func_363(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_519(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_438() && !Global_2764662)
		{
			return 0;
		}
	}
	if (func_518(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (Global_1935879)
	{
		return 0;
	}
	if (func_453(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_516())
	{
		return 0;
	}
	if (func_514(PLAYER::PLAYER_ID()) && Global_1853632.f_172)
	{
		return 0;
	}
	if (func_513())
	{
		return 0;
	}
	if (func_485())
	{
		return 0;
	}
	if (Global_2793197)
	{
		return 0;
	}
	if (Global_1969131)
	{
		return 0;
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_484(PLAYER::PLAYER_ID()))
	{
		if (func_512(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_512(int iParam0)//Position - 0x149A9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890739[iVar0 /*138*/].f_77.f_60 != 0;
	}
	return 0;
}

bool func_513()//Position - 0x149CD
{
	return Global_1950844.f_529;
}

int func_514(int iParam0)//Position - 0x149DC
{
	if (func_515(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x149FE
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_516()//Position - 0x14A2D
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_517()//Position - 0x14A45
{
	return Global_100885.f_394 > 0;
}

bool func_518(int iParam0)//Position - 0x14A56
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11);
}

int func_519(int iParam0, bool bParam1, bool bParam2)//Position - 0x14A6F
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_520()//Position - 0x14AD3
{
	if (func_521() == 0)
	{
		return 1;
	}
	return 0;
}

int func_521()//Position - 0x14AE8
{
	return Global_1574632.f_18;
}

bool func_522()//Position - 0x14AF6
{
	return Global_1575063;
}

int func_523(int iParam0)//Position - 0x14B02
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_524(int iParam0, int iParam1)//Position - 0x14B4C
{
	if (func_117(iParam0, 0))
	{
		return func_525(Global_1895156[iParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x14B76
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
			return 0;
		
		case 276:
		case 267:
		case 318:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_526(int iParam0)//Position - 0x14E00
{
	return Global_1895156[iParam0 /*609*/].f_10.f_35;
}

int func_527(bool bParam0)//Position - 0x14E15
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_454(bParam0) && !func_7(bParam0)) && !BitTest(Global_1895156[bParam0 /*609*/].f_1, 8));
	bVar2 = func_111(bParam0);
	uVar3 = func_352();
	uVar4 = func_528();
	if ((bVar1 && (func_484(bParam0) || func_469(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_113(bParam0)) && !func_184(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2794162.f_5231.f_221 != iVar0)
	{
		Global_2794162.f_5231.f_221 = iVar0;
	}
	return iVar0;
}

int func_528()//Position - 0x14ED0
{
	if ((func_112(PLAYER::PLAYER_ID(), 21) || func_112(PLAYER::PLAYER_ID(), 22)) || func_532())
	{
		return 1;
	}
	if (func_530())
	{
		func_529(22);
		return 1;
	}
	return 0;
}

void func_529(int iParam0)//Position - 0x14F15
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_530()//Position - 0x14F32
{
	if (func_117(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_352() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_531(27);
		}
	}
	return 0;
}

void func_531(int iParam0)//Position - 0x14F85
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_532()//Position - 0x14FA2
{
	return func_533(424, -1);
}

int func_533(int iParam0, int iParam1)//Position - 0x14FB2
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_534(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_534(int iParam0, var uParam1)//Position - 0x14FD6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_232(uParam1));
}

bool func_535()//Position - 0x14FEB
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 5;
}

int func_536(int iParam0)//Position - 0x15000
{
	if (Global_2657704[iParam0 /*463*/].f_272.f_4 != 0 || Global_2657704[iParam0 /*463*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_537()//Position - 0x15034
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

bool func_538(int iParam0, int iParam1)//Position - 0x1504D
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_5, iParam1);
}

bool func_539(var uParam0)//Position - 0x15065
{
	var uVar0;
	
	uVar0 = func_237(2483, -1);
	return BitTest(uVar0, uParam0);
}

int func_540(int iParam0)//Position - 0x1507C
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24324 /* Tunable: -1488550814 */;
}

void func_541()//Position - 0x1510B
{
	if (Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 0)
	{
		Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 0;
	}
}

int func_542(int iParam0)//Position - 0x1512E
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_352() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_38(&(Global_1836866.f_13)))
		{
			if (!func_1(&(Global_1836866.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_37(&(Global_1836866.f_13));
		}
	}
	else if (BitTest(Global_1895156[iParam0 /*609*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1895156[iParam0 /*609*/].f_1, 9);
}

bool func_543(bool bParam0)//Position - 0x151CA
{
	return func_71(bParam0, 0);
}

void func_544()//Position - 0x151D9
{
	func_545(&(Local_1566.f_534), &Local_1566, 27, &(Local_1566.f_1), &(Local_1566.f_117), -1, 0, 0);
}

void func_545(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x151FD
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	bool bVar36;
	char* sVar37;
	int iVar38;
	struct<4> Var39;
	int iVar43;
	int iVar44;
	bool bVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	struct<2> Var58;
	
	if (func_664(iParam2))
	{
		return;
	}
	fVar46 = -1f;
	iVar47 = -1;
	iVar48 = -1;
	iVar50 = 0;
	iVar51 = 0;
	uParam3->f_36 = 0;
	if (func_662() || iParam2 == 28)
	{
		if (func_616(iParam1, iParam2, uParam3, Global_1836371, 0, func_665(), sParam7))
		{
			func_615(1);
			if ((!func_614() && !func_613()) || BitTest(Global_2794162.f_4694, 1))
			{
				if (func_612())
				{
					func_611();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_610(1);
						Global_1836371 = 0;
						iVar55 = -1;
						if (Global_1836595 != 1)
						{
							func_609(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar53 = 0;
							while (iVar53 < 32)
							{
								iVar1[iVar53] = -1;
								iVar53++;
							}
							iVar53 = 0;
							while (iVar53 < 32)
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
									if (!func_71(bVar36, 0))
									{
										if (func_605(bVar36) || func_603(bVar36, bVar35))
										{
											bVar45 = bVar36;
											if (func_86(bVar36))
											{
												iVar1[bVar45] = iVar56;
												iVar56++;
												iVar0++;
												func_600(&iVar1, bVar36, &iVar56, &iVar0, bVar35);
											}
										}
									}
								}
								iVar53++;
							}
						}
						if (!func_114(PLAYER::PLAYER_ID(), 0) && func_252(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							if (func_599())
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
								}
								else
								{
									bVar36 = func_107();
								}
							}
							else
							{
								bVar36 = (uParam0[iVar53 /*42*/])->f_1;
							}
							if ((func_598(bVar36) && func_595(bVar36, iParam2, bVar35)) && func_13(bVar36, 0, 1))
							{
								bVar45 = bVar36;
								iVar43 = Global_1853988[bVar45 /*867*/].f_205.f_6;
								Var39 = { func_590(bVar36) };
								if (bVar36 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar54;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar36), 64);
								*(uParam4[iVar53 /*13*/]) = { func_147(bVar36) };
								iVar38 = func_584(bVar36);
								sVar37 = "";
								if (iVar38 != 0)
								{
									sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
								}
								Global_1836371++;
								if ((uParam0[iVar53 /*42*/])->f_22 != -1f)
								{
									fVar46 = (uParam0[iVar53 /*42*/])->f_22;
								}
								if ((uParam0[iVar53 /*42*/])->f_31 != -1)
								{
									iVar47 = (uParam0[iVar53 /*42*/])->f_31;
								}
								if ((uParam0[iVar53 /*42*/])->f_41 != -1)
								{
									iVar48 = (uParam0[iVar53 /*42*/])->f_41;
								}
								iVar44 = (uParam0[iVar53 /*42*/])->f_7;
								if (((uParam0[iVar53 /*42*/])->f_7 != -1 || (uParam0[iVar53 /*42*/])->f_22 != -1f) || (uParam0[iVar53 /*42*/])->f_31 != -1)
								{
									if (!func_599())
									{
										iVar51 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_579(&iVar44, &fVar46, (uParam0[iVar53 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_578(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar49 = (uParam0[iVar53 /*42*/])->f_2 + 1;
									if (iVar55 != iVar49)
									{
										iVar55 = iVar49;
									}
									else
									{
										iVar49 = -2;
									}
								}
								iVar52 = func_577(bVar36, 0);
								if (bVar34)
								{
									if (func_85(bVar36, 1) && iVar1[bVar45] != -1)
									{
										iVar54 = iVar1[bVar45];
									}
									else
									{
										iVar54 = (iVar0 + iVar57);
										iVar57++;
									}
								}
								uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
								if ((uParam0[iVar53 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var58, "UW_TM", 16);
									StringIntConCat(&Var58, (uParam0[iVar53 /*42*/])->f_39, 16);
								}
								if (func_576(iParam5))
								{
									func_575(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar44, iVar48, &Var58, (uParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								else
								{
									func_575(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar47, iVar48, &Var58, (uParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								MISC::SET_BIT(&iVar50, bVar36);
								iVar54++;
							}
							iVar53++;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							if (func_13(bVar36, 0, 1) && !BitTest(iVar50, bVar36))
							{
								bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							}
							else
							{
								bVar36 = func_107();
							}
							if (func_598(bVar36))
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar45 = bVar36;
									iVar43 = Global_1853988[bVar45 /*867*/].f_205.f_6;
									Var39 = { func_590(bVar36) };
									*(uParam4[iVar53 /*13*/]) = { func_147(bVar36) };
									iVar38 = func_584(bVar36);
									sVar37 = "";
									if (iVar38 != 0)
									{
										sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
									}
									Global_1836371++;
									iVar52 = func_577(bVar36, 1);
									if (bVar34)
									{
										if (func_85(bVar36, 1))
										{
											iVar54 = iVar1[iVar53];
										}
										else
										{
											iVar54 = (iVar0 + iVar57);
											iVar57++;
										}
									}
									uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
									func_558(bVar36, PLAYER::GET_PLAYER_NAME(bVar36), iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar52, iVar51);
									iVar54++;
								}
							}
							iVar53++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_555(uParam3, iParam1, iParam2);
						}
						func_37(&(uParam3->f_21));
						func_554();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_553(uParam3, iParam1);
							func_552(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_553(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_548(uParam3))
						{
							Global_1836595 = 1;
						}
						func_546(uParam3);
						if (Global_1836595 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836595 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_554();
			func_610(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_546(var uParam0)//Position - 0x1582B
{
	if (!func_38(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_37(&(uParam0->f_21));
		func_547(0);
	}
}

void func_547(bool bParam0)//Position - 0x15867
{
	if (bParam0)
	{
		if (Global_1836595 != 2)
		{
			Global_1836595 = 2;
		}
	}
	else
	{
		switch (Global_1836595)
		{
			case 0:
				Global_1836595 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_548(var uParam0)//Position - 0x158AD
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_107() && func_13(bVar15, 0, 1))
	{
		Var2 = { func_147(bVar15) };
		iVar1 = func_551(uParam0, uParam0->f_37);
		if (func_550(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_549(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_549(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_549(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_549(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_549(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_549(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_549(var uParam0, int iParam1, int iParam2)//Position - 0x159DA
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_550(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x159EC
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_551(var uParam0, int iParam1)//Position - 0x159FC
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_552(int* iParam0, bool bParam1, int iParam2)//Position - 0x15A0C
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_553(var uParam0, int* iParam1)//Position - 0x15A44
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_554()//Position - 0x15A79
{
	if (Global_1836595 != 0)
	{
		Global_1836595 = 0;
	}
}

void func_555(var uParam0, int* iParam1, int iParam2)//Position - 0x15A8E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_107())
		{
			if (func_13(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_557(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_556(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853988[iVar0 /*867*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_556(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15B03
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_557(int iParam0, bool bParam1, int iParam2)//Position - 0x15B40
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_558(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x15B87
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_574() && iParam4 < func_573())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836373)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836595 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_572("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_572(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_572("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_572("");
			if (uParam3->f_108 == 6)
			{
				func_572("");
			}
			else
			{
				func_572(&sParam5);
			}
			func_563(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_562(uParam3))
			{
				func_561("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_560(uParam3))
			{
				func_561("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_559(uParam3))
			{
				func_561("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_561("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_559(var uParam0)//Position - 0x15CAE
{
	return BitTest(uParam0->f_33, 6);
}

bool func_560(var uParam0)//Position - 0x15CBC
{
	return BitTest(uParam0->f_33, 5);
}

void func_561(char* sParam0)//Position - 0x15CCA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_562(var uParam0)//Position - 0x15CDC
{
	if (func_560(uParam0) && func_559(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_563(var uParam0, bool bParam1)//Position - 0x15CFD
{
	if (func_571(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_567(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657704[bParam1 /*463*/].f_433, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_564())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_564()//Position - 0x15D78
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_565() || func_98())
		{
			return 1;
		}
	}
	return 0;
}

int func_565()//Position - 0x15D9D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_98();
	}
	return func_566(Global_4718592.f_117591);
}

int func_566(int iParam0)//Position - 0x15DC1
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5025[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_567(bool bParam0)//Position - 0x15DFB
{
	if ((func_13(bParam0, 0, 1) && func_568()) && func_198(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_568()//Position - 0x15E28
{
	if (func_454(PLAYER::PLAYER_ID()) || func_570())
	{
		if (!func_569(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_569(int iParam0)//Position - 0x15E56
{
	if (func_312(iParam0) == 236 || func_312(iParam0) == 150)
	{
		return func_484(iParam0);
	}
	return 0;
}

int func_570()//Position - 0x15E83
{
	switch (func_252(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_571(bool bParam0)//Position - 0x15EC1
{
	if (func_564())
	{
		if (func_13(bParam0, 0, 1))
		{
			return func_86(bParam0);
		}
	}
	if ((func_13(bParam0, 0, 1) && func_568()) && func_200(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_572(char* sParam0)//Position - 0x15F09
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_573()//Position - 0x15F17
{
	int iVar0;
	
	if (Global_1836373)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_574()//Position - 0x15F33
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836373)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_575(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x15F4B
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_574() && iParam3 < func_573())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836373)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836595 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_572("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_561(sParam16);
				}
				else
				{
					func_572(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_572("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_599())
				{
					func_572("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_561(&(uParam2->f_104));
					}
					else
					{
						func_572("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_572("");
				}
				if (uParam2->f_108 == 6)
				{
					func_572("");
				}
				else
				{
					func_572(&sParam4);
				}
				func_563(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_572("");
					func_572("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_562(uParam2))
				{
					func_561("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_560(uParam2))
				{
					func_561("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_559(uParam2))
				{
					func_561("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_561("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_576(int iParam0)//Position - 0x162A2
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_577(bool bParam0, bool bParam1)//Position - 0x162C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_454(bParam0)) && !func_111(bParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_83(bParam0);
	if (!iVar1 == -1)
	{
		return func_81(iVar1);
	}
	return iVar0;
}

char* func_578(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x16310
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB" /* GXT: m */;
				}
				else if (bParam2)
				{
					return "AMCH_M" /* GXT: ~1~m */;
				}
				else
				{
					return "AMCH_METRES" /* GXT:  meters */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB" /* GXT: ft */;
			}
			else if (bParam2)
			{
				return "AMCH_FT" /* GXT: ~1~ft */;
			}
			else
			{
				return "AMCH_FEET" /* GXT:  feet */;
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB" /* GXT: km/h */;
				}
				else if (bParam2)
				{
					return "AMCH_KMHN" /* GXT: ~1~km/h */;
				}
				else
				{
					return "AMCH_KMH" /* GXT:  km/h */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB" /* GXT: mph */;
			}
			else if (bParam2)
			{
				return "AMCH_MPHN" /* GXT: ~1~mph */;
			}
			else
			{
				return "AMCH_MPH" /* GXT:  mph */;
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH" /* GXT:  vehicles */;
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS" /* GXT:  kills */;
			}
			else
			{
				return "AMCH_KILL" /* GXT:  kill */;
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY" /* GXT: ~r~~s~ */;
}

int func_579(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1649D
{
	if (func_583(iParam3))
	{
		*fParam1 = (func_580(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_576(iParam3))
	{
		*fParam1 = (func_580(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_580(int iParam0, int iParam1)//Position - 0x164ED
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_582(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_581(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_581(float fParam0)//Position - 0x16590
{
	return (fParam0 / 1.609344f);
}

float func_582(float fParam0)//Position - 0x165A0
{
	return (fParam0 / 0.3048f);
}

int func_583(int iParam0)//Position - 0x165B0
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_584(bool bParam0)//Position - 0x1660C
{
	int iVar0;
	
	iVar0 = func_587(bParam0);
	if (iVar0 == -1)
	{
		func_585(bParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_585(bool bParam0, bool bParam1)//Position - 0x16642
{
	if (!func_13(bParam0, 0, 1))
	{
		return;
	}
	if (func_587(bParam0) != -1)
	{
		return;
	}
	if (Global_1666648)
	{
		if (bParam0 == Global_1666648.f_1)
		{
			return;
		}
	}
	if (func_586(bParam0))
	{
		return;
	}
	if (Global_1666686 >= 32)
	{
		return;
	}
	Global_1666653[Global_1666686] = bParam0;
	Global_1666686++;
	if (bParam1)
	{
	}
}

int func_586(bool bParam0)//Position - 0x166AE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666686)
	{
		if (Global_1666653[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_587(bool bParam0)//Position - 0x166E0
{
	int iVar0;
	
	if (!func_13(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666646 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666646)
	{
		if (Global_1666485[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_588(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_588(int iParam0)//Position - 0x1675F
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1666646)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666485[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1666646)
	{
		Global_1666485[iVar32 /*5*/] = { Global_1666485[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_589(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_589(var uParam0)//Position - 0x16815
{
	*uParam0 = 0;
	uParam0->f_1 = func_107();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_590(bool bParam0)//Position - 0x16842
{
	char cVar0[32];
	
	if (func_13(bParam0, 0, 1))
	{
		Global_2764376 = { func_147(bParam0) };
		if (func_192())
		{
			if (func_550(Global_2764376))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764376))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_594(&Global_2764376))
		{
			Global_2764306 = { func_592(bParam0) };
			func_591(&Global_2764306, &cVar0);
		}
	}
	return cVar0;
}

void func_591(var* uParam0, char* sParam1)//Position - 0x168C3
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_592(bool bParam0)//Position - 0x168D5
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_593(bParam0))
	{
		return Global_1575095[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_147(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_593(int iParam0)//Position - 0x16911
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_594(var* uParam0)//Position - 0x16927
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_595(bool bParam0, int iParam1, bool bParam2)//Position - 0x1694D
{
	if (iParam1 == 27)
	{
		if ((func_7(bParam0) || func_597(bParam0)) || func_6(bParam0))
		{
			return 0;
		}
	}
	if (!func_596(bParam0))
	{
		return 0;
	}
	if (!func_605(bParam0) && !func_603(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_596(bool bParam0)//Position - 0x169AC
{
	return BitTest(Global_1853988[bParam0 /*867*/].f_139, 22);
}

int func_597(bool bParam0)//Position - 0x169C2
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1895156[bParam0 /*609*/].f_1, 10) || BitTest(Global_1895156[bParam0 /*609*/].f_1, 9));
	}
	return 0;
}

int func_598(bool bParam0)//Position - 0x169FA
{
	bool bVar0;
	
	if (bParam0 == func_107())
	{
		return 0;
	}
	if (func_71(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853988[bVar0 /*867*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_599()//Position - 0x16A3C
{
	switch (func_252(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_312(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_111(PLAYER::PLAYER_ID()))
	{
		switch (func_252(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_569(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_600(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x16B76
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_71(bVar1, 0))
			{
				if (func_605(bVar1) || func_603(bVar1, bParam4))
				{
					if (func_601(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_601(bool bParam0, int iParam1, bool bParam2)//Position - 0x16BEF
{
	if (func_106(iParam1))
	{
		if (!bParam2)
		{
			if (func_602(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1895156[bParam0 /*609*/].f_10 != func_107())
		{
			return iParam1 == Global_1895156[bParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_602(int iParam0, int iParam1)//Position - 0x16C39
{
	if (iParam1 != func_107())
	{
		if (iParam0 != func_107())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 != func_107())
			{
				if (Global_1895156[iParam0 /*609*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_603(bool bParam0, bool bParam1)//Position - 0x16C7E
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657704[bParam0 /*463*/].f_246 != -1 || func_604(bParam0));
}

bool func_604(int iParam0)//Position - 0x16CA8
{
	return Global_1853988[iParam0 /*867*/].f_192 != 0;
}

int func_605(bool bParam0)//Position - 0x16CBD
{
	if (!func_13(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_13(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_606(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_252(bParam0) == 233) || func_252(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_606(int iParam0)//Position - 0x16D26
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_607(PLAYER::PLAYER_ID());
	bVar1 = func_607(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_607(int iParam0)//Position - 0x16D62
{
	return func_608(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_608(var uParam0, int iParam1)//Position - 0x16D7B
{
	return BitTest(*uParam0, iParam1);
}

void func_609(int* iParam0, int iParam1, int iParam2)//Position - 0x16D89
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_610(bool bParam0)//Position - 0x16DB7
{
	if (bParam0)
	{
		if (Global_1654051.f_2 == 0)
		{
			Global_1654051.f_2 = 1;
		}
	}
	else if (Global_1654051.f_2 == 1)
	{
		Global_1654051.f_2 = 0;
	}
}

void func_611()//Position - 0x16DE9
{
	if (BitTest(Global_2794162.f_4694, 1))
	{
		if (func_185())
		{
			func_202();
		}
	}
}

int func_612()//Position - 0x16E08
{
	if (BitTest(Global_2794162.f_4694, 0) && func_185())
	{
		return 1;
	}
	if (BitTest(Global_2794162.f_4694, 1) && func_185())
	{
		return 1;
	}
	return 0;
}

int func_613()//Position - 0x16E43
{
	if (func_185())
	{
		if (func_46(Global_2672524.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_614()//Position - 0x16E6A
{
	if (func_185())
	{
		if (func_59(Global_2672524.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_615(int iParam0)//Position - 0x16E91
{
	if (Global_1654051.f_1 != Global_1654051)
	{
		Global_1654051.f_1 = Global_1654051;
	}
	if (Global_1654051 != iParam0)
	{
		Global_1654051 = iParam0;
	}
}

int func_616(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x16EBF
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_661(iParam1);
	fVar7 = func_660();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_659())
		{
			if (func_658() > 0 && Global_1836373)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_647())
		{
			func_646(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2794162.f_4697, 26))
	{
		func_646(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_38(&(uParam2->f_19)))
	{
		if (func_658() == 1)
		{
			func_645(bVar6, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_646(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2794162.f_4699), 5);
		}
	}
	if (func_38(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_658() == 0 && !bParam5))
		{
			func_646(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_644();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_644();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_645(bVar6, iParam0, 0))
				{
					func_609(iParam0, 0, 0);
					sVar4 = func_642(iParam1, &(Global_4718592.f_117598), bParam4);
					Var0 = { func_640(iParam1) };
					if (bParam4)
					{
						func_637(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_631(iParam0, func_634(uParam2), func_632(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_625(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_623(iParam0, sVar9, func_624(), -1);
					}
					else if (func_564())
					{
						uParam2->f_34 = Global_1836372;
						func_637(iParam0, sVar4, &Var0, 1, -1, Global_1836372, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_618(iParam1);
						uParam2->f_34 = Global_1836372;
						func_637(iParam0, sVar4, "", 0, iVar8, func_617(), 1);
					}
					else
					{
						iVar8 = func_618(iParam1);
						func_637(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836371 = uParam3;
				Global_1836370 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836372)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_617()//Position - 0x17192
{
	return Global_1836372;
}

int func_618(int iParam0)//Position - 0x1719E
{
	int iVar0;
	
	iVar0 = -1;
	if (func_622())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 42:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
		case 43:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_621(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_620(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_619(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_253())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_619(int iParam0)//Position - 0x17309
{
	return Global_2657704[iParam0 /*463*/].f_121 == 4;
}

bool func_620(int iParam0)//Position - 0x1731E
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

bool func_621(int iParam0)//Position - 0x17333
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_622()//Position - 0x17348
{
	return Global_4718592.f_1 == 0;
}

void func_623(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17358
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_561(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_561("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_624()//Position - 0x173B7
{
	switch (func_252(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

char* func_625(var uParam0)//Position - 0x1740F
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (func_252(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		
		case 148:
			if (func_627())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_289(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_289(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		
		case 192:
			if (func_626(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_626(int iParam0)//Position - 0x1783B
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_627()//Position - 0x1786D
{
	return (func_630() && func_628(func_629()));
}

int func_628(int iParam0)//Position - 0x17886
{
	return func_200(iParam0, 1);
}

int func_629()//Position - 0x17895
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

bool func_630()//Position - 0x178AC
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148;
}

void func_631(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x178C2
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_561(sParam1);
		}
		else if (func_312(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_561("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_632(var uParam0)//Position - 0x17949
{
	int iVar0;
	
	iVar0 = func_312(PLAYER::PLAYER_ID());
	if (func_633())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 133:
			switch (func_311())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

bool func_633()//Position - 0x17AF4
{
	return Global_1853861;
}

char* func_634(var uParam0)//Position - 0x17B00
{
	int iVar0;
	
	iVar0 = func_312(PLAYER::PLAYER_ID());
	if (func_633())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		
		case 132:
			if (func_636() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_636() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_311())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				
				case 16:
					return "AMCH_20SLC" /* GXT: Driveby */;
				
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		
		case 129:
			if (func_635() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}

int func_635()//Position - 0x17CF3
{
	return Global_2794162.f_5155;
}

int func_636()//Position - 0x17D02
{
	if (func_312(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2794162.f_5150;
	}
	return -1;
}

void func_637(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17D25
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_572(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_561(sParam1);
		}
		if (func_659() && iParam6)
		{
			if (func_639())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT" /* GXT: (~1~/~1~) */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_561(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_638(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_56())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_638(int iParam0)//Position - 0x17DE6
{
	if (func_621(iParam0) || func_620(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_639()//Position - 0x17E08
{
	return Global_1836373;
}

struct<4> func_640(int iParam0)//Position - 0x17E14
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_641(PLAYER::PLAYER_ID()) || func_619(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_1749, 16);
			break;
	}
	if (func_564() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_1749, 16);
	}
	return Var0;
}

bool func_641(int iParam0)//Position - 0x17EB1
{
	return Global_2657704[iParam0 /*463*/].f_121 == 5;
}

char* func_642(int iParam0, char* sParam1, bool bParam2)//Position - 0x17EC6
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_564() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_643();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 25)
	{
		if (Global_1836615 == 0)
		{
			Global_1836615 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836615 == 1)
		{
			Global_1836615 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836615 == 0)
		{
			Global_1836615 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
			case 42:
				return "HUD_LBD_DM" /* GXT: Deathmatch Leaderboard */;
				break;
			
			case 1:
				return "HUD_LBD_TDM" /* GXT: Team Deathmatch Leaderboard */;
				break;
			
			case 5:
				return "HUD_LBD_GRCE" /* GXT: GTA Race Leaderboard */;
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE" /* GXT: Race Leaderboard */;
				break;
			
			case 7:
				return "HUD_LBD_BRCE" /* GXT: Parachute Race Leaderboard */;
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD" /* GXT: Survival Leaderboard */;
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_643()//Position - 0x18030
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_644()//Position - 0x18074
{
	Global_44323 = 1;
}

bool func_645(bool bParam0, int* iParam1, bool bParam2)//Position - 0x18080
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_646(int* iParam0, var uParam1, bool bParam2)//Position - 0x180C0
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836371 = 0;
	func_554();
	Global_1836370 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_19)))
		{
			func_37(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2794162.f_4699), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_647()//Position - 0x1812F
{
	if (func_657())
	{
		return 0;
	}
	if (func_535())
	{
		return 0;
	}
	if (!func_655())
	{
		return 0;
	}
	if (!func_520())
	{
		return 0;
	}
	if (func_654(8, -1))
	{
		return 0;
	}
	if (func_658() == 2)
	{
		return 0;
	}
	if (Global_2794162.f_4649)
	{
		return 0;
	}
	if (func_308())
	{
		return 0;
	}
	else if (!func_347(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_653(1) || func_651(1)) || Global_23251.f_124) || Global_23251)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_650() && Global_1970692 == 2)
	{
		return 0;
	}
	if (func_104(PLAYER::PLAYER_ID()) && !func_650())
	{
		return 0;
	}
	if (Global_1935879)
	{
		return 0;
	}
	if (Global_1935884)
	{
		return 0;
	}
	if (func_649(0))
	{
		return 0;
	}
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 4))
	{
		return 0;
	}
	if (Global_1648760)
	{
		return 0;
	}
	if ((Global_1964804.f_718.f_5 || Global_1967630.f_718.f_5) || Global_1963832.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1971696.f_724.f_5 || Global_1971696.f_744.f_724.f_5) || Global_1971696.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1978495.f_726.f_5)
	{
		return 0;
	}
	if (func_648(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1648802 || Global_1648803) || Global_1648804)
	{
		return 0;
	}
	return 1;
}

int func_648(int iParam0)//Position - 0x18307
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 6);
}

bool func_649(int iParam0)//Position - 0x1832C
{
	return BitTest(Global_2794162.f_5231.f_48, iParam0);
}

bool func_650()//Position - 0x18340
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 0));
}

int func_651(bool bParam0)//Position - 0x1835C
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_652(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23251.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_652(int iParam0)//Position - 0x18447
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_653(bool bParam0)//Position - 0x184A4
{
	if (bParam0)
	{
		return (Global_23251.f_4 && Global_23251.f_104 == 4);
	}
	return Global_23251.f_4;
}

bool func_654(int iParam0, int iParam1)//Position - 0x184CD
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

int func_655()//Position - 0x18505
{
	if (func_656())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_656()//Position - 0x18544
{
	return Global_1574604;
}

bool func_657()//Position - 0x18550
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_658()//Position - 0x18565
{
	return Global_1654054.f_68;
}

int func_659()//Position - 0x18573
{
	if (Global_1836372 > 16)
	{
		return 1;
	}
	return 0;
}

float func_660()//Position - 0x18589
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_661(int iParam0)//Position - 0x185AD
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_662()//Position - 0x185DF
{
	if (func_665())
	{
		return 1;
	}
	if (func_6(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_633())
	{
		return 1;
	}
	if (func_454(PLAYER::PLAYER_ID()))
	{
		switch (func_312(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_663(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_663(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_663(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_663(int iParam0)//Position - 0x186BA
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_1, 4);
}

int func_664(int iParam0)//Position - 0x186CF
{
	if (iParam0 == 28)
	{
		if ((func_454(PLAYER::PLAYER_ID()) && !func_111(PLAYER::PLAYER_ID())) && !func_569(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_117(PLAYER::PLAYER_ID(), 0) && func_111(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_527(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_665()//Position - 0x1873E
{
	if (func_666(PLAYER::PLAYER_ID()))
	{
		return Global_1581969;
	}
	return 0;
}

int func_666(bool bParam0)//Position - 0x18759
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_71(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_667()//Position - 0x1877C
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_362)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_362));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_668(bVar0, 2);
		}
	}
	iLocal_362++;
	if (iLocal_362 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_362 = 0;
	}
}

void func_668(bool bParam0, int iParam1)//Position - 0x187C5
{
	bool bVar0;
	
	if (BitTest(Global_1836866.f_1, 0))
	{
		return;
	}
	if (func_38(&(Global_1836866.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836866.f_2, bParam0))
	{
		if (Global_1836866 < iParam1 && BitTest(Global_1836866.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 0);
			return;
		}
		if (Global_1836866 != 0)
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 1);
		}
		Global_1836866 = 0;
		Global_1836866.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836866.f_2), bParam0);
	bVar0 = true;
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (func_669(bParam0))
	{
		bVar0 = false;
	}
	if (func_71(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836866++;
	}
}

bool func_669(bool bParam0)//Position - 0x1888A
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 10);
}

void func_670(int iParam0, int iParam1)//Position - 0x188A0
{
	Local_3457[iParam0 /*5*/] = iParam1;
}

int func_671()//Position - 0x188B1
{
	struct<71> Var0;
	int iVar71;
	int iVar72;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2794162.f_5079 = { Var0 };
	iVar71 = 0;
	while (iVar71 < func_672())
	{
		Global_2794162.f_5079.f_38[iVar71] = -1;
		iVar71++;
	}
	iVar72 = 0;
	while (iVar72 < 32)
	{
		Local_1566.f_534[iVar72 /*42*/].f_1 = func_107();
		iVar72++;
	}
	return 1;
}

int func_672()//Position - 0x18924
{
	if (Global_2691837)
	{
		return 32;
	}
	return (32 - Global_2691838);
}

int func_673()//Position - 0x1893F
{
	return Local_816.f_0;
}

int func_674(int iParam0)//Position - 0x1894A
{
	return Local_3457[iParam0 /*5*/];
}

void func_675()//Position - 0x18959
{
	if (BitTest(Global_1836866.f_1, 6))
	{
		func_700();
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 6);
	}
	if (!BitTest(Global_1836866.f_1, 7))
	{
		if (BitTest(Global_1836866.f_1, 4) || BitTest(Global_1836866.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_185()) && func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 7);
				func_178("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_177(1);
			}
		}
		else if (BitTest(Global_1836866.f_1, 17))
		{
			if (func_352() && !func_364())
			{
				MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
				MISC::SET_BIT(&(Global_1836866.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836866.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2794162.f_853, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_698())
			{
				func_178("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_252(PLAYER::PLAYER_ID()) != 200)
				{
					func_177(1);
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_469(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836866.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_185()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !func_363(PLAYER::PLAYER_ID(), 21)) && !func_363(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 9);
			func_697(0);
			func_178("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_177(1);
		}
	}
	if (func_454(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836866.f_1, 18))
		{
			if ((func_363(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836866.f_1, 20)) && !BitTest(Global_1836866.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 18);
			}
		}
		else if (BitTest(Global_1836866.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_185()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_696())
			{
				MISC::CLEAR_BIT(&(Global_1836866.f_1), 18);
				MISC::SET_BIT(&(Global_1836866.f_1), 19);
				func_178("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_177(1);
			}
		}
	}
	if (((((func_454(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && func_312(PLAYER::PLAYER_ID()) != 146) && !func_6(PLAYER::PLAYER_ID())) && !func_542(PLAYER::PLAYER_ID())) && !func_686())
	{
		if (func_468(func_312(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836866.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 22);
		}
		if (func_484(PLAYER::PLAYER_ID()) || func_462())
		{
			if (!BitTest(Global_1836866.f_1, 10))
			{
				if (func_684(func_312(PLAYER::PLAYER_ID())))
				{
					if (func_295(0) && !Global_4593985)
					{
						MISC::SET_BIT(&(Global_1836866.f_1), 9);
					}
					if (!Global_4593985)
					{
						func_466(1);
						MISC::SET_BIT(&(Global_1836866.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 10);
			}
		}
		if (func_469(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836866.f_1, 11))
			{
				if (!Global_100885.f_8)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 12);
					func_464(1);
				}
				if (!func_683())
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 13);
					func_463();
				}
				if (!Global_4593985)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 14);
					if (func_295(0) && !Global_4593985)
					{
						MISC::SET_BIT(&(Global_1836866.f_1), 9);
					}
					func_466(1);
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 11);
			}
		}
		else
		{
			func_681(0);
		}
	}
	else
	{
		func_681(1);
	}
	func_676();
	if (func_461(func_312(PLAYER::PLAYER_ID())) && !BitTest(Global_1836866.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 21);
	}
	if (((func_352() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
	}
}

void func_676()//Position - 0x18E60
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_185())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_507(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836866.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836866.f_1), 26);
				}
				func_677(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836866.f_1, 26))
	{
		func_37(&(Global_1836866.f_22));
		MISC::SET_BIT(&(Global_1836866.f_1), 26);
	}
}

void func_677(int iParam0, int iParam1)//Position - 0x18EFD
{
	if (!func_38(&(Global_1836866.f_22)))
	{
		func_2(&(Global_1836866.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836866.f_22), iParam1, 0))
	{
		if (func_658() > 0)
		{
			func_680(iParam0);
			if (func_175("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_37(&(Global_1836866.f_22));
		}
	}
	else
	{
		func_679(0);
		func_678();
	}
}

void func_678()//Position - 0x18F65
{
	Global_2794162.f_4636 = 0;
}

void func_679(int iParam0)//Position - 0x18F75
{
	Global_1654054.f_68 = iParam0;
}

void func_680(int iParam0)//Position - 0x18F85
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_681(int iParam0)//Position - 0x18FD1
{
	if ((BitTest(Global_1836866.f_1, 11) || (BitTest(Global_1836866.f_1, 10) && iParam0)) || (BitTest(Global_1836866.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836866.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 12);
			func_464(0);
		}
		if (BitTest(Global_1836866.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 13);
			func_682();
		}
		if (BitTest(Global_1836866.f_1, 14) && !func_117(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 14);
			func_466(0);
		}
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 22);
	}
}

void func_682()//Position - 0x1909A
{
	MISC::CLEAR_BIT(&(Global_2794162.f_5069), 0);
}

bool func_683()//Position - 0x190AE
{
	return BitTest(Global_2794162.f_5069, 0);
}

int func_684(int iParam0)//Position - 0x190BF
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_469(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_462() || func_685(func_311()));
		
		default:
	}
	return 0;
}

int func_685(int iParam0)//Position - 0x1912F
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_686()//Position - 0x19167
{
	if (((((((((func_695() || func_694()) || func_693()) || func_308()) || (func_692() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_689() && !func_688())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_687() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_687()//Position - 0x191FB
{
	return Global_1057409;
}

bool func_688()//Position - 0x19207
{
	return BitTest(Global_2683883.f_2, 27);
}

int func_689()//Position - 0x19218
{
	if (func_691() || func_690())
	{
		return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 == 8;
	}
	return 0;
}

var func_690()//Position - 0x19245
{
	return Global_2683883.f_735;
}

var func_691()//Position - 0x19254
{
	return BitTest(Global_2683883.f_2, 11);
}

var func_692()//Position - 0x19265
{
	return BitTest(Global_2683883, 5);
}

var func_693()//Position - 0x19273
{
	return BitTest(Global_2683883, 2);
}

var func_694()//Position - 0x19281
{
	return BitTest(Global_2683883, 20);
}

bool func_695()//Position - 0x19290
{
	return Global_2683883.f_698;
}

bool func_696()//Position - 0x1929F
{
	return Global_2794162.f_5164 != -1;
}

void func_697(int iParam0)//Position - 0x192B0
{
	int iVar0;
	
	iVar0 = func_237(2537, -1);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_230(2537, iVar0, -1, 1);
}

int func_698()//Position - 0x193C2
{
	int iVar0;
	
	if (!func_38(&(Global_1836866.f_15)))
	{
		func_2(&(Global_1836866.f_15), 0, 0);
		Global_1836866.f_17 = 0;
	}
	else if (func_1(&(Global_1836866.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_699(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_31(PLAYER::PLAYER_ID()), func_31(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836866.f_17++;
		if (Global_1836866.f_17 >= 32)
		{
			Global_1836866.f_17 = 0;
			func_37(&(Global_1836866.f_15));
		}
	}
	return 0;
}

int func_699(int iParam0, int iParam1)//Position - 0x1948A
{
	int iVar0;
	
	if (func_377() != 0)
	{
		return 0;
	}
	if (!func_236(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853988[iVar0 /*867*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_700()//Position - 0x194C3
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_702();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836866.f_1), 8);
	func_701();
}

void func_701()//Position - 0x194E9
{
	if (Global_1945796)
	{
		if (BitTest(Global_1945797, 0))
		{
			MISC::CLEAR_BIT(&Global_2803781, 0);
		}
		if (BitTest(Global_1945797, 1))
		{
			MISC::CLEAR_BIT(&Global_2803781, 1);
		}
		if (BitTest(Global_1945797, 5))
		{
			MISC::CLEAR_BIT(&Global_2803781, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1945797 = 0;
	}
	Global_1945796 = 0;
}

void func_702()//Position - 0x195E0
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227))
	{
		if (!Global_2794162.f_5227 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2794162.f_5226 < 1f)
		{
			return;
		}
	}
	Global_2794162.f_5227 = -1;
	Global_2794162.f_5226 = 1f;
}

int func_703()//Position - 0x19627
{
	if (func_704())
	{
		return 1;
	}
	return 0;
}

bool func_704()//Position - 0x1963B
{
	return Global_1836866.f_24;
}

int func_705()//Position - 0x19649
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_708())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706(159))
	{
		if (!func_695())
		{
			return 1;
		}
	}
	if (func_706(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_471() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_471()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_706(int iParam0)//Position - 0x196CD
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_707()//Position - 0x196E4
{
	return Global_2694576;
}

bool func_708()//Position - 0x196F0
{
	return Global_2683883.f_693;
}

void func_709()//Position - 0x196FF
{
	SYSTEM::WAIT(0);
}

void func_710()//Position - 0x1970C
{
	var uVar0[4];
	int iVar5;
	var uVar6;
	
	func_187();
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (BitTest(uLocal_800, iVar5) && !AUDIO::HAS_SOUND_FINISHED(iLocal_801[iVar5]))
		{
			AUDIO::STOP_SOUND(iLocal_801[iVar5]);
			AUDIO::RELEASE_SOUND_ID(iLocal_801[iVar5]);
		}
		iVar5++;
	}
	func_457();
	func_510(0);
	func_714(132, 0, Local_816.f_8 == 6);
	func_477(22, 0);
	Global_2794162.f_5150 = -1;
	uVar0[0] = Local_816.f_3[0];
	uVar0[1] = Local_816.f_3[1];
	uVar0[2] = Local_816.f_3[2];
	uVar0[3] = Local_816.f_3[3];
	func_713(&(uVar0[0]));
	func_713(&(uVar0[1]));
	func_713(&(uVar0[2]));
	func_713(&(uVar0[3]));
	if (func_705())
	{
		Local_3445.f_5 = 5;
	}
	else if (BitTest(Local_816.f_2, 2))
	{
		Local_3445.f_5 = 6;
	}
	else if (Local_3445.f_5 != 1)
	{
		Local_3445.f_5 = 2;
	}
	Local_3445.f_0 = Local_816.f_724;
	Local_3445.f_1 = Local_816.f_725;
	Local_3445.f_4 = Local_816.f_726;
	Local_3445.f_3 = Local_816.f_728;
	Local_3445.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_3445.f_9);
	uVar6 = Local_816.f_712;
	if (Local_816.f_707)
	{
		uVar6 = Local_816.f_712 + 4;
	}
	if (!Global_262145.f_12146 /* Tunable: CHECKPOINTS_DISABLE_SHARE_CASH */)
	{
		if (Local_3445.f_6 > 0)
		{
		}
	}
	Local_3445.f_6 = (Local_3445.f_6 + iLocal_379);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_711(Local_3445, uVar6, Local_3457[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_503(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_711(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17)//Position - 0x198C2
{
	char* sVar0;
	struct<13> Var1;
	struct<17> Var14;
	struct<18> Var31;
	struct<14> Var55;
	struct<13> Var69;
	struct<14> Var82;
	struct<14> Var96;
	struct<16> Var110;
	struct<13> Var126;
	struct<14> Var139;
	struct<14> Var153;
	struct<13> Var167;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_78689)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_712()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			Var14.f_15 = uParam15;
			Var14.f_16 = uParam16;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var31 = { Param0 };
			Var31.f_12 = uParam12;
			Var31.f_13 = iParam13;
			Var31.f_14 = iParam14;
			Var31.f_15 = uParam15;
			Var31.f_16 = uParam16;
			Var31.f_17 = uParam17;
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var31);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var55 = { Param0 };
			Var55.f_12 = uParam12;
			Var55.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var55.f_13 = (Var55.f_13 / 10f);
			}
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var55);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var69 = { Param0 };
			Var69.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var69);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var82 = { Param0 };
			Var82.f_12 = uParam12;
			Var82.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var96 = { Param0 };
			Var96.f_12 = uParam12;
			Var96.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var96);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var110 = { Param0 };
			Var110.f_12 = uParam12;
			Var110.f_13 = iParam13;
			Var110.f_14 = iParam14;
			Var110.f_15 = uParam15;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var110);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var126 = { Param0 };
			Var126.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var126);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var139 = { Param0 };
				Var139.f_12 = uParam12;
				Var139.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var139);
			}
			else
			{
				Var153 = { Param0 };
				Var153.f_12 = uParam12;
				Var153.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var153);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var167 = { Param0 };
			Var167.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var167);
		}
	}
}

char* func_712()//Position - 0x19B49
{
	switch (Global_2697098)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_713(int* iParam0)//Position - 0x19B6B
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(*iParam0, bVar0))
		{
			MISC::CLEAR_BIT(iParam0, bVar0);
		}
		else
		{
			MISC::SET_BIT(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_714(int iParam0, bool bParam1, bool bParam2)//Position - 0x19BA2
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 13);
		}
		if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836866.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 21);
	}
	func_744();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_743(func_312(PLAYER::PLAYER_ID()));
		func_477(func_478(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_742(PLAYER::PLAYER_ID()) >= 12)
		{
			func_741(2549, -1);
			iVar1 = func_237(2549, -1);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836892, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836892, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836892, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836892, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836892, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836892, 5);
			}
		}
		func_740();
		func_739();
		func_738();
		if ((!func_113(PLAYER::PLAYER_ID()) && !func_184(PLAYER::PLAYER_ID())) && !func_486())
		{
			func_722();
		}
		func_721();
		if (!BitTest(Global_1948431.f_3, 0) && !BitTest(Global_1948431.f_3, 1))
		{
			func_700();
		}
		func_720();
		MISC::CLEAR_BIT(&(Global_2794162.f_1848), 2);
		func_186();
		func_170();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_363(PLAYER::PLAYER_ID(), 21)) && !func_363(PLAYER::PLAYER_ID(), 25)) && !func_117(PLAYER::PLAYER_ID(), 0))
		{
			func_466(0);
			func_464(0);
			if (!bParam1)
			{
				func_719();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(26, -1))
		{
			Global_2696922 = -1;
			func_39(26, -1);
		}
	}
	if (!func_715())
	{
		Global_2764267 = 1;
	}
}

int func_715()//Position - 0x19DFE
{
	if (((((((!func_638(PLAYER::PLAYER_ID()) && !func_619(PLAYER::PLAYER_ID())) && func_312(PLAYER::PLAYER_ID()) != 146) && !func_718()) && !func_717()) && !func_716(Global_4718592.f_171044)) && !func_96()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_716(int iParam0)//Position - 0x19E79
{
	return iParam0 == 57;
}

int func_717()//Position - 0x19E86
{
	if (Global_4718592.f_117591 == Global_262145.f_10235 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_718()//Position - 0x19EA7
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_171044 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_719()//Position - 0x19F3F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4543629[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4543629[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4543629[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_720()//Position - 0x19F8F
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836866 = { Var0 };
}

void func_721()//Position - 0x19FBE
{
	var uVar0;
	
	Global_1581969 = uVar0;
}

void func_722()//Position - 0x19FCC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_24), &Global_2639951, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_26), &Global_2639953, 19);
	func_736();
	func_725(1, 1, 0);
	func_723();
}

void func_723()//Position - 0x1A002
{
	func_724(0, 0);
}

void func_724(int iParam0, int iParam1)//Position - 0x1A010
{
	Global_2635560.f_22 = iParam0;
	Global_2635560.f_23 = iParam1;
}

void func_725(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1A028
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_45), &Global_2639972, 323);
	}
	else
	{
		Global_2635560.f_45 = { Global_2639972 };
		Global_2635560.f_45.f_49 = { Global_2639972.f_49 };
		Global_2635560.f_45.f_52 = Global_2639972.f_52;
		Global_2635560.f_45.f_53 = Global_2639972.f_53;
	}
	if (bParam0)
	{
		func_735();
	}
	if (!bParam2)
	{
		func_727(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_726(0);
	func_173();
}

void func_726(bool bParam0)//Position - 0x1A0CE
{
	if (bParam0)
	{
		Global_2635560.f_713 = 0;
	}
	else
	{
		Global_2635560.f_713 = 1;
	}
}

void func_727(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1A0EE
{
	if (bParam0)
	{
		if (func_734())
		{
			func_733();
		}
		Global_2635560.f_714.f_568 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635560.f_714.f_554 = iParam1;
		Global_2635560.f_714.f_555 = iParam2;
		Global_2635560.f_714.f_556 = iParam10;
		func_731();
		func_481(8, 0, 0, 0, 0);
		Global_2635560.f_714.f_557 = iParam11;
		Global_2635560.f_714.f_562 = iParam3;
		Global_2635560.f_714.f_563 = iParam4;
		Global_2635560.f_714.f_560 = iParam5;
		Global_2635560.f_714.f_561 = iParam6;
		Global_2635560.f_714.f_564 = iParam7;
		Global_2635560.f_714.f_565 = iParam8;
		Global_2635560.f_714.f_566 = iParam9;
		Global_2635560.f_714.f_567 = iParam14;
		Global_2635560.f_714.f_558 = iParam12;
		Global_2635560.f_714.f_559 = iParam13;
		Global_2635560.f_1853 = 1;
	}
	else
	{
		func_728();
	}
}

void func_728()//Position - 0x1A1D9
{
	if (func_734() && !func_730())
	{
		func_733();
	}
	if (func_730())
	{
		func_729();
	}
	else
	{
		func_731();
		func_481(0, 0, 0, 0, 0);
		Global_2635560.f_1853 = 0;
		Global_2635560.f_1852 = 0;
	}
}

void func_729()//Position - 0x1A221
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_714), &(Global_2635560.f_1283), 569);
	Global_2635560.f_490 = { Global_2635560.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		Global_2635560.f_1852 = 0;
	}
}

int func_730()//Position - 0x1A269
{
	if ((Global_2635560.f_1852 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_1283.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_1283.f_568))
	{
		return 1;
	}
	return 0;
}

void func_731()//Position - 0x1A2A8
{
	if (func_734() && !func_730())
	{
		func_733();
	}
	func_732();
	Global_2635560.f_714 = 0;
	Global_2635560.f_714.f_502 = 0;
}

void func_732()//Position - 0x1A2DC
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var6;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635560.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
	Var6 = -1;
	Var6.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635560.f_714.f_503[iVar0 /*3*/] = { Var6 };
		iVar0++;
	}
}

void func_733()//Position - 0x1A34D
{
	if (func_730())
	{
		if (Global_2635560.f_714.f_568 == Global_2635560.f_1283.f_568)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_1283), &(Global_2635560.f_714), 569);
		Global_2635560.f_496 = { Global_2635560.f_490 };
		Global_2635560.f_1852 = 1;
	}
}

int func_734()//Position - 0x1A3BB
{
	if ((Global_2635560.f_1853 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_714.f_568))
	{
		return 1;
	}
	return 0;
}

void func_735()//Position - 0x1A3FA
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_368), &Global_2640295, 121);
}

void func_736()//Position - 0x1A413
{
	func_737();
}

void func_737()//Position - 0x1A41F
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635560.f_2363[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635560.f_2362 = 0;
}

void func_738()//Position - 0x1A453
{
	Global_2794162.f_5069 = 0;
}

void func_739()//Position - 0x1A463
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1 = 0;
	}
}

void func_740()//Position - 0x1A481
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1895156[iVar0 /*609*/] = -1;
	}
}

void func_741(int iParam0, int iParam1)//Position - 0x1A49F
{
	int iVar0;
	
	iVar0 = func_237(iParam0, func_232(iParam1));
	iVar0++;
	func_230(iParam0, iVar0, iParam1, 1);
}

int func_742(int iParam0)//Position - 0x1A4C6
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

int func_743(int iParam0)//Position - 0x1A4DB
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_469(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_744()//Position - 0x1A53D
{
	if (BitTest(Global_2794162.f_1835, 3) || BitTest(Global_2794162.f_1835, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2794162.f_1835, 5))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 5);
	}
	if (BitTest(Global_2794162.f_1835, 3))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 3);
	}
	if (BitTest(Global_2794162.f_1835, 4))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 4);
	}
	func_747(0);
	func_746(0);
	func_745(0);
}

void func_745(int iParam0)//Position - 0x1A5CF
{
	if (Global_2794162.f_4624 != iParam0)
	{
		Global_2794162.f_4624 = iParam0;
	}
}

void func_746(bool bParam0)//Position - 0x1A5EC
{
	if (Global_2794162.f_4623 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2794162.f_4623 = bParam0;
	}
}

void func_747(int iParam0)//Position - 0x1A611
{
	if (Global_2794162.f_4621 != iParam0)
	{
		Global_2794162.f_4621 = iParam0;
	}
}

int func_748(struct<21> Param0)//Position - 0x1A62E
{
	func_756(func_757(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_755(8));
	func_752(0, -1, 0);
	func_750(132);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_816, 750, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_3457, 161, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_749())
	{
		func_710();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_816.f_724), &(Local_816.f_725));
	}
	Local_3445.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	Local_3445.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Local_3445.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_477(22, 1);
	return 1;
}

int func_749()//Position - 0x1A6C3
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_708())
		{
			return 0;
		}
		if (func_706(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_750(int iParam0)//Position - 0x1A71C
{
	func_720();
	func_751();
	func_738();
	Global_1836866.f_4 = iParam0;
	Global_1836866.f_5 = iParam0;
	func_476(iParam0, -1);
	func_20(&(Global_1836866.f_18), 0, 0);
	Global_2794162.f_4694 = 0;
	Global_2695780[0] = func_107();
	Global_2695780[1] = func_107();
	Global_2695780[2] = func_107();
	Global_2695780[3] = func_107();
	Global_2695780[4] = func_107();
	func_170();
	if (!func_523(func_203()))
	{
		func_202();
	}
	if (func_352() && !func_364())
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 17);
	}
}

void func_751()//Position - 0x1A7D2
{
	var uVar0;
	
	Global_1836891 = uVar0;
}

int func_752(int iParam0, int iParam1, bool bParam2)//Position - 0x1A7E0
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_754();
			}
			else
			{
				return 0;
			}
		}
		if (!func_753(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_754();
					}
					else
					{
						return 0;
					}
				}
				if (func_708())
				{
					if (!bParam2)
					{
						func_754();
					}
					else
					{
						return 0;
					}
				}
				if (func_706(157))
				{
					if (!bParam2)
					{
						func_754();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_754();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_754();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_754();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_753(bool bParam0)//Position - 0x1A8F6
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_754()//Position - 0x1A907
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_755(int iParam0)//Position - 0x1A913
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_756(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1A9ED
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_754();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_757(int iParam0)//Position - 0x1AA0C
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 180:
			return 32;
		
		case 181:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_127(func_758(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_758(int iParam0, bool bParam1)//Position - 0x1B197
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

