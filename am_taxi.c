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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
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
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<218> Local_67 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	struct<47> Local_286[32];
	int iLocal_1791 = 0;
	var uLocal_1792 = 0;
	int iLocal_1793[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1802[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1811[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	float fLocal_1825 = 0f;
	int iLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	float fLocal_1834 = 0f;
	float fLocal_1835 = 0f;
	float fLocal_1836 = 0f;
	float fLocal_1837 = 0f;
	float fLocal_1838 = 0f;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	struct<3> Local_1841[50];
	bool bLocal_1992 = 0;
	int iLocal_1993 = 0;
	bool bLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	float fLocal_2003 = 0f;
	struct<3> Local_2004 = { 0, 0, 0 } ;
	int iLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 12;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
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
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
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
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
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
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
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
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
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
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
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
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
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
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
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
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
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
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
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
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
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
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
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
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
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
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
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
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
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
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
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
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
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
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
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
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
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
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
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
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
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
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
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
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
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
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
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
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
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
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
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
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
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
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
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
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
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
	var uLocal_2707 = 1065353216;
	struct<9> Local_2708 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2717 = 0;
	int iLocal_2718 = 0;
	int iLocal_2719 = 0;
	int iLocal_2720 = 0;
	char* sLocal_2721 = NULL;
	int iLocal_2722 = 0;
	struct<3> Local_2723 = { 0, 0, 0 } ;
	struct<3> Local_2726 = { 0, 0, 0 } ;
	struct<3> Local_2729 = { 0, 0, 0 } ;
	float fLocal_2732 = 0f;
	struct<3> Local_2733 = { 0, 0, 0 } ;
	bool bLocal_2736 = 0;
	bool bLocal_2737 = 0;
	float fLocal_2738 = 0f;
	int iLocal_2739 = 0;
	var uLocal_2740 = 16;
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
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
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
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
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
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
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
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
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
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
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
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
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
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
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
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	int iLocal_2905 = 0;
	int iLocal_2906 = 0;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	iLocal_65 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_66 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_1832 = joaat("prop_taxi_meter_2");
	fLocal_1834 = 1f;
	fLocal_1835 = (0.4f * fLocal_1834);
	fLocal_1836 = (0.6f * fLocal_1834);
	fLocal_1837 = 0.201f;
	fLocal_1838 = 0.351f;
	iLocal_1839 = 1076369579;
	iLocal_1840 = 1076631591;
	iLocal_1997 = 1;
	iLocal_1999 = iLocal_1998;
	fLocal_2003 = SYSTEM::TO_FLOAT(iLocal_1998);
	iLocal_2720 = 1;
	sLocal_2721 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
	iLocal_2722 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	Local_2723 = { -0.01f, 0.6f, 0.24f };
	Local_2726 = { -5f, 0f, 0f };
	Local_2729 = { 0f, -0.25f, 0.55f };
	fLocal_2732 = 50f;
	Local_2733 = { -0.3f, 1f, 0.35f };
	fLocal_2738 = 99999f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_377(ScriptParam_0))
		{
			func_375();
		}
	}
	while (true)
	{
		func_374();
		if (func_366())
		{
			func_375();
		}
		iLocal_1791 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (func_365())
			{
				if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()))
				{
					func_375();
				}
			}
			else
			{
				func_375();
			}
		}
		else if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != -1)
		{
			func_375();
		}
		switch (func_364(iLocal_1791))
		{
			case 0:
				Local_286[iLocal_1791 /*47*/] = 1;
				if (func_363() == 4)
				{
					Local_286[iLocal_1791 /*47*/] = 3;
				}
				break;
			
			case 1:
				if (func_363() == 1)
				{
					func_331();
					func_38();
				}
				else if (func_363() == 4)
				{
					Local_286[iLocal_1791 /*47*/] = 3;
				}
				break;
			
			case 3:
				func_36(&(Local_67.f_217));
				if (func_35(&(Local_67.f_217)))
				{
					Local_286[iLocal_1791 /*47*/] = 4;
				}
				break;
			
			case 2:
				Local_286[iLocal_1791 /*47*/] = 4;
			
			case 4:
				func_375();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_363())
			{
				case 0:
					Local_67.f_0 = 1;
					break;
				
				case 1:
					func_4();
					func_3();
					if (func_1())
					{
						Local_67.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x298
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2AC
{
	return 0;
}

void func_3()//Position - 0x2B5
{
	switch (Local_67.f_215)
	{
		case 0:
			Local_67.f_215 = 1;
			break;
		
		case 1:
			break;
		
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_4()//Position - 0x2F2
{
	if (iLocal_2905 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		func_27();
		iLocal_2905++;
	}
	else
	{
		func_5();
		MISC::SET_BIT(&(Local_67.f_2[iLocal_2906 /*26*/].f_6), 0);
		MISC::SET_BIT(&(Local_67.f_2[iLocal_2906 /*26*/].f_6), 2);
		Local_67.f_212 = 0;
		iLocal_2906++;
		if (iLocal_2906 >= 8)
		{
			iLocal_2905 = 0;
			iLocal_2906 = 0;
		}
	}
}

void func_5()//Position - 0x354
{
	bool bVar0;
	
	bVar0 = iLocal_2906;
	func_18(bVar0);
	func_6(bVar0);
}

void func_6(bool bParam0)//Position - 0x36D
{
	struct<3> Var0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_67.f_2[bParam0 /*26*/].f_7 != 11 && !BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 4))
	{
		if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 0))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
		else if (func_15(Local_67.f_2[bParam0 /*26*/].f_1) || !func_13(Local_67.f_2[bParam0 /*26*/]))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
	}
	if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1) && func_13(Local_67.f_2[bParam0 /*26*/]))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true) };
		switch (Local_67.f_2[bParam0 /*26*/].f_7)
		{
			case 0:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 1:
				if (Local_67.f_2[bParam0 /*26*/].f_2 != -1)
				{
					if (func_12(Var0, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 45f))
					{
						if (!func_11(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							func_17(bParam0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)))
					{
						if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)), 1, 1))
						{
							if (func_12(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2))), true), 5f))
							{
								func_17(bParam0, 2);
							}
						}
					}
				}
				else
				{
					func_17(bParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 2:
				if (Local_67.f_2[bParam0 /*26*/].f_2 != -1)
				{
					if (BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2, 21))
					{
						if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD"), 1))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
								{
									func_17(bParam0, 3);
								}
							}
						}
						else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)))
						{
							if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)), 1, 1))
							{
								if (func_12(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2))), true), 5f))
								{
									if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
									{
										func_17(bParam0, 3);
									}
									else if (!func_12(Var0, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 10f))
									{
										func_17(bParam0, 3);
									}
								}
							}
						}
					}
				}
				else
				{
					func_17(bParam0, 8);
				}
				if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 2))
				{
					func_17(bParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 3:
				if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 2))
				{
					func_17(bParam0, 8);
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 4:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) <= 0)
				{
					func_17(bParam0, 8);
				}
				else if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
				{
					if (!func_11(Local_67.f_2[bParam0 /*26*/].f_8, 0f, 0f, 0f, 0))
					{
						func_17(bParam0, 5);
					}
				}
				break;
			
			case 5:
				if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
				{
					if (!func_11(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, 0))
					{
						if (func_8(bParam0))
						{
							if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) || ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) < 2f)
							{
								func_17(bParam0, 6);
							}
						}
					}
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) <= 0)
				{
					func_17(bParam0, 8);
				}
				break;
			
			case 6:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) <= 0)
				{
					func_17(bParam0, 8);
				}
				else
				{
					func_7(bParam0, 1);
				}
				break;
			
			case 7:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) <= 0)
				{
					func_17(bParam0, 8);
				}
				break;
			
			case 8:
				func_16(bParam0, 0);
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
				{
					MISC::CLEAR_BIT(&(Local_67.f_2[bParam0 /*26*/].f_6), 3);
					if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
					{
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 20);
					}
					func_17(bParam0, 4);
				}
				break;
			
			case 9:
			case 10:
				func_7(bParam0, 0);
				break;
			
			case 11:
				func_16(bParam0, 0);
				break;
			}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/]) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/].f_1))
	{
		if ((BitTest(Local_67.f_214, bParam0) && !BitTest(Local_67.f_214, bParam0 + 8)) && Local_67.f_2[bParam0 /*26*/].f_2 == -1)
		{
			if (Local_67.f_213 > 0)
			{
				Local_67.f_213 = (Local_67.f_213 - 1);
				MISC::CLEAR_BIT(&(Local_67.f_214), bParam0);
				MISC::SET_BIT(&(Local_67.f_214), bParam0 + 8);
			}
		}
		if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
		{
			Local_67.f_2[bParam0 /*26*/].f_3 = -1;
		}
		if (Local_67.f_2[bParam0 /*26*/].f_4 != -1)
		{
			Local_67.f_2[bParam0 /*26*/].f_4 = -1;
		}
	}
}

void func_7(bool bParam0, bool bParam1)//Position - 0x9AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1) && func_13(Local_67.f_2[bParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1))
		{
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false, true) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), -1, false) == NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1))
				{
					iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), iVar1, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								if (!PED::IS_PED_INJURED(iVar2))
								{
									if (!func_9(iVar2, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1) && !func_9(iVar2, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
									{
										if (bParam1)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(iVar2, 0, 0);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(iVar2, 0, 64);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

int func_8(bool bParam0)//Position - 0xAB4
{
	if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, 45f, 45f, 20f, false, true, 0) || BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2, 20))
		{
			MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 20);
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1, bool bParam2)//Position - 0xB59
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0xB9F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_11(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xBFF
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_12(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0xC46
{
	return SYSTEM::VDIST2(Param0, Param3) <= (fParam6 * fParam6);
}

int func_13(int iParam0)//Position - 0xC60
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_14(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xC80
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xCB9
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_16(bool bParam0, int iParam1)//Position - 0xCD8
{
	if ((Local_67.f_2[bParam0 /*26*/].f_2 != -1 || !func_11(Local_67.f_2[bParam0 /*26*/].f_8, 0f, 0f, 0f, 0)) || iParam1)
	{
		if (Local_67.f_2[bParam0 /*26*/].f_2 != -1)
		{
			MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_1), 0);
			MISC::CLEAR_BIT(&(Local_67.f_216), Local_67.f_2[bParam0 /*26*/].f_2);
			Local_67.f_2[bParam0 /*26*/].f_2 = -1;
			Local_67.f_211 = (Local_67.f_211 - 1);
		}
		Local_67.f_2[bParam0 /*26*/].f_8 = { 0f, 0f, 0f };
		Local_67.f_2[bParam0 /*26*/].f_11 = 0f;
		Local_67.f_2[bParam0 /*26*/].f_22 = 0;
		Local_67.f_2[bParam0 /*26*/].f_19 = 0;
		MISC::CLEAR_BIT(&(Local_67.f_2[bParam0 /*26*/].f_6), 3);
		iLocal_1811[bParam0] = 0;
	}
}

void func_17(bool bParam0, int iParam1)//Position - 0xDA4
{
	Local_67.f_2[bParam0 /*26*/].f_7 = iParam1;
}

void func_18(bool bParam0)//Position - 0xDB8
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/]))
	{
		if (Local_67.f_2[bParam0 /*26*/].f_2 != -1)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)))
			{
				if (!func_26(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_21))
				{
					if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_21, 3f, 3f, 3f, 0))
					{
						if (func_19(bParam0, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_21, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_24, 0))
						{
							func_17(bParam0, 1);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_67.f_2[bParam0 /*26*/]))
	{
		Local_67.f_212++;
	}
	if (Local_67.f_2[bParam0 /*26*/].f_2 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_2)))
		{
			MISC::CLEAR_BIT(&(Local_67.f_216), Local_67.f_2[bParam0 /*26*/].f_2);
			Local_67.f_2[bParam0 /*26*/].f_2 = -1;
			Local_67.f_211 = (Local_67.f_211 - 1);
		}
	}
	if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)))
		{
			Local_67.f_2[bParam0 /*26*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0xEFD
{
	if (func_25(Global_2738587.f_854) && func_25(Global_2738587.f_855))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iParam0 /*26*/]))
		{
			if (func_22(&(Local_67.f_2[iParam0 /*26*/]), Global_2738587.f_854, Param1, fParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), fParam4);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 2f, 0f, 0f), true, false, false, true);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 5f);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), false, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iParam0 /*26*/], true);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iParam0 /*26*/].f_1))
		{
			if (func_21(&(Local_67.f_2[iParam0 /*26*/].f_1), Local_67.f_2[iParam0 /*26*/], 25, Global_2738587.f_855, -1, 1, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 5f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738587.f_854);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738587.f_855);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), 29, true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), 251, true);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), 5, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), 512, false);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
				func_20(&uLocal_2740, 8, NETWORK::NET_TO_PED(Local_67.f_2[iParam0 /*26*/].f_1), "FM_TAXI", 0, 1);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iParam0 /*26*/].f_1, true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iParam0 /*26*/]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(Local_67.f_2[iParam0 /*26*/].f_6), 4);
	return 1;
}

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1188
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

int func_21(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1223
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x12AB
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
		Global_2738587.f_6762 = iVar1;
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
			func_23(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x13B4
{
	int iVar0;
	
	if (func_24(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3230[iVar0 /*6*/] = { Global_2635562.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3230[1 /*6*/] = { Param0 };
		Global_2635562.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_24(int iParam0, struct<3> Param1, int iParam4)//Position - 0x1487
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
			if (Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_25(int iParam0)//Position - 0x1525
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_26(struct<3> Param0)//Position - 0x1543
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_27()//Position - 0x156D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = iLocal_2905;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (!func_10(iVar1, 1, 1))
		{
			bVar3 = false;
			while (bVar3 < 8)
			{
				if (Local_67.f_2[bVar3 /*26*/].f_2 == bVar0)
				{
					func_16(bVar3, 0);
				}
				if (Local_67.f_2[bVar3 /*26*/].f_3 == bVar0)
				{
					func_34(bVar3);
					Local_67.f_2[bVar3 /*26*/].f_3 = -1;
					if (func_33(&uLocal_1823))
					{
						func_32(&uLocal_1823);
					}
				}
				bVar3++;
			}
		}
		else
		{
			if (!BitTest(Local_67.f_216, bVar0) && BitTest(Local_286[bVar0 /*47*/].f_1, 0))
			{
				if (func_31())
				{
					func_30(bVar0);
					MISC::SET_BIT(&(Local_67.f_216), bVar0);
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_1), 0);
				}
			}
			bVar3 = false;
			while (bVar3 < 8)
			{
				if (BitTest(Local_286[bVar0 /*47*/].f_4.f_2, 18))
				{
					if (Local_67.f_2[bVar3 /*26*/].f_2 != -1)
					{
						func_16(bVar3, 0);
					}
					MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 18);
				}
				if (BitTest(Local_286[bVar0 /*47*/].f_4.f_3, bVar3))
				{
					if (Local_67.f_2[bVar3 /*26*/].f_7 != 11)
					{
						if (Local_67.f_2[bVar3 /*26*/].f_7 != 9)
						{
							if (Local_67.f_2[bVar3 /*26*/].f_7 != 10)
							{
								Local_67.f_2[bVar3 /*26*/].f_4 = bVar0;
								func_17(bVar3, 9);
								func_16(bVar3, 1);
							}
						}
					}
				}
				if (!func_15(Local_67.f_2[bVar3 /*26*/].f_1) && func_13(Local_67.f_2[bVar3 /*26*/]))
				{
					if (Local_67.f_2[bVar3 /*26*/].f_3 == -1)
					{
						if (Local_286[bVar0 /*47*/].f_4.f_1 == bVar3 && Local_67.f_2[bVar3 /*26*/].f_7 == 8)
						{
							func_17(bVar3, 3);
							if (Local_67.f_2[bVar3 /*26*/].f_2 == -1)
							{
								Local_67.f_2[bVar3 /*26*/].f_2 = bVar0;
							}
							Local_286[bVar0 /*47*/].f_4.f_1 = -1;
						}
						if (BitTest(Local_286[bVar0 /*47*/].f_3, (0 + bVar3)))
						{
							if ((Local_67.f_2[bVar3 /*26*/].f_7 == 8 || Local_67.f_2[bVar3 /*26*/].f_7 == 1) || Local_67.f_2[bVar3 /*26*/].f_7 == 2)
							{
								func_17(bVar3, 3);
							}
						}
						if ((((func_29(iVar1, NETWORK::NET_TO_VEH(Local_67.f_2[bVar3 /*26*/])) && Local_67.f_2[bVar3 /*26*/].f_7 != 6) && Local_67.f_2[bVar3 /*26*/].f_7 != 9) && Local_67.f_2[bVar3 /*26*/].f_7 != 10) && Local_67.f_2[bVar3 /*26*/].f_7 != 11)
						{
							MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 0);
							MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
							if (Local_67.f_2[bVar3 /*26*/].f_2 != -1)
							{
								MISC::CLEAR_BIT(&(Local_67.f_216), Local_67.f_2[bVar3 /*26*/].f_2);
								Local_67.f_2[bVar3 /*26*/].f_2 = -1;
								Local_67.f_211 = (Local_67.f_211 - 1);
							}
							Local_67.f_2[bVar3 /*26*/].f_3 = bVar0;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_67.f_2[bVar3 /*26*/]), 120f, 120f, 120f, false, true, 0))
						{
							if (Local_67.f_2[bVar3 /*26*/].f_2 == -1)
							{
								MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
							}
							else if (Local_67.f_2[bVar3 /*26*/].f_2 == bVar0)
							{
								MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
							}
							MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 0);
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_67.f_2[bVar3 /*26*/]), 300f, 300f, 300f, false, true, 0))
						{
							MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 0);
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar1) > 0)
						{
							if (Local_67.f_2[bVar3 /*26*/].f_2 == bVar0)
							{
								MISC::SET_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
							}
						}
					}
					else if (Local_67.f_2[bVar3 /*26*/].f_3 == bVar0)
					{
						if (!func_29(iVar1, NETWORK::NET_TO_VEH(Local_67.f_2[bVar3 /*26*/])))
						{
							func_16(bVar3, 1);
							Local_67.f_2[bVar3 /*26*/].f_3 = -1;
						}
						else
						{
							if (Local_67.f_2[bVar3 /*26*/].f_7 == 5 || Local_67.f_2[bVar3 /*26*/].f_7 == 7)
							{
								if (!BitTest(Local_67.f_2[bVar3 /*26*/].f_6, 3) && BitTest(Local_286[bVar0 /*47*/].f_4.f_2, 3))
								{
									MISC::SET_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 3);
									MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 5);
									func_17(bVar3, 5);
								}
								else if (BitTest(Local_286[bVar0 /*47*/].f_4.f_2, 4))
								{
									MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 4);
									func_17(bVar3, 7);
								}
								else if (Local_67.f_2[bVar3 /*26*/].f_7 == 7)
								{
									if (BitTest(Local_286[bVar0 /*47*/].f_4.f_2, 5))
									{
										MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 5);
										func_17(bVar3, 5);
									}
								}
							}
							if ((Local_67.f_2[bVar3 /*26*/].f_7 == 5 || Local_67.f_2[bVar3 /*26*/].f_7 == 7) || Local_67.f_2[bVar3 /*26*/].f_7 == 4)
							{
								if (Local_67.f_2[bVar3 /*26*/].f_19 != Local_286[bVar0 /*47*/].f_4.f_15)
								{
									Local_67.f_2[bVar3 /*26*/].f_8 = { Local_286[bVar0 /*47*/].f_4.f_5 };
									Local_67.f_2[bVar3 /*26*/].f_11 = Local_286[bVar0 /*47*/].f_4.f_14;
									Local_67.f_2[bVar3 /*26*/].f_19 = Local_286[bVar0 /*47*/].f_4.f_15;
									Local_67.f_2[bVar3 /*26*/].f_23 = { Local_286[bVar0 /*47*/].f_4.f_39 };
									func_17(bVar3, 5);
									MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 20);
								}
							}
						}
						MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 0);
						MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
					}
					if (Local_286[bVar0 /*47*/].f_4.f_19 == bVar3 && Local_67.f_2[bVar3 /*26*/].f_22 == 0)
					{
						if (Local_286[bVar0 /*47*/].f_4.f_18 != 0)
						{
							Local_67.f_2[bVar3 /*26*/].f_22 = Local_286[bVar0 /*47*/].f_4.f_18;
							Local_286[iLocal_1791 /*47*/].f_4.f_19 = -1;
							Local_286[bVar0 /*47*/].f_4.f_18 = 0;
						}
					}
					else if (BitTest(Local_286[bVar0 /*47*/].f_4.f_2, 6))
					{
						Local_67.f_2[bVar3 /*26*/].f_22 = 0;
						Local_286[bVar0 /*47*/].f_4.f_19 = -1;
						MISC::CLEAR_BIT(&(Local_286[bVar0 /*47*/].f_4.f_2), 6);
					}
				}
				else if (BitTest(Local_286[bVar0 /*47*/].f_1, 0) || Local_67.f_2[bVar3 /*26*/].f_2 == bVar0)
				{
					MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 0);
					MISC::CLEAR_BIT(&(Local_67.f_2[bVar3 /*26*/].f_6), 2);
				}
				else
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bVar3 /*26*/].f_1))
					{
						func_28(&(Local_67.f_2[bVar3 /*26*/].f_1));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bVar3 /*26*/]))
					{
						func_28(&(Local_67.f_2[bVar3 /*26*/]));
					}
					if (Local_67.f_2[bVar3 /*26*/].f_2 == -1)
					{
						func_16(bVar3, 0);
					}
					if (Local_67.f_2[bVar3 /*26*/].f_3 != -1)
					{
						func_16(bVar3, 1);
						Local_67.f_2[bVar3 /*26*/].f_3 = -1;
					}
				}
				bVar3++;
			}
		}
	}
}

void func_28(var uParam0)//Position - 0x1C8C
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_29(int iParam0, int iParam1)//Position - 0x1CB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam1) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, (iVar0 - 1), false);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (PLAYER::GET_PLAYER_PED(iParam0) == iVar2)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_30(bool bParam0)//Position - 0x1D1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_67.f_2[iVar0 /*26*/].f_2 == -1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
		{
			Local_67.f_2[iVar0 /*26*/].f_2 = bParam0;
			Local_67.f_211++;
			Local_67.f_213++;
			MISC::SET_BIT(&(Local_67.f_214), iVar0);
			MISC::CLEAR_BIT(&(Local_67.f_214), iVar0 + 8);
			MISC::CLEAR_BIT(&(Local_286[bParam0 /*47*/].f_1), 0);
			MISC::SET_BIT(&(Local_67.f_2[iVar0 /*26*/].f_6), 4);
			return;
		}
		iVar0++;
	}
}

int func_31()//Position - 0x1DB1
{
	if (Local_67.f_211 >= 8 || Local_67.f_212 >= 8)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)//Position - 0x1DD5
{
	uParam0->f_1 = 0;
}

bool func_33(var uParam0)//Position - 0x1DE2
{
	return uParam0->f_1;
}

void func_34(bool bParam0)//Position - 0x1DEE
{
	int iVar0;
	struct<3> Var1;
	
	Local_286[iLocal_1791 /*47*/].f_4.f_4 = Local_1841[iLocal_1827 /*3*/];
	if (HUD::DOES_BLIP_EXIST(Local_286[iLocal_1791 /*47*/].f_4.f_4))
	{
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_1841[iVar0 /*3*/] = { Var1 };
		iVar0++;
	}
	iLocal_1826 = 0;
}

int func_35(var uParam0)//Position - 0x1E41
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x1E6A
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_37(uParam0, 0, 0);
		}
	}
}

void func_37(var uParam0, bool bParam1, bool bParam2)//Position - 0x1E89
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

void func_38()//Position - 0x1ECE
{
	bool bVar0;
	int iVar1;
	
	MISC::CLEAR_BIT(&(Global_2738587.f_853), 1);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		func_330();
		func_329();
	}
	func_308(iLocal_2739);
	func_225();
	func_200(iLocal_2739);
	func_199(iLocal_2739);
	func_197(iLocal_2739);
	if (bLocal_2736 != iLocal_2739)
	{
		func_200(bLocal_2736);
		func_199(bLocal_2736);
		func_197(bLocal_2736);
	}
	iLocal_2739++;
	if (iLocal_2739 == 8)
	{
		fLocal_2738 = 99999f;
		bLocal_2736 = bLocal_2737;
		iLocal_2739 = 0;
	}
	bVar0 = func_10(PLAYER::PLAYER_ID(), 1, 1);
	func_45(bLocal_2736, bVar0);
	if (bVar0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 0;
			while (iVar1 < 8)
			{
				if (Local_67.f_2[iVar1 /*26*/].f_3 == iLocal_1791)
				{
					func_39(1, 1, 1);
				}
				iVar1++;
			}
			func_39(0, 0, 0);
		}
	}
	else
	{
		if (iLocal_1791 != -1)
		{
			iVar1 = 0;
			while (iVar1 < 8)
			{
				if (Local_67.f_2[iVar1 /*26*/].f_3 == iLocal_1791)
				{
					func_39(1, 1, 1);
				}
				iVar1++;
			}
		}
		func_39(1, 1, 0);
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x1FE8
{
	int iVar0;
	struct<3> Var1;
	
	if (((((((Local_286[iLocal_1791 /*47*/].f_4 != -1 || !func_11(Local_286[iLocal_1791 /*47*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1999 != iLocal_1998) || Local_286[iLocal_1791 /*47*/].f_4.f_18 != 0) || Local_286[iLocal_1791 /*47*/].f_4.f_19 != -1) || BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 10)) || BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 17)) || iParam2)
	{
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 2);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 3);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 4);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 5);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 7);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 10);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 11);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 12);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 13);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 14);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 20);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 21);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 22);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 23);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 24);
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 25);
		Local_286[iLocal_1791 /*47*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_14 = 0f;
		Local_286[iLocal_1791 /*47*/].f_4.f_15 = 0;
		Local_286[iLocal_1791 /*47*/].f_4 = -1;
		Local_286[iLocal_1791 /*47*/].f_4.f_1 = -1;
		Local_286[iLocal_1791 /*47*/].f_4.f_34 = -1;
		Local_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
		Local_286[iLocal_1791 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_33 = 0f;
		Local_286[iLocal_1791 /*47*/].f_4.f_35 = -1;
		Local_286[iLocal_1791 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_39 = { 0f, 0f, 0f };
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 26);
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Local_1841[iVar0 /*3*/] = { Var1 };
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 27);
		iLocal_1827 = 0;
		iLocal_1829 = 0;
		iLocal_1830 = 0;
		bLocal_1994 = false;
		Global_113425 = 0;
		fLocal_2003 = SYSTEM::TO_FLOAT(iLocal_1998);
		iLocal_1999 = iLocal_1998;
		iLocal_2000 = iLocal_1998;
		func_32(&uLocal_2001);
		Local_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Local_286[iLocal_1791 /*47*/].f_4.f_18 = 0;
		Local_286[iLocal_1791 /*47*/].f_4.f_19 = -1;
		func_42(1, -1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		STREAMING::REMOVE_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		Local_286[iLocal_1791 /*47*/].f_4.f_4 = 0;
		func_32(&uLocal_1821);
	}
	if (iParam0 == 1)
	{
		Local_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
		Local_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
	}
	if (BitTest(Global_2738587.f_853, 2))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_853), 2);
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1831))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1831);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1832);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_2719))
	{
		CAM::SET_CAM_ACTIVE(iLocal_2719, false);
		CAM::DESTROY_CAM(iLocal_2719, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_40();
	}
	if (iLocal_2718 == 0)
	{
		iLocal_2718 = 1;
	}
	if (iParam1 == 1 && Local_286[iLocal_1791 /*47*/].f_1 != 0)
	{
		Local_286[iLocal_1791 /*47*/].f_1 = 0;
	}
}

void func_40()//Position - 0x23F9
{
	func_41(4, 0, -1);
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::SET_RADAR_ZOOM(0);
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
}

void func_41(int iParam0, bool bParam1, int iParam2)//Position - 0x2421
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668317.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1668317.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1668317.f_1046), iParam0);
			}
			break;
	}
}

void func_42(bool bParam0, int iParam1)//Position - 0x2470
{
	int iVar0;
	
	if (!func_44(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23711.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23711.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23711.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23711.f_6231[iVar0] = 0;
	}
	if (Global_23711.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23711.f_6217[iVar0] = 0;
	}
	if (Global_23711.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23711.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_43(&(Global_23711.f_6263[iVar0 /*10*/]));
		Global_23711.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23711.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_43(int* iParam0)//Position - 0x2533
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_44(var uParam0, bool bParam1, int iParam2)//Position - 0x255F
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23711.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23711.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23711.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)//Position - 0x25FC
{
	if (bParam1)
	{
		if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1) && func_13(Local_67.f_2[bParam0 /*26*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
			{
				func_188(bParam0);
				func_181(bParam0);
				func_51(bParam0);
			}
			else
			{
				func_46(bParam0);
			}
		}
		else
		{
			func_46(bParam0);
		}
	}
	else
	{
		func_46(bParam0);
	}
}

void func_46(bool bParam0)//Position - 0x267B
{
	if (BitTest(uLocal_1792, (0 + bParam0)))
	{
		MISC::CLEAR_BIT(&uLocal_1792, (0 + bParam0));
		if (func_33(&uLocal_1823))
		{
			func_32(&uLocal_1823);
		}
		if (func_50("TXM_H02" /* GXT: Press ~INPUT_ENTER~ to enter the taxi as a passenger. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_3, (0 + bParam0)))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			iLocal_1995 = 0;
		}
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_3), (0 + bParam0));
	}
	func_48(&(uLocal_1802[bParam0]));
	if (Local_286[iLocal_1791 /*47*/].f_4 == bParam0)
	{
		func_39(1, 1, 0);
	}
	func_47(bParam0);
}

void func_47(int iParam0)//Position - 0x271D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1793[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_1793[iParam0]));
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 12);
	}
}

void func_48(var uParam0)//Position - 0x2750
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_49(int iParam0)//Position - 0x27A7
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(char* sParam0)//Position - 0x27E2
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_51(bool bParam0)//Position - 0x27F5
{
	if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1))) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_3, bParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		if (func_180(bParam0) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_67.f_2[bParam0 /*26*/].f_7 == 6)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_2719))
				{
					CAM::SET_CAM_ACTIVE(iLocal_2719, false);
					CAM::DESTROY_CAM(iLocal_2719, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_40();
				}
				if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
				{
					func_155(bParam0);
				}
			}
			else
			{
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || Local_67.f_2[bParam0 /*26*/].f_7 == 9) || Local_67.f_2[bParam0 /*26*/].f_7 == 10)
				{
					func_7(bParam0, 0);
				}
				func_89(bParam0);
			}
			if (Local_286[iLocal_1791 /*47*/].f_4 != bParam0)
			{
				Local_286[iLocal_1791 /*47*/].f_4 = bParam0;
				MISC::SET_BIT(&(Global_2738587.f_853), 2);
			}
			func_82(bParam0);
			func_81(bParam0);
		}
		func_57(bParam0);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(1 /*CAMERA_CONTROL*/);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
		func_56();
		func_55();
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		func_54();
		if (Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, true);
		}
		if (func_53() || func_52(0))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		}
	}
	else if (Local_286[iLocal_1791 /*47*/].f_4 == bParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if ((Local_67.f_2[bParam0 /*26*/].f_7 != 9 && Local_67.f_2[bParam0 /*26*/].f_7 != 10) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_3, bParam0))
				{
					func_155(bParam0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bParam0);
			}
		}
		func_39(1, 1, 0);
		func_34(bParam0);
		if (func_33(&uLocal_1823))
		{
			func_32(&uLocal_1823);
		}
	}
}

int func_52(int iParam0)//Position - 0x2A5B
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				return 1;
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()//Position - 0x2AB2
{
	return Global_76369;
}

void func_54()//Position - 0x2ABE
{
	Global_2750546.f_258 = 1;
}

void func_55()//Position - 0x2ACE
{
	Global_2738587.f_4636 = 0;
}

void func_56()//Position - 0x2ADE
{
	MISC::SET_BIT(&Global_8684, 4);
}

void func_57(bool bParam0)//Position - 0x2AEE
{
	char* sVar0;
	
	if (func_71())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2007))
		{
			if (Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
			{
				sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_2721, sVar0))
				{
					sLocal_2721 = sVar0;
					iLocal_2717 = 1;
				}
			}
			if (iLocal_2717 == 1)
			{
				Local_2708 = { func_70() };
				func_68(&uLocal_2008);
				func_67(0, 75, "TXM_EXIT" /* GXT: Exit */, &uLocal_2008, 0, 365);
				if (Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
				{
					if (Local_67.f_2[bParam0 /*26*/].f_7 != 6)
					{
						if (Global_113425 == 1 || bLocal_1994 == 1)
						{
							if (iLocal_1826 > 1)
							{
								func_67(2, 218, "TXM_CDES" /* GXT: Change Destination */, &uLocal_2008, 0, 365);
							}
						}
						if (!bLocal_1994)
						{
							if (Local_286[iLocal_1791 /*47*/].f_4.f_15 != Local_1841[iLocal_1827 /*3*/])
							{
								func_67(0, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_2008, 0, 365);
							}
						}
						else if (Local_67.f_2[bParam0 /*26*/].f_7 == 5)
						{
							if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 4))
							{
								func_67(0, 177, "TXM_STOP" /* GXT: Stop */, &uLocal_2008, 0, 365);
							}
							if (bLocal_1992)
							{
								func_67(0, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_2008, 0, 365);
							}
							if (!BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 3) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 3))
							{
								if (Local_67.f_2[bParam0 /*26*/].f_7 == 5)
								{
									func_67(0, 179, "TXM_HURY" /* GXT: Hurry */, &uLocal_2008, 0, 365);
								}
							}
						}
						else if (Local_67.f_2[bParam0 /*26*/].f_7 == 7)
						{
							if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 5))
							{
								func_67(0, 177, "TXM_STRT" /* GXT: Start */, &uLocal_2008, 0, 365);
							}
							if (bLocal_1992)
							{
								func_67(0, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_2008, 0, 365);
							}
						}
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							func_67(2, 199, "SPEC_PAUSE" /* GXT: Pause */, &uLocal_2008, 0, 365);
						}
					}
				}
				iLocal_2717 = 0;
			}
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			func_66(1);
			func_65(1);
			func_58(&iLocal_2007, &Local_2708, &uLocal_2008, func_64(&uLocal_2008));
		}
		else
		{
			iLocal_2007 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2007);
		iLocal_2717 = 1;
	}
}

void func_58(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2D0C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_63(uParam2);
	}
	if (Global_1577933 < 2)
	{
		func_65(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_62(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_61(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_62(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_62(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_61(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		func_60(*iParam0, uParam1);
	}
	func_59();
}

void func_59()//Position - 0x30AB
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_60(int iParam0, var uParam1)//Position - 0x30C9
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_61(char* sParam0)//Position - 0x30E8
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_62(char* sParam0)//Position - 0x30FA
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_63(var uParam0)//Position - 0x3108
{
	uParam0->f_692 = 0;
}

int func_64(var uParam0)//Position - 0x3116
{
	return uParam0->f_692;
}

void func_65(int iParam0)//Position - 0x3123
{
	Global_1577933 = iParam0;
}

void func_66(int iParam0)//Position - 0x3131
{
	Global_1669875.f_1163 = iParam0;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x3142
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 365)
		{
		}
	}
	uParam3->f_693++;
}

void func_68(var uParam0)//Position - 0x31BF
{
	func_69(uParam0);
	uParam0->f_692 = 1;
}

void func_69(var uParam0)//Position - 0x31D3
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_70()//Position - 0x32B8
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_71()//Position - 0x32FC
{
	if (!func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!func_76(1, 1))
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (func_74(0))
	{
		return 0;
	}
	if (!func_72())
	{
		return 0;
	}
	return 1;
}

int func_72()//Position - 0x3373
{
	if (func_73() == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x3388
{
	return Global_1574632.f_18;
}

bool func_74(bool bParam0)//Position - 0x3396
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

bool func_75()//Position - 0x33BF
{
	return Global_101444.f_394 > 0;
}

int func_76(int iParam0, int iParam1)//Position - 0x33D0
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_80())
		{
			return 0;
		}
	}
	if (func_79())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_52(0))
		{
			return 0;
		}
	}
	if (func_78(8, -1))
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (Global_61219)
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (Global_1574971)
	{
		return 0;
	}
	if (Global_1836446)
	{
		return 0;
	}
	return 1;
}

bool func_77()//Position - 0x346C
{
	return Global_1575079;
}

bool func_78(int iParam0, int iParam1)//Position - 0x3478
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_79()//Position - 0x34B0
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

bool func_80()//Position - 0x34C7
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

void func_81(bool bParam0)//Position - 0x34DC
{
	if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 11))
	{
		if (Local_286[iLocal_1791 /*47*/].f_4.f_18 == 0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				Local_286[iLocal_1791 /*47*/].f_4.f_18 = 26;
				Local_286[iLocal_1791 /*47*/].f_4.f_19 = bParam0;
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 11);
			}
		}
	}
}

void func_82(bool bParam0)//Position - 0x3540
{
	bool bVar0;
	
	if (bLocal_1994)
	{
		if (func_88(&uLocal_2001, 10000, 0))
		{
			if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 3) || BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 3))
			{
				fLocal_2003 = (fLocal_2003 + (func_87() * 1.5f));
			}
			else
			{
				fLocal_2003 = (fLocal_2003 + func_87());
			}
			func_32(&uLocal_2001);
			bVar0 = true;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_2004, false) > 50f)
		{
			if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 3) || BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 3))
			{
				fLocal_2003 = (fLocal_2003 + (func_87() * 1.5f));
			}
			else
			{
				fLocal_2003 = (fLocal_2003 + func_87());
			}
			func_32(&uLocal_2001);
			Local_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			bVar0 = true;
		}
		iLocal_1999 = SYSTEM::CEIL(fLocal_2003);
		if (iLocal_1999 > 5000)
		{
			iLocal_1999 = 5000;
		}
		if (iLocal_1999 != iLocal_2000)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1999);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2000 = iLocal_1999;
			func_85("\ntaxiService currentJourneyPrice = ");
			func_83(iLocal_1999);
			func_85("\n");
		}
		if (bVar0)
		{
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 27))
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 27);
			}
		}
	}
}

void func_83(int iParam0)//Position - 0x369D
{
	func_84(iParam0);
}

void func_84(int iParam0)//Position - 0x36AB
{
	if (iParam0 > 0)
	{
	}
}

void func_85(char* sParam0)//Position - 0x36B9
{
	func_86(sParam0);
}

void func_86(char* sParam0)//Position - 0x36C7
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

float func_87()//Position - 0x36DA
{
	return 1.2f;
}

int func_88(var uParam0, int iParam1, bool bParam2)//Position - 0x36E7
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_37(uParam0, bParam2, 0);
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

void func_89(bool bParam0)//Position - 0x3745
{
	if (Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[bParam0 /*26*/], false);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[bParam0 /*26*/].f_1, false);
				if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 10))
				{
					func_147(bParam0);
					func_114(bParam0);
				}
				if (func_113(bParam0))
				{
					func_90(bParam0);
					iLocal_2717 = 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[bParam0 /*26*/], false);
				}
				else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/]))
				{
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[bParam0 /*26*/].f_1, false);
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		if (CAM::DOES_CAM_EXIST(iLocal_2719))
		{
			CAM::SET_CAM_ACTIVE(iLocal_2719, false);
			CAM::DESTROY_CAM(iLocal_2719, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_40();
		}
	}
}

void func_90(bool bParam0)//Position - 0x387A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	
	if (!iLocal_1830)
	{
		iVar0 = func_112();
		iLocal_1829 = iVar0;
		iLocal_1811[bParam0] = 0;
		iLocal_1830 = 1;
	}
	if (func_98(bParam0))
	{
		iVar1 = 0;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "CLEAR_TAXI_DISPLAY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar1 = 0;
		while (iVar1 < iLocal_1826)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_1841[iVar1 /*3*/]))
			{
				iLocal_2718 = 1;
				iLocal_1811[bParam0] = 0;
				return;
			}
			if (func_97(Local_1841[iVar1 /*3*/]) == -1)
			{
				iLocal_2718 = 1;
				iLocal_1811[bParam0] = 0;
				return;
			}
			if (func_96(HUD::GET_BLIP_COORDS(Local_1841[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
			{
				iLocal_2718 = 1;
				iLocal_1811[bParam0] = 0;
				return;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(Local_1841[iVar1 /*3*/]));
			if ((func_97(Local_1841[iVar1 /*3*/]) == 492 || func_97(Local_1841[iVar1 /*3*/]) == 475) && HUD::GET_BLIP_HUD_COLOUR(Local_1841[iVar1 /*3*/]) == 0)
			{
				func_95(HUD::GET_BLIP_COLOUR(Local_1841[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(Local_1841[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			}
			iVar9 = func_93(Local_1841[iVar1 /*3*/]);
			if (iVar9 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Local_1841[iVar1 /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_91(iVar9));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(Local_1841[iVar1 /*3*/]) == 2)
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_1841[iVar1 /*3*/]))))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_1841[iVar1 /*3*/])), true) };
				}
			}
			else if (HUD::GET_BLIP_INFO_ID_TYPE(Local_1841[iVar1 /*3*/]) == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_1841[iVar1 /*3*/]), false))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_1841[iVar1 /*3*/]), true) };
				}
			}
			else
			{
				Var6 = { HUD::GET_BLIP_COORDS(Local_1841[iVar1 /*3*/]) };
			}
			func_61(ZONE::GET_NAME_OF_ZONE(Var6));
			if (((((((func_97(Local_1841[iVar1 /*3*/]) == 40 || func_97(Local_1841[iVar1 /*3*/]) == 357) || func_97(Local_1841[iVar1 /*3*/]) == 475) || func_97(Local_1841[iVar1 /*3*/]) == 492) || func_97(Local_1841[iVar1 /*3*/]) == 557) || func_97(Local_1841[iVar1 /*3*/]) == 590) || func_97(Local_1841[iVar1 /*3*/]) == 614) || func_97(Local_1841[iVar1 /*3*/]) == 740)
			{
				iVar10 = 0;
				while (iVar10 < 131)
				{
					iVar11 = iVar10;
					if (func_11(Var6, Global_1312263[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 131;
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /* GXT: ~a~ */);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312263[iVar11 /*1951*/].f_16));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						func_61("");
					}
					iVar10++;
				}
			}
			else if (Local_1841[iVar1 /*3*/].f_2 == 0)
			{
				if (Local_1841[iVar1 /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_1841[iVar1 /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_61("");
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /* GXT: ~a~ and ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_1841[iVar1 /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_1841[iVar1 /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (((iLocal_2722 == 8 || iLocal_2722 == 9) || iLocal_2722 == 10) || iLocal_2722 == 12)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (bLocal_1994)
			{
				if (Local_286[iLocal_1791 /*47*/].f_4.f_15 == Local_1841[iVar1 /*3*/])
				{
					iLocal_1827 = iVar1;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_286[iLocal_1791 /*47*/].f_4.f_4))
			{
				if (Local_286[iLocal_1791 /*47*/].f_4.f_4 == Local_1841[iVar1 /*3*/])
				{
					iLocal_1827 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_1994)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1999);
			if (((iLocal_2722 == 8 || iLocal_2722 == 9) || iLocal_2722 == 10) || iLocal_2722 == 12)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
		{
			Var12 = { HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/]) };
			if ((!func_26(Var12) && CAM::DOES_CAM_EXIST(iLocal_2719)) && CAM::IS_CAM_ACTIVE(iLocal_2719))
			{
				HUD::LOCK_MINIMAP_POSITION(Var12.f_0, Var12.f_1);
			}
		}
		iLocal_2718 = 0;
		MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 10);
	}
}

char* func_91(int iParam0)//Position - 0x3DBA
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /* GXT: Barber Shop */;
			break;
		
		case 1:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 2:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 3:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 4:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 5:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 6:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 7:
			return func_92(iParam0, 0, 0);
			break;
		
		case 8:
			return func_92(iParam0, 0, 0);
			break;
		
		case 9:
			return func_92(iParam0, 0, 0);
			break;
		
		case 10:
			return func_92(iParam0, 0, 0);
			break;
		
		case 11:
			return func_92(iParam0, 0, 0);
			break;
		
		case 12:
			return func_92(iParam0, 0, 0);
			break;
		
		case 13:
			return func_92(iParam0, 0, 0);
			break;
		
		case 14:
			return func_92(iParam0, 0, 0);
			break;
		
		case 15:
			return func_92(iParam0, 0, 0);
			break;
		
		case 16:
			return func_92(iParam0, 0, 0);
			break;
		
		case 17:
			return func_92(iParam0, 0, 0);
			break;
		
		case 18:
			return func_92(iParam0, 0, 0);
			break;
		
		case 19:
			return func_92(iParam0, 0, 0);
			break;
		
		case 20:
			return func_92(iParam0, 0, 0);
			break;
		
		case 21:
			return func_92(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 23:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 24:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 25:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 26:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 27:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 28:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
			break;
		
		case 29:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 30:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 31:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 32:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 33:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 34:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 35:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 36:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 37:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 38:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
			break;
		
		case 39:
			return func_92(iParam0, 0, 0);
			break;
		
		case 40:
			return func_92(iParam0, 0, 0);
			break;
		
		case 41:
			return func_92(iParam0, 0, 0);
			break;
		
		case 42:
			return func_92(iParam0, 0, 0);
			break;
		
		case 43:
			return func_92(iParam0, 0, 0);
			break;
		
		case 44:
			return func_92(iParam0, 0, 0);
			break;
		
		case 45:
			return func_92(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 47:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 48:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 49:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 52:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 50:
			return "SB_BAR" /* GXT: Barber Shop */;
			break;
		
		case 51:
			return "S_CL_BL" /* GXT: Casino Store */;
			break;
		
		case 53:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 54:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
			break;
		
		case 55:
			return func_92(iParam0, 0, 0);
			break;
		
		case 56:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 57:
			return func_92(iParam0, 0, 0);
			break;
		
		case 58:
			return func_92(iParam0, 0, 0);
			break;
		
		case 59:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
		
		case 60:
			return "SB_AMU" /* GXT: Ammu-Nation */;
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_92(int iParam0, int iParam1, bool bParam2)//Position - 0x4201
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /* GXT: Empty Shop */;
			break;
		
		case 0:
			return "S_H_01" /* GXT: Bob Mulét Hair & Beauty */;
			break;
		
		case 1:
			return "S_H_02" /* GXT: Herr Kutz Barber */;
			break;
		
		case 2:
			return "S_H_03" /* GXT: Beachcombover Barbers */;
			break;
		
		case 3:
			return "S_H_04" /* GXT: O'Sheas Barbers */;
			break;
		
		case 4:
			return "S_H_05" /* GXT: Herr Kutz Barber */;
			break;
		
		case 5:
			return "S_H_06" /* GXT: Hair On Hawick Barbers */;
			break;
		
		case 6:
			return "S_H_07" /* GXT: Herr Kutz Barber */;
			break;
		
		case 7:
			return "S_CL_01" /* GXT: Discount Store */;
			break;
		
		case 8:
			return "S_CL_02" /* GXT: Discount Store */;
			break;
		
		case 9:
			return "S_CL_03" /* GXT: Binco Clothing */;
			break;
		
		case 10:
			return "S_CL_04" /* GXT: Discount Store */;
			break;
		
		case 11:
			return "S_CL_05" /* GXT: Discount Store */;
			break;
		
		case 12:
			return "S_CL_06" /* GXT: Binco Clothing */;
			break;
		
		case 13:
			return "S_CL_07" /* GXT: Discount Store */;
			break;
		
		case 14:
			return "S_CM_01" /* GXT: Suburban */;
			break;
		
		case 15:
			return "S_CM_03" /* GXT: Suburban */;
			break;
		
		case 16:
			return "S_CM_04" /* GXT: Suburban */;
			break;
		
		case 17:
			return "S_CM_05" /* GXT: Suburban */;
			break;
		
		case 18:
			return "S_CH_01" /* GXT: Ponsonbys */;
			break;
		
		case 19:
			return "S_CH_02" /* GXT: Ponsonbys */;
			break;
		
		case 20:
			return "S_CH_03" /* GXT: Ponsonbys */;
			break;
		
		case 21:
			return "S_CA_01" /* GXT: Vespucci Movie Masks */;
			break;
		
		case 22:
			return "S_T_01" /* GXT: Blazing Tattoo */;
			break;
		
		case 23:
			return "S_T_02" /* GXT: Alamo Tattoo Studio */;
			break;
		
		case 24:
			return "S_T_03" /* GXT: Paleto Tattoo Studio */;
			break;
		
		case 25:
			return "S_T_04" /* GXT: The Pit */;
			break;
		
		case 26:
			return "S_T_05" /* GXT: Los Santos Tattoos */;
			break;
		
		case 27:
			return "S_T_06" /* GXT: Ink Inc Tattoos */;
			break;
		
		case 28:
			return "S_G_01" /* GXT: Ammu-Nation */;
			break;
		
		case 29:
			return "S_G_02" /* GXT: Ammu-Nation */;
			break;
		
		case 30:
			return "S_G_03" /* GXT: Ammu-Nation */;
			break;
		
		case 31:
			return "S_G_04" /* GXT: Ammu-Nation */;
			break;
		
		case 32:
			return "S_G_05" /* GXT: Ammu-Nation */;
			break;
		
		case 33:
			return "S_G_06" /* GXT: Ammu-Nation */;
			break;
		
		case 34:
			return "S_G_07" /* GXT: Ammu-Nation */;
			break;
		
		case 35:
			return "S_G_08" /* GXT: Ammu-Nation */;
			break;
		
		case 36:
			return "S_G_09" /* GXT: Ammu-Nation */;
			break;
		
		case 37:
			return "S_G_10" /* GXT: Ammu-Nation */;
			break;
		
		case 38:
			return "S_G_11" /* GXT: Ammu-Nation */;
			break;
		
		case 39:
			return "S_MO_01" /* GXT: Los Santos Customs */;
			break;
		
		case 40:
			return "S_MO_05" /* GXT: Los Santos Customs */;
			break;
		
		case 41:
			return "S_MO_06" /* GXT: Los Santos Customs */;
			break;
		
		case 42:
			return "S_MO_07" /* GXT: Beeker's Garage */;
			break;
		
		case 43:
			return "S_MO_08" /* GXT: Los Santos Customs */;
			break;
		
		case 44:
			return "S_MO_09" /* GXT: Benny's Original Motor Works */;
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B" /* GXT: Bunker Vehicle Workshop */;
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T" /* GXT: Weapon & Vehicle Workshop */;
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA" /* GXT: Hangar Aircraft Workshop */;
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
			}
			return "S_MO_11" /* GXT: Custom Auto Shop */;
			break;
		
		case 46:
			return "S_G_12" /* GXT: MOC Armory */;
			break;
		
		case 47:
			return "S_G_13" /* GXT: Avenger Armory */;
			break;
		
		case 48:
			return "S_G_14" /* GXT: Terrorbyte Armory */;
			break;
		
		case 49:
			return "S_G_15" /* GXT: Arena Armory */;
			break;
		
		case 52:
			return "S_G_16" /* GXT: Arcade Armory */;
			break;
		
		case 53:
			return "S_G_17" /* GXT: Kosatka Armory */;
			break;
		
		case 50:
			return "S_H_08" /* GXT: Penthouse Barber */;
			break;
		
		case 51:
			return "S_CL_09" /* GXT: Casino Store */;
			break;
		
		case 54:
			return "S_T_07" /* GXT: LS Car Meet Tattoos */;
			break;
		
		case 55:
			return "S_CL_10" /* GXT: Merch Shop */;
			break;
		
		case 56:
			return "S_G_18" /* GXT: Fixer Armory */;
			break;
		
		case 57:
			return "S_CL_11" /* GXT: Record A Studios */;
			break;
		
		case 58:
			return "S_G_19" /* GXT: Gun Van */;
			break;
		
		case 59:
			return "S_G_20";
			break;
		
		case 60:
			return "S_G_21";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_93(int iParam0)//Position - 0x47AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		iVar1 = iVar0;
		iVar2 = func_94(iVar1);
		if (Global_33208[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_94(int iParam0)//Position - 0x47E8
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		case 56:
			return 48;
			break;
		
		case 57:
			return 40;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 48;
			break;
		
		case 60:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x4B62
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_96(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x4B99
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x4C14
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_98(int iParam0)//Position - 0x4C2F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	switch (iLocal_1811[iParam0])
	{
		case 0:
			func_34(iParam0);
			break;
		
		case 1:
			func_99(iParam0, iLocal_65, 0);
			func_99(iParam0, 77, 0);
			func_99(iParam0, 79, 0);
			func_99(iParam0, 293, 0);
			func_99(iParam0, iLocal_66, 0);
			func_99(iParam0, 225, 0);
			func_99(iParam0, 348, 0);
			break;
		
		case 2:
			func_99(iParam0, 110, 1);
			break;
		
		case 3:
			func_99(iParam0, 119, 1);
			func_99(iParam0, 103, 1);
			break;
		
		case 4:
			func_99(iParam0, 122, 1);
			func_99(iParam0, 109, 1);
			break;
		
		case 5:
			func_99(iParam0, 311, 1);
			func_99(iParam0, 90, 1);
			break;
		
		case 6:
			func_99(iParam0, 304, 1);
			break;
		
		case 7:
			func_99(iParam0, 310, 1);
			break;
		
		case 8:
			func_99(iParam0, 309, 1);
			break;
		
		case 9:
			func_99(iParam0, 176, 1);
			break;
		
		case 10:
			func_99(iParam0, 305, 1);
			break;
		
		case 11:
			func_99(iParam0, 84, 1);
			break;
		
		case 12:
			func_99(iParam0, 94, 1);
			break;
		
		case 13:
			func_99(iParam0, 52, 1);
			break;
		
		case 14:
			func_99(iParam0, 135, 1);
			break;
		
		case 15:
			func_99(iParam0, 40, 0);
			func_99(iParam0, 357, 0);
			func_99(iParam0, 475, 0);
			func_99(iParam0, 492, 0);
			func_99(iParam0, 473, 0);
			func_99(iParam0, 496, 0);
			func_99(iParam0, 497, 0);
			func_99(iParam0, 498, 0);
			func_99(iParam0, 499, 0);
			func_99(iParam0, 557, 0);
			func_99(iParam0, 590, 0);
			func_99(iParam0, 500, 0);
			func_99(iParam0, 614, 0);
			func_99(iParam0, 740, 0);
			break;
		
		case 16:
			func_99(iParam0, 121, 1);
			break;
		
		case 17:
			func_99(iParam0, 71, 1);
			break;
		
		case 18:
			func_99(iParam0, 72, 1);
			break;
		
		case 19:
			func_99(iParam0, 446, 1);
			break;
		
		case 20:
			func_99(iParam0, 73, 1);
			break;
		
		case 21:
			func_99(iParam0, 75, 1);
			break;
		
		case 22:
			break;
		
		case 23:
			iLocal_1829 = func_112();
			if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1841[iVar0 /*3*/]))
					{
						if (Local_1841[iLocal_1827 /*3*/] == Local_1841[iVar0 /*3*/])
						{
							if (func_11(HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/]), HUD::GET_BLIP_COORDS(Local_1841[iVar0 /*3*/]), 0))
							{
								Var2 = { HUD::GET_BLIP_COORDS(Local_1841[iVar0 /*3*/]) };
								if ((!func_26(Var2) && CAM::DOES_CAM_EXIST(iLocal_2719)) && CAM::IS_CAM_ACTIVE(iLocal_2719))
								{
									HUD::LOCK_MINIMAP_POSITION(Var2.f_0, Var2.f_1);
								}
								iLocal_1827 = iVar0;
								iVar0 = 50;
								iVar1 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					iLocal_1827 = 0;
				}
			}
			else
			{
				iLocal_1827 = 0;
			}
			break;
	}
	if (iLocal_1811[iParam0] >= 23)
	{
		return 1;
	}
	else
	{
		iLocal_1811[iParam0]++;
	}
	return 0;
}

void func_99(int iParam0, int iParam1, bool bParam2)//Position - 0x4F9F
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar4 = HUD::GET_FIRST_BLIP_INFO_ID(iParam1);
	while (HUD::DOES_BLIP_EXIST(iVar4))
	{
		if (iLocal_1826 < 50)
		{
			if (func_111(iVar4))
			{
				if (func_110(Var0))
				{
					if (!func_109(&iVar4))
					{
						bVar3 = false;
						switch (iParam1)
						{
							case 77:
							case 79:
							case 293:
							case 225:
							case 348:
							case 90:
							case 109:
							case 122:
							case 119:
							case 311:
							case 103:
							case 279:
							case 304:
							case 310:
							case 309:
							case 38:
							case 176:
							case 305:
							case 84:
							case 94:
							case 126:
							case 52:
							case 99:
							case 102:
							case 135:
							case 136:
							case 40:
							case 357:
							case 110:
							case 121:
							case 71:
							case 72:
							case 446:
							case 73:
							case 111:
							case 75:
							case 475:
							case 473:
							case 492:
							case 496:
							case 497:
							case 498:
							case 499:
							case 500:
							case 557:
							case 590:
							case 614:
							case 740:
							case default:
						}
						bVar3 = true;
						Var5 = { HUD::GET_BLIP_COORDS(iVar4) };
						if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 16)
						{
							if (iParam1 == 110)
							{
								if (Var5.f_1 < 200f)
								{
									bVar3 = true;
								}
								else
								{
									bVar3 = false;
								}
							}
						}
						if (iParam1 == iLocal_66)
						{
							bVar3 = true;
						}
						if (func_11(Var5, 0f, 0f, 0f, 0))
						{
							bVar3 = false;
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var5, 250f, 250f, 250f, false, true, 0))
						{
							bVar3 = false;
						}
						else if (iParam1 != iLocal_66)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_108(Var5, Global_2738587.f_238[iVar8 /*3*/], 200f, 1) && !func_11(Global_2738587.f_238[iVar8 /*3*/], 0f, 0f, 0f, 0))
								{
									bVar3 = false;
								}
								iVar8++;
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_111(iVar4))
							{
								if ((((HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 5) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 1) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 6) || HUD::GET_BLIP_INFO_ID_TYPE(iVar4) == 3)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								if (func_111(iVar4))
								{
									func_107(iParam0, &iVar4, &Var0);
									func_100(Var0, bParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		iVar4 = HUD::GET_NEXT_BLIP_INFO_ID(iParam1);
	}
}

void func_100(struct<3> Param0, bool bParam3, int iParam4)//Position - 0x5267
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_97(Local_1841[iVar0 /*3*/]) == func_97(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		else if (iVar0 == iLocal_1826)
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_1826)
		{
			if (func_97(Local_1841[iVar0 /*3*/]) == func_97(Param0.f_0))
			{
				if (func_104(Param0, Local_1841[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_103(Param0, iVar0, iParam4);
						iVar0 = 50;
						return;
					}
					else
					{
						func_101(Param0, iVar0, iParam4);
						iLocal_1826++;
						iVar0 = 50;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 50;
					return;
				}
				else
				{
					func_101(Param0, iVar0, iParam4);
					iLocal_1826++;
					iVar0 = 50;
					return;
				}
			}
			else
			{
				func_101(Param0, iVar0, iParam4);
				iLocal_1826++;
				iVar0 = 50;
				return;
			}
		}
		else
		{
			func_101(Param0, iVar0, iParam4);
			iLocal_1826++;
			iVar0 = 50;
			return;
		}
		iVar0++;
	}
}

void func_101(struct<3> Param0, int iParam3, int iParam4)//Position - 0x53A7
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_102(iParam3);
	Local_1841[iParam3 /*3*/] = { Param0 };
	if (func_97(Local_1841[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (Local_67.f_2[iParam4 /*26*/].f_3 != -1)
		{
			Local_286[Local_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_35 = iParam3;
			Local_286[Local_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(Local_1841[iParam3 /*3*/]) };
		}
	}
}

void func_102(int iParam0)//Position - 0x5422
{
	int iVar0;
	struct<3> Var1;
	
	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\n");
	iVar0 = 49;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_1841[(iVar0 - 1) /*3*/] };
		Local_1841[iVar0 /*3*/] = { Var1 };
		iVar0 = (iVar0 - 1);
	}
}

void func_103(struct<3> Param0, int iParam3, int iParam4)//Position - 0x5470
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	Local_1841[iParam3 /*3*/] = { Param0 };
	if (func_97(Local_1841[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (Local_67.f_2[iParam4 /*26*/].f_3 != -1)
		{
			Local_286[Local_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_35 = iParam3;
			Local_286[Local_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(Local_1841[iParam3 /*3*/]) };
		}
	}
}

int func_104(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)//Position - 0x54E5
{
	if (func_105(iParam0) < func_105(iParam3))
	{
		return 1;
	}
	return 0;
}

float func_105(int iParam0)//Position - 0x5502
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 10000000f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0))
		{
			Var0 = { func_106(iParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	return SYSTEM::VMAG(Var0);
}

Vector3 func_106(int iParam0)//Position - 0x5545
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = HUD::GET_BLIP_INFO_ID_TYPE(iParam0);
	if (iVar7 == 1)
	{
		iVar3 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar4))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar5, true) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar7 == 6)
	{
		iVar6 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(iVar6))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return Var0;
}

void func_107(int iParam0, int iParam1, var uParam2)//Position - 0x5620
{
	*uParam2 = *iParam1;
	if (!*uParam2 == Global_113408)
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(func_106(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Local_67.f_2[iParam0 /*26*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_108(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x5668
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, bParam7) <= fParam6;
}

int func_109(int iParam0)//Position - 0x5681
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 1;
	}
	if (Global_113405 == *iParam0)
	{
		return 1;
	}
	if (HUD::GET_BLIP_COLOUR(*iParam0) == 39)
	{
		return 1;
	}
	if (func_11(HUD::GET_BLIP_COORDS(*iParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_97(*iParam0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, var uParam2)//Position - 0x56DC
{
	float fVar0;
	
	if (!func_97(iParam0) == iLocal_65)
	{
		fVar0 = func_105(iParam0);
		if (fVar0 > 40f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x5710
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()//Position - 0x5740
{
	int iVar0;
	
	iVar0 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 12))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_113(bool bParam0)//Position - 0x5768
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (SYSTEM::TIMERB() > 500)
	{
		iVar4 = LOCALIZATION::GET_CURRENT_LANGUAGE();
		if (iLocal_2722 != iVar4)
		{
			if (((iLocal_2722 == 8 || iLocal_2722 == 9) || iLocal_2722 == 10) || iLocal_2722 == 12)
			{
				if (((iVar4 != 8 && iVar4 != 9) && iVar4 != 10) && iVar4 != 12)
				{
					iLocal_2722 = iVar4;
					iLocal_2718 = 1;
					iLocal_1811[bParam0] = 0;
					SYSTEM::SETTIMERB(0);
				}
			}
			else if (((iVar4 == 8 || iVar4 == 9) || iVar4 == 10) || iVar4 == 12)
			{
				iLocal_2722 = iVar4;
				iLocal_2718 = 1;
				iLocal_1811[bParam0] = 0;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (!iLocal_2718)
		{
			iVar5 = func_112();
			if (iLocal_1829 != iVar5)
			{
				iLocal_2718 = 1;
				iLocal_1811[bParam0] = 0;
				iLocal_1829 = iVar5;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (!iLocal_2718)
		{
			if (Local_67.f_2[bParam0 /*26*/].f_3 != -1)
			{
				if (Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 == -1)
				{
					iVar3 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
					if (HUD::DOES_BLIP_EXIST(iVar3))
					{
						Var0 = { HUD::GET_BLIP_COORDS(iVar3) };
						if (SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 250f)
						{
							iLocal_2718 = 1;
							iLocal_1811[bParam0] = 0;
							Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
							Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_1841[Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]))
				{
					if (func_97(Local_1841[Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						Var0 = { HUD::GET_BLIP_COORDS(Local_1841[Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]) };
						if (!func_11(Var0, Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_36, 0))
						{
							iLocal_2718 = 1;
							iLocal_1811[bParam0] = 0;
							Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
							Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
					else
					{
						iLocal_2718 = 1;
						iLocal_1811[bParam0] = 0;
						Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
						Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
						SYSTEM::SETTIMERB(0);
					}
				}
				else
				{
					iLocal_2718 = 1;
					iLocal_1811[bParam0] = 0;
					Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
					Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
					SYSTEM::SETTIMERB(0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return iLocal_2718;
}

void func_114(bool bParam0)//Position - 0x5A4A
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_71())
	{
		if (iLocal_2718 == 0)
		{
			func_146(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
			}
			if (iVar0 > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
			{
				if (!iLocal_1995)
				{
					func_144();
					SYSTEM::SETTIMERA(0);
					iLocal_1995 = 1;
				}
			}
			else
			{
				iLocal_1995 = 0;
			}
			if (iVar0 < -28 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
			{
				if (!iLocal_1996)
				{
					func_142();
					SYSTEM::SETTIMERA(0);
					iLocal_1996 = 1;
				}
			}
			else
			{
				iLocal_1996 = 0;
			}
		}
		if (!bLocal_1994)
		{
			if (iLocal_1826 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				if (iLocal_2718 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
					{
						if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
						{
							if (func_141(HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/])))
							{
								iLocal_1997 = 0;
								Local_286[iLocal_1791 /*47*/].f_4.f_15 = { Local_1841[iLocal_1827 /*3*/] };
								Local_286[iLocal_1791 /*47*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(Local_286[iLocal_1791 /*47*/].f_4.f_15) };
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
								{
									Local_286[iLocal_1791 /*47*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true) };
								}
								else if (func_10(PLAYER::PLAYER_ID(), 1, 1))
								{
									Local_286[iLocal_1791 /*47*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								}
								else
								{
									Local_286[iLocal_1791 /*47*/].f_4.f_39 = { 0f, 0f, 0f };
								}
								Local_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								func_32(&uLocal_2001);
								func_82(bParam0);
								bLocal_1994 = true;
								if (iLocal_2720 != 5)
								{
									CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
								}
								iLocal_1997 = 0;
								bLocal_1992 = false;
								iLocal_1993 = 1;
								iLocal_2717 = 1;
								func_117(2, bParam0);
								MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 4);
								MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 20);
								MISC::CLEAR_BIT(&(Local_67.f_2[bParam0 /*26*/].f_6), 3);
							}
							else
							{
								func_117(27, bParam0);
							}
						}
					}
				}
			}
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 7) && bLocal_1994 == 0)
			{
				iLocal_2717 = 1;
				func_117(1, bParam0);
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 7);
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 4) && Local_67.f_2[bParam0 /*26*/].f_7 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 4);
					MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 5);
					iLocal_2717 = 1;
					func_117(24, bParam0);
				}
			}
			else if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 5) && Local_67.f_2[bParam0 /*26*/].f_7 == 7)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 5);
					MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 4);
					iLocal_2717 = 1;
					func_117(25, bParam0);
				}
			}
			if (!BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 3) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 3))
			{
				if (Local_67.f_2[bParam0 /*26*/].f_7 == 5 && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 4))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/))
					{
						func_117(20, bParam0);
						func_116(bParam0, 0, 0);
						iLocal_2717 = 1;
						MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1992)
			{
				if (func_115())
				{
					if (iLocal_2718 == 0)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
						{
							if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
							{
								if (func_141(HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/])))
								{
									func_117(9, bParam0);
									if (iLocal_2720 != 5)
									{
										CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
									}
									iLocal_1997 = 0;
									bLocal_1992 = false;
									iLocal_1993 = 1;
									Local_286[iLocal_1791 /*47*/].f_4.f_15 = { Local_1841[iLocal_1827 /*3*/] };
									Local_286[iLocal_1791 /*47*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(Local_286[iLocal_1791 /*47*/].f_4.f_15) };
									Local_286[iLocal_1791 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_286[iLocal_1791 /*47*/].f_4.f_33 = 0f;
									Local_286[iLocal_1791 /*47*/].f_4.f_34 = -1;
									MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 20);
									func_116(bParam0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_2717 = 1;
								}
								else
								{
									func_117(27, bParam0);
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_2720 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
					}
					iLocal_1997 = 0;
					bLocal_1992 = false;
					iLocal_1993 = 1;
				}
			}
			else if (!iLocal_1993)
			{
				if (SYSTEM::TIMERA() > 0)
				{
					if (iLocal_2720 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
					}
					bLocal_1992 = false;
					iLocal_1997 = 0;
					iLocal_1993 = 1;
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	HUD::SET_TEXT_RENDER_ID(iLocal_1828);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1833, fLocal_1837, fLocal_1838, fLocal_1835, fLocal_1836, 0, 0, 0, 255, 0);
	}
}

int func_115()//Position - 0x5F7E
{
	if (CAM::DOES_CAM_EXIST(iLocal_2719))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			return 1;
		}
	}
	if (bLocal_1992 || !iLocal_1993)
	{
		return 1;
	}
	return 0;
}

void func_116(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5FB3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1)))
			{
				if (bParam2)
				{
					TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
				}
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_117(int iParam0, bool bParam1)//Position - 0x60A2
{
	if (!func_15(Local_67.f_2[bParam1 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam1 /*26*/].f_1))
		{
			if (!func_140())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2740, 8, NETWORK::NET_TO_PED(Local_67.f_2[bParam1 /*26*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_67.f_2[bParam1 /*26*/].f_1), PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
					}
					switch (iParam0)
					{
						case 1:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 2:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 5:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 7:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 9:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 12:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 13:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 24:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 25:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 26:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 27:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 20:
							func_118(&uLocal_2740, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						}
				}
			}
			else
			{
				iParam0 = 0;
			}
		}
	}
}

int func_118(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x62B7
{
	func_139(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 1;
	return func_119(sParam2, iParam3, 0);
}

int func_119(char* sParam0, int iParam1, bool bParam2)//Position - 0x6305
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_138();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_137();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_129();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_128())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_79248)
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
			if (func_127())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_126();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_125();
		func_120();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_138();
	}
	return 0;
}

void func_120()//Position - 0x65D3
{
	if (!func_121())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_121()//Position - 0x660A
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_124())
	{
		return 0;
	}
	if (func_122(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_122(int iParam0)//Position - 0x666D
{
	return func_123(iParam0, 20);
}

var func_123(int iParam0, int iParam1)//Position - 0x667D
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_124()//Position - 0x6695
{
	return -1;
}

void func_125()//Position - 0x669E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_126()//Position - 0x66CF
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_127()//Position - 0x6764
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x678B
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
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

void func_129()//Position - 0x6824
{
	if (func_136(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_130();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

var func_130()//Position - 0x68C6
{
	func_131();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_131()//Position - 0x68DF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_134(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_133(PLAYER::PLAYER_PED_ID());
			if (func_132(iVar0) && (!func_136(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_132(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_132(int iParam0)//Position - 0x69DC
{
	return iParam0 < 3;
}

int func_133(int iParam0)//Position - 0x69E8
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_134(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_134(int iParam0)//Position - 0x6A25
{
	if (func_132(iParam0))
	{
		return func_135(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_135(int iParam0)//Position - 0x6A4A
{
	return Global_2139[iParam0 /*29*/];
}

bool func_136(int iParam0)//Position - 0x6A59
{
	return Global_43922 == iParam0;
}

void func_137()//Position - 0x6A67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

void func_138()//Position - 0x6ABE
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6B15
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

int func_140()//Position - 0x6B6B
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_141(struct<3> Param0)//Position - 0x6B8D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_26(Global_2738587.f_238[iVar0 /*3*/]))
		{
			if (func_108(Param0, Global_2738587.f_238[iVar0 /*3*/], 200f, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_142()//Position - 0x6BDD
{
	if (bLocal_1994)
	{
		if (bLocal_1992)
		{
			func_143();
		}
		else if (!CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			iLocal_1997 = 1;
			iLocal_2717 = 1;
		}
		else
		{
			func_143();
		}
		bLocal_1992 = true;
		iLocal_1993 = 1;
	}
	else
	{
		func_143();
	}
}

void func_143()//Position - 0x6C21
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1827++;
	if (iLocal_1827 > (iLocal_1826 - 1))
	{
		iLocal_1827 = 0;
	}
	if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/]) };
		if (!func_26(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

void func_144()//Position - 0x6C8E
{
	if (bLocal_1994)
	{
		if (bLocal_1992)
		{
			func_145();
		}
		else if (!CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			iLocal_1997 = 1;
			iLocal_2717 = 1;
		}
		else
		{
			func_145();
		}
		bLocal_1992 = true;
		iLocal_1993 = 1;
	}
	else
	{
		func_145();
	}
}

void func_145()//Position - 0x6CD2
{
	struct<3> Var0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1827 = (iLocal_1827 - 1);
	if (iLocal_1827 < 0)
	{
		iLocal_1827 = (iLocal_1826 - 1);
		if (iLocal_1827 < 0)
		{
			iLocal_1827 = 0;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_1841[iLocal_1827 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_1841[iLocal_1827 /*3*/]) };
		if (!func_26(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

void func_146(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x6D4A
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

void func_147(int iParam0)//Position - 0x6E1F
{
	if (func_13(Local_67.f_2[iParam0 /*26*/]))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_2719))
		{
			if ((!func_154() && !func_78(8, -1)) && Local_67.f_2[iParam0 /*26*/].f_7 != 6)
			{
				iLocal_2719 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_2719, NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), Local_2729, true);
				func_150(iParam0);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_2719, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				iLocal_2717 = 1;
				Global_113425 = 1;
			}
		}
		else if (bLocal_1994)
		{
			if (!Global_113425)
			{
				if (iLocal_1997)
				{
					if (!CAM::IS_CAM_ACTIVE(iLocal_2719))
					{
						iLocal_2720 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
						if (iLocal_2720 != 5)
						{
							if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
							{
								CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(4);
							}
						}
						func_41(4, 1, -1);
						func_149();
						Global_113425 = 1;
						CAM::SET_CAM_ACTIVE(iLocal_2719, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
						func_150(iParam0);
						iLocal_2717 = 1;
						iLocal_1997 = 0;
						Global_113425 = 1;
					}
				}
			}
			if ((((CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 23 /*INPUT_ENTER*/)) && !func_154()) && !func_78(8, -1)) && Local_67.f_2[iParam0 /*26*/].f_7 != 6)
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_2719))
				{
					func_150(iParam0);
				}
			}
			else if ((CAM::IS_CAM_ACTIVE(iLocal_2719) && !func_154()) && !func_78(8, -1))
			{
				CAM::SET_CAM_ACTIVE(iLocal_2719, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (iLocal_2720 != 5)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
				}
				iLocal_1997 = 0;
				bLocal_1992 = false;
				iLocal_1993 = 1;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
				Global_113425 = 0;
				HUD::UNLOCK_MINIMAP_POSITION();
				HUD::UNLOCK_MINIMAP_ANGLE();
				HUD::SET_RADAR_ZOOM(0);
				iLocal_2717 = 1;
				func_148();
			}
		}
		else if (CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			func_150(iParam0);
		}
	}
}

void func_148()//Position - 0x7011
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1826)
	{
		if (bLocal_1994)
		{
			if (iLocal_62 == Local_1841[iVar0 /*3*/])
			{
				iLocal_1827 = iVar0;
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_149()//Position - 0x705E
{
	if (!func_26(Local_286[iLocal_1791 /*47*/].f_4.f_5))
	{
		if (CAM::DOES_CAM_EXIST(iLocal_2719) && CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			HUD::LOCK_MINIMAP_POSITION(Local_286[iLocal_1791 /*47*/].f_4.f_5, Local_286[iLocal_1791 /*47*/].f_4.f_5.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}
}

void func_150(int iParam0)//Position - 0x70BC
{
	if (CAM::DOES_CAM_EXIST(iLocal_2719))
	{
		func_151(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), &iLocal_2719, Local_2733);
		CAM::SET_CAM_FOV(iLocal_2719, fLocal_2732);
		CAM::SET_CAM_NEAR_CLIP(iLocal_2719, 0.01f);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 13))
		{
			MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 13);
		}
	}
	else if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 13))
	{
		func_149();
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 13);
	}
	HUD::DONT_TILT_MINIMAP_THIS_FRAME();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
}

void func_151(int iParam0, int iParam1, struct<3> Param2)//Position - 0x715B
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
			fVar5 = Var0.f_1;
			Var6 = { func_153(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_2729)) };
			func_152(Var6, &fVar3, &fVar4, 1);
			CAM::SET_CAM_ROT(*iParam1, fVar3, fVar5, fVar4, 2);
		}
	}
}

void func_152(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x71C2
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = MISC::ATAN2(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = MISC::ATAN2(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

Vector3 func_153(struct<3> Param0)//Position - 0x7267
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_154()//Position - 0x72A6
{
	return Global_23570;
}

void func_155(bool bParam0)//Position - 0x72B1
{
	if ((((Local_67.f_2[bParam0 /*26*/].f_7 == 2 || Local_67.f_2[bParam0 /*26*/].f_7 == 4) || Local_67.f_2[bParam0 /*26*/].f_7 == 5) || Local_67.f_2[bParam0 /*26*/].f_7 == 6) || Local_67.f_2[bParam0 /*26*/].f_7 == 7)
	{
		if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 2))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
			{
				if (Local_67.f_2[bParam0 /*26*/].f_3 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)))
				{
					if (Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) > 5f)
						{
							func_117(12, bParam0);
							if (iLocal_1999 > iLocal_1998)
							{
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_179("TXI_HWRUN" /* GXT: ~s~You didn't pay the taxi fare.~n~The Cops have been alerted. */, -1);
									}
								}
							}
						}
						else if (iLocal_1999 > iLocal_1998)
						{
							if (func_176(PLAYER::PLAYER_ID()) >= iLocal_1999 && MONEY::NETWORK_CAN_SPEND_MONEY(iLocal_1999, false, false, true, -1, 0))
							{
								if (Local_67.f_2[bParam0 /*26*/].f_7 == 6)
								{
									func_117(5, bParam0);
								}
								else
								{
									func_117(13, bParam0);
								}
								func_156(iLocal_1999, 0);
							}
							else
							{
								func_117(7, bParam0);
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_179("TXI_HNMON" /* GXT: ~s~You don't have enough cash to pay the taxi fare.~n~The Cops have been alerted. */, -1);
									}
								}
							}
						}
						else
						{
							if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 27))
							{
								MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 27);
								func_156(0, 0);
							}
							func_117(13, bParam0);
						}
						MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 2);
						func_32(&uLocal_1823);
					}
				}
			}
		}
	}
}

void func_156(int iParam0, bool bParam1)//Position - 0x750F
{
	int iVar0;
	
	if (func_175())
	{
		func_161(joaat("SERVICE_SPEND_TAXI"), iParam0, &iVar0, 0, 1, 0);
		Global_4535851[iVar0 /*85*/].f_66.f_16 = func_160(bParam1, 1, 0);
	}
	else
	{
		func_157(-iParam0, 0);
		MONEY::NETWORK_SPENT_TAXI(iParam0, false, true, 0, bParam1);
	}
}

void func_157(int iParam0, int iParam1)//Position - 0x7558
{
	func_159(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_158(iParam0, 0);
	}
}

void func_158(int iParam0, bool bParam1)//Position - 0x7576
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_159(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7587
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_4 = iVar1;
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 = (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_158(iVar1, 0);
	}
}

int func_160(bool bParam0, int iParam1, int iParam2)//Position - 0x760A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_161(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7621
{
	int iVar0;
	
	if (!func_175())
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_162(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_162(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_162(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			func_162(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7F34
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_175())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_174()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535851[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_169(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535851[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535851[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537356 = 1;
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_168(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_163(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x80E3
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_164(iParam0);
	}
}

void func_164(int iParam0)//Position - 0x811B
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_175())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_167(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535851[iParam0 /*85*/].f_66);
		}
		func_165(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_165(var uParam0)//Position - 0x816F
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
	func_166(&(uParam0->f_14));
	func_166(&(uParam0->f_14.f_13));
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

void func_166(var uParam0)//Position - 0x827B
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

int func_167(int iParam0)//Position - 0x82C3
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_168(int iParam0, int iParam1)//Position - 0x82EE
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x8302
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_175())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535851[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535851[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535851[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535851[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535851[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535851[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535851[iVar0 /*85*/].f_66 = iParam0;
			Global_4535851[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535851[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535851[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535851[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535851[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535851[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537338 = 0;
			if (bParam6)
			{
				Global_4535851[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_170(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_170(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x843F
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_172(Var0.f_1);
	if ((Global_262145.f_24288 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24289 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24290 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_171();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_171()//Position - 0x84D3
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_172(int iParam0)//Position - 0x84E3
{
	var uVar0;
	
	if (func_173(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_173(var uParam0)//Position - 0x84FE
{
	int iVar0;
	
	iVar0 = uParam0;
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

int func_174()//Position - 0x8520
{
	return Global_1574925;
}

int func_175()//Position - 0x852C
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x8543
{
	var uVar0;
	
	uVar0 = func_177(iParam0);
	return uVar0;
}

int func_177(int iParam0)//Position - 0x8555
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_178(iParam0))
		{
			return Global_1845263[iParam0 /*877*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x8598
{
	if (!func_173(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

void func_179(char* sParam0, int iParam1)//Position - 0x85B7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_180(bool bParam0)//Position - 0x85CE
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1831))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_1832);
		iLocal_1833 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1832) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1833))
		{
			if (func_13(Local_67.f_2[bParam0 /*26*/]))
			{
				iLocal_1831 = OBJECT::CREATE_OBJECT(iLocal_1832, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true), false, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1831, NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), "Chassis"), Local_2723, Local_2726, false, false, false, false, 2, true, 0);
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
				{
					HUD::REGISTER_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */, false);
					if (!HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iLocal_1831)))
					{
						HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_1831));
					}
				}
				iLocal_1828 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /* GXT: Taxi */);
				return 1;
			}
		}
	}
	return 0;
}

void func_181(int iParam0)//Position - 0x86B5
{
	int iVar0;
	
	if (func_184())
	{
		if (Local_67.f_2[iParam0 /*26*/].f_7 == 8 && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 20f, 20f, 3f, false, true, 1))
		{
			STREAMING::REQUEST_ANIM_DICT("TAXI_HAIL");
			if (STREAMING::HAS_ANIM_DICT_LOADED("TAXI_HAIL"))
			{
				if (uLocal_1802[iParam0] == -1)
				{
					func_183(&(uLocal_1802[iParam0]), 0, "TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */, 1, 0, 0, 0);
				}
				if (func_182(uLocal_1802[iParam0], 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SWAP_WEAPON(0, false);
						TASK::TASK_PLAY_ANIM(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0f, false, false, false);
					}
					if (func_50("TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_286[iLocal_1791 /*47*/].f_4.f_1 = iParam0;
					MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 23);
					MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 22);
					func_48(&(uLocal_1802[iParam0]));
				}
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
			func_48(&(uLocal_1802[iParam0]));
		}
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
		func_48(&(uLocal_1802[iParam0]));
	}
}

int func_182(int iParam0, bool bParam1)//Position - 0x882D
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_183(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x88E5
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_48(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_184()//Position - 0x8A10
{
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Local_286[iLocal_1791 /*47*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			return 0;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
		if (func_185(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
		if (func_52(0))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
		if (func_80())
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_185(int iParam0, bool bParam1, bool bParam2)//Position - 0x8AA4
{
	if (bParam1)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845263[iParam0 /*877*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_186(int iParam0)//Position - 0x8AD6
{
	return func_187(iParam0);
}

var func_187(int iParam0)//Position - 0x8AE4
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

void func_188(int iParam0)//Position - 0x8AFB
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (((((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 10f, 10f, 2f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/])) < 3f) && !func_196(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0) && Local_67.f_2[iParam0 /*26*/].f_7 != 9) && Local_67.f_2[iParam0 /*26*/].f_7 != 10) && Local_67.f_2[iParam0 /*26*/].f_7 != 11)
	{
		if (BitTest(Local_286[iLocal_1791 /*47*/].f_3, (0 + iParam0)))
		{
			func_146(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_1995 == 0)
				{
					SYSTEM::SETTIMERA(0);
					iLocal_1995 = 1;
				}
			}
			else
			{
				iLocal_1995 = 0;
			}
			if (iLocal_1995 == 1)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_3), (0 + iParam0));
						iLocal_1995 = 0;
					}
				}
			}
		}
		else
		{
			if (!BitTest(uLocal_1792, (0 + iParam0)))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iVar5 = func_195(1191, -1);
					if ((!BitTest(iVar5, 7) || !BitTest(iVar5, 8)) || !BitTest(iVar5, 9))
					{
						if (func_88(&uLocal_1823, 20000, 0))
						{
							if ((((INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/])) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_UPRIGHT(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 90f)) && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_193(PLAYER::PLAYER_ID()))
							{
								func_179("TXM_H02" /* GXT: Press ~INPUT_ENTER~ to enter the taxi as a passenger. */, -1);
								if (!BitTest(iVar5, 7))
								{
									MISC::SET_BIT(&iVar5, 7);
								}
								else if (!BitTest(iVar5, 8))
								{
									MISC::SET_BIT(&iVar5, 8);
								}
								else
								{
									MISC::SET_BIT(&iVar5, 9);
								}
								func_190(1191, iVar5, -1, 1);
								func_32(&uLocal_1823);
								MISC::SET_BIT(&uLocal_1792, (0 + iParam0));
							}
						}
					}
				}
			}
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/))
			{
				if (SYSTEM::TIMERB() > 275)
				{
					if (!BitTest(Local_286[iLocal_1791 /*47*/].f_3, (0 + iParam0)))
					{
						if (func_189(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/])) == 1)
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 1, false))
							{
								iVar4 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 2, false))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 2, false))
						{
							iVar4 = 2;
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), 0, false))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]), -1, iVar4, 1f, 8388608, 0, 0);
						MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_3), (0 + iParam0));
						iLocal_2717 = 1;
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
		}
	}
	else
	{
		if (BitTest(uLocal_1792, (0 + iParam0)))
		{
			MISC::CLEAR_BIT(&uLocal_1792, (0 + iParam0));
			if (func_50("TXM_H02" /* GXT: Press ~INPUT_ENTER~ to enter the taxi as a passenger. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (BitTest(Local_286[iLocal_1791 /*47*/].f_3, (0 + iParam0)))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_1995 = 0;
			}
			MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_3), (0 + iParam0));
		}
	}
}

int func_189(int iParam0)//Position - 0x8EA9
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		else
		{
			return -1;
		}
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (SYSTEM::VMAG(Var9) < SYSTEM::VMAG(Var12))
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

void func_190(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8F39
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_191(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_191(int iParam0, var uParam1)//Position - 0x8F67
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_192(uParam1));
}

int func_192(var uParam0)//Position - 0x8F7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_174();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

bool func_193(int iParam0)//Position - 0x8FB0
{
	return func_194(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_194(int iParam0)//Position - 0x8FC4
{
	return Global_1886967[iParam0 /*609*/].f_586;
}

int func_195(int iParam0, int iParam1)//Position - 0x8FD8
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_191(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_196(int iParam0, bool bParam1)//Position - 0x9007
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_197(bool bParam0)//Position - 0x906D
{
	if (Local_67.f_2[bParam0 /*26*/].f_2 == iLocal_1791)
	{
		if (Local_67.f_2[bParam0 /*26*/].f_3 == -1)
		{
			if (Local_67.f_2[bParam0 /*26*/].f_7 == 3)
			{
				if (func_10(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1))
					{
						if (func_13(Local_67.f_2[bParam0 /*26*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
							{
								func_198(bParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_47(bParam0);
}

void func_198(int iParam0)//Position - 0x9100
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_1793[iParam0]))
	{
		iLocal_1793[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_67.f_2[iParam0 /*26*/]));
		HUD::SET_BLIP_SPRITE(iLocal_1793[iParam0], 198 /*RADAR_TAXI*/);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1793[iParam0], "TXM_BLIP" /* GXT: Taxi */);
		HUD::SET_BLIP_FLASHES(iLocal_1793[iParam0], true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_1793[iParam0], 7000);
		MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 12);
	}
}

void func_199(bool bParam0)//Position - 0x9176
{
	if (!BitTest(Global_2738587.f_853, 1))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1793[bParam0]))
		{
			MISC::SET_BIT(&(Global_2738587.f_853), 1);
		}
	}
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_1, 0))
	{
		if (Local_67.f_2[bParam0 /*26*/].f_2 == iLocal_1791)
		{
			MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_1), 0);
		}
	}
}

void func_200(bool bParam0)//Position - 0x91D3
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	bool bVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1) && func_13(Local_67.f_2[bParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/]))
		{
			iVar3 = 3;
			Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false) };
			if (Local_67.f_2[bParam0 /*26*/].f_7 != 11)
			{
				if (Local_67.f_2[bParam0 /*26*/].f_7 != 9)
				{
					if (Local_67.f_2[bParam0 /*26*/].f_7 != 10)
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 251, true);
						if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_3, bParam0))
						{
							if (func_223(bParam0))
							{
								func_39(1, 1, 1);
								MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bParam0);
							}
						}
						if (Local_67.f_2[bParam0 /*26*/].f_7 != 8)
						{
							VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true);
						}
					}
				}
			}
			func_222(bParam0);
			switch (Local_67.f_2[bParam0 /*26*/].f_7)
			{
				case 0:
					break;
				
				case 1:
					if (Local_67.f_2[bParam0 /*26*/].f_2 != -1 && Local_67.f_2[bParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (func_11(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_218(bParam0, func_221(PLAYER::PLAYER_ID()), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_29), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_34), 250))
							{
								Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD"), 1))
						{
							iVar1 = iLocal_1839;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])), iVar1, (45f - 20f), 20f);
						}
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 21);
					}
					break;
				
				case 2:
					if (Local_67.f_2[bParam0 /*26*/].f_2 != -1 && Local_67.f_2[bParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (!BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2, 21))
						{
							if (func_215(Var4, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_29, &(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_29)))
							{
								PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 0.5f);
								if (BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2, 14))
								{
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_29, 0, 60f, false);
								}
								else
								{
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_26, Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_29, 3, 60f, false);
								}
								iLocal_2717 = 1;
								MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 21);
							}
						}
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 23);
					}
					break;
				
				case 3:
					if (Local_67.f_2[bParam0 /*26*/].f_2 != -1 && Local_67.f_2[bParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (!BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2, 23))
						{
							VEHICLE::START_VEHICLE_HORN(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), 2500, MISC::GET_HASH_KEY("NORMAL"), false);
							MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 23);
						}
						if (!BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2, 22))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
							iLocal_2717 = 1;
							MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
						}
						else if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) != 5)
							{
								MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
							}
						}
					}
					break;
				
				case 4:
					if (Local_67.f_2[bParam0 /*26*/].f_3 != -1 && Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
					{
						Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_33 = 0f;
						Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_34 = -1;
					}
					if (func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
					{
						func_116(bParam0, 0, 0);
					}
					STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
					if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Var4, 5, 5f, 1076627627, -1f, 1f, true);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), 0, false))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0f, false, false, false);
							}
						}
					}
					break;
				
				case 5:
					if (Local_67.f_2[bParam0 /*26*/].f_3 != -1 && Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (func_11(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_67.f_2[bParam0 /*26*/].f_8, Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_5, 0))
						{
							if (Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_34 == -1)
							{
								if (func_214(Local_67.f_2[bParam0 /*26*/].f_8, &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_33), bParam0) || func_204(Local_67.f_2[bParam0 /*26*/].f_8, &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_33), bParam0))
								{
									MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 14);
									func_116(bParam0, 0, 0);
									iLocal_2717 = 1;
								}
								Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]);
								if (func_201(&iVar8, Local_67.f_2[bParam0 /*26*/].f_8, &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_33), &(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_34), 1000))
								{
									MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 14);
									Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_34 = 0;
									func_116(bParam0, 0, 0);
									iLocal_2717 = 1;
								}
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
							if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(bParam0))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1839;
									iVar3 = 3;
									if (BitTest(Local_67.f_2[bParam0 /*26*/].f_6, 3) || BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1840;
									}
									if (BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_116(bParam0, 1, 1);
									PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 0.5f);
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, fVar2, iVar1, 45f);
									TASK::TASK_VEHICLE_PARK(0, NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_30, Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_33, iVar3, 60f, true);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									iLocal_2717 = 1;
								}
							}
						}
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
						MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 25);
					}
					break;
				
				case 6:
					if (Local_67.f_2[bParam0 /*26*/].f_3 != -1 && Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (!BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2, 24))
						{
							if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
								iLocal_2717 = 1;
								MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) != 5)
								{
									MISC::CLEAR_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
								}
							}
							func_7(bParam0, 1);
						}
					}
					break;
				
				case 7:
					if (Local_67.f_2[bParam0 /*26*/].f_3 != -1 && Local_67.f_2[bParam0 /*26*/].f_3 == iLocal_1791)
					{
						iLocal_2717 = 1;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
								if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
								{
									TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
									TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!BitTest(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2, 25))
							{
								if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) != 5)
								{
									func_116(bParam0, 1, 1);
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), true), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1)), 3, 60f, false);
								}
								MISC::SET_BIT(&(Local_286[Local_67.f_2[bParam0 /*26*/].f_3 /*47*/].f_4.f_2), 25);
							}
						}
					}
					break;
				
				case 8:
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
						if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
						{
							TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1));
							TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true), 8, 12f, 786599, 400f, -1f, false);
					}
					break;
				
				case 9:
				case 10:
					func_7(bParam0, 0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), false);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false);
					if (((!PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1)) && !func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1)) && !func_9(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), -251125078, 1)) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/])) != 8)
					{
						if (Local_67.f_2[bParam0 /*26*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), -1, false) != NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_67.f_2[bParam0 /*26*/].f_4 != -1)
						{
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_4)))
							{
								iVar9 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[bParam0 /*26*/].f_4)));
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							ENTITY::IS_ENTITY_DEAD(iVar9, false);
						}
						else
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 2, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 65536, true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), iVar9, 500f, -1, false, false);
							}
							else
							{
								TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), Var4, 500f, -1, false, false);
							}
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 65536, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 2, true);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), iVar9, 8, 25f, 790564, 200f, 15f, true);
							}
							else
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), Var4, 8, 25f, 790564, 200f, 15f, true);
							}
						}
					}
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), true);
					break;
				
				case 11:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/]))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false);
						func_28(&(Local_67.f_2[bParam0 /*26*/]));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/].f_1))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 251, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), false);
						func_28(&(Local_67.f_2[bParam0 /*26*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_221(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), true), true);
			if (fVar10 < fLocal_2738)
			{
				fLocal_2738 = fVar10;
				bLocal_2737 = bParam0;
			}
		}
	}
	if (Local_67.f_2[bParam0 /*26*/].f_7 == 11)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/]))
			{
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false);
				func_28(&(Local_67.f_2[bParam0 /*26*/]));
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[bParam0 /*26*/].f_1))
			{
				if (!func_15(Local_67.f_2[bParam0 /*26*/].f_1))
				{
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1), false);
				}
				func_28(&(Local_67.f_2[bParam0 /*26*/].f_1));
			}
		}
	}
}

int func_201(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0xA64D
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	float fVar31;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_203(Param1))
	{
		iVar20 = 9;
	}
	bVar21 = true;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7)));
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (Param1.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *uParam6, &Var28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				iVar18 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Var28, 1, iVar20, 3f, 0f);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar18))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(Var28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, bVar21))
					{
						if (fVar31 < 90f || fVar31 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar18) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (SYSTEM::TO_FLOAT(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * SYSTEM::TO_FLOAT(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (SYSTEM::TO_FLOAT(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * SYSTEM::TO_FLOAT(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var28, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param1.f_2 - Var28.f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_202(Param1, Var28) || fVar17 < 0.5f)
						{
							Var28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var28, fVar31, fVar15, 0f, 0f) };
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
							{
								iVar11 = *iParam0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var28, 3f, 3f, 3f, iVar11))
							{
								if (func_214(Var28, &Var28, &fVar31, 1) || func_204(Var28, &Var28, &fVar31, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*uParam6++;
			if (*uParam6 >= iVar25)
			{
				Var28 = { Param1 };
				bVar19 = true;
			}
		}
	}
	if (bVar19)
	{
		*uParam4 = { Var28 };
		*uParam5 = fVar31;
		Var2 = { Param1 - *uParam4 };
		Var2.f_2 = 0f;
		fLocal_1825 = SYSTEM::VMAG(Var2);
		if (fLocal_1825 != 0f)
		{
		}
		return 1;
	}
	return 0;
}

int func_202(struct<3> Param0, struct<3> Param3)//Position - 0xA98C
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_203(struct<3> Param0)//Position - 0xA9EE
{
	char* sVar0;
	
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, sVar0))
	{
		return 1;
	}
	return 0;
}

int func_204(struct<3> Param0, var uParam3, float fParam4, bool bParam5)//Position - 0xACE2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_213(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_213(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_213(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_213(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_213(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam3 = { 1996.3718f, 3818.8308f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*uParam3 = { 416.871f, -1613.0814f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -1039.5425f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -911.1597f, -2676.1316f, 12.7567f };
		*fParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam3 = { -211.8546f, -2030.7715f, 26.6204f };
		*fParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*fParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam3 = { -2294.9446f, 376.2506f, 173.4669f };
		*fParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam3 = { -1897.0765f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*fParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*fParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*fParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*fParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*fParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*fParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam3 = { -411.3629f, 1174.5865f, 324.6421f };
		*fParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.1006f, 95.1566f, 53.5054f };
				*fParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.1394f, 84.2472f, 53.0592f };
				*fParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.4266f, 74.5077f, 52.6622f };
				*fParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.1774f, 73.9207f, 52.7438f };
				*fParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.1179f, 35.7838f, 52.659f };
				*fParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.7413f, 64.1491f, 52.6647f };
				*fParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.6162f, 49.6876f, 52.6585f };
				*fParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.2987f, 54.4598f, 52.6562f };
				*fParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.5254f, 28.2152f };
					*fParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.7506f, 28.1639f };
					*fParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.3936f, 28.1507f };
					*fParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.7668f, 27.7359f };
					*fParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.0425f, 27.1705f };
					*fParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.8105f, 26.3688f };
					*fParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.5731f, 27.9417f };
					*fParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
					*fParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
					*fParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
					*fParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
					*fParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
					*fParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
					*fParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
					*fParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
					*fParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.7413f, -2528.786f, 12.7568f };
					*fParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.7631f, -2539.4978f, 12.7566f };
					*fParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.9523f, -2546.8596f, 12.7566f };
					*fParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.3972f, -2556.898f, 12.6066f };
					*fParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.7437f, -2490.0842f, 12.6396f };
					*fParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.9043f, -2589.1794f, 12.6858f };
					*fParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.3866f, -2501.9521f, 12.6923f };
					*fParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.5065f, -2578.3892f, 12.6932f };
					*fParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.8463f, -2708.9397f, 19.0588f };
					*fParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.2238f, -2716.2166f, 19.06f };
					*fParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.5667f, -2744.797f, 19.0811f };
					*fParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.5092f, -2721.58f, 19.0546f };
					*fParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.1544f, -2740.1174f, 19.0525f };
					*fParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.0872f, -2726.0767f, 19.0452f };
					*fParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.4617f, 19.0509f };
					*fParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.7404f, -2730.7458f, 19.0521f };
					*fParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*fParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.2734f, 12.6069f };
					*fParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.8151f, -2739.345f, 12.6334f };
					*fParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.8304f, -2713.5527f, 12.6333f };
					*fParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.0035f, -2719.6467f, 12.6402f };
					*fParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.8323f, -2729.4646f, 12.6445f };
					*fParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.8478f, -2735.1724f, 12.6656f };
					*fParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*fParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*fParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.0903f, 26.9894f };
				*fParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.1324f, 27.8091f };
				*fParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.0249f, 28.808f };
				*fParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.6997f, 21.4765f };
				*fParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.3993f, 21.2708f };
				*fParam4 = 175.43623f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*fParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.8665f, 21.4152f };
				*fParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.1937f, 21.216f };
				*fParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.4229f, 21.3129f };
				*fParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.7177f, 21.3987f };
				*fParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_210(3, Var1))
	{
		if (func_209(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.1213f, 2731.511f, 16.6437f };
			*fParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*fParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (func_208(Var1, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_208(Var1, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_208(Var1, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_208(Var1, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.2716f, -1753.0505f, 37.63976f };
			*fParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
		*fParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_208(Var1, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam3 = { -1624.4452f, -976.9755f, 12.0175f };
			*fParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*fParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.6527f, 112.7592f };
				*fParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.8483f, 1139.121f, 112.7592f };
				*fParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.7513f, 1154.3668f, 112.7592f };
				*fParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam3 = { 1782.1903f, 3300.076f, 40.4593f };
		*fParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam3 = { -658.2056f, -1388.7886f, 9.499f };
		*fParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*fParam4 = 71.6555f;
		return 1;
	}
	if (!func_206())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_210(7, Var1))
		{
			if (func_209(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.3105f, -465.1634f, 36.1141f };
				*fParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_210(2, Var1))
	{
		if (func_209(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.1086f, 12.7091f };
						*fParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.1935f, -2728.2175f, 12.6647f };
						*fParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.0686f, 12.6676f };
						*fParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.7417f, -2637.8713f, 12.6461f };
						*fParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (bParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
						*fParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
						*fParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
						*fParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
						*fParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
						*fParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
						*fParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
						*fParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
						*fParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_205(Param0, Var27);
	Var32 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_205(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*fParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*fParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*fParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*fParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_12(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.6492f, 5.0031f };
				*fParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam3 = { 498.185f, -1288.5354f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam3 = { 504.1738f, -1421.2511f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam3 = { 1118.7509f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam3 = { 1134.0535f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_205(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0xCE07
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_206()//Position - 0xCE21
{
	int iVar0;
	
	iVar0 = func_130();
	if (iVar0 == 0)
	{
		if (func_207(65))
		{
			return 1;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_207(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_207(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)//Position - 0xCE80
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114372.f_9088.f_99.f_58[iParam0];
}

bool func_208(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0xCEAD
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_209(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0xCED7
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var46[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var46[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var46[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var46[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var46[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var46[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var46[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var46[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var46[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var46[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var46[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var46[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var46[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var46[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var46[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var46[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var46[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var46[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var46[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var46[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var46[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var46[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var46[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var46[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var46[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var46[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var46[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var46[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var46[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var46[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var46[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var46[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var46[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var46[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var46[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var46[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var46[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var46[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var46[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_210(int iParam0, struct<3> Param1)//Position - 0xDC2B
{
	return SYSTEM::VDIST2(Param1, func_212(iParam0)) < func_211(iParam0);
}

float func_211(int iParam0)//Position - 0xDC48
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_212(int iParam0)//Position - 0xDCE0
{
	switch (iParam0)
	{
		case 1:
			return -1155.8766f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.6664f, 2586.2612f, 51.4925f;
			break;
		
		case 5:
			return 3525.0576f, 3711.3232f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.9612f, 5.0696f;
			break;
		
		case 7:
			return -1142.4111f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_213(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0xDDCA
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_214(struct<3> Param0, var uParam3, float fParam4, bool bParam5)//Position - 0xDE21
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 400.9871f, -1659.756f, 26.916147f, 437.65662f, -1617.4789f, 48.341854f, 45f, false, true))
	{
		if (bParam5 < 4)
		{
			*uParam3 = { 413.7399f, -1608.9109f, 28.161f };
			*fParam4 = 238.2568f;
		}
		else
		{
			*uParam3 = { 416.8107f, -1666.5142f, 28.1758f };
			*fParam4 = 144.8478f;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
	{
		if (bParam5 < 4)
		{
			*uParam3 = { -1094.4923f, -2662.2698f, 12.6066f };
			*fParam4 = 196.0365f;
		}
		else
		{
			*uParam3 = { -1076.7362f, -2684.0393f, 12.807f };
			*fParam4 = 211.7278f;
		}
		return 1;
	}
	return 0;
}

int func_215(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)//Position - 0xDF2A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	iVar10 = 1;
	if (!func_203(Param3))
	{
		iVar10 = 9;
	}
	iVar9 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param3, 1, iVar10, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar9))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar9, &Var0);
		if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 0, &Var3) && PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_217(Var14, Var17);
			if (fVar20 < 0f)
			{
				*uParam7 = { Var3 };
				*uParam8 = uParam6;
				return 1;
			}
			else
			{
				*uParam7 = { Var6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_216(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_216(float fParam0, float fParam1, float fParam2)//Position - 0xE027
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

float func_217(struct<3> Param0, struct<3> Param3)//Position - 0xE069
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_218(bool bParam0, struct<3> Param1, var* uParam4, float* fParam5, var uParam6, int iParam7)//Position - 0xE08A
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam6 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_203(Param1))
	{
		iVar9 = 9;
	}
	func_220(Param1, Param1, &(Local_67.f_2[bParam0 /*26*/].f_12), &(Local_67.f_2[bParam0 /*26*/].f_15), iParam7);
	if (func_219(Local_67.f_2[bParam0 /*26*/].f_12, Local_67.f_2[bParam0 /*26*/].f_15))
	{
		if (!func_214(Param1, uParam4, fParam5, 1) && !func_204(Param1, uParam4, fParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (Param1.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *uParam6, uParam4, fParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam4, 1, iVar9, 3f, 0f);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar5))
					{
						fVar2 = (Param1.f_2 - uParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_202(Param1, *uParam4) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false))
							{
								iVar3 = NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]);
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam4, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam6++;
				if (*uParam6 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			return 1;
		}
	}
	return 0;
}

int func_219(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0xE218
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_220(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0xE238
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_96(Var0, *uParam6, 1056964608, 0) || !func_96(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_221(int iParam0)//Position - 0xE303
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_222(bool bParam0)//Position - 0xE316
{
	if (Local_67.f_2[bParam0 /*26*/].f_22 != 0 && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 6))
	{
		func_117(Local_67.f_2[bParam0 /*26*/].f_22, bParam0);
		MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 6);
	}
}

int func_223(bool bParam0)//Position - 0xE362
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = NETWORK::NET_TO_PED(Local_67.f_2[bParam0 /*26*/].f_1);
	iVar1 = NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]);
	Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_67.f_2[bParam0 /*26*/]), false) };
	if (PED::IS_PED_FLEEING(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar1, 1, 7000))
	{
		return 1;
	}
	else if (MISC::IS_BULLET_IN_AREA(Var3, 7f, false))
	{
		if (MISC::IS_BULLET_IN_AREA(Var3, 7f, true))
		{
			func_224(iLocal_1791, 1, 37);
		}
		return 1;
	}
	else
	{
		fVar6 = 15f;
		Var7 = { Var3 };
		Var10 = { Var7 };
		Var7.f_0 = (Var7.f_0 - fVar6);
		Var7.f_1 = (Var7.f_1 - fVar6);
		Var7.f_2 = (Var7.f_2 - fVar6);
		Var10.f_0 = (Var10.f_0 + fVar6);
		Var10.f_1 = (Var10.f_1 + fVar6);
		Var10.f_2 = (Var10.f_2 + fVar6);
		if (MISC::IS_PROJECTILE_IN_AREA(Var7, Var10, false))
		{
			if (MISC::IS_PROJECTILE_IN_AREA(Var7, Var10, true))
			{
				func_224(iLocal_1791, 1, 37);
			}
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar2, true))
				{
					func_224(iLocal_1791, 1, 37);
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iVar2, true))
				{
					func_224(iLocal_1791, 1, 37);
					return 1;
				}
			}
		}
	}
	if (Local_67.f_2[bParam0 /*26*/].f_3 == -1 && Local_67.f_2[bParam0 /*26*/].f_7 == 3)
	{
	}
	return 0;
}

void func_224(int iParam0, int iParam1, int iParam2)//Position - 0xE530
{
	if (iParam0 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1, 1))
		{
			PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), iParam2, PLAYER::GET_WANTED_LEVEL_THRESHOLD(iParam1));
		}
	}
}

void func_225()//Position - 0xE57A
{
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 19))
	{
		if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 16) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 17))
		{
			if (!func_52(0))
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 17);
				func_39(1, 0, 0);
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 18);
			}
		}
		if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 15) && !BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 16))
		{
			if (func_52(0))
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 16);
			}
		}
		if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
			if (func_226(&uLocal_2740, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 15);
			}
		}
	}
}

int func_226(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xE67A
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_306())
	{
		return 0;
	}
	if (func_305())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_227(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_227(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xE6BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_304(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_303(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_298(uParam6))
	{
		return 0;
	}
	if (func_295(iVar0, iVar1, iVar2))
	{
		if (func_294())
		{
			return 0;
		}
		func_293();
		return func_234(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_233(iParam4))
	{
		return 0;
	}
	func_228(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0xE7A4
{
	Global_1663284.f_40.f_1 = iParam0;
	Global_1663284.f_40.f_2 = iParam1;
	Global_1663284.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663284.f_40.f_4), sParam3, 16);
	Global_1663284.f_40.f_8 = iParam4;
	Global_1663284.f_40.f_9 = iParam5;
	Global_1663284.f_40.f_14 = uParam6;
	func_229(iParam4);
	func_293();
	Global_1663284.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_229(int iParam0)//Position - 0xE811
{
	if (func_232(iParam0))
	{
		func_231();
		return;
	}
	func_230();
}

void func_230()//Position - 0xE82D
{
	Global_1663284.f_40.f_10 = 0;
}

void func_231()//Position - 0xE83E
{
	Global_1663284.f_40.f_10 = 1;
}

int func_232(int iParam0)//Position - 0xE84F
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0xE897
{
	return iParam0 > Global_1663284.f_40.f_8;
}

int func_234(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xE8AA
{
	struct<2> Var0;
	
	func_292();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_289(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_286(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_289(uParam0, sParam3, sParam4);
		}
		return func_278(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_277(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_265(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_264(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_235(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_235(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xE9A4
{
	bool bVar0;
	
	func_263();
	bVar0 = true;
	if (func_237(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_236(120000);
		return 1;
	}
	return 0;
}

void func_236(int iParam0)//Position - 0xE9DB
{
	Global_1663284.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663284.f_40.f_12 = 1;
}

int func_237(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xE9FE
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_124();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_257(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663284.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_256(sParam5, bParam6, &iVar3);
	uVar5 = func_254(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_253(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_241(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_240();
	}
	func_263();
	func_239();
	func_238();
	return 1;
}

void func_238()//Position - 0xEB47
{
	Global_1663284.f_57 = 0;
	Global_1663284.f_57.f_1 = 0;
}

void func_239()//Position - 0xEB5F
{
	Global_1663284.f_40 = 3;
}

void func_240()//Position - 0xEB6E
{
	MISC::SET_BIT(&Global_8683, 8);
}

int func_241(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xEB7F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_242(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9390 = iParam6;
			MISC::SET_BIT(&Global_4542983, 0);
		}
		return 1;
	}
	return 0;
}

int func_242(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xEBEB
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_129();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20813 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20813 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20813 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4542968 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_252() == 0)
	{
		func_250();
		return 0;
	}
	func_249(Global_4542967);
	StringCopy(&(Global_4541718[Global_4542967 /*104*/]), sParam1, 64);
	Global_4541718[Global_4542967 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541718[Global_4542967 /*104*/].f_24 = iParam2;
	}
	Global_4541718[Global_4542967 /*104*/].f_25 = iParam7;
	Global_4541718[Global_4542967 /*104*/].f_26 = uParam8;
	Global_4541718[Global_4542967 /*104*/].f_29 = uParam9;
	Global_4541718[Global_4542967 /*104*/].f_30 = uParam12;
	Global_4541718[Global_4542967 /*104*/].f_31 = uParam11;
	Global_4541718[Global_4542967 /*104*/].f_28 = 0;
	Global_4541718[Global_4542967 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541718[Global_4542967 /*104*/].f_33), sParam4, 64);
	Global_4541718[Global_4542967 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541718[Global_4542967 /*104*/].f_50), sParam5, 64);
	Global_4541718[Global_4542967 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541718[Global_4542967 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541718[Global_4542967 /*104*/].f_83), sParam15, 64);
	func_129();
	switch (iParam16)
	{
		case 3:
			Global_4541718[Global_4542967 /*104*/].f_99[Global_20813] = 1;
			break;
		
		case 0:
			Global_4541718[Global_4542967 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541718[Global_4542967 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541718[Global_4542967 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20813)
		{
			case 0:
				func_248(0);
				break;
			
			case 1:
				func_248(1);
				break;
			
			case 2:
				func_248(2);
				break;
			
			case 3:
				func_248(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4542968 = 1;
				break;
			
			case 0:
				Global_4542968 = 1;
				break;
			
			case 2:
				Global_4542968 = 1;
				break;
			
			case 1:
				Global_4542968 = 1;
				break;
			}
	}
	Global_23235[Global_4542967] = 0;
	if (bParam10)
	{
		func_129();
		if (Global_20756)
		{
			StringCopy(&Global_20802, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20813)
			{
				case 0:
					StringCopy(&Global_20802, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20802, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20802, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20802, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20802, true);
			}
		}
	}
	if (!Global_21026)
	{
		if (Global_20813.f_1 == 6)
		{
			func_247(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_245(1);
			func_247(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1970578 != -1 && iParam0 == Global_1970578)
	{
		bVar1 = true;
	}
	func_243(iParam0, sParam1, bVar1, func_244(PLAYER::PLAYER_ID()));
	return 1;
}

void func_243(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xEFD8
{
	struct<14> Var0;
	
	if (!func_121())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1970561.f_7;
	Var0.f_7 = Global_1970561.f_8;
	Var0.f_8 = Global_1970561.f_9;
	Var0.f_9 = Global_1970561.f_10;
	Var0.f_10 = Global_1970561.f_11;
	Var0.f_11 = Global_1970561.f_12;
	Var0.f_12 = Global_1970561.f_13;
	Var0.f_13 = Global_1970561.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1970578 = -1;
	}
}

var func_244(int iParam0)//Position - 0xF073
{
	return Global_1845263[iParam0 /*877*/].f_205.f_6;
}

void func_245(int iParam0)//Position - 0xF088
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
	
	Global_23234 = 0;
	Global_9288 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9252[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_136(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar2 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2695946)
							{
								if (iVar1 == 14)
								{
									func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114372.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114372.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114372.f_14144[iVar3 /*104*/].f_99[Global_20813] == 1)
											{
												Global_23234++;
											}
										}
									}
									iVar3++;
								}
								func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79248)
								{
									iVar4 = 0;
									iVar4 = Global_4541717;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541718[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541718[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541718[iVar5 /*104*/].f_99[Global_20813] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case 0:
											iVar6 = Global_45133;
											break;
										
										case 1:
											iVar6 = Global_45134;
											break;
										
										case 2:
											iVar6 = Global_45135;
											break;
										
										default:
											break;
									}
									func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8684, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar8 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8690[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1881898.f_1;
								func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_246(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_246(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xF615
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_61(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_61(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_61(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_61(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_61(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_247(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xF6C8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_248(int iParam0)//Position - 0xF72B
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_114372.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_249(int iParam0)//Position - 0xF74A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4541718[iParam0 /*104*/].f_18 = iVar0;
	Global_4541718[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541718[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541718[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541718[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541718[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_250()//Position - 0xF7CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4542967 = 11;
	Global_4541718[Global_4542967 /*104*/].f_18 = -1;
	Global_4541718[Global_4542967 /*104*/].f_18.f_1 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_2 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_3 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_251(Global_4541718[iVar2 /*104*/].f_18, Global_4541718[Global_4542967 /*104*/].f_18))
		{
			Global_4542967 = iVar2;
		}
		iVar2++;
	}
	Global_4541718[Global_4542967 /*104*/].f_24 = 1;
}

int func_251(struct<6> Param0, struct<6> Param6)//Position - 0xF874
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_252()//Position - 0xF95F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541718[iVar2 /*104*/].f_24 == 0)
		{
			Global_4542967 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4542967 = 11;
	Global_4541718[Global_4542967 /*104*/].f_18 = -1;
	Global_4541718[Global_4542967 /*104*/].f_18.f_1 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_2 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_3 = 0;
	Global_4541718[Global_4542967 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541718[iVar2 /*104*/].f_24 == 0 || Global_4541718[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_251(Global_4541718[iVar2 /*104*/].f_18, Global_4541718[Global_4542967 /*104*/].f_18))
			{
				Global_4542967 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4542967 == 11)
	{
		return 0;
	}
	Global_4541718[Global_4542967 /*104*/].f_99[0] = 0;
	Global_4541718[Global_4542967 /*104*/].f_99[1] = 0;
	Global_4541718[Global_4542967 /*104*/].f_99[2] = 0;
	return 1;
}

int func_253(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xFA8A
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_242(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9390 = iParam10;
			MISC::SET_BIT(&Global_4542983, 0);
		}
		return 1;
	}
	return 0;
}

int func_254(int iParam0, int iParam1)//Position - 0xFB0C
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_255(2, iParam1);
	return iParam0;
}

void func_255(int iParam0, var uParam1)//Position - 0xFB2B
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_256(char* sParam0, bool bParam1, int iParam2)//Position - 0xFBDC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_255(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_257(int iParam0)//Position - 0xFC19
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	if (iVar0 == -1)
	{
		func_258(iParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_258(int iParam0, bool bParam1)//Position - 0xFC4F
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_260(iParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (iParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_259(iParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = iParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_259(int iParam0)//Position - 0xFCBB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_260(int iParam0)//Position - 0xFCED
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_261(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_261(int iParam0)//Position - 0xFD6C
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_262(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_262(var uParam0)//Position - 0xFE22
{
	*uParam0 = 0;
	uParam0->f_1 = func_124();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_263()//Position - 0xFE4F
{
	Global_1663284.f_40.f_9 = 4;
}

int func_264(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFE60
{
	bool bVar0;
	
	func_263();
	bVar0 = false;
	return func_237(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_265(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFE87
{
	bool bVar0;
	
	bVar0 = false;
	return func_266(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_266(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xFEAA
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_124();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_257(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663284.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23227 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_256(sParam5, bParam6, &iVar3);
	uVar5 = func_254(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_276(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_268(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_240();
	}
	func_267();
	func_239();
	func_238();
	return 1;
}

void func_267()//Position - 0xFFF8
{
	Global_1663284.f_40.f_9 = 3;
}

int func_268(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x1000B
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8683, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_270(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9390 = iParam6;
			Global_9293[3 /*6*/] = { func_269(iParam0) };
			Global_9370 = iParam0;
			MISC::SET_BIT(&Global_8683, 1);
			MISC::SET_BIT(&Global_8683, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_269(int iParam0)//Position - 0x1009A
{
	return Global_2139[iParam0 /*29*/].f_3;
}

int func_270(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x100AD
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_129();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20813 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20813 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20813 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_275() == 0)
	{
		func_273();
		return 0;
	}
	func_272(Global_23233);
	StringCopy(&(Global_114372.f_14144[Global_23233 /*104*/]), sParam1, 64);
	Global_114372.f_14144[Global_23233 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114372.f_14144[Global_23233 /*104*/].f_24 = iParam2;
	}
	Global_114372.f_14144[Global_23233 /*104*/].f_25 = iParam7;
	Global_114372.f_14144[Global_23233 /*104*/].f_26 = uParam8;
	Global_114372.f_14144[Global_23233 /*104*/].f_29 = uParam9;
	Global_114372.f_14144[Global_23233 /*104*/].f_30 = uParam12;
	Global_114372.f_14144[Global_23233 /*104*/].f_31 = uParam11;
	Global_114372.f_14144[Global_23233 /*104*/].f_28 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_114372.f_14144[Global_23233 /*104*/].f_33), sParam4, 64);
	Global_114372.f_14144[Global_23233 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_114372.f_14144[Global_23233 /*104*/].f_50), sParam5, 64);
	Global_114372.f_14144[Global_23233 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_114372.f_14144[Global_23233 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_114372.f_14144[Global_23233 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8683, 10))
	{
		Global_114372.f_14144[Global_23233 /*104*/].f_99[0] = 1;
		Global_114372.f_14144[Global_23233 /*104*/].f_99[1] = 1;
		Global_114372.f_14144[Global_23233 /*104*/].f_99[2] = 1;
		Global_9389 = 4;
		func_248(0);
		func_248(2);
		func_248(1);
	}
	else
	{
		func_129();
		switch (iParam16)
		{
			case 3:
				Global_114372.f_14144[Global_23233 /*104*/].f_99[Global_20813] = 1;
				break;
			
			case 0:
				Global_114372.f_14144[Global_23233 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_114372.f_14144[Global_23233 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_114372.f_14144[Global_23233 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20813)
			{
				case 0:
					func_248(0);
					Global_9389 = 0;
					break;
				
				case 1:
					func_248(1);
					Global_9389 = 1;
					break;
				
				case 2:
					func_248(2);
					Global_9389 = 2;
					break;
				
				case 3:
					func_248(3);
					Global_9389 = 3;
					break;
				
				default:
					Global_9389 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8683, 10))
		{
			Global_114372.f_14054[0 /*20*/].f_17 = 1;
			Global_114372.f_14054[1 /*20*/].f_17 = 1;
			Global_114372.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114372.f_14054[Global_20813 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_114372.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_114372.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_114372.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23235[Global_23233] = 0;
	if (bParam10)
	{
		func_129();
		if (Global_20756)
		{
			StringCopy(&Global_20802, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20813)
			{
				case 0:
					StringCopy(&Global_20802, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20802, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20802, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20802, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20802, true);
			}
		}
	}
	if (!Global_21026)
	{
		if (Global_20813.f_1 == 6)
		{
			func_247(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_245(1);
			func_247(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1970578 != -1 && iParam0 == Global_1970578)
	{
		bVar1 = true;
	}
	func_271(iParam0, sParam1, bVar1, func_244(PLAYER::PLAYER_ID()));
	return 1;
}

void func_271(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x10588
{
	struct<14> Var0;
	
	if (!func_121())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1970561.f_7;
	Var0.f_7 = Global_1970561.f_8;
	Var0.f_8 = Global_1970561.f_9;
	Var0.f_9 = Global_1970561.f_10;
	Var0.f_10 = Global_1970561.f_11;
	Var0.f_11 = Global_1970561.f_12;
	Var0.f_12 = Global_1970561.f_13;
	Var0.f_13 = Global_1970561.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1970578 = -1;
	}
}

void func_272(int iParam0)//Position - 0x10623
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_114372.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_114372.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_114372.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_114372.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_114372.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_114372.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_273()//Position - 0x106B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23233 = 34;
	Global_114372.f_14144[Global_23233 /*104*/].f_18 = -1;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_1 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_2 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_3 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_274(Global_114372.f_14144[iVar2 /*104*/].f_18, Global_114372.f_14144[Global_23233 /*104*/].f_18))
		{
			Global_23233 = iVar2;
		}
		iVar2++;
	}
	Global_114372.f_14144[Global_23233 /*104*/].f_24 = 1;
}

int func_274(struct<6> Param0, struct<6> Param6)//Position - 0x10780
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_275()//Position - 0x1086B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_114372.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23233 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23233 = 34;
	Global_114372.f_14144[Global_23233 /*104*/].f_18 = -1;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_1 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_2 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_3 = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_114372.f_14144[iVar2 /*104*/].f_24 == 0 || Global_114372.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_274(Global_114372.f_14144[iVar2 /*104*/].f_18, Global_114372.f_14144[Global_23233 /*104*/].f_18))
			{
				Global_23233 = iVar2;
			}
		}
		if (Global_114372.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23233 == 34)
	{
		return 0;
	}
	Global_114372.f_14144[Global_23233 /*104*/].f_99[0] = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_99[1] = 0;
	Global_114372.f_14144[Global_23233 /*104*/].f_99[2] = 0;
	return 1;
}

int func_276(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x109D3
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8683, 10);
	iVar0 = 3;
	if (func_270(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9390 = iParam10;
			Global_9293[3 /*6*/] = { func_269(iParam0) };
			Global_9370 = iParam0;
			StringCopy(&Global_9371, sParam5, 64);
			MISC::SET_BIT(&Global_8683, 1);
			MISC::SET_BIT(&Global_8683, 7);
		}
		return 1;
	}
	return 0;
}

int func_277(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x10A7F
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_267();
	bVar0 = true;
	if (func_266(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_236(120000);
		return 1;
	}
	return 0;
}

int func_278(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x10AD1
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_285(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_284(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_283(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_282(1);
		}
		func_281();
		func_239();
		func_280();
		func_279();
		return 1;
	}
	return 0;
}

void func_279()//Position - 0x10B68
{
	Global_2748969 = 0;
}

void func_280()//Position - 0x10B75
{
	Global_1663284.f_57 = 1;
	Global_1663284.f_57.f_1 = 0;
}

void func_281()//Position - 0x10B8D
{
	Global_1663284.f_40.f_9 = 1;
}

void func_282(int iParam0)//Position - 0x10B9E
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8685, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8685, 0);
	}
}

void func_283(int iParam0)//Position - 0x10BBF
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 20);
	}
}

int func_284(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x10BE2
{
	func_139(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam7);
}

int func_285(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x10C30
{
	func_139(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22214 = 1;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam7);
}

int func_286(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x10C7E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_288(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_287();
		func_281();
		func_239();
		func_280();
		func_279();
		return 1;
	}
	return 0;
}

void func_287()//Position - 0x10CD0
{
	Global_23184 = 0;
}

bool func_288(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x10CDC
{
	func_139(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 1;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 1;
	Global_22220 = 0;
	StringCopy(&Global_22314, sParam5, 24);
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam8);
}

int func_289(var uParam0, char* sParam1, char* sParam2)//Position - 0x10D31
{
	if (func_291(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_290();
		func_239();
		func_280();
		return 1;
	}
	return 0;
}

void func_290()//Position - 0x10D5C
{
	Global_1663284.f_40.f_9 = 2;
}

bool func_291(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10D6D
{
	func_139(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_119(sParam2, iParam3, 0);
}

void func_292()//Position - 0x10DBB
{
	Global_1663284.f_55 = Global_1663284.f_40.f_1;
	Global_1663284.f_55.f_1 = Global_1663284.f_40.f_10;
}

void func_293()//Position - 0x10DE1
{
	Global_1663284.f_40 = 1;
}

bool func_294()//Position - 0x10DF0
{
	return Global_1663284.f_40 == 1;
}

int func_295(int iParam0, int iParam1, int iParam2)//Position - 0x10E00
{
	if (!func_296(iParam0))
	{
		return 0;
	}
	if (Global_1663284.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663284.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_296(int iParam0)//Position - 0x10E3F
{
	if (!func_297())
	{
		return 0;
	}
	if (!Global_1663284.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_297()//Position - 0x10E67
{
	if (Global_1663284.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_298(var uParam0)//Position - 0x10E7E
{
	if (func_302())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1927715 || func_300())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_299())
		{
			return 0;
		}
	}
	return 1;
}

bool func_299()//Position - 0x10EDF
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1679752);
}

int func_300()//Position - 0x10EF3
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_301()//Position - 0x10F0B
{
	return Global_1663284.f_40 == 3;
}

bool func_302()//Position - 0x10F1B
{
	return func_127();
}

int func_303(int iParam0, int iParam1, int iParam2)//Position - 0x10F27
{
	if (!func_301())
	{
		return 0;
	}
	return func_295(iParam0, iParam1, iParam2);
}

int func_304(char* sParam0, char* sParam1)//Position - 0x10F45
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_305()//Position - 0x10F5F
{
	return Global_2745629.f_1;
}

int func_306()//Position - 0x10F6D
{
	if (Global_1663472.f_2)
	{
		return 1;
	}
	return func_307();
}

bool func_307()//Position - 0x10F86
{
	return func_302();
}

void func_308(int iParam0)//Position - 0x10F92
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iParam0 /*26*/]))
	{
		if (Local_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
		{
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 18))
			{
				if (func_26(Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21))
				{
					if (!func_88(&uLocal_1821, 30000, 0))
					{
						if (func_309(iParam0, 1109393408))
						{
							Local_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
							func_32(&uLocal_1821);
						}
					}
					else if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 19))
					{
						MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_309(int iParam0, float fParam1)//Position - 0x11053
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	if (func_10(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[iParam0 /*26*/].f_2)), 1, 1))
	{
		STREAMING::REQUEST_MODEL(Global_2738587.f_854);
		STREAMING::REQUEST_MODEL(Global_2738587.f_855);
		if (STREAMING::HAS_MODEL_LOADED(Global_2738587.f_854))
		{
			if (STREAMING::HAS_MODEL_LOADED(Global_2738587.f_855))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_67.f_2[iParam0 /*26*/].f_2))), true) };
				if (!func_328(Var3))
				{
					if (func_203(Var3))
					{
						if (Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 2)
						{
							iVar7 = 0;
						}
						else if (Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 5)
						{
							iVar7 = 9;
						}
						else
						{
							iVar7 = 1;
						}
					}
					else if (Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 5)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 9;
					}
					if (Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 == -1)
					{
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = 0;
					}
					if (func_324(Var3, &Var0, &uVar6, &(Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34), iVar7, fParam1))
					{
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21 = { Var0 };
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_24 = uVar6;
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 = 0;
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
						return 1;
					}
					else if (Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 >= 5)
					{
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25++;
						Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = 0;
					}
				}
				else if (func_310(Var3, &Var0, &uVar6))
				{
					Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21 = { Var0 };
					Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_24 = uVar6;
					Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 = 0;
					Local_286[Local_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_310(struct<3> Param0, var uParam3, var uParam4)//Position - 0x112B2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -988.9172f, -2428.579f, 19.0608f };
					fVar5 = 148.3473f;
					break;
				
				case 1:
					Var2 = { -968.0948f, -2392.3274f, 19.056f };
					fVar5 = 150.0203f;
					break;
				
				case 2:
					Var2 = { -946.4792f, -2419.6594f, 19.0562f };
					fVar5 = 91.6004f;
					break;
				
				case 3:
					Var2 = { -899.0128f, -2432.8423f, 19.0847f };
					fVar5 = 58.9819f;
					break;
				
				case 4:
					Var2 = { -890.7079f, -2272.4019f, 18.2077f };
					fVar5 = 135.9921f;
					break;
			}
			if (func_311(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -996.2861f, -2449.9167f, 12.6953f };
					fVar5 = 148.5654f;
					break;
				
				case 1:
					Var2 = { -1006.0941f, -2421.4482f, 12.9447f };
					fVar5 = 237.9966f;
					break;
				
				case 2:
					Var2 = { -948.7274f, -2403.462f, 12.7341f };
					fVar5 = 111.3975f;
					break;
				
				case 3:
					Var2 = { -895.4352f, -2364.867f, 13.4802f };
					fVar5 = 142.0129f;
					break;
				
				case 4:
					Var2 = { -906.6598f, -2419.5898f, 12.6381f };
					fVar5 = 78.0133f;
					break;
			}
			if (func_311(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1084.0027f, -2690.4734f, 19.0585f };
					fVar5 = 213.4924f;
					break;
				
				case 1:
					Var2 = { -1087.5422f, -2660.0574f, 19.0615f };
					fVar5 = 191.5389f;
					break;
				
				case 2:
					Var2 = { -1083.3998f, -2612.184f, 19.0622f };
					fVar5 = 153.7453f;
					break;
				
				case 3:
					Var2 = { -1059.893f, -2570.6555f, 19.061f };
					fVar5 = 150.5092f;
					break;
				
				case 4:
					Var2 = { -1038.3873f, -2533.8455f, 19.0498f };
					fVar5 = 150.637f;
					break;
			}
			if (func_311(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1116.8934f, -2675.6707f, 12.177572f, -1183.9326f, -2789.4507f, 38.951855f, 53f, false, true))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1076.4076f, -2693.8457f, 12.6509f };
					fVar5 = 221.0395f;
					break;
				
				case 1:
					Var2 = { -1121.4222f, -2703.1462f, 12.9444f };
					fVar5 = 326.1454f;
					break;
				
				case 2:
					Var2 = { -1095.9696f, -2644.1775f, 12.6382f };
					fVar5 = 182.0544f;
					break;
				
				case 3:
					Var2 = { -1084.0457f, -2601.4124f, 12.6823f };
					fVar5 = 153.5335f;
					break;
				
				case 4:
					Var2 = { -1049.5753f, -2589.945f, 12.6066f };
					fVar5 = 135.7366f;
					break;
			}
			if (func_311(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_311(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x117E7
{
	Global_2635562.f_2 = 0;
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
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_318(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_312(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_312(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x118F9
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_316(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		iVar1 = iVar0;
		if (func_10(iVar1, 1, 1))
		{
			if (!func_314(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_313(iVar1) || !bParam10) && !Global_2657921[iVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_316(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_316(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
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

int func_313(int iParam0)//Position - 0x11AB1
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657921[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_314(int iParam0, int iParam1)//Position - 0x11ADC
{
	bool bVar0;
	
	if (!func_173(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_315(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_315(int iParam0, bool bParam1)//Position - 0x11B35
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_174();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_316(int iParam0)//Position - 0x11B76
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_317() && Global_1845263[iVar0 /*877*/].f_844) && !func_26(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_221(iParam0);
}

var func_317()//Position - 0x11BC9
{
	return Global_2684312.f_19;
}

int func_318(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x11BD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_313(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_319(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_221(iVar1), Param0, true) < fParam3)
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

int func_319(int iParam0)//Position - 0x11CDB
{
	if (func_323(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2706987 = { func_322(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_320(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)//Position - 0x11D22
{
	int iVar0;
	
	iVar0 = func_321(iParam0);
	if (func_173(iVar0))
	{
		if (iVar0 == func_321(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0)//Position - 0x11D4B
{
	if (func_173(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_124();
}

struct<13> func_322(int iParam0)//Position - 0x11D6E
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_323(int iParam0, int iParam1)//Position - 0x11D85
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_322(iParam0) };
		Global_2707000 = { func_322(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2706987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706952, 35, &Global_2707000);
				if (Global_2706917 == Global_2706952)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_324(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, float fParam7)//Position - 0x11DF2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	
	fVar9 = 0f;
	iVar11 = 1;
	if (iParam6 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, *uParam5, &Var0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (SYSTEM::VDIST2(Param0, Var0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var0, &Var3, &Var6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_327(0f, 0f, 0f, Var6, 1);
						if (func_325(Param0, Var3, 120f, fParam7))
						{
							if (func_311(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								Var16 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar9, 0f, 1f, 0f) };
								Var19 = { Var16 - Var3 };
								Var22 = { Var0 - Var3 };
								if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_216(fVar9, 0f, 360f);
								}
								*uParam3 = { Var3 };
								*uParam4 = fVar9;
								return 1;
							}
							else
							{
								iVar13++;
							}
						}
						else
						{
							iVar13++;
						}
					}
					else
					{
						iVar13++;
					}
				}
			}
			*uParam5++;
		}
		else
		{
			*uParam5++;
		}
	}
	return 0;
}

int func_325(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x11F71
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Param3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(Param3, 2.5f))
	{
		return 0;
	}
	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_326(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_326(struct<3> Param0, bool bParam3)//Position - 0x11FDD
{
	if (func_12(Param0, -1144.4973f, 43.01712f, 51.94447f, 325f))
	{
		if (func_209(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 49.56616f, -1336.5266f, 121.03514f, 75.61888f, 18f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.0197f, 110.13066f, 52.634132f, -1365.276f, 172.06244f, 72.01312f, 52f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.0066f, 170.53304f, 50.00813f, -1296.9033f, 178.81332f, 73.37104f, 35f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.5212f, 199.86429f, 57.04471f, -1298.0396f, 176.13841f, 73.33252f, 34f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.7449f, 221.13667f, 55.34814f, -1208.3938f, 191.09093f, 79.137085f, 45f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.03284f, -89.39376f, 32.48801f, -1086.2109f, -115.70765f, 50.650505f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.54555f, 30.764324f, -1132.6853f, 190.78412f, 73.903656f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.0282f, -139.7337f, 38.733883f, -1299.5559f, -15.168939f, 63.437103f, 20f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 47.56616f, -1287.6193f, -24.88864f, 67.5273f, 20f, false, true))
		{
			return 1;
		}
	}
	if (func_210(2, Param0))
	{
		if (func_209(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_210(3, Param0))
	{
		if (func_209(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_210(4, Param0))
	{
		if (func_209(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_210(5, Param0))
	{
		if (func_209(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_210(6, Param0))
	{
		if (func_209(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_206())
	{
		if (func_210(7, Param0))
		{
			if (func_209(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_210(8, Param0))
	{
		if (func_209(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.6265f, -268.89395f, 111.88586f, 2591.331f, -614.43555f, 55.369205f, 70f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		return 1;
	}
	if (func_12(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
		{
			return 1;
		}
	}
	return 0;
}

float func_327(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x12657
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_328(struct<3> Param0)//Position - 0x126BC
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1116.8934f, -2675.6707f, 12.177572f, -1183.9326f, -2789.4507f, 38.951855f, 53f, false, true))
	{
		return 1;
	}
	return 0;
}

void func_329()//Position - 0x127D1
{
	bool bVar0;
	
	if (Local_286[iLocal_1791 /*47*/].f_4.f_3 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 8)
	{
		if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_3, bVar0))
		{
			if ((Local_67.f_2[bVar0 /*26*/].f_7 == 11 || Local_67.f_2[bVar0 /*26*/].f_7 == 9) || Local_67.f_2[bVar0 /*26*/].f_7 == 10)
			{
				MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bVar0);
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[bVar0 /*26*/].f_1))
			{
				MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_3), bVar0);
			}
		}
		bVar0++;
	}
}

void func_330()//Position - 0x12883
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_67.f_2[iVar0 /*26*/].f_3 != -1)
		{
			if (Local_67.f_2[iVar0 /*26*/].f_3 != iLocal_1791)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/], true);
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/].f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/].f_1))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/].f_1, true);
					}
				}
			}
		}
		else if (Local_67.f_2[iVar0 /*26*/].f_2 != -1)
		{
			if (Local_67.f_2[iVar0 /*26*/].f_2 == iLocal_1791)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/], false);
					}
					else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
					{
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/].f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/].f_1))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/].f_1, false);
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/], true);
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/].f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/].f_1))
					{
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/].f_1, true);
					}
				}
			}
		}
		else
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/], true);
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/].f_1))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/].f_1, true);
				}
			}
		}
		iVar0++;
	}
}

void func_331()//Position - 0x12A68
{
	func_358();
	switch (Local_286[iLocal_1791 /*47*/].f_46)
	{
		case 0:
			if (Local_67.f_215 > 0)
			{
				Local_286[iLocal_1791 /*47*/].f_46 = 1;
			}
			break;
		
		case 1:
			func_342();
			func_332();
			if (Local_67.f_215 >= 4)
			{
				Local_286[iLocal_1791 /*47*/].f_46 = 4;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			func_375();
			break;
	}
}

void func_332()//Position - 0x12AE2
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_67.f_213 != iVar0)
	{
		if (Local_67.f_213 < iVar0 || func_333(Local_67.f_213, Local_67.f_213, Local_67.f_213, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_67.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_67.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_67.f_213);
		}
	}
}

int func_333(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x12B35
{
	if ((func_341(iParam0, bParam3, bParam4) && func_340(iParam1, bParam3, bParam4)) && func_334(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)//Position - 0x12B6D
{
	return func_335(2, iParam0, 1, bParam1, bParam2);
}

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x12B81
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681028, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_339(iParam0) - func_338(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_338(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_339(iParam0) - func_337(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_338(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_339(iParam0) - func_338(iParam0, 1));
		}
		if (!bParam4 && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 3)
		{
			iVar1 = (iVar1 - func_336(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)//Position - 0x12C47
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_337(int iParam0)//Position - 0x12C81
{
	switch (iParam0)
	{
		case 0:
			return Global_1681028.f_1;
			break;
		
		case 1:
			return Global_1681028.f_2;
			break;
		
		case 2:
			return Global_1681028.f_3;
			break;
	}
	return 0;
}

int func_338(int iParam0, bool bParam1)//Position - 0x12CC7
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_339(int iParam0)//Position - 0x12D64
{
	switch (iParam0)
	{
		case 0:
			return Global_1681036;
			break;
		
		case 1:
			return Global_1681037;
			break;
		
		case 2:
			return Global_1681038;
			break;
	}
	return 0;
}

int func_340(int iParam0, bool bParam1, bool bParam2)//Position - 0x12DA4
{
	return func_335(1, iParam0, 1, bParam1, bParam2);
}

int func_341(int iParam0, bool bParam1, bool bParam2)//Position - 0x12DB8
{
	return func_335(0, iParam0, 1, bParam1, bParam2);
}

void func_342()//Position - 0x12DCC
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_1820)
	{
		case 0:
			if (func_357(131))
			{
				iVar0 = func_346();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
					if (func_345(&uLocal_2740, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
					{
						iLocal_1820 = 1;
					}
				}
				else if (iVar0 == 9)
				{
				}
				else
				{
					StringCopy(&Var1, "MPTXI_N", 16);
					StringIntConCat(&Var1, iVar0, 16);
					func_20(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
					if (func_345(&uLocal_2740, 131, "MPTXIAU", &Var1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (BitTest(Global_2738587.f_853, 0))
			{
				if (func_346() == 0)
				{
					if (!func_26(Local_286[iLocal_1791 /*47*/].f_4.f_21))
					{
						Local_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
					}
					MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_1), 0);
					iLocal_1820 = 2;
				}
				MISC::CLEAR_BIT(&(Global_2738587.f_853), 0);
			}
			break;
		
		case 1:
			if (func_344())
			{
				if (!func_343())
				{
					if (!func_26(Local_286[iLocal_1791 /*47*/].f_4.f_21))
					{
						Local_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
					}
					MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_1), 0);
					iLocal_1820 = 2;
				}
				else
				{
					iLocal_1820 = 0;
				}
			}
			break;
		
		case 2:
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_1, 0))
			{
				iLocal_1820 = 0;
			}
			break;
	}
}

int func_343()//Position - 0x12F59
{
	if (Global_22215 == 1 || Global_23182 == 1)
	{
		return 1;
	}
	return 0;
}

int func_344()//Position - 0x12F7C
{
	if (Global_22166 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x12F93
{
	func_139(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	if (iParam5 == 1)
	{
		Global_22178 = 1;
	}
	else
	{
		Global_22178 = 0;
	}
	Global_2883585 = 1;
	return func_119(sParam3, iParam4, bParam8);
}

int func_346()//Position - 0x12FF2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!BitTest(Global_2738587.f_853, 0))
	{
		if (!func_356())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_179("TXM_H03" /* GXT: You don't have enough cash to pay for a basic taxi fare. */, -1);
			}
			return 9;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 2;
		}
	}
	if (!func_31())
	{
		return 1;
	}
	if (func_355(iLocal_1791))
	{
		return 9;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("taxi")))
				{
					return 9;
				}
			}
		}
	}
	if (func_354(iLocal_1791))
	{
		return 4;
	}
	if (Local_286[iLocal_1791 /*47*/].f_4 != -1)
	{
		return 4;
	}
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_1, 0))
	{
		return 4;
	}
	if (func_185(PLAYER::PLAYER_ID(), 1, 0) && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 16)
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f)
	{
		return 9;
	}
	if (func_353(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 9;
	}
	if (func_352(PLAYER::PLAYER_ID(), 0))
	{
		return 9;
	}
	if (func_351())
	{
		return 3;
	}
	if (!func_347(1, 1, 1, 1, 0))
	{
		return 1;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_203(Var2))
	{
		iVar9 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var2, &Var5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var5, fVar8, fVar8, 20f, false, true, 0))
	{
		return 3;
	}
	if (func_326(Var2, 1))
	{
		return 3;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x131B6
{
	if ((func_350(iParam0, bParam3, bParam4) || func_349(iParam1, bParam3, bParam4)) || func_348(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0, bool bParam1, bool bParam2)//Position - 0x131F0
{
	return func_335(2, iParam0, 0, bParam1, bParam2);
}

int func_349(int iParam0, bool bParam1, bool bParam2)//Position - 0x13204
{
	return func_335(1, iParam0, 0, bParam1, bParam2);
}

int func_350(int iParam0, bool bParam1, bool bParam2)//Position - 0x13218
{
	return func_335(0, iParam0, 0, bParam1, bParam2);
}

int func_351()//Position - 0x1322C
{
	if (func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -64f, -850f, 200f, -84f, -795f, 340f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_352(int iParam0, int iParam1)//Position - 0x13272
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

int func_353(int iParam0, bool bParam1, bool bParam2)//Position - 0x13288
{
	if (iParam0 == func_124())
	{
		return 0;
	}
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x132EC
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_67.f_2[iVar0 /*26*/].f_2 != -1)
			{
				if (Local_67.f_2[iVar0 /*26*/].f_2 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x13332
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_67.f_2[iVar0 /*26*/].f_3 != -1)
			{
				if (Local_67.f_2[iVar0 /*26*/].f_3 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_356()//Position - 0x13378
{
	if (func_87() == 0f)
	{
		return 1;
	}
	if (IntToFloat(func_176(PLAYER::PLAYER_ID())) > (IntToFloat(iLocal_1998) * 1.5f))
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x133A9
{
	if ((Global_23280 || Global_23279) || Global_23281)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (Global_20813.f_1 == 10)
		{
			if (Global_7998 == iParam0)
			{
				return 1;
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
	return 0;
}

void func_358()//Position - 0x1340D
{
	int iVar0;
	
	iVar0 = Local_286[iLocal_1791 /*47*/].f_4;
	if (iVar0 != -1)
	{
		if (Local_67.f_2[iVar0 /*26*/].f_7 == 5)
		{
			if (!BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 26))
			{
				MISC::SET_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 26);
			}
		}
		else if (Local_67.f_2[iVar0 /*26*/].f_7 == 6)
		{
			if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 26))
			{
				MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 26);
				func_359(0, iVar0);
			}
		}
	}
	else if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 26))
	{
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 26);
	}
}

void func_359(bool bParam0, int iParam1)//Position - 0x134BD
{
	struct<26> Var0;
	struct<3> Var26;
	struct<3> Var29;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	char cVar36[24];
	
	if (BitTest(Local_286[iLocal_1791 /*47*/].f_4.f_2, 26))
	{
		MISC::CLEAR_BIT(&(Local_286[iLocal_1791 /*47*/].f_4.f_2), 26);
	}
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = 8;
	Var26 = { 0f, 0f, 0f };
	Var29 = { 0f, 0f, 0f };
	iVar32 = -1;
	iVar33 = -1;
	bVar34 = false;
	iVar35 = 0;
	Var0 = { Local_67.f_2[iParam1 /*26*/] };
	Var26 = { Var0.f_23 };
	Var29 = { Var0.f_8 };
	StringCopy(&cVar36, "FREEMODE_", 24);
	if (!func_26(Var26))
	{
		StringConCat(&cVar36, func_361(ZONE::GET_NAME_OF_ZONE(Var26)), 24);
		iVar32 = MISC::GET_HASH_KEY(func_360(&cVar36));
	}
	if (bParam0)
	{
	}
	else
	{
		StringCopy(&cVar36, "FREEMODE_", 24);
		StringConCat(&cVar36, func_361(ZONE::GET_NAME_OF_ZONE(HUD::GET_BLIP_COORDS(Var0.f_19))), 24);
		iVar33 = MISC::GET_HASH_KEY(func_360(&cVar36));
	}
	bVar34 = bParam0;
	STATS::PLAYSTATS_FAST_TRVL(iVar32, Var26.f_0, Var26.f_1, Var26.f_2, iVar33, Var29.f_0, Var29.f_1, Var29.f_2, 7, bVar34, iVar35);
}

var func_360(char[4] cParam0)//Position - 0x135CE
{
	return cParam0;
}

char* func_361(char* sParam0)//Position - 0x135D8
{
	struct<8> Var0;
	char cVar16[64];
	char cVar32[64];
	int iVar48;
	
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			iVar48 = 0;
			iVar48 = 0;
			while (iVar48 <= (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1))
			{
				StringCopy(&Var0, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar48, iVar48 + 1), 64);
				StringCopy(&cVar16, func_362(&Var0), 64);
				StringConCat(&cVar32, &cVar16, 64);
				iVar48++;
			}
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar32, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar32));
		}
	}
	return sParam0;
}

char* func_362(char* sParam0)//Position - 0x13640
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

int func_363()//Position - 0x13A51
{
	return Local_67.f_0;
}

int func_364(int iParam0)//Position - 0x13A5B
{
	return Local_286[iParam0 /*47*/];
}

bool func_365()//Position - 0x13A6A
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_139, 18);
}

int func_366()//Position - 0x13A82
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_373())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_372())
	{
		return 1;
	}
	if (func_371(159))
	{
		if (!func_370())
		{
			return 1;
		}
	}
	if (func_371(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_367() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_367()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_367()//Position - 0x13B06
{
	switch (func_369())
	{
		case 0:
			return func_368();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_368()//Position - 0x13B39
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_369()//Position - 0x13B5D
{
	return Global_32828;
}

bool func_370()//Position - 0x13B68
{
	return Global_2684312.f_698;
}

int func_371(int iParam0)//Position - 0x13B77
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_372()//Position - 0x13B8E
{
	return Global_2695951;
}

bool func_373()//Position - 0x13B9A
{
	return Global_2684312.f_693;
}

void func_374()//Position - 0x13BA9
{
	SYSTEM::WAIT(0);
}

void func_375()//Position - 0x13BB6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/], true);
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_67.f_2[iVar0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_67.f_2[iVar0 /*26*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_67.f_2[iVar0 /*26*/].f_1, true);
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_2719))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_2719))
		{
			func_40();
		}
	}
	if (bLocal_1994)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1831))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1831);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1832);
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
	}
	func_376();
}

void func_376()//Position - 0x13C7E
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_377(struct<21> Param0)//Position - 0x13C8A
{
	func_387(32, Param0);
	func_385(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_67, 219, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_286, 1505, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_384())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_378(131, 3, BitTest(Global_2738587.f_853, 4));
		func_37(&uLocal_1823, 0, 0);
		Local_286[iLocal_1791 /*47*/] = 0;
	}
	return 1;
}

void func_378(int iParam0, int iParam1, bool bParam2)//Position - 0x13CF3
{
	int iVar0;
	
	Global_9369 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		func_129();
		if (iParam1 == 4)
		{
			func_383(iParam0, 0, 1);
			func_383(iParam0, 1, 1);
			func_383(iParam0, 2, 1);
			func_382(iParam0, 0, 1);
			func_382(iParam0, 1, 1);
			func_382(iParam0, 2, 1);
		}
		else
		{
			if (func_381(iParam0, iParam1) == 1 && func_380(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_383(iParam0, iVar0, 1);
			func_382(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738587.f_6931, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738587.f_6931, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738587.f_6931, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79248)
			{
				if (iParam1 != 4)
				{
					if (Global_20813 != iParam1)
					{
						Global_9342[iParam1 /*4*/] = { func_269(iParam0) };
						Global_9359[iParam1] = 1;
						Global_9364[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20813)
					{
					}
					else
					{
						Global_9293[1 /*6*/] = { func_269(iParam0) };
						Global_9293[1 /*6*/].f_5 = iParam1;
						func_379();
					}
				}
				else
				{
					Global_9293[1 /*6*/] = { func_269(iParam0) };
					Global_9293[1 /*6*/].f_5 = iParam1;
					func_379();
				}
			}
			else
			{
				Global_9293[1 /*6*/] = { func_269(iParam0) };
				Global_9293[1 /*6*/].f_5 = iParam1;
				func_379();
			}
		}
	}
}

void func_379()//Position - 0x13E71
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[Global_9369 /*29*/].f_7)), 64);
	if (Global_9388 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9293[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9293[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8683, 0);
}

int func_380(int iParam0, int iParam1)//Position - 0x13EEC
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

int func_381(int iParam0, int iParam1)//Position - 0x13F16
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_12[iParam1];
}

void func_382(int iParam0, int iParam1, int iParam2)//Position - 0x13F40
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114372.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_383(int iParam0, int iParam1, int iParam2)//Position - 0x13F85
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114372.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_384()//Position - 0x13FCA
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
		if (func_373())
		{
			return 0;
		}
		if (func_371(157))
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

int func_385(int iParam0, int iParam1, bool bParam2)//Position - 0x14025
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_376();
			}
			else
			{
				return 0;
			}
		}
		if (!func_386(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_376();
					}
					else
					{
						return 0;
					}
				}
				if (func_373())
				{
					if (!bParam2)
					{
						func_376();
					}
					else
					{
						return 0;
					}
				}
				if (func_371(157))
				{
					if (!bParam2)
					{
						func_376();
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
					func_376();
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
				func_376();
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
			func_376();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_386(bool bParam0)//Position - 0x1413B
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_387(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1414C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_376();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

