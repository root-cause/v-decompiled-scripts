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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
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
	float fLocal_63 = 0f;
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
	struct<284> Local_98 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_382 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	struct<5> Local_396[32];
	bool bLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	struct<18> Local_562[32];
	struct<3> Local_1139[32];
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	struct<68> Local_1243[1];
	struct<42> Local_1312[32];
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
	var uLocal_2685 = -1;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 1;
	var uLocal_2694 = 0;
	var uLocal_2695 = 32;
	var uLocal_2696 = 0;
	var uLocal_2697 = -1;
	var uLocal_2698 = 0;
	var uLocal_2699 = -1;
	var uLocal_2700 = 0;
	var uLocal_2701 = -1;
	var uLocal_2702 = 0;
	var uLocal_2703 = -1;
	var uLocal_2704 = 0;
	var uLocal_2705 = -1;
	var uLocal_2706 = 0;
	var uLocal_2707 = -1;
	var uLocal_2708 = 0;
	var uLocal_2709 = -1;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1;
	var uLocal_2712 = 0;
	var uLocal_2713 = -1;
	var uLocal_2714 = 0;
	var uLocal_2715 = -1;
	var uLocal_2716 = 0;
	var uLocal_2717 = -1;
	var uLocal_2718 = 0;
	var uLocal_2719 = -1;
	var uLocal_2720 = 0;
	var uLocal_2721 = -1;
	var uLocal_2722 = 0;
	var uLocal_2723 = -1;
	var uLocal_2724 = 0;
	var uLocal_2725 = -1;
	var uLocal_2726 = 0;
	var uLocal_2727 = -1;
	var uLocal_2728 = 0;
	var uLocal_2729 = -1;
	var uLocal_2730 = 0;
	var uLocal_2731 = -1;
	var uLocal_2732 = 0;
	var uLocal_2733 = -1;
	var uLocal_2734 = 0;
	var uLocal_2735 = -1;
	var uLocal_2736 = 0;
	var uLocal_2737 = -1;
	var uLocal_2738 = 0;
	var uLocal_2739 = -1;
	var uLocal_2740 = 0;
	var uLocal_2741 = -1;
	var uLocal_2742 = 0;
	var uLocal_2743 = -1;
	var uLocal_2744 = 0;
	var uLocal_2745 = -1;
	var uLocal_2746 = 0;
	var uLocal_2747 = -1;
	var uLocal_2748 = 0;
	var uLocal_2749 = -1;
	var uLocal_2750 = 0;
	var uLocal_2751 = -1;
	var uLocal_2752 = 0;
	var uLocal_2753 = -1;
	var uLocal_2754 = 0;
	var uLocal_2755 = -1;
	var uLocal_2756 = 0;
	var uLocal_2757 = -1;
	var uLocal_2758 = 0;
	var uLocal_2759 = -1;
	var uLocal_2760 = -1;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = -1;
	var uLocal_2767 = -1;
	var uLocal_2768 = -1;
	var uLocal_2769 = -1;
	var uLocal_2770 = -1;
	var uLocal_2771 = -1;
	var uLocal_2772 = 0;
	var uLocal_2773 = 32;
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
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
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
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
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
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
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
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
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
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
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
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
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
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
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
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
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
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
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
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
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
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
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
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
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
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
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
	int iLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	var uLocal_3198 = 0;
	bool bLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	var uLocal_3202 = 0;
	int iLocal_3203 = 0;
	var uLocal_3204 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_394 = -1;
	bLocal_3199 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_788(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_772(ScriptParam_0);
	}
	else
	{
		func_738();
	}
	while (true)
	{
		func_737();
		if (func_733())
		{
			func_738();
		}
		if (func_730(29))
		{
			func_738();
		}
		if (func_728())
		{
			func_738();
		}
		if (func_727())
		{
			func_738();
		}
		bLocal_3199 = -1;
		if (BitTest(uLocal_3191, PLAYER::PLAYER_ID()))
		{
			if (BitTest(uLocal_3192, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_725(PLAYER::PLAYER_ID()))
				{
					bLocal_3199 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (func_724() && !func_723())
				{
					iVar2 = func_721();
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
							bLocal_3199 = iVar4;
						}
					}
				}
			}
		}
		func_700();
		if (func_699() < 2)
		{
			if (func_696(2, 0, 1, 0, 0))
			{
				MISC::SET_BIT(&bLocal_557, 24);
				func_653(0, -1);
				func_738();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_652(iVar0, -1);
			func_651(iVar0, -1);
			func_650(iVar0, uVar1);
			MISC::CLEAR_BIT(&bLocal_557, 0);
			iVar0++;
		}
		func_600();
		func_568();
		func_565();
		func_545();
		switch (func_544(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_543() == 1)
				{
					func_534(141, func_542(0), 0, 0);
					func_533(1);
				}
				else if (func_543() == 4)
				{
					func_533(4);
				}
				break;
			
			case 1:
				if (func_543() == 1)
				{
					func_20();
				}
				else if (func_543() == 4)
				{
					func_19(&(Local_98.f_211));
					func_533(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_98.f_211)))
				{
					if (func_17(&(Local_98.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_533(4);
				}
				break;
			
			case 2:
				func_533(4);
			
			case 4:
				func_738();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_543())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()//Position - 0x2B3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_699())
	{
		case 0:
			if (BitTest(Local_98.f_213, 0))
			{
				if (!func_18(&(Local_98.f_1.f_3)))
				{
					func_11(&(Local_98.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (BitTest(Local_98.f_213, 2))
			{
				iVar2 = Global_262145.f_11659 /* Tunable: KING_OF_THE_CASTLE_EVENT_TIME_LIMIT */;
				if (func_18(&(Local_98.f_1.f_1)))
				{
					if (func_9(&(Local_98.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_11660 /* Tunable: KING_OF_THE_CASTLE_EVENT_EXPIRY_TIME */;
				if (func_18(&(Local_98.f_1.f_3)))
				{
					if (func_9(&(Local_98.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (BitTest(Local_98.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x3B7
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	bVar0 = func_8(iParam0);
	bVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_98.f_6[iParam0 /*204*/].f_70));
	if (bVar0 > -1)
	{
		if (BitTest(uLocal_3192, bVar0))
		{
			if (BitTest(uLocal_3191, bVar1))
			{
				if (!BitTest(uLocal_3193, bVar1))
				{
					fVar2 = func_6(iParam0, bVar0);
					if (func_18(&(Local_98.f_1.f_1)))
					{
						if (!func_18(&(Local_98.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_98.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_98.f_1.f_1), 0, 0) <= Global_262145.f_11659 /* Tunable: KING_OF_THE_CASTLE_EVENT_TIME_LIMIT */) && func_699() != 2)
						{
							iVar7 = func_9(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_11663 /* Tunable: KING_OF_THE_CASTLE_SECONDS_AS_KING_TO_EARN_POINTS */ * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_262145.f_11662 /* Tunable: KING_OF_THE_CASTLE_POINTS_PER_X_SECONDS_AS_KING */) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, bVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_98.f_6[iParam0 /*204*/].f_70));
			if (bVar0 > -1)
			{
				func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)//Position - 0x51E
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, bool bParam1, float fParam2)//Position - 0x52B
{
	Local_98.f_6[iParam0 /*204*/].f_3[bParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)//Position - 0x543
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

float func_6(int iParam0, bool bParam1)//Position - 0x5A1
{
	return Local_98.f_6[iParam0 /*204*/].f_3[bParam1];
}

int func_7(int iParam0)//Position - 0x5B7
{
	return Local_98.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)//Position - 0x5C9
{
	return Local_98.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x5DB
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

void func_10(int iParam0)//Position - 0x622
{
	Local_98.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)//Position - 0x630
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

void func_12()//Position - 0x675
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_98.f_1.f_1)))
					{
						Local_98.f_1.f_3 = { Var1 };
						func_11(&(Local_98.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_98.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_98.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!BitTest(Local_98.f_213, 2))
					{
						MISC::SET_BIT(&(Local_98.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)//Position - 0x741
{
	Local_98.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)//Position - 0x753
{
	return Local_1243[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)//Position - 0x764
{
	return Local_98.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)//Position - 0x774
{
	Local_98.f_0 = iParam0;
}

int func_17(var uParam0)//Position - 0x780
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

bool func_18(var uParam0)//Position - 0x7A9
{
	return uParam0->f_1;
}

void func_19(var uParam0)//Position - 0x7B5
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()//Position - 0x7D4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_515();
	func_514();
	func_512();
	if (func_510())
	{
		func_383(iVar0);
	}
	func_367(141, func_382(0), &uLocal_3204, SYSTEM::TO_FLOAT(Global_262145.f_11962 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */), 1148846080, iLocal_3203);
	if (func_323(0, 1))
	{
		func_322();
	}
	switch (func_699())
	{
		case 0:
			break;
		
		case 1:
			func_321();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_281(iVar0);
				func_280(iVar0);
				func_278(iVar0);
				if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (!func_276(1, 0))
					{
						if (func_275(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
						{
							if (func_274(PLAYER::PLAYER_ID()) == 141)
							{
								if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
								{
									MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_254(1);
								}
							}
							if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
							{
								MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!BitTest(bLocal_557, 20))
								{
									MISC::SET_BIT(&bLocal_557, 20);
								}
							}
						}
						if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
						{
							MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						}
						if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
						{
							MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
						}
						if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
						}
						if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
						{
							MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
						}
						if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
						{
							MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!BitTest(bLocal_557, 8))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_253())
							{
								if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!func_323(0, 0))
									{
										if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
											{
												func_252("KOTC_1STHELP" /* GXT: King of the Castle is available ~HUD_COLOUR_PURPLE~~BLIP_KING_OF_THE_CASTLE~ ~s~. Hold the area by yourself to become the King and earn cash and RP. */, 30000);
												func_251(0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
												MISC::SET_BIT(&bLocal_557, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_250("KOTC_1STHELP" /* GXT: King of the Castle is available ~HUD_COLOUR_PURPLE~~BLIP_KING_OF_THE_CASTLE~ ~s~. Hold the area by yourself to become the King and earn cash and RP. */))
					{
						HUD::CLEAR_HELP(true);
					}
					if (!BitTest(bLocal_557, 8))
					{
						MISC::SET_BIT(&bLocal_557, 8);
					}
				}
				if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_249(iVar0) <= 500f)
					{
						if (!BitTest(bLocal_557, 9))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							MISC::SET_BIT(&bLocal_557, 9);
						}
					}
					else if (BitTest(bLocal_557, 9))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						MISC::CLEAR_BIT(&bLocal_557, 9);
					}
				}
				if (bLocal_3199 != -1)
				{
					if (BitTest(bLocal_557, 14) && func_8(iVar0) != bLocal_3199)
					{
						if (!BitTest(bLocal_557, 21))
						{
							func_248(81);
							MISC::SET_BIT(&bLocal_557, 21);
						}
					}
					else if (BitTest(bLocal_557, 21))
					{
						MISC::CLEAR_BIT(&bLocal_557, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!BitTest(bLocal_557, 26))
					{
						func_220(141, 0f, 0f, 0, 0, 0, 0);
						MISC::SET_BIT(&bLocal_557, 26);
					}
					if (!BitTest(bLocal_557, 1))
					{
						if (bLocal_3199 != -1)
						{
							if (!func_323(0, 0))
							{
								if (BitTest(uLocal_3191, Local_562[bLocal_3199 /*18*/].f_1))
								{
									if (!BitTest(uLocal_3193, Local_562[bLocal_3199 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != bLocal_3199)
											{
												sVar1 = "KOTC_STRAP2" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~is the King. Take them out. */;
												if (func_219(PLAYER::PLAYER_ID(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~is the King. Help them win. */;
												}
												func_217(81, sVar1, PLAYER::GET_PLAYER_NAME(func_7(iVar0)), func_218(), -1, "KOTC_START" /* GXT: King of the Castle */, func_218());
											}
											else
											{
												func_216(81, "KOTC_START2" /* GXT: You are the King */, "KOTC_STRAP1" /* GXT: Defend the area */, func_218(), -1, func_218(), 1, 0);
												MISC::SET_BIT(&bLocal_557, 14);
												MISC::SET_BIT(&bLocal_557, 15);
											}
										}
										else
										{
											func_216(81, "KOTC_START" /* GXT: King of the Castle */, "KOTC_STRAP3" /* GXT: Enter the Castle area. */, func_218(), -1, func_218(), 1, 0);
										}
										MISC::SET_BIT(&bLocal_557, 1);
									}
								}
							}
						}
					}
					else if (!BitTest(bLocal_557, 2))
					{
						if (func_215(81))
						{
							MISC::SET_BIT(&bLocal_557, 2);
						}
					}
					else if (bLocal_3199 != -1)
					{
						if (func_8(iVar0) == bLocal_3199)
						{
							if (!BitTest(bLocal_557, 14))
							{
								if (!func_323(0, 0))
								{
									if (BitTest(uLocal_3191, Local_562[bLocal_3199 /*18*/].f_1))
									{
										if (!BitTest(uLocal_3193, Local_562[bLocal_3199 /*18*/].f_1))
										{
											func_216(81, "KOTC_START2" /* GXT: You are the King */, "KOTC_STRAP1" /* GXT: Defend the area */, 1, -1, 2, 1, 0);
											MISC::SET_BIT(&bLocal_557, 14);
										}
									}
								}
							}
							else if (!BitTest(bLocal_557, 15))
							{
								if (func_215(81))
								{
									MISC::SET_BIT(&bLocal_557, 15);
								}
							}
						}
						else
						{
							if (BitTest(bLocal_557, 14))
							{
								MISC::CLEAR_BIT(&bLocal_557, 14);
							}
							if (BitTest(bLocal_557, 15))
							{
								MISC::CLEAR_BIT(&bLocal_557, 15);
							}
						}
					}
					else
					{
						if (BitTest(bLocal_557, 14))
						{
							MISC::CLEAR_BIT(&bLocal_557, 14);
						}
						if (BitTest(bLocal_557, 15))
						{
							MISC::CLEAR_BIT(&bLocal_557, 15);
						}
					}
				}
				else
				{
					func_214();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (bLocal_3199 != -1)
						{
							if (func_8(iVar0) == bLocal_3199)
							{
								if (!func_323(1, 0))
								{
									func_211("KOTC_KINGOB1" /* GXT: Defend the ~HUD_COLOUR_BLUE~Castle area. */, 0);
								}
								else
								{
									func_214();
								}
								if (BitTest(bLocal_557, 10))
								{
									if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_253())
											{
												if (!func_323(0, 0))
												{
													if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (BitTest(bLocal_557, 2))
															{
																if (!func_219(PLAYER::PLAYER_ID(), func_7(iVar0)))
																{
																	if (!BitTest(bLocal_557, 10))
																	{
																		func_252("KOTC_YOUKNG" /* GXT: You are the King of the Castle. Earn points by staying in the Castle area. Earn extra points by killing other players while you are in the Castle area. */, 30000);
																		func_251(1);
																		MISC::SET_BIT(&bLocal_557, 6);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!BitTest(bLocal_557, 7))
									{
										if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()))
										{
											if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												if (!func_253())
												{
													if (!func_323(0, 0))
													{
														if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
															{
																if (BitTest(bLocal_557, 2))
																{
																	if (!func_219(PLAYER::PLAYER_ID(), func_7(iVar0)))
																	{
																		if (!BitTest(bLocal_557, 7))
																		{
																			func_252("KOTC_OTHRKG" /* GXT: Another player is the King of the Castle ~HUD_COLOUR_RED~~BLIP_PLAYER_KING~ ~s~. To become the King, enter the Castle area and kill the King. */, 30000);
																			func_251(1);
																			MISC::SET_BIT(&bLocal_557, 7);
																		}
																	}
																	else if (!BitTest(bLocal_557, 11))
																	{
																		func_168("KOTC_OTHRKGGN" /* GXT: A member of ~a~ ~s~is the King of the Castle ~a~~s~. Help them defend the Castle area. */, func_209(), 1, "KOTC_KINGBLIP" /* GXT: ~BLIP_PLAYER_KING~ */, func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0), -1);
																		func_251(1);
																		MISC::SET_BIT(&bLocal_557, 11);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_210(bLocal_3199) || BitTest(Local_396[bLocal_3199 /*5*/].f_4, 12)) && BitTest(uLocal_3192, func_8(iVar0))) && !func_323(1, 0))
								{
									if (func_219(PLAYER::PLAYER_ID(), func_7(iVar0)))
									{
										func_165("KOTC_PERMKNGb" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~is the ~a~.~s~ Help them win. */, func_7(iVar0), "KOTC_KINGNAME" /* GXT: King */, 1, func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0), 0);
									}
									else
									{
										func_154("KOTC_PERMKNG" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~is the ~r~King.~s~ Take them out. */, &(Local_562[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_214();
								}
							}
						}
						else
						{
							func_214();
						}
					}
					else if (bLocal_3199 != -1)
					{
						if (!func_323(1, 0))
						{
							if (func_275(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
							{
								func_211("KOTC_KLLALL" /* GXT: Take out all the players inside the ~HUD_COLOUR_PURPLE~Castle area ~s~to become the King */, 0);
							}
							else
							{
								func_211("KOTC_ENTER" /* GXT: Enter the ~HUD_COLOUR_PURPLE~Castle area~s~ to become the King. */, 0);
							}
						}
						else
						{
							func_214();
						}
						if (!BitTest(bLocal_557, 10))
						{
							if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!func_253())
										{
											if (!func_323(0, 0))
											{
												if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
												{
													if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (func_153(iVar0))
														{
															func_252("KOTC_CONTS" /* GXT: The King has left the Castle area while there are multiple players inside. Enter the Castle area and take out the other players inside it to become King. */, 30000);
															func_251(1);
															MISC::SET_BIT(&bLocal_557, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_214();
					}
				}
				if (bLocal_3199 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_323(1, 0))
						{
							func_211("KOTC_ENTER" /* GXT: Enter the ~HUD_COLOUR_PURPLE~Castle area~s~ to become the King. */, 0);
						}
						else
						{
							func_214();
						}
					}
				}
				else
				{
					func_214();
				}
				func_124(iVar0);
				if (func_274(PLAYER::PLAYER_ID()) == 141)
				{
					func_94(iVar0);
				}
				func_93();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_91(iVar0);
				func_89(iVar0);
				iVar0++;
			}
			func_214();
			func_322();
			func_85();
			sVar4 = "KOTC_OVER1" /* GXT: Event Over */;
			sVar5 = "KOTC_OVER2" /* GXT: <C>~a~</C> ~s~won King of the Castle with a score of ~a~ */;
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (bLocal_3199 != -1)
				{
					if (BitTest(bLocal_557, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == bLocal_3199)
							{
								if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR" /* GXT: You won King of the Castle with a score of ~1~ */;
											sVar4 = "KOTC_WIN1" /* GXT: Winner */;
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR" /* GXT: You came second in King of the Castle with a score of ~1~ */;
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR" /* GXT: You came third in King of the Castle with a score of ~1~ */;
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_124(iVar0);
				if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!BitTest(uLocal_3192, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_382.f_5 = 1;
			}
			if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1) && func_84())
			{
				if (!BitTest(bLocal_557, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_323(0, 0))
							{
								func_83("KOTC_NOENTRY" /* GXT: Event over. Nobody became the King. */, 0);
							}
						}
						else if (bVar8)
						{
							if (bLocal_3199 != -1)
							{
								if (!func_323(0, 0))
								{
									if (!func_323(0, 0))
									{
										if (BitTest(uLocal_3191, Local_562[bLocal_3199 /*18*/].f_1))
										{
											if (!BitTest(uLocal_3193, Local_562[bLocal_3199 /*18*/].f_1))
											{
												if (func_210(bLocal_3199))
												{
													func_216(68, "KOTC_OVER1" /* GXT: Event Over */, "KOTC_NOWIN" /* GXT: Nobody achieved a score in King of the Castle */, 1, 15000, 2, 1, 0);
												}
												else
												{
													func_83("KOTC_NOWIN" /* GXT: Nobody achieved a score in King of the Castle */, 0);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (bLocal_3199 != -1)
							{
								if (!func_323(0, 0))
								{
									if (BitTest(uLocal_3191, Local_562[bLocal_3199 /*18*/].f_1))
									{
										if (!BitTest(uLocal_3193, Local_562[bLocal_3199 /*18*/].f_1))
										{
											if (func_210(bLocal_3199))
											{
												func_81(64, func_82(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2, 0);
											}
											else
											{
												func_80(sVar5, func_82(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 0);
											}
										}
									}
								}
							}
						}
						else if (bLocal_3199 != -1)
						{
							if (!func_323(0, 0))
							{
								if (BitTest(uLocal_3191, Local_562[bLocal_3199 /*18*/].f_1))
								{
									if (!BitTest(uLocal_3193, Local_562[bLocal_3199 /*18*/].f_1))
									{
										if (func_210(bLocal_3199))
										{
											sVar5 = "KOTC_OVER3" /* GXT: <C>~a~</C> ~s~won King of the Castle with a score of ~1~ */;
											if (func_78(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_65(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = PLAYER::GET_PLAYER_NAME(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_46(72, func_82(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3" /* GXT: <C>~a~</C> ~s~won King of the Castle with a score of ~1~ */;
											func_34(sVar5, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_82(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
					{
						if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
						{
							MISC::SET_BIT(&bLocal_557, 3);
						}
					}
				}
				if (BitTest(bLocal_557, 3))
				{
					if (!BitTest(bLocal_557, 4))
					{
						if (bLocal_3199 != -1)
						{
							if (((((((func_215(64) || func_215(72)) || func_215(68)) || !func_210(bLocal_3199)) || func_323(1, 1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || func_15(0) == 0) || bLocal_3199 == -1)
							{
								MISC::SET_BIT(&bLocal_557, 4);
							}
						}
						else
						{
							MISC::SET_BIT(&bLocal_557, 4);
						}
					}
				}
				if (BitTest(bLocal_557, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_653(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_323(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (bLocal_3199 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1236, bVar10) && BitTest(bLocal_557, 4))
			{
				if (!func_253() || HUD::IS_PAUSE_MENU_ACTIVE())
				{
					MISC::SET_BIT(&bLocal_557, 17);
					if (BitTest(bLocal_557, 5))
					{
						MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 1);
						func_533(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)//Position - 0x1535
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_253()) && !(func_32(PLAYER::PLAYER_ID(), 0) && (func_31(PLAYER::PLAYER_ID()) || func_29(PLAYER::PLAYER_ID())))) && !func_27(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836959.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2738934.f_4709), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
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
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_250("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2738934.f_4709), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2738934.f_4709), 1);
			return 1;
	}
	return 0;
}

void func_22()//Position - 0x16BF
{
	if (BitTest(Global_2738934.f_4709, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738934.f_868, 2)) && func_788(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76498) && !Global_61347) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2738934.f_4709), 1);
			func_252("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_251(1);
			MISC::CLEAR_BIT(&(Global_2738934.f_4709), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)//Position - 0x173C
{
	*uParam0 = iParam1;
}

void func_24()//Position - 0x1749
{
	Global_2698053 = 1;
}

int func_25(int iParam0)//Position - 0x1756
{
	if (iParam0 != func_26())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_26()//Position - 0x177B
{
	return -1;
}

int func_27(bool bParam0)//Position - 0x1784
{
	int iVar0;
	
	if (bParam0 != func_26())
	{
		if (func_788(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				iVar0 = func_28(Global_2657971[bParam0 /*465*/].f_322.f_8);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x17D9
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
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

bool func_29(bool bParam0)//Position - 0x1CD9
{
	return func_30(bParam0, 19);
}

var func_30(bool bParam0, int iParam1)//Position - 0x1CE9
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_10.f_4, iParam1);
}

int func_31(bool bParam0)//Position - 0x1D01
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_30(bParam0, 9);
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x1D1F
{
	if (func_33(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(var uParam0)//Position - 0x1D63
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

int func_34(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1D85
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_44(&Var1));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		if (!bParam6)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2707307 = { func_43(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2707237.f_22), "Leader") && Global_2707237.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2707237.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_42(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, bVar17, false, Global_2707237, &Var1, Global_1576240, Global_1576241, Global_1576242);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, bVar17, false, Global_2707237, Global_1576240, Global_1576241, Global_1576242);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_35(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_35(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1EEC
{
	int iVar0;
	
	if ((!func_41() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_38(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_36(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_36(int iParam0)//Position - 0x1FF4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_37(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_37(int iParam0)//Position - 0x2056
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_38(bool bParam0, int iParam1)//Position - 0x208F
{
	bool bVar0;
	
	if (!func_33(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_39(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[bParam0 /*883*/].f_206 == 8;
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

int func_39(int iParam0, bool bParam1)//Position - 0x20E8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_40()//Position - 0x2129
{
	return Global_1574926;
}

bool func_41()//Position - 0x2135
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_42(char* sParam0)//Position - 0x2146
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_43(bool bParam0)//Position - 0x2171
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

var func_44(char* sParam0)//Position - 0x2188
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_45(&cVar0);
}

var func_45(char[4] cParam0)//Position - 0x21AC
{
	return cParam0;
}

int func_46(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0x21B6
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
	func_64(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_47(&Var0);
}

int func_47(var uParam0)//Position - 0x2229
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672855.f_2879)
		{
			return 0;
		}
	}
	func_63(uParam0, uParam0->f_17);
	func_61(uParam0);
	if (func_60())
	{
		func_61(uParam0);
	}
	if (func_59(uParam0->f_1))
	{
		func_52();
		if (Global_2672855.f_2557[0 /*80*/].f_2 == 0)
		{
			Global_2672855.f_2557[0 /*80*/] = { *uParam0 };
			if (func_51(uParam0->f_69, 8192))
			{
				Global_1928446 = 1;
			}
			return 1;
		}
		if (((Global_2672855.f_2557[0 /*80*/].f_1 == 13 || Global_2672855.f_2557[0 /*80*/].f_1 == 53) || Global_2672855.f_2557[0 /*80*/].f_1 == 54) || Global_2672855.f_2557[0 /*80*/].f_1 == 58)
		{
			Global_2672855.f_2557[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672855.f_2557[iVar0 + 1 /*80*/] = { Global_2672855.f_2557[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672855.f_2557[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672855.f_2557[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_52();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_49(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 2);
				Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_51(uParam0->f_69, 128))
			{
				if (func_48(Global_2672855.f_2557[iVar0 /*80*/].f_1))
				{
					Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
					func_49(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x240E
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

void func_49(var uParam0, int iParam1)//Position - 0x2494
{
	func_50(uParam0, iParam1);
}

void func_50(var uParam0, var uParam1)//Position - 0x24A4
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_51(var uParam0, int iParam1)//Position - 0x24B5
{
	return (uParam0 && iParam1) != 0;
}

void func_52()//Position - 0x24C4
{
	bool bVar0;
	
	if (Global_2672855.f_2880)
	{
		return;
	}
	if (!Global_79658)
	{
		Global_79658 = 1;
		bVar0 = true;
	}
	else if (Global_79659)
	{
		Global_79659 = 0;
		bVar0 = true;
	}
	func_53();
	if (bVar0)
	{
		Global_79658 = 0;
	}
}

void func_53()//Position - 0x2509
{
	Global_2672855.f_2881 = 0;
	Global_2672855.f_2881.f_582 = 0;
	func_57(&(Global_2672855.f_2881.f_1));
	Global_2672855.f_2881.f_1.f_1 = 0;
	func_54(&(Global_2672855.f_2881.f_1), 1);
}

void func_54(var uParam0, int iParam1)//Position - 0x254B
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
	if (!Global_79658)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_79660)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_56(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_55(0);
}

void func_55(int iParam0)//Position - 0x25FA
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

int func_56(bool bParam0)//Position - 0x260E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_57(var uParam0)//Position - 0x2636
{
	func_58(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_58(var uParam0)//Position - 0x2660
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

int func_59(int iParam0)//Position - 0x26DF
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_60()//Position - 0x27F7
{
	return Global_2684504.f_19;
}

void func_61(var uParam0)//Position - 0x2805
{
	if (func_62(uParam0->f_1))
	{
		uParam0->f_72 = func_218();
	}
}

int func_62(int iParam0)//Position - 0x2820
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

void func_63(var uParam0, int iParam1)//Position - 0x28B2
{
	if (func_62(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_26() || !func_788(iParam1, 0, 1))
	{
		return;
	}
	if (func_48(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_169(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_64(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2909
{
	uParam1->f_17 = func_26();
	uParam1->f_18 = func_26();
	uParam1->f_19 = func_26();
	uParam1->f_20 = func_26();
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

char* func_65(bool bParam0)//Position - 0x2989
{
	char* sVar0;
	bool bVar1;
	
	if (!func_33(bParam0))
	{
		sVar0 = func_73(bParam0, 0);
		return sVar0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_72(&(Global_1887305[bParam0 /*610*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1887305[bParam0 /*610*/].f_10.f_121 != Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_121)
	{
		sVar0 = func_73(bParam0, 0);
		return sVar0;
	}
	if (((func_30(bParam0, 28) || func_30(PLAYER::PLAYER_ID(), 28)) || func_69(bParam0)) && !func_68(bParam0))
	{
		return func_73(bParam0, 0);
	}
	bVar1 = func_67(bParam0);
	if (bVar1 != func_26())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (Global_262145.f_34983 /* Tunable: 664611037 */)
			{
				return func_73(bVar1, 0);
			}
			if (!func_66() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_73(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_26())
	{
		sVar0 = func_72(&(Global_1887305[bVar1 /*610*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_73(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_66()//Position - 0x2ABF
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_67(bool bParam0)//Position - 0x2AD5
{
	if (func_33(bParam0))
	{
		return Global_1887305[bParam0 /*610*/].f_10;
	}
	return func_26();
}

int func_68(bool bParam0)//Position - 0x2AF8
{
	struct<13> Var0;
	
	Var0 = { func_43(bParam0) };
	if (func_66())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0) && NETWORK::_NETWORK_CAN_TEXT_FROM_GAMER_BE_VIEWED(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_69(bool bParam0)//Position - 0x2B43
{
	struct<13> Var0;
	
	if (bParam0 != func_26())
	{
		Var0 = { func_43(bParam0) };
		if (func_71(&Var0))
		{
			return 1;
		}
		if (!NETWORK::_NETWORK_CAN_TEXT_FROM_GAMER_BE_VIEWED(&Var0))
		{
			return 1;
		}
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_66() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
		if ((func_70(Var0) && NETWORK::NETWORK_PERMISSIONS_HAS_GAMER_RECORD(&Var0)) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
		{
			return 1;
		}
	}
	return 1;
}

bool func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x2BF2
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_71(var* uParam0)//Position - 0x2C02
{
	int iVar0;
	
	if (!func_70(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (func_70(Global_1979806[iVar0 /*13*/]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1979806[iVar0 /*13*/]), uParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

var func_72(var uParam0)//Position - 0x2C56
{
	return uParam0;
}

char* func_73(bool bParam0, bool bParam1)//Position - 0x2C60
{
	if (!bParam1)
	{
		if (func_75(bParam0, 1))
		{
			return func_74();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_74()//Position - 0x2C87
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

bool func_75(bool bParam0, bool bParam1)//Position - 0x2C97
{
	return func_76(bParam0, bParam1, 1);
}

int func_76(int iParam0, bool bParam1, int iParam2)//Position - 0x2CA8
{
	int iVar0;
	
	if (!func_33(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_77(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_33(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_77(bool bParam0, int iParam1)//Position - 0x2D04
{
	if (func_33(bParam0))
	{
		if (func_33(Global_1887305[bParam0 /*610*/].f_10))
		{
			if (Global_1887305[bParam0 /*610*/].f_10 == bParam0 && Global_1887305[bParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1)//Position - 0x2D53
{
	if (!func_33(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_79(bParam0))
		{
			return 0;
		}
	}
	return func_33(Global_1887305[bParam0 /*610*/].f_10);
}

int func_79(bool bParam0)//Position - 0x2D8B
{
	if (func_33(bParam0))
	{
		if (func_33(Global_1887305[bParam0 /*610*/].f_10))
		{
			return Global_1887305[bParam0 /*610*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_80(char* sParam0, int iParam1, bool bParam2)//Position - 0x2DC0
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_35(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_35(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2E13
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
	func_64(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_49(&(Var0.f_69), iParam8);
	}
	return func_47(&Var0);
}

int func_82(float fParam0)//Position - 0x2E94
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR(fParam0);
	iVar0 = (iVar0 / Global_262145.f_11662 /* Tunable: KING_OF_THE_CASTLE_POINTS_PER_X_SECONDS_AS_KING */);
	iVar0 = (iVar0 * Global_262145.f_11662 /* Tunable: KING_OF_THE_CASTLE_POINTS_PER_X_SECONDS_AS_KING */);
	return iVar0;
}

int func_83(char* sParam0, bool bParam1)//Position - 0x2EBE
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_35(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_84()//Position - 0x2EF6
{
	return BitTest(Global_1836959.f_1, 25);
}

void func_85()//Position - 0x2F07
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_86(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x2F3C
{
	bool bVar0;
	
	bVar0 = func_542(iParam0);
	if (iParam1 != -1)
	{
		bVar0 = iParam1;
	}
	if (BitTest(uLocal_558, bVar0))
	{
		HUD::SET_MINIMAP_COMPONENT(func_88(iParam0, 0), false, func_87(iParam0, 1));
		if (bVar0 == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_88(iParam0, 1), false, func_87(iParam0, 1));
		}
		MISC::CLEAR_BIT(&uLocal_558, bVar0);
	}
}

int func_87(int iParam0, bool bParam1)//Position - 0x2F96
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 9;
	}
	else if (func_219(PLAYER::PLAYER_ID(), func_7(iParam0)))
	{
		return func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
	}
	return 6;
}

int func_88(int iParam0, bool bParam1)//Position - 0x2FF2
{
	switch (func_542(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_89(int iParam0)//Position - 0x306D
{
	if (HUD::DOES_BLIP_EXIST(func_90(iParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_1243[iParam0 /*68*/].f_28));
	}
}

var func_90(int iParam0)//Position - 0x308F
{
	return Local_1243[iParam0 /*68*/].f_28;
}

void func_91(int iParam0)//Position - 0x30A0
{
	if (HUD::DOES_BLIP_EXIST(func_92(iParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_1243[iParam0 /*68*/].f_27));
	}
}

var func_92(int iParam0)//Position - 0x30C2
{
	return Local_1243[iParam0 /*68*/].f_27;
}

void func_93()//Position - 0x30D3
{
	bool bVar0;
	
	if (bLocal_3199 != -1)
	{
		if (func_210(bLocal_3199))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!BitTest(bLocal_557, 16))
		{
			AUDIO::START_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
			MISC::SET_BIT(&bLocal_557, 16);
		}
	}
	else if (BitTest(bLocal_557, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&bLocal_557, 16);
	}
}

void func_94(int iParam0)//Position - 0x312D
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_210(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_323(1, 1)) && bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT()) && !func_121(PLAYER::PLAYER_ID(), 0, -1)) && !func_120(PLAYER::PLAYER_ID())) && !func_119())
	{
		if (!BitTest(bLocal_557, 18))
		{
			if (iLocal_3203 == 0)
			{
				iLocal_3203 = 1;
			}
			func_107(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_100();
			MISC::SET_BIT(&bLocal_557, 18);
		}
	}
	else if (BitTest(bLocal_557, 18))
	{
		if (iLocal_3203)
		{
			iLocal_3203 = 0;
		}
		func_95();
		func_107(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		MISC::CLEAR_BIT(&bLocal_557, 18);
	}
}

void func_95()//Position - 0x322F
{
	if (func_99() && !func_98())
	{
		func_97();
	}
	func_96();
	Global_2635563.f_714 = 0;
	Global_2635563.f_714.f_602 = 0;
}

void func_96()//Position - 0x3263
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635563.f_714.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var7 = -1;
	Var7.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635563.f_714.f_603[iVar0 /*3*/] = { Var7 };
		iVar0++;
	}
}

void func_97()//Position - 0x32D4
{
	if (func_98())
	{
		if (Global_2635563.f_714.f_668 == Global_2635563.f_1383.f_668)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_1383), &(Global_2635563.f_714), 669);
		Global_2635563.f_496 = { Global_2635563.f_490 };
		Global_2635563.f_2052 = 1;
	}
}

int func_98()//Position - 0x3342
{
	if ((Global_2635563.f_2052 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_1383.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635563.f_1383.f_668))
	{
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x3381
{
	if ((Global_2635563.f_2053 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635563.f_714.f_668))
	{
		return 1;
	}
	return 0;
}

void func_100()//Position - 0x33C0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_105(func_542(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_101(Var2, uVar5, uVar6, 0, -3, 0, 0);
			iVar1++;
		}
		iVar0++;
	}
}

void func_101(struct<3> Param0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x3411
{
	func_102(Param0, uParam3, uParam4, iParam5, iParam6, bParam7, bParam8);
}

void func_102(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x342D
{
	if (!Global_2635563.f_2053)
	{
	}
	if (Global_2635563.f_714 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/] = { Param0 };
		Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_3 = uParam3;
		Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_4 = uParam4;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_5), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_5), 0);
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_5), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2635563.f_714.f_1[Global_2635563.f_714 /*6*/].f_5), 1);
		}
		func_103(Global_2635563.f_714, uParam5, iParam6);
		Global_2635563.f_714++;
	}
}

void func_103(var uParam0, var uParam1, int iParam2)//Position - 0x353A
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_104(0))
	{
		return;
	}
	if (Global_2635563.f_714.f_602 >= 16 || Global_2635563.f_714.f_602 <= -1)
	{
		return;
	}
	if (iParam2 == -3)
	{
		return;
	}
	Global_2635563.f_714.f_603[Global_2635563.f_714.f_602 /*3*/] = uParam0;
	Global_2635563.f_714.f_603[Global_2635563.f_714.f_602 /*3*/].f_1 = uParam1;
	Global_2635563.f_714.f_603[Global_2635563.f_714.f_602 /*3*/].f_2 = iParam2;
	Global_2635563.f_714.f_602++;
}

bool func_104(bool bParam0)//Position - 0x35EA
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_105(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x35FB
{
	switch (bParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.7085f, -1849.3352f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.6702f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.3547f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.6849f, -1803.2574f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.9908f, -1791.1484f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.6776f, -1781.7412f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.8599f, -1762.1647f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.3335f, -1747.1135f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.5773f, -1747.2778f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.9473f, -1735.3784f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.0747f, -1736.3596f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.2474f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.9507f, -1730.0043f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.5897f, -1719.6531f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.5476f, -1712.5056f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.5105f, -1729.8396f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.6821f, -1723.6842f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.6997f, -1734.5724f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.2719f, -1755.8715f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.4221f, -1768.4541f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.1691f, -1851.2838f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.0258f, -1849.9877f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.0099f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.0798f, -1826.3419f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.7281f, -1810.0209f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.3158f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.1533f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.6898f, -1766.2112f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.0349f, -1751.4143f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.9519f, -1720.7599f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.1249f, -1711.3389f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.9827f, -1699.1566f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.9994f, -1703.7756f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.1329f, -1699.9053f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.3359f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.0776f, -1687.1299f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.1356f, -1707.8545f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.0554f, -1722.3411f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.7631f, -1746.2201f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.2073f, -1735.9645f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.0859f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.9049f, -1861.8759f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.0223f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.5697f, -1863.3016f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.5416f, -1840.8429f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.8208f, -1799.4036f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.1946f, -1789.1056f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.9714f, -1736.8583f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.2671f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.9883f, -1722.8982f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.8738f, -1703.2379f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.5876f, -1682.8486f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.7775f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.4147f, -1669.4354f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.3087f, -1677.7773f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.1797f, -1690.5024f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.6694f, -1702.9875f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.0632f, -1717.3258f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.9006f, -1758.6924f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.0592f, -1769.5427f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.8611f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.0492f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.1504f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.5732f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.3027f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.9427f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.1841f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.1166f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.2511f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.1549f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.5205f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.3408f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.5568f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.6868f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.2603f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.1202f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.8395f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.5255f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.4705f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.7617f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.4106f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.2697f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.7621f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.6151f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.8239f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.4758f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.4978f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.5553f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.6584f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.2229f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.6658f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.9244f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.4088f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.5211f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.5216f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.4307f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.1564f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.8048f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.0186f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.2164f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.5674f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.5641f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.9971f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.4407f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.1611f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.3531f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.6759f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.2031f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.1355f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.5942f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.5133f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.4727f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.1532f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.7311f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.0383f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.8457f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.2227f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.4473f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.4644f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.8037f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.3657f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.2544f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.0386f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.4204f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.8345f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.4023f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.2773f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.1714f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.2026f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.2144f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.0225f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.1655f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.4185f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.6714f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.2114f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.0605f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.5444f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.4795f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.9976f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.6816f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.8936f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.1255f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.7207f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.3013f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.5645f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.5493f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.9565f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.7676f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.0864f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.2837f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.0327f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.1304f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.9707f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.1025f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.9937f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.3833f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.0156f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.5117f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.2056f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.3115f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.0396f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.6045f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.5605f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.8423f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.0815f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.4883f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.3633f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.2715f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.0312f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.7993f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.5093f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.0444f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.0693f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.9814f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.6685f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.4834f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.7078f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.2336f, 3832.2144f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.9836f, 3815.5874f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.5955f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.2783f, 3803.2915f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.7683f, 3786.9314f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.8638f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.8403f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.1062f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.0908f, 3747.1243f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.1926f, 3749.9844f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.6604f, 3752.5833f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.2578f, 3758.1418f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.8015f, 3750.6018f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.2534f, 3734.2852f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.7927f, 3718.1887f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.5686f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.6045f, 3786.8047f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.8853f, 3769.5168f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.1914f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.4927f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.4797f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.7297f, 3734.1436f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.8293f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.9607f, 3768.8892f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.1165f, 3784.6604f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.4158f, 3792.6714f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.1743f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.0337f, 3800.1042f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.4197f, 3819.2175f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.6646f, 3833.3997f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.7837f, 3840.4302f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.1333f, 3855.7542f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.0374f, 3811.5098f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.0647f, 3829.4417f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.8298f, 3814.1406f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.0852f, 3806.8542f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.6636f, 3806.8542f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.4988f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.8306f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.9307f, 3869.7268f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.7405f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.0571f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.6426f, 3831.9866f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.8044f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.6448f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.3362f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.0305f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.3516f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.8694f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.2896f, 3720.2244f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.4375f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.2627f, 3688.0715f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.0522f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.9834f, 3723.8035f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.6707f, 3701.1533f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.4625f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.4043f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.0994f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.3855f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.7311f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.6072f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.6282f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.3206f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.2935f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.7736f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.0509f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.8693f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.3973f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.7711f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.9387f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.5554f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.9507f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.1007f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.0496f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.4137f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.1243f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.9691f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.0771f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.5197f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.7406f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.5253f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.9691f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.3301f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.9045f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.9045f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.5485f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.1715f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.6218f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.4921f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.9038f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.2517f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.5663f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.1189f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.8285f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.1661f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.1866f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.9796f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.5658f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.4825f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.9829f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.0039f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.6995f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.6814f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.6271f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.4248f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.6145f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.9796f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.7596f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.1132f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.1298f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.2556f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.8162f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.6619f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.8071f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.1779f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.6813f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.7253f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.9136f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.1202f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.5516f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.1589f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.6436f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.8005f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.7885f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.7767f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.0895f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.7981f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.5907f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.7163f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.1318f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.5267f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.5176f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.5524f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.7285f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.9114f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.0237f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.4025f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.9086f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.6908f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.1549f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.6482f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.3252f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.3252f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.4581f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.0582f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.4984f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.8737f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.2662f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.3265f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.4774f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.8318f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.8085f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.2938f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.2601f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.9352f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.3276f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.6821f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.0201f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.3508f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.2126f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.4906f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.7433f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.7938f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.6041f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.1478f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.1882f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.4506f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.5403f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.9647f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.8331f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.5707f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.1395f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.2965f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.4971f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.2866f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5004f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.1595f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.5073f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.1804f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.5115f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.5277f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.4247f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.7214f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_106(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.6096f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.5459f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.5929f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.2659f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.7559f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.8406f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.8086f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.3258f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.8698f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.8082f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.9645f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.5583f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.5946f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.3945f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.5724f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.7379f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.8116f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.4623f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_106(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.6311f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.2471f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.4893f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.1329f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.1472f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.3364f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.0393f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.0634f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.4277f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.2805f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.9839f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.3889f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.3031f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.7849f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.2584f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.6908f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.5233f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.5007f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_106(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.5635f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_106(bParam0, 2);
					break;
			}
			break;
	}
}

float func_106(int iParam0, int iParam1)//Position - 0x8CCD
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11874 /* Tunable: KINGOFCASTLE_BEACHTOWERACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11875 /* Tunable: KINGOFCASTLE_BEACHTOWERBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11876 /* Tunable: KINGOFCASTLE_BEACHTOWERCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11877 /* Tunable: KINGOFCASTLE_LANDACTDAMACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11878 /* Tunable: KINGOFCASTLE_LANDACTDAMBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11879 /* Tunable: KINGOFCASTLE_LANDACTDAMCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11880 /* Tunable: KINGOFCASTLE_FIRESTATIONACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11881 /* Tunable: KINGOFCASTLE_FIRESTATIONBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11882 /* Tunable: KINGOFCASTLE_FIRESTATIONCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11883 /* Tunable: KINGOFCASTLE_CABLECARACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11884 /* Tunable: KINGOFCASTLE_CABLECARBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11885 /* Tunable: KINGOFCASTLE_CABLECARCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11886 /* Tunable: KINGOFCASTLE_HIPPYHILLACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11887 /* Tunable: KINGOFCASTLE_HIPPYHILLBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11888 /* Tunable: KINGOFCASTLE_HIPPYHILLCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11889 /* Tunable: KINGOFCASTLE_OBSERVATORYACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11890 /* Tunable: KINGOFCASTLE_OBSERVATORYBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11891 /* Tunable: KINGOFCASTLE_OBSERVATORYCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11892 /* Tunable: KINGOFCASTLE_SCRAPYARDACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11893 /* Tunable: KINGOFCASTLE_SCRAPYARDBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11894 /* Tunable: KINGOFCASTLE_SCRAPYARDCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11895 /* Tunable: KINGOFCASTLE_GROTTOACLASSSPAWNPOINTWEIGHTING */;
				
				case 1:
					return Global_262145.f_11896 /* Tunable: KINGOFCASTLE_GROTTOBCLASSSPAWNPOINTWEIGHTING */;
				
				case 2:
					return Global_262145.f_11897 /* Tunable: KINGOFCASTLE_GROTTOCCLASSSPAWNPOINTWEIGHTING */;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_107(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x8EDD
{
	if (bParam0)
	{
		if (func_99())
		{
			func_97();
		}
		Global_2635563.f_714.f_668 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635563.f_714.f_654 = iParam1;
		Global_2635563.f_714.f_655 = iParam2;
		Global_2635563.f_714.f_656 = iParam10;
		func_95();
		func_110(8, 0, 0, 0, 0);
		Global_2635563.f_714.f_657 = iParam11;
		Global_2635563.f_714.f_662 = iParam3;
		Global_2635563.f_714.f_663 = iParam4;
		Global_2635563.f_714.f_660 = iParam5;
		Global_2635563.f_714.f_661 = iParam6;
		Global_2635563.f_714.f_664 = iParam7;
		Global_2635563.f_714.f_665 = iParam8;
		Global_2635563.f_714.f_666 = iParam9;
		Global_2635563.f_714.f_667 = iParam14;
		Global_2635563.f_714.f_658 = iParam12;
		Global_2635563.f_714.f_659 = iParam13;
		Global_2635563.f_2053 = 1;
	}
	else
	{
		func_108();
	}
}

void func_108()//Position - 0x8FC8
{
	if (func_99() && !func_98())
	{
		func_97();
	}
	if (func_98())
	{
		func_109();
	}
	else
	{
		func_95();
		func_110(0, 0, 0, 0, 0);
		Global_2635563.f_2053 = 0;
		Global_2635563.f_2052 = 0;
	}
}

void func_109()//Position - 0x9010
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_714), &(Global_2635563.f_1383), 669);
	Global_2635563.f_490 = { Global_2635563.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668)
	{
		Global_2635563.f_2052 = 0;
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9058
{
	if (Global_2672855.f_1728.f_703.f_16 != func_26())
	{
		if (BitTest(Global_2657971[Global_2672855.f_1728.f_703.f_16 /*465*/].f_426, 0) && func_111())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643622 = 0;
	}
	Global_2635563.f_490 = iParam0;
	Global_2635563.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635563.f_490.f_2 = iParam1;
	Global_2635563.f_490.f_3 = iParam2;
	Global_2635563.f_490.f_4 = iParam3;
	Global_2635563.f_490.f_5 = iParam4;
}

int func_111()//Position - 0x90F4
{
	if (((((((func_118(PLAYER::PLAYER_ID()) == 229 || func_118(PLAYER::PLAYER_ID()) == 191) || func_117(Global_4718592.f_185586)) || func_116()) || func_119()) || func_115()) || Global_2708057.f_227 == 1) || (Global_2635563.f_2053 && func_112(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)//Position - 0x917A
{
	if (func_114(iParam0))
	{
		return 1;
	}
	if (func_113(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113(bool bParam0)//Position - 0x919D
{
	return func_30(bParam0, 20);
}

int func_114(bool bParam0)//Position - 0x91AD
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

bool func_115()//Position - 0x91D0
{
	return Global_2708056;
}

int func_116()//Position - 0x91DC
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_117(int iParam0)//Position - 0x91F1
{
	return iParam0 == 92;
}

int func_118(int iParam0)//Position - 0x91FE
{
	if (func_33(iParam0))
	{
		if (func_32(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

bool func_119()//Position - 0x922A
{
	return Global_1836675;
}

int func_120(int iParam0)//Position - 0x9236
{
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, int iParam2)//Position - 0x926F
{
	if (Global_1845281[bParam0 /*883*/].f_268.f_35 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
	{
		if (iParam2 == -1 || func_28(Global_2657971[bParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
			{
				return func_122(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

bool func_122(bool bParam0)//Position - 0x92F6
{
	int iVar0;
	
	if (bParam0 == func_26())
	{
		return bParam0;
	}
	if (func_123(bParam0) != -1)
	{
		iVar0 = func_28(func_123(bParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_78(bParam0, 0))
			{
				return func_67(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_26();
		}
		return Global_2657971[bParam0 /*465*/].f_322.f_11;
	}
	return func_26();
}

int func_123(bool bParam0)//Position - 0x9385
{
	if (bParam0 != func_26())
	{
		if (func_788(bParam0, 1, 1))
		{
			return Global_2657971[bParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && bParam0 == PLAYER::PLAYER_ID()) && func_788(bParam0, 1, 0))
		{
			return Global_2657971[bParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

void func_124(int iParam0)//Position - 0x93F4
{
	if (func_15(iParam0) != 0)
	{
		func_383(iParam0);
		func_125(iParam0);
	}
}

void func_125(int iParam0)//Position - 0x9412
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[3];
	
	if (bLocal_3199 == -1)
	{
		return;
	}
	if (func_323(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_11659 /* Tunable: KING_OF_THE_CASTLE_EVENT_TIME_LIMIT */ + 1000 - func_9(&(Local_98.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!BitTest(Local_396[bLocal_3199 /*5*/].f_4, 12))
	{
		if (!func_210(bLocal_3199))
		{
			func_150(iVar6, iVar7, func_151());
			return;
		}
	}
	func_147(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_26();
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = SYSTEM::TO_FLOAT(func_82(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_82(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_146(1))
		{
			if (Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_78(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_169(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_82(func_144(iParam0, bLocal_3199));
	func_127(Local_1243[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1243[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1243[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3202, iVar7, func_151(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1243[iParam0 /*68*/].f_53[0 /*4*/] == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (!BitTest(bLocal_557, 23))
		{
			if (func_126(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&bLocal_557, 23);
		}
	}
	else if (BitTest(bLocal_557, 23))
	{
		if (func_126(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&bLocal_557, 23);
	}
}

bool func_126(bool bParam0)//Position - 0x9719
{
	return func_75(PLAYER::PLAYER_ID(), bParam0);
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)//Position - 0x972B
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_141(0) == 0)
	{
		return;
	}
	func_140();
	iVar1 = 0;
	if (((Global_2697542[0] != iParam0 || Global_2697542[1] != iParam1) || Global_2697542[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2697542[0] = iParam0;
	Global_2697542[1] = iParam1;
	Global_2697542[2] = iParam2;
	Global_2697542[3] = 0;
	Global_2697542[4] = 0;
	if (Global_2697542[0] != func_26())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697542[0]);
			Global_2697548[0 /*16*/] = { func_139(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_136(iParam3, &(Global_2697548[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[1] != func_26())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697542[1]);
			Global_2697548[1 /*16*/] = { func_139(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_136(iParam4, &(Global_2697548[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[2] != func_26())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697542[2]);
			Global_2697548[2 /*16*/] = { func_139(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_136(iParam5, &(Global_2697548[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_26())
			{
				if (func_132(PLAYER::PLAYER_ID()) == 0)
				{
					func_136(iParam6, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
				}
			}
			break;
		
		case 1:
			if (func_132(PLAYER::PLAYER_ID()) == 0)
			{
				func_136(iParam6, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 2:
			if (func_132(PLAYER::PLAYER_ID()) == 0)
			{
				func_136(iParam6, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_131(sParam10))
	{
		sVar2 = sParam10;
	}
	func_128(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*uParam8 = 0;
}

void func_128(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x99CC
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_130(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_129(7, iVar0);
		Global_1670224.f_4714[iVar0] = uParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = uParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = uParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_129(int iParam0, int iParam1)//Position - 0x9B29
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_130(int iParam0, int iParam1)//Position - 0x9B42
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_131(char* sParam0)//Position - 0x9B58
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

int func_132(bool bParam0)//Position - 0x9B92
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_135() && !func_134()) || func_133(PLAYER::PLAYER_ID(), 21)) || func_133(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_18(&(Global_1836959.f_13)))
		{
			if (!func_5(&(Global_1836959.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_3(&(Global_1836959.f_13));
		}
	}
	else if (BitTest(Global_1887305[bParam0 /*610*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 9);
}

bool func_133(int iParam0, int iParam1)//Position - 0x9C2E
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

bool func_134()//Position - 0x9C44
{
	return Global_1574582.f_1;
}

bool func_135()//Position - 0x9C52
{
	return Global_1574582;
}

void func_136(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26)//Position - 0x9C5E
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
			if (func_130(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_129(6, iVar0);
		Global_1670224.f_4085[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4085.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4085.f_183[iVar0] = iParam3;
		Global_1670224.f_4085.f_172[iVar0] = iParam2;
		Global_1670224.f_4085.f_260[iVar0] = iParam4;
		Global_1670224.f_4085.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1670224.f_4085.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_4085.f_443[iVar0] = iParam7;
		Global_1670224.f_4085.f_454[iVar0] = iParam8;
		Global_1670224.f_4085.f_497[iVar0] = iParam9;
		Global_1670224.f_4085.f_508[iVar0] = iParam10;
		Global_1670224.f_4085.f_205[iVar0] = iParam11;
		Global_1670224.f_4085.f_216[iVar0] = iParam12;
		Global_1670224.f_4085.f_227[iVar0] = iParam13;
		Global_1670224.f_4085.f_238[iVar0] = iParam14;
		Global_1670224.f_4085.f_249[iVar0] = iParam15;
		Global_1670224.f_4085.f_519[iVar0] = iParam16;
		Global_1670224.f_4085.f_530[iVar0] = iParam17;
		Global_1670224.f_4085.f_541[iVar0] = iParam18;
		Global_1670224.f_4085.f_552[iVar0] = iParam19;
		Global_1670224.f_4085.f_563[iVar0] = iParam20;
		Global_1670224.f_4085.f_574[iVar0] = iParam21;
		Global_1670224.f_4085.f_585[iVar0] = iParam22;
		Global_1670224.f_4085.f_596[iVar0] = iParam23;
		Global_1670224.f_4085.f_607[iVar0] = iParam24;
		Global_1670224.f_4085.f_194[iVar0] = iParam25;
		Global_1670224.f_4085.f_618[iVar0] = iParam26;
		if (iParam15 == 5 && func_138())
		{
			Global_1670224.f_1172 = 1;
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
				Global_1670224.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1670224.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1670224.f_1172 = 1;
			}
			if (func_137())
			{
				Global_1670224.f_1176 = 1;
			}
		}
	}
}

int func_137()//Position - 0x9EDF
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

int func_138()//Position - 0x9F03
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_139(int iParam0, char* sParam1)//Position - 0x9F41
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

void func_140()//Position - 0x9FE3
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2698056 = 1;
}

int func_141(bool bParam0)//Position - 0xA006
{
	if (func_143())
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_788(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_142()//Position - 0xA03D
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

bool func_143()//Position - 0xA054
{
	return BitTest(Global_2621446, 12);
}

float func_144(int iParam0, bool bParam1)//Position - 0xA063
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_145(iParam0, bParam1);
	fVar1 = func_6(iParam0, bParam1);
	return (fVar0 + fVar1);
}

float func_145(int iParam0, int iParam1)//Position - 0xA084
{
	return Local_98.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_146(bool bParam0)//Position - 0xA09A
{
	return func_78(PLAYER::PLAYER_ID(), bParam0);
}

void func_147(int iParam0)//Position - 0xA0AC
{
	if (func_149(PLAYER::PLAYER_ID()) || func_148(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2738934.f_5083, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738934.f_5085)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2738934.f_5085));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2738934.f_5093 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738934.f_5093);
				Global_2738934.f_5093 = -1;
			}
			Global_2738934.f_5083 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2738934.f_5083, 0))
		{
			if (BitTest(Global_2738934.f_5083, 4))
			{
				if (!BitTest(Global_2738934.f_5083, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738934.f_5085)))
						{
							StringCopy(&(Global_2738934.f_5085), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2738934.f_5083), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2738934.f_5083, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2738934.f_5083, 1))
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
				MISC::SET_BIT(&(Global_2738934.f_5083), 1);
			}
			else if (!BitTest(Global_2738934.f_5083, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2738934.f_5085), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2738934.f_5083), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2738934.f_5083, 3))
				{
					Global_2738934.f_5093 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2738934.f_5093, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2738934.f_5083), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2738934.f_5083, 0))
			{
				Global_2738934.f_5083 = 0;
				Global_2738934.f_5093 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2738934.f_5083), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2738934.f_5083, 2))
				{
					MISC::SET_BIT(&(Global_2738934.f_5083), 2);
					MISC::SET_BIT(&(Global_2738934.f_5083), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2738934.f_5083), 5);
					MISC::CLEAR_BIT(&(Global_2738934.f_5083), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2738934.f_5083, 0))
		{
			Global_2738934.f_5083 = 0;
			Global_2738934.f_5093 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2738934.f_5083), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2738934.f_5083), 2);
				MISC::SET_BIT(&(Global_2738934.f_5083), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2738934.f_5083), 2);
				MISC::CLEAR_BIT(&(Global_2738934.f_5083), 5);
			}
		}
	}
}

int func_148(bool bParam0)//Position - 0xA48E
{
	if (bParam0 != func_26() && func_788(bParam0, 1, 1))
	{
		return Global_2657971[bParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_149(bool bParam0)//Position - 0xA4BF
{
	if (bParam0 != func_26())
	{
		if (func_788(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_28(Global_2657971[bParam0 /*465*/].f_322.f_8) == 19;
			}
		}
	}
	return 0;
}

void func_150(int iParam0, int iParam1, char* sParam2)//Position - 0xA506
{
	char* sVar0;
	
	if (func_141(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_131(sParam2))
	{
		sVar0 = sParam2;
	}
	func_128(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0, -1);
}

char* func_151()//Position - 0xA548
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_274(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_152())
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

int func_152()//Position - 0xA6F3
{
	if (func_274(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2738934.f_5167;
	}
	return -1;
}

bool func_153(int iParam0)//Position - 0xA716
{
	return Local_98.f_6[iParam0 /*204*/].f_72;
}

int func_154(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xA728
{
	var uVar0;
	
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
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_164(sParam0, sParam1) && Global_1574765.f_56 == Global_1574765.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574765.f_54;
	func_158();
	Global_1574765 = 9;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	StringCopy(&(Global_1574765.f_16), sParam1, 64);
	Global_1574765.f_58 = iParam3;
	Global_1574765.f_56 = iParam3;
	Global_1574765.f_54 = uVar0;
	func_157();
	func_156(bParam2);
	func_155();
	return 1;
}

void func_155()//Position - 0xA7F2
{
	MISC::SET_BIT(&(Global_1574765.f_59), 1);
}

void func_156(bool bParam0)//Position - 0xA805
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574765.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574765.f_59), 0);
}

void func_157()//Position - 0xA82B
{
	Global_1574765.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_158()//Position - 0xA850
{
	func_160();
	func_159(0);
}

void func_159(bool bParam0)//Position - 0xA861
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_160()//Position - 0xA8F7
{
	if (!func_163())
	{
	}
	if (func_162())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574765.f_12));
		func_161();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_161()//Position - 0xA920
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

int func_162()//Position - 0xAB92
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_163()//Position - 0xABA8
{
	if (!func_162())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574765.f_12));
	func_161();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_164(char* sParam0, char* sParam1)//Position - 0xABCE
{
	if (!func_162())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

void func_165(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xAC26
{
	if (func_166(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1574765 = 15;
		Global_1574765.f_56 = iParam3;
		Global_1574765.f_57 = iParam4;
		Global_1574765.f_54 = iParam1;
	}
}

int func_166(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0xAC61
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
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_167(sParam0, sParam1, sParam2) && Global_1574765.f_56 == Global_1574765.f_58)
	{
		return 0;
	}
	func_158();
	Global_1574765 = 10;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	StringCopy(&(Global_1574765.f_16), sParam1, 64);
	StringCopy(&(Global_1574765.f_32), sParam2, 64);
	Global_1574765.f_58 = uParam4;
	Global_1574765.f_56 = uParam4;
	func_157();
	func_156(bParam3);
	func_155();
	return 1;
}

bool func_167(char* sParam0, char* sParam1, char* sParam2)//Position - 0xAD43
{
	if (!func_162())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574765.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574765.f_32));
}

void func_168(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xADC1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam5);
}

int func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xAE00
{
	int iVar0;
	int iVar1;
	
	if (!func_33(iParam0))
	{
		return 1;
	}
	if (func_725(iParam0) && !bParam4)
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
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_725(PLAYER::PLAYER_ID()) || (func_208() && func_724())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		iVar1 = func_207();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_788(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_205(iParam1, iParam0, 0);
							}
							else
							{
								return func_184(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_184(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_205(iParam1, iParam0, 0);
				}
				else
				{
					return func_170(0, -1, 0);
				}
			}
			else
			{
				return func_170(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_205(iParam1, iParam0, 0);
		}
		else
		{
			return func_184(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_184(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_170(bool bParam0, int iParam1, bool bParam2)//Position - 0xAFEB
{
	return func_171(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_171(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB001
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_183() || (func_182() && func_180())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_179(iParam2, iVar0);
		}
		else
		{
			return func_179(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_176(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_175(1);
				}
				else
				{
					return func_175(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_172(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_172(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_175(1);
	}
	return func_175(0);
}

int func_172(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB103
{
	int iVar0;
	
	iVar0 = func_174(iParam0, iParam1, iParam3);
	if (func_173(Global_4718592.f_127178, 1))
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

int func_173(int iParam0, bool bParam1)//Position - 0xB21B
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
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
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2)//Position - 0xB26C
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
			if (!func_176(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_175(bool bParam0)//Position - 0xB2B4
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB2CB
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
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_177(iParam0, bVar0, iParam1, bVar1) || !func_177(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_177(iParam0, bVar0, iParam1, bVar1) || !func_177(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_177(iParam0, bVar0, iParam1, bVar1) || !func_177(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_177(iParam0, bVar0, iParam1, bVar1) || !func_177(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_177(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB616
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
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
		iVar1 = iVar5;
		if (((!func_788(iVar1, 1, 1) || func_38(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_178(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
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

var func_178(int iParam0)//Position - 0xB742
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_179(int iParam0, int iParam1)//Position - 0xB75A
{
	if (iParam0 == -1)
	{
		iParam0 = func_174(iParam1, iParam0, 4);
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

int func_180()//Position - 0xB7A8
{
	if (func_181())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_181()//Position - 0xB7C7
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_182()//Position - 0xB7DC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_183()//Position - 0xB823
{
	if (func_181() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB840
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_190())
			{
				iVar3 = func_189(iParam0);
				if (!iVar3 == -1)
				{
					return func_187(iVar3);
				}
			}
			if ((func_186(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_176(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_175(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_185(1);
			}
			else
			{
				return func_171(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_175(1);
			}
			else
			{
				return func_171(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_189(iParam0);
	if (!iVar4 == -1)
	{
		return func_187(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_185(bool bParam0)//Position - 0xB9D8
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_186(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB9EF
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
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

int func_187(int iParam0)//Position - 0xBA67
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_188(iParam0);
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

var func_188(int iParam0)//Position - 0xBB2A
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_189(bool bParam0)//Position - 0xBB41
{
	if (func_33(bParam0))
	{
		if (func_78(bParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_67(bParam0)];
		}
	}
	return -1;
}

int func_190()//Position - 0xBB71
{
	if ((((((((func_204() || func_203()) || func_60()) || func_202()) || func_201()) || func_199()) || func_197()) || func_194()) || func_191())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0xBBED
{
	return func_192(Global_4718592.f_127178);
}

int func_192(int iParam0)//Position - 0xBC03
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_193(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_193(int iParam0)//Position - 0xBC37
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_194()//Position - 0xBC56
{
	return func_195(Global_4718592.f_127178);
}

int func_195(int iParam0)//Position - 0xBC6C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_196(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0xBCA0
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_197()//Position - 0xBCBF
{
	return func_198(Global_4718592.f_127178);
}

int func_198(int iParam0)//Position - 0xBCD5
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_199()//Position - 0xBD0E
{
	return func_200(Global_4718592.f_127178);
}

int func_200(int iParam0)//Position - 0xBD24
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_201()//Position - 0xBD5E
{
	return Global_2684504.f_24;
}

bool func_202()//Position - 0xBD6C
{
	return Global_2684504.f_21;
}

var func_203()//Position - 0xBD7A
{
	return Global_2684504.f_18;
}

var func_204()//Position - 0xBD88
{
	return Global_2684504.f_17;
}

int func_205(int iParam0, int iParam1, bool bParam2)//Position - 0xBD96
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_190())
	{
		iVar2 = func_189(iParam1);
		if (!iVar2 == -1)
		{
			return func_187(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_26())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
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
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_171(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_206(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_176(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_185(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_206(int iParam0)//Position - 0xBF16
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
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

var func_207()//Position - 0xBFEB
{
	return Global_2621446.f_2;
}

var func_208()//Position - 0xBFF9
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

char* func_209()//Position - 0xC015
{
	bool bVar0;
	char* sVar1;
	
	bVar0 = func_67(PLAYER::PLAYER_ID());
	if (bVar0 != func_26())
	{
		if (bVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_30(bVar0, 28) || func_30(PLAYER::PLAYER_ID(), 28)) || func_69(bVar0)) && !func_68(bVar0))
			{
				return func_73(bVar0, 0);
			}
			if (Global_262145.f_34983 /* Tunable: 664611037 */)
			{
				return func_73(bVar0, 0);
			}
			if (!func_66() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_73(bVar0, 0);
			}
		}
		sVar1 = func_72(&(Global_1887305[bVar0 /*610*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_73(bVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_210(bool bParam0)//Position - 0xC0DE
{
	if (BitTest(Local_396[bParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (BitTest(Local_396[bParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_211(char* sParam0, bool bParam1)//Position - 0xC122
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_212(sParam0))
	{
		return;
	}
	func_158();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_157();
	func_156(bParam1);
	func_155();
}

bool func_212(char* sParam0)//Position - 0xC18D
{
	if (!func_162())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_213(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
}

bool func_213(char* sParam0)//Position - 0xC1D1
{
	if (!func_162())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

void func_214()//Position - 0xC203
{
	if (!func_162())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574765.f_9)
	{
		return;
	}
	func_158();
}

bool func_215(int iParam0)//Position - 0xC230
{
	return Global_2672855.f_2557[0 /*80*/].f_1 == iParam0;
}

int func_216(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC247
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
	func_64(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_49(&(Var0.f_69), iParam7);
	}
	return func_47(&Var0);
}

int func_217(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xC2C7
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
	func_64(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_47(&Var0);
}

int func_218()//Position - 0xC339
{
	return 21;
}

int func_219(int iParam0, int iParam1)//Position - 0xC343
{
	int iVar0;
	
	iVar0 = func_67(iParam0);
	if (func_33(iVar0))
	{
		if (iVar0 == func_67(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_220(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC36C
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2738934.f_5093 = -1;
	bVar0 = (func_32(PLAYER::PLAYER_ID(), 0) && func_31(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_246(func_247(iParam0), 1);
	}
	else
	{
		func_243(iParam0, -1);
		if (func_242(PLAYER::PLAYER_ID()))
		{
			Global_1836959.f_3 = iParam0;
		}
		else
		{
			func_241(iParam0);
		}
		Global_1836959.f_4 = -1;
		if (func_242(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836959.f_1), 5);
		}
		if (((func_135() && !func_134()) || func_133(PLAYER::PLAYER_ID(), 21)) || func_133(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836959.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 17);
		MISC::SET_BIT(&(Global_1836959.f_1), 20);
		if (func_240(iParam0))
		{
			func_239();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_235(fParam1);
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
		if (func_233(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836959.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4594767)
			{
				func_231(1);
				if (func_227(0))
				{
					MISC::SET_BIT(&(Global_1836959.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836959.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_225(1);
			MISC::SET_BIT(&(Global_1836959.f_1), 12);
		}
		if (bParam5)
		{
			func_224();
			MISC::SET_BIT(&(Global_1836959.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_221(iParam0))
			{
				MISC::SET_BIT(&(Global_1836959.f_1), 21);
			}
		}
	}
	Global_2707198 = 1;
}

int func_221(int iParam0)//Position - 0xC550
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
	if (func_223(iParam0) == 1)
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	return 0;
}

int func_222()//Position - 0xC5BF
{
	switch (func_152())
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

int func_223(int iParam0)//Position - 0xC5ED
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
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

void func_224()//Position - 0xC8A5
{
	MISC::SET_BIT(&(Global_2738934.f_5084), 0);
}

void func_225(bool bParam0)//Position - 0xC8B9
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101585.f_8 = 1;
	}
	else
	{
		Global_101585.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_226(iVar0);
		iVar0++;
	}
}

void func_226(int iParam0)//Position - 0xC8F0
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

int func_227(int iParam0)//Position - 0xC90A
{
	var uVar0;
	
	uVar0 = func_228(2537, -1);
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

int func_228(int iParam0, int iParam1)//Position - 0xC9B6
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_229(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_229(int iParam0, var uParam1)//Position - 0xC9E5
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_230(uParam1));
}

int func_230(var uParam0)//Position - 0xC9FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_40();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

void func_231(int iParam0)//Position - 0xCA2E
{
	if (func_232() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4594767)
	{
		return;
	}
	Global_4594767 = iParam0;
	Global_4594769 = 0;
	Global_4594770 = 0;
}

int func_232()//Position - 0xCA63
{
	if ((((Global_1057440 != -1 && Global_1057440 != 33) && Global_1057440 != 35) && Global_1057440 != 37) && Global_1057440 != 21)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0xCAA9
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_234(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_234(bool bParam0)//Position - 0xCAE7
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

void func_235(float fParam0)//Position - 0xCB0A
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_236())
	{
		return;
	}
	fVar0 = (Global_2738934.f_5244 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738934.f_5245))
	{
		if (!Global_2738934.f_5245 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2738934.f_5244 = fParam0;
	Global_2738934.f_5245 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_236()//Position - 0xCB76
{
	switch (func_238())
	{
		case 0:
			return func_237();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_237()//Position - 0xCBA9
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_238()//Position - 0xCBCD
{
	return Global_32948;
}

void func_239()//Position - 0xCBD8
{
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_211 = 0;
	MISC::CLEAR_BIT(&(Global_2738934.f_4682), 1);
}

int func_240(int iParam0)//Position - 0xCBFA
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_241(int iParam0)//Position - 0xCC14
{
	Global_1887305[PLAYER::PLAYER_ID() /*610*/] = iParam0;
}

bool func_242(bool bParam0)//Position - 0xCC29
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 2);
}

void func_243(int iParam0, int iParam1)//Position - 0xCC3E
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_244(func_245(iVar0)))
		{
			MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 2);
		}
	}
}

bool func_244(int iParam0)//Position - 0xCC99
{
	var uVar0;
	
	uVar0 = func_228(2483, -1);
	return (BitTest(uVar0, iParam0) || BitTest(uVar0, 26));
}

int func_245(int iParam0)//Position - 0xCCBB
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
	return Global_262145.f_23761 /* Tunable: CI_TYPE_M3_HIDE_AMB_MAX */;
}

void func_246(bool bParam0, bool bParam1)//Position - 0xCD4A
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
		{
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
	}
}

int func_247(int iParam0)//Position - 0xCDA7
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

void func_248(int iParam0)//Position - 0xCDCD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			func_49(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

float func_249(int iParam0)//Position - 0xCE19
{
	return Local_1243[iParam0 /*68*/].f_40;
}

bool func_250(char* sParam0)//Position - 0xCE2A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_251(int iParam0)//Position - 0xCE3D
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_253())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_252(char* sParam0, int iParam1)//Position - 0xCE6B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_253()//Position - 0xCE82
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

void func_254(bool bParam0)//Position - 0xCE98
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		{
			if (((!func_113(PLAYER::PLAYER_ID()) && !func_273(PLAYER::PLAYER_ID())) && !func_132(PLAYER::PLAYER_ID())) && !func_272(PLAYER::PLAYER_ID()))
			{
				if (func_135())
				{
					func_264(2, 0, 1);
					func_263();
				}
				if (func_244(func_245(func_274(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_228(2483, -1);
					MISC::CLEAR_BIT(&uVar0, func_245(func_274(PLAYER::PLAYER_ID())));
					func_263();
				}
				if (func_262())
				{
					func_263();
				}
				if (func_274(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 7);
					if (func_261(PLAYER::PLAYER_ID()))
					{
						func_260();
					}
					func_257(func_259(func_274(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 7);
		func_255();
	}
}

void func_255()//Position - 0xCFA6
{
	if (func_256())
	{
		MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 17);
	}
}

bool func_256()//Position - 0xCFC8
{
	return BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 17);
}

void func_257(int iParam0)//Position - 0xCFE0
{
	int iVar0;
	
	if (Global_262145.f_9090 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_258() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_258()//Position - 0xD043
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_259(int iParam0)//Position - 0xD050
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

void func_260()//Position - 0xD082
{
	if (!func_256())
	{
		Global_2738934.f_6948 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 17);
	}
}

int func_261(int iParam0)//Position - 0xD0B0
{
	if (func_274(iParam0) == 236 || func_274(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_262()//Position - 0xD0D8
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_263()//Position - 0xD0F2
{
	if (func_262())
	{
		Global_2672855.f_990.f_16 = 1;
	}
}

void func_264(int iParam0, int iParam1, bool bParam2)//Position - 0xD10B
{
	if (func_135())
	{
		if (iParam1 == 1)
		{
			if (Global_2738934.f_4514 == -1)
			{
				Global_2738934.f_4514 = Global_262145.f_26734 /* Tunable: VC_PASSIVE_COOLDOWN_REENABLE */;
			}
			func_271(&(Global_2738934.f_4512), 0, 0);
			if (bParam2)
			{
				if (Global_2738934.f_4517 == -1)
				{
					Global_2738934.f_4517 = Global_262145.f_26735 /* Tunable: VC_PASSIVE_TIME_AFTER_DISABLE */;
				}
				func_271(&(Global_2738934.f_4515), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_8 = 0;
				func_270(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_8 = 0;
			func_270(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_269()) && !func_265(PLAYER::PLAYER_ID()))
		{
			Global_1057439 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_265(int iParam0)//Position - 0xD1D5
{
	if (func_266(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0, bool bParam1, bool bParam2)//Position - 0xD1FA
{
	if (bParam1)
	{
		if (func_267(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_267(int iParam0)//Position - 0xD22C
{
	return func_268(iParam0);
}

var func_268(int iParam0)//Position - 0xD23A
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

bool func_269()//Position - 0xD251
{
	return Global_2684504.f_844;
}

void func_270(bool bParam0)//Position - 0xD260
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_135())
		{
			if (func_788(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_788(PLAYER::PLAYER_ID(), 1, 1))
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

void func_271(var uParam0, bool bParam1, bool bParam2)//Position - 0xD359
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

int func_272(int iParam0)//Position - 0xD396
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2708056;
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

int func_273(bool bParam0)//Position - 0xD402
{
	if (func_242(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 8);
}

int func_274(int iParam0)//Position - 0xD425
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

bool func_275(bool bParam0, int iParam1)//Position - 0xD444
{
	return Local_396[bParam0 /*5*/].f_1[iParam1];
}

int func_276(bool bParam0, bool bParam1)//Position - 0xD459
{
	if (func_273(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_132(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_277(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_277(bool bParam0)//Position - 0xD499
{
	return func_38(bParam0, 0);
}

void func_278(int iParam0)//Position - 0xD4A8
{
	if (!BitTest(bLocal_557, 22))
	{
		if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_323(1, 1))
				{
					if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_219(PLAYER::PLAYER_ID(), Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_279();
									MISC::SET_BIT(&bLocal_557, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_279()//Position - 0xD53A
{
	MISC::SET_BIT(&(Global_2738934.f_1849), 19);
}

void func_280(int iParam0)//Position - 0xD54F
{
	if (iLocal_394 != func_8(iParam0))
	{
		iLocal_394 = func_8(iParam0);
		if (iLocal_394 > -1)
		{
			iLocal_395++;
			MISC::SET_BIT(&bLocal_557, 25);
		}
	}
}

void func_281(int iParam0)//Position - 0xD587
{
	if (func_699() == 1)
	{
		if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT() && !func_276(1, 0))
		{
			if (!func_234(PLAYER::PLAYER_ID()))
			{
				func_282(1);
			}
		}
		else if (func_234(PLAYER::PLAYER_ID()))
		{
			func_282(0);
		}
	}
}

void func_282(bool bParam0)//Position - 0xD5D5
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 0))
		{
			Global_2698685 = func_274(PLAYER::PLAYER_ID());
			if (Global_2698685 == -1)
			{
				Global_2698685 = Global_1836959.f_4;
			}
			if (func_320(Global_2698685) == 0)
			{
				if (func_319(1) > 0)
				{
					func_318(26, -1);
				}
			}
			if (func_135())
			{
				func_264(2, 0, 1);
				func_263();
			}
			if (func_244(func_245(func_274(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_228(2483, -1);
				MISC::CLEAR_BIT(&iVar1, func_245(func_274(PLAYER::PLAYER_ID())));
				func_263();
			}
			if (func_262())
			{
				func_263();
			}
			MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 0))
	{
		if ((!func_317() && !func_316()) && !func_315())
		{
			Global_2698685 = -1;
			func_314(26, -1);
		}
		else if (func_320(Global_2698685) == 0)
		{
			iVar0 = func_290(1);
			if (iVar0 > 0)
			{
				func_287(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_285(1934, 1, -1);
				func_287(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_283(26, -1))
		{
			Global_2698685 = -1;
			func_314(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 0);
	}
}

bool func_283(int iParam0, int iParam1)//Position - 0xD736
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	iVar0 = func_284(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_284(int iParam0)//Position - 0xD75F
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
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

void func_285(int iParam0, int iParam1, int iParam2)//Position - 0xD7C2
{
	int iVar0;
	
	iVar0 = func_228(iParam0, func_230(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_286(iParam0, iVar0, iParam2, 1);
}

void func_286(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD7EA
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_229(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

void func_287(int iParam0, int iParam1)//Position - 0xD818
{
	int iVar0;
	
	iVar0 = func_289(iParam0);
	iVar0 = (iVar0 + iParam1);
	func_288(iParam0, iVar0);
}

void func_288(int iParam0, int iParam1)//Position - 0xD837
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_289(int iParam0)//Position - 0xD853
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

int func_290(int iParam0)//Position - 0xD871
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_303();
	if (Global_2697530 == 0)
	{
		return 0;
	}
	if (func_315())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_302() || func_300()))
		{
			Global_2696176 = 1;
		}
	}
	Global_2697530 = 0;
	if (Global_1577925)
	{
		iVar0 = 1;
	}
	if (Global_2696176)
	{
		iVar0 = 1;
	}
	if (Global_2696175)
	{
		iVar0 = 1;
	}
	if (func_51(Global_112997.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2696115)
	{
		iVar0 = 1;
	}
	if (func_299(512))
	{
		iVar0 = 1;
	}
	if (func_298(128))
	{
		iVar0 = 1;
	}
	if (Global_1577949 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_104(0))
	{
		iVar0 = 0;
	}
	if (Global_2696674)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_296())
		{
			if (Global_4718592.f_127740 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_38(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_295())
	{
		iVar0 = 0;
	}
	if ((Global_2696176 || Global_2696175) || Global_1577925)
	{
		if (func_300())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837416)
	{
		iVar0 = 2;
	}
	Global_2696674 = 0;
	Global_2696175 = 0;
	Global_2696176 = 0;
	Global_1577925 = 0;
	Global_2696115 = 0;
	func_293(&(Global_112997.f_1), 32);
	func_292(512);
	func_291(128);
	Global_1837416 = 0;
	return iVar0;
}

void func_291(int iParam0)//Position - 0xD9D8
{
	Global_113054 = (Global_113054 - (Global_113054 && iParam0));
}

void func_292(int iParam0)//Position - 0xD9F0
{
	Global_113055 = (Global_113055 - (Global_113055 && iParam0));
}

void func_293(var uParam0, int iParam1)//Position - 0xDA08
{
	func_294(uParam0, iParam1);
}

void func_294(var uParam0, var uParam1)//Position - 0xDA18
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_295()//Position - 0xDA2D
{
	if (((Global_1836699 || Global_1836668) || func_38(PLAYER::PLAYER_ID(), 0)) || func_208())
	{
		return 1;
	}
	return 0;
}

int func_296()//Position - 0xDA64
{
	switch (func_297())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_297()//Position - 0xDA9E
{
	return Global_2685444.f_1.f_2823;
}

bool func_298(int iParam0)//Position - 0xDAAF
{
	return (Global_113054 && iParam0) != 0;
}

bool func_299(int iParam0)//Position - 0xDAC0
{
	return (Global_113055 && iParam0) != 0;
}

int func_300()//Position - 0xDAD1
{
	if (func_320(Global_2698685))
	{
		return 0;
	}
	if (func_301(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_301(bool bParam0, int iParam1)//Position - 0xDAFA
{
	if (Global_1887305[bParam0 /*610*/] == iParam1)
	{
		return func_234(bParam0);
	}
	return 0;
}

int func_302()//Position - 0xDB1A
{
	if (func_320(Global_2698685))
	{
		return 0;
	}
	if (func_234(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_303()//Position - 0xDB41
{
	if (Global_1577949 == 1 && (func_312() || func_304()))
	{
		return 1;
	}
	return 0;
}

int func_304()//Position - 0xDB6A
{
	if ((((((func_201() || func_199()) || func_197()) || func_310(Global_4718592.f_127178)) || func_308(Global_4718592.f_127178)) || func_194()) || func_305())
	{
		return 1;
	}
	return 0;
}

int func_305()//Position - 0xDBCE
{
	return func_306(Global_4718592.f_127178);
}

int func_306(int iParam0)//Position - 0xDBE4
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == func_307(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0)//Position - 0xDC18
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33015[iParam0];
	}
	return -1;
}

int func_308(int iParam0)//Position - 0xDC37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_309(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_309(int iParam0)//Position - 0xDC62
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33127[iParam0];
	}
	return -1;
}

int func_310(int iParam0)//Position - 0xDC81
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_311(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)//Position - 0xDCAB
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32176[iParam0];
	}
	return -1;
}

int func_312()//Position - 0xDCC8
{
	return func_313(Global_4718592.f_127178);
}

int func_313(int iParam0)//Position - 0xDCDE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_314(bool bParam0, int iParam1)//Position - 0xDD0D
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_284(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

bool func_315()//Position - 0xDD66
{
	return BitTest(Global_1574589, 0);
}

bool func_316()//Position - 0xDD74
{
	return Global_1575047;
}

bool func_317()//Position - 0xDD80
{
	return Global_1575083;
}

void func_318(bool bParam0, int iParam1)//Position - 0xDD8C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_284(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_319(int iParam0)//Position - 0xDDE6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_303();
	if (Global_1577949 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_104(0))
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_296())
		{
			if (Global_4718592.f_127740 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_38(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_295())
	{
		iVar0 = 0;
	}
	Global_2697530 = 1;
	return iVar0;
}

int func_320(int iParam0)//Position - 0xDE57
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11855 /* Tunable: DISABLE_BAD_SPORT_HOT_TARGET */)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11857 /* Tunable: DISABLE_BAD_SPORT_CHECKPOINT */)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11854 /* Tunable: DISABLE_BAD_SPORT_CHALLENGE */)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11858 /* Tunable: DISABLE_BAD_SPORT_PENNED_IN */)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11859 /* Tunable: DISABLE_BAD_SPORT_PASS_THE_PARCEL */)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11860 /* Tunable: DISABLE_BAD_SPORT_HOT_PROPERTY */)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11856 /* Tunable: DISABLE_BAD_SPORT_KILL_LIST */)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11861 /* Tunable: DISABLE_BAD_SPORT_DEAD_DROP */)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11862 /* Tunable: DISABLE_BAD_SPORT_KING_OF_THE_CASTLE */)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11863 /* Tunable: DISABLE_BAD_SPORT_CRIMINAL_DAMAGES */)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11864 /* Tunable: DISABLE_BAD_SPORT_HUNT_THE_BEAST */)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_321()//Position - 0xDF73
{
	if (func_323(0, 0))
	{
		return;
	}
	if (BitTest(bLocal_557, 25))
	{
		if (iLocal_394 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (Local_382.f_11 == 0)
			{
				Local_382.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
		}
		MISC::CLEAR_BIT(&bLocal_557, 25);
	}
}

void func_322()//Position - 0xDFB5
{
	if (func_250("KOTC_1STHELP" /* GXT: King of the Castle is available ~HUD_COLOUR_PURPLE~~BLIP_KING_OF_THE_CASTLE~ ~s~. Hold the area by yourself to become the King and earn cash and RP. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_250("KOTC_OTHRKG" /* GXT: Another player is the King of the Castle ~HUD_COLOUR_RED~~BLIP_PLAYER_KING~ ~s~. To become the King, enter the Castle area and kill the King. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_250("KOTC_YOUKNG" /* GXT: You are the King of the Castle. Earn points by staying in the Castle area. Earn extra points by killing other players while you are in the Castle area. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_250("KOTC_CONTS" /* GXT: The King has left the Castle area while there are multiple players inside. Enter the Castle area and take out the other players inside it to become King. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_323(bool bParam0, bool bParam1)//Position - 0xDFF9
{
	if (bParam0)
	{
	}
	if (BitTest(bLocal_557, 17))
	{
		return 1;
	}
	if (func_366(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_244(18))
	{
		return 1;
	}
	if (!func_338(0, 1, 1))
	{
		return 1;
	}
	if (func_331())
	{
		return 1;
	}
	if (func_326(4))
	{
		return 1;
	}
	if (func_325())
	{
		return 1;
	}
	if (func_276(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1928440)
	{
		return 1;
	}
	if (func_324(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_324(int iParam0)//Position - 0xE097
{
	if (!func_788(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2);
}

bool func_325()//Position - 0xE0BF
{
	return Global_101585.f_394 > 0;
}

int func_326(int iParam0)//Position - 0xE0D0
{
	int iVar0;
	
	if (func_325())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_330(iVar0) == iParam0)
			{
				if (func_327(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_327(int iParam0)//Position - 0xE10B
{
	return func_328(iParam0, 6, 1);
}

int func_328(int iParam0, int iParam1, bool bParam2)//Position - 0xE11B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_238() == 0)
		{
			return BitTest(func_228(func_329(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xE17B
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_330(int iParam0)//Position - 0xE523
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_331()//Position - 0xE859
{
	if (BitTest(Global_2738934.f_460.f_5, 0))
	{
		return 1;
	}
	if (func_333() && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 3)
	{
		return 1;
	}
	if (func_332() && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 3)
	{
		return 1;
	}
	if (Global_2625247)
	{
		return 1;
	}
	if (Global_1836959.f_20)
	{
		return 1;
	}
	return 0;
}

var func_332()//Position - 0xE8CA
{
	return BitTest(Global_2684504, 5);
}

int func_333()//Position - 0xE8D8
{
	if (((func_337() || func_336()) || func_335()) || func_334())
	{
		return 1;
	}
	return 0;
}

var func_334()//Position - 0xE90A
{
	return BitTest(Global_2684504, 1);
}

var func_335()//Position - 0xE918
{
	return BitTest(Global_2684504, 2);
}

var func_336()//Position - 0xE926
{
	return BitTest(Global_2684504, 20);
}

bool func_337()//Position - 0xE935
{
	return Global_2684504.f_700;
}

int func_338(bool bParam0, bool bParam1, bool bParam2)//Position - 0xE944
{
	if (func_365(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_133(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_133(PLAYER::PLAYER_ID(), 25))
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
	if (func_265(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_364())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_363(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_362())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_113(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_353(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_352(PLAYER::PLAYER_ID()) != func_26() && func_352(PLAYER::PLAYER_ID()) == func_67(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_350(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_348(func_349()) && !func_261(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_317())
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_267(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_346())
	{
		return 0;
	}
	if (func_133(PLAYER::PLAYER_ID(), 0) || func_133(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_133(PLAYER::PLAYER_ID(), 12) || func_133(PLAYER::PLAYER_ID(), 14)) || func_133(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_366(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_345() && !Global_2707605)
		{
			return 0;
		}
	}
	if (func_344(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	if (Global_1928440)
	{
		return 0;
	}
	if (func_324(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (func_341(PLAYER::PLAYER_ID()) && Global_1844920.f_172)
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (Global_2737960)
	{
		return 0;
	}
	if (Global_1962256)
	{
		return 0;
	}
	if (func_25(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_114(PLAYER::PLAYER_ID()))
	{
		if (func_339(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_339(int iParam0)//Position - 0xEBB0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

bool func_340()//Position - 0xEBD4
{
	return Global_1943520.f_559;
}

int func_341(int iParam0)//Position - 0xEBE3
{
	if (func_342(Global_1845281[iParam0 /*883*/].f_268.f_35))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)//Position - 0xEC05
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

int func_343()//Position - 0xEC34
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_344(int iParam0)//Position - 0xEC4C
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 11);
}

bool func_345()//Position - 0xEC65
{
	return BitTest(Global_1956920, 5);
}

int func_346()//Position - 0xEC73
{
	if (func_347() == 0)
	{
		return 1;
	}
	return 0;
}

int func_347()//Position - 0xEC88
{
	return Global_1574633.f_18;
}

int func_348(int iParam0)//Position - 0xEC96
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

int func_349()//Position - 0xECE0
{
	return Global_2672855.f_2557[0 /*80*/].f_1;
}

int func_350(int iParam0, int iParam1)//Position - 0xECF4
{
	if (func_32(iParam0, 0))
	{
		return func_351(Global_1887305[iParam0 /*610*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0xED1E
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
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
		case 337:
		case 338:
		case 339:
		case 340:
			return 0;
		
		case 276:
		case 267:
		case 318:
		case 314:
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

int func_352(int iParam0)//Position - 0xF008
{
	return Global_1887305[iParam0 /*610*/].f_10.f_35;
}

int func_353(bool bParam0)//Position - 0xF01D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_361(bParam0) && !func_242(bParam0)) && !BitTest(Global_1887305[bParam0 /*610*/].f_1, 8));
	bVar2 = func_113(bParam0);
	bVar3 = func_135();
	uVar4 = func_354();
	if ((bVar1 && (func_114(bParam0) || func_234(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_31(bParam0)) && !func_29(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2738934.f_5249.f_223 != iVar0)
	{
		Global_2738934.f_5249.f_223 = iVar0;
	}
	return iVar0;
}

int func_354()//Position - 0xF0D8
{
	if ((func_30(PLAYER::PLAYER_ID(), 21) || func_30(PLAYER::PLAYER_ID(), 22)) || func_358())
	{
		return 1;
	}
	if (func_356())
	{
		func_355(22);
		return 1;
	}
	return 0;
}

void func_355(int iParam0)//Position - 0xF11D
{
	MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_4), iParam0);
}

int func_356()//Position - 0xF13A
{
	if (func_32(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_135() && !func_134()) || func_133(PLAYER::PLAYER_ID(), 21)) || func_133(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_357(27);
		}
	}
	return 0;
}

void func_357(int iParam0)//Position - 0xF18D
{
	MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_4), iParam0);
}

int func_358()//Position - 0xF1AA
{
	return func_359(432, -1);
}

int func_359(int iParam0, int iParam1)//Position - 0xF1BA
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_360(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_360(int iParam0, var uParam1)//Position - 0xF1DE
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_230(uParam1));
}

int func_361(int iParam0)//Position - 0xF1F3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

bool func_362()//Position - 0xF214
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 5;
}

int func_363(int iParam0)//Position - 0xF229
{
	if (Global_2657971[iParam0 /*465*/].f_273.f_4 != 0 || Global_2657971[iParam0 /*465*/].f_273.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_364()//Position - 0xF25D
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

bool func_365(int iParam0, int iParam1)//Position - 0xF276
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_5, iParam1);
}

int func_366(int iParam0, bool bParam1, bool bParam2)//Position - 0xF28E
{
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_367(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)//Position - 0xF2F2
{
	float fVar0;
	int iVar1;
	
	Global_1836959.f_6 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	if (fVar0 < fParam5 && !func_242(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !func_133(PLAYER::PLAYER_ID(), 21)) && !func_133(PLAYER::PLAYER_ID(), 25))
		{
			func_381(Param1, 1, 0);
		}
		if ((!*uParam4 || BitTest(Global_1836959.f_1, 3)) && func_788(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			func_235(func_380(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_379(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_378(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
				}
				MISC::SET_BIT(&(Global_1836959.f_1), 8);
			}
			MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 3);
			MISC::CLEAR_BIT(&(Global_1836959.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_242(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836959.f_1, 3) && func_788(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_377();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11866 /* Tunable: HUNT_THE_BEAST_EXTENDED_WANTED_REDUCTION_MULTIPLER */);
			MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 3);
			MISC::SET_BIT(&(Global_1836959.f_1), 3);
		}
	}
	else if ((*uParam4 || BitTest(Global_1836959.f_1, 3)) && func_788(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam4 = 0;
		func_377();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 8);
		MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_368();
		}
	}
}

void func_368()//Position - 0xF4DA
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_24), &Global_2640160, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_26), &Global_2640162, 19);
	func_375();
	func_371(1, 1, 0);
	func_369();
}

void func_369()//Position - 0xF510
{
	func_370(0, 0);
}

void func_370(int iParam0, int iParam1)//Position - 0xF51E
{
	Global_2635563.f_22 = iParam0;
	Global_2635563.f_23 = iParam1;
}

void func_371(bool bParam0, bool bParam1, bool bParam2)//Position - 0xF536
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_45), &Global_2640181, 323);
	}
	else
	{
		Global_2635563.f_45 = { Global_2640181 };
		Global_2635563.f_45.f_49 = { Global_2640181.f_49 };
		Global_2635563.f_45.f_52 = Global_2640181.f_52;
		Global_2635563.f_45.f_53 = Global_2640181.f_53;
	}
	if (bParam0)
	{
		func_374();
	}
	if (!bParam2)
	{
		func_107(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_373(0);
	func_372();
}

void func_372()//Position - 0xF5DC
{
	struct<6> Var0;
	
	if (Global_2635563.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635563.f_490 = { Var0 };
	}
}

void func_373(bool bParam0)//Position - 0xF601
{
	if (bParam0)
	{
		Global_2635563.f_713 = 0;
	}
	else
	{
		Global_2635563.f_713 = 1;
	}
}

void func_374()//Position - 0xF621
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_368), &Global_2640504, 121);
}

void func_375()//Position - 0xF63A
{
	func_376();
}

void func_376()//Position - 0xF646
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635563.f_2563[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635563.f_2562 = 0;
}

void func_377()//Position - 0xF67A
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738934.f_5245))
	{
		if (!Global_2738934.f_5245 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2738934.f_5244 < 1f)
		{
			return;
		}
	}
	Global_2738934.f_5245 = -1;
	Global_2738934.f_5244 = 1f;
}

int func_378(int iParam0)//Position - 0xF6C1
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_379(int iParam0)//Position - 0xF703
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_380(int iParam0)//Position - 0xF7BB
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
		case 150:
			return 0f;
		
		default:
	}
	if (func_223(iParam0) == 1)
	{
		return 0f;
	}
	return 1f;
}

void func_381(struct<3> Param0, int iParam3, int iParam4)//Position - 0xF819
{
	Global_2635563.f_45.f_49 = { Param0 };
	Global_2635563.f_45.f_52 = iParam3;
	Global_2635563.f_45.f_53 = iParam4;
}

Vector3 func_382(int iParam0)//Position - 0xF843
{
	return Local_1243[iParam0 /*68*/].f_24;
}

void func_383(int iParam0)//Position - 0xF856
{
	int iVar0;
	
	if (func_323(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1312[iVar0 /*42*/] = -1;
		Local_1312[iVar0 /*42*/].f_1 = func_26();
		Local_1312[iVar0 /*42*/].f_7 = 0;
		Local_1312[iVar0 /*42*/].f_31 = -1;
		if (Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1312[iVar0 /*42*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1312[iVar0 /*42*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1312[iVar0 /*42*/].f_7 = func_82(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_384(&Local_1312, &(Local_1243[iParam0 /*68*/].f_66), 29, &uLocal_2657, &uLocal_2773, -1, 0, 0);
}

void func_384(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xF91E
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
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	struct<2> Var59;
	
	if (func_509(iParam2))
	{
		return;
	}
	fVar46 = -1f;
	iVar47 = -1;
	iVar48 = -1;
	iVar50 = 0;
	iVar51 = 0;
	uParam3->f_36 = 0;
	bVar53 = NETWORK::_NETWORK_DOES_COMMUNICATION_GROUP_EXIST(0);
	if (func_507() || iParam2 == 30)
	{
		if (func_459(iParam1, iParam2, uParam3, Global_1836445, 0, func_510(), sParam7))
		{
			func_458(1);
			if ((!func_457() && !func_456()) || BitTest(Global_2738934.f_4709, 1))
			{
				if (func_455())
				{
					func_453();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_452(1);
						Global_1836445 = 0;
						iVar56 = -1;
						if (Global_1836676 != 1)
						{
							func_451(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 30)
						{
							iVar54 = 0;
							while (iVar54 < 32)
							{
								iVar1[iVar54] = -1;
								iVar54++;
							}
							iVar54 = 0;
							while (iVar54 < 32)
							{
								if (func_788(PLAYER::INT_TO_PLAYERINDEX(iVar54), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar54);
									if (!func_38(bVar36, 0))
									{
										if (func_447(bVar36) || func_444(bVar36, bVar35))
										{
											bVar45 = bVar36;
											if (func_79(bVar36))
											{
												iVar1[bVar45] = iVar57;
												iVar57++;
												iVar0++;
												func_441(&iVar1, bVar36, &iVar57, &iVar0, bVar35);
											}
										}
									}
								}
								iVar54++;
							}
						}
						if (!func_438(PLAYER::PLAYER_ID(), 0) && func_118(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar54 = 0;
						while (iVar54 < 32)
						{
							if (func_437())
							{
								if (func_788(PLAYER::INT_TO_PLAYERINDEX(iVar54), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar54);
								}
								else
								{
									bVar36 = func_26();
								}
							}
							else
							{
								bVar36 = (iParam0[iVar54 /*42*/])->f_1;
							}
							if ((func_436(bVar36) && func_433(bVar36, iParam2, bVar35)) && func_788(bVar36, 0, 1))
							{
								bVar45 = bVar36;
								iVar43 = Global_1845281[bVar45 /*883*/].f_206.f_6;
								Var39 = { func_428(bVar36) };
								if (bVar36 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar55;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar36), 64);
								*(uParam4[iVar54 /*13*/]) = { func_43(bVar36) };
								iVar38 = func_422(bVar36);
								sVar37 = "";
								if (iVar38 != 0)
								{
									sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
								}
								Global_1836445++;
								if ((iParam0[iVar54 /*42*/])->f_22 != -1f)
								{
									fVar46 = (iParam0[iVar54 /*42*/])->f_22;
								}
								if ((iParam0[iVar54 /*42*/])->f_31 != -1)
								{
									iVar47 = (iParam0[iVar54 /*42*/])->f_31;
								}
								if ((iParam0[iVar54 /*42*/])->f_41 != -1)
								{
									iVar48 = (iParam0[iVar54 /*42*/])->f_41;
								}
								iVar44 = (iParam0[iVar54 /*42*/])->f_7;
								if (((iParam0[iVar54 /*42*/])->f_7 != -1 || (iParam0[iVar54 /*42*/])->f_22 != -1f) || (iParam0[iVar54 /*42*/])->f_31 != -1)
								{
									if (!func_437())
									{
										iVar51 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_417(&iVar44, &fVar46, (iParam0[iVar54 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_416(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar49 = (iParam0[iVar54 /*42*/])->f_2 + 1;
									if (iVar56 != iVar49)
									{
										iVar56 = iVar49;
									}
									else
									{
										iVar49 = -2;
									}
								}
								iVar52 = func_415(bVar36, 0);
								if (bVar34)
								{
									if (func_78(bVar36, 1) && iVar1[bVar45] != -1)
									{
										iVar55 = iVar1[bVar45];
									}
									else
									{
										iVar55 = (iVar0 + iVar58);
										iVar58++;
									}
								}
								uParam3->f_38[bVar45 /*2*/].f_1 = iVar55;
								if ((iParam0[iVar54 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var59, "UW_TM", 16);
									StringIntConCat(&Var59, (iParam0[iVar54 /*42*/])->f_39, 16);
								}
								if (func_414(iParam5))
								{
									func_413(bVar36, iParam1, uParam3, iVar55, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar44, iVar48, &Var59, (iParam0[iVar54 /*42*/])->f_40, iVar49, bParam6);
								}
								else
								{
									func_413(bVar36, iParam1, uParam3, iVar55, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar47, iVar48, &Var59, (iParam0[iVar54 /*42*/])->f_40, iVar49, bParam6);
								}
								MISC::SET_BIT(&iVar50, bVar36);
								iVar55++;
							}
							iVar54++;
						}
						iVar54 = 0;
						while (iVar54 < 32)
						{
							bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar54);
							if (func_788(bVar36, 0, 1) && !BitTest(iVar50, bVar36))
							{
								bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar54);
							}
							else
							{
								bVar36 = func_26();
							}
							if (func_436(bVar36))
							{
								if (func_788(PLAYER::INT_TO_PLAYERINDEX(iVar54), 0, 1))
								{
									bVar45 = bVar36;
									iVar43 = Global_1845281[bVar45 /*883*/].f_206.f_6;
									Var39 = { func_428(bVar36) };
									*(uParam4[iVar54 /*13*/]) = { func_43(bVar36) };
									iVar38 = func_422(bVar36);
									sVar37 = "";
									if (iVar38 != 0)
									{
										sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
									}
									Global_1836445++;
									iVar52 = func_415(bVar36, 1);
									if (bVar34)
									{
										if (func_78(bVar36, 1))
										{
											iVar55 = iVar1[iVar54];
										}
										else
										{
											iVar55 = (iVar0 + iVar58);
											iVar58++;
										}
									}
									uParam3->f_38[bVar45 /*2*/].f_1 = iVar55;
									func_396(bVar36, PLAYER::GET_PLAYER_NAME(bVar36), iParam1, uParam3, iVar55, Var39, sVar37, iVar43, iVar52, iVar51);
									iVar55++;
								}
							}
							iVar54++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_393(uParam3, iParam1, iParam2, bVar53);
						}
						func_3(&(uParam3->f_21));
						func_392();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_391(uParam3, iParam1);
							func_390(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_391(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_387(uParam3))
						{
							Global_1836676 = 1;
						}
						func_385(uParam3);
						if (Global_1836676 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836676 == 2)
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
			func_392();
			func_452(0);
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

void func_385(var uParam0)//Position - 0xFF57
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_386(0);
	}
}

void func_386(bool bParam0)//Position - 0xFF93
{
	if (bParam0)
	{
		if (Global_1836676 != 2)
		{
			Global_1836676 = 2;
		}
	}
	else
	{
		switch (Global_1836676)
		{
			case 0:
				Global_1836676 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_387(var uParam0)//Position - 0xFFD9
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_26() && func_788(bVar15, 0, 1))
	{
		Var2 = { func_43(bVar15) };
		iVar1 = func_389(uParam0, uParam0->f_37);
		if (func_70(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_388(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_388(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_388(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_388(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_388(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_388(uParam0, iVar0, 0);
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

void func_388(var uParam0, int iParam1, int iParam2)//Position - 0x10107
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

var func_389(var uParam0, int iParam1)//Position - 0x10119
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_390(int* iParam0, bool bParam1, int iParam2)//Position - 0x10129
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

void func_391(var uParam0, int* iParam1)//Position - 0x10161
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_392()//Position - 0x10196
{
	if (Global_1836676 != 0)
	{
		Global_1836676 = 0;
	}
}

void func_393(var uParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x101AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_26())
		{
			if (func_788(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_395(uParam0->f_38[iVar0 /*2*/], 0, iParam2, bParam3);
					func_394(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1845281[iVar0 /*883*/].f_206.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_394(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10222
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

int func_395(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1025F
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 23:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	if (!bParam3)
	{
		return iVar0;
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

void func_396(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x102B1
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_412() && iParam4 < func_411())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836447)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836676 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_410("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_410(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_410("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_410("");
			if (uParam3->f_108 == 6)
			{
				func_410("");
			}
			else
			{
				func_410(&sParam5);
			}
			func_401(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_400(uParam3))
			{
				func_399("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_398(uParam3))
			{
				func_399("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_397(uParam3))
			{
				func_399("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_399("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_397(var uParam0)//Position - 0x103DD
{
	return BitTest(uParam0->f_33, 6);
}

bool func_398(var uParam0)//Position - 0x103EB
{
	return BitTest(uParam0->f_33, 5);
}

void func_399(char* sParam0)//Position - 0x103F9
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_400(var uParam0)//Position - 0x1040B
{
	if (func_398(uParam0) && func_397(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_401(var uParam0, bool bParam1)//Position - 0x1042C
{
	if (func_409(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_405(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657971[bParam1 /*465*/].f_435, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_402())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_402()//Position - 0x104A7
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_403() || func_204())
		{
			return 1;
		}
	}
	return 0;
}

int func_403()//Position - 0x104CC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_204();
	}
	return func_404(Global_4718592.f_127178);
}

int func_404(int iParam0)//Position - 0x104F0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4689[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_405(bool bParam0)//Position - 0x1052A
{
	if ((func_788(bParam0, 0, 1) && func_406()) && func_75(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_406()//Position - 0x10557
{
	if (func_361(PLAYER::PLAYER_ID()) || func_408())
	{
		if (!func_407(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_407(bool bParam0)//Position - 0x10585
{
	if (func_274(bParam0) == 236 || func_274(bParam0) == 150)
	{
		return func_114(bParam0);
	}
	return 0;
}

int func_408()//Position - 0x105B2
{
	switch (func_118(PLAYER::PLAYER_ID()))
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

int func_409(bool bParam0)//Position - 0x105F0
{
	if (func_402())
	{
		if (func_788(bParam0, 0, 1))
		{
			return func_79(bParam0);
		}
	}
	if (func_788(bParam0, 0, 1))
	{
		if (func_406())
		{
			if (func_77(bParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_410(char* sParam0)//Position - 0x10637
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_411()//Position - 0x10645
{
	int iVar0;
	
	if (Global_1836447)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_412()//Position - 0x10661
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836447)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_413(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x10679
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_412() && iParam3 < func_411())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836447)
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
		if (Global_1836676 == 1)
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
					func_410("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_399(sParam16);
				}
				else
				{
					func_410(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_410("");
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
				if (func_437())
				{
					func_410("");
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
						func_399(&(uParam2->f_104));
					}
					else
					{
						func_410("");
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
					func_410("");
				}
				if (uParam2->f_108 == 6)
				{
					func_410("");
				}
				else
				{
					func_410(&sParam4);
				}
				func_401(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_410("");
					func_410("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_400(uParam2))
				{
					func_399("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_398(uParam2))
				{
					func_399("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_397(uParam2))
				{
					func_399("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_399("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_414(int iParam0)//Position - 0x109D9
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

int func_415(bool bParam0, bool bParam1)//Position - 0x109FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_361(bParam0)) && !func_113(bParam0))
	{
		iVar0 = func_218();
	}
	iVar1 = func_189(bParam0);
	if (!iVar1 == -1)
	{
		return func_187(iVar1);
	}
	return iVar0;
}

char* func_416(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x10A47
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

int func_417(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x10BD7
{
	if (func_421(iParam3))
	{
		*fParam1 = (func_418(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_414(iParam3))
	{
		*fParam1 = (func_418(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_418(int iParam0, int iParam1)//Position - 0x10C27
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
				return func_420(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_419(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_419(float fParam0)//Position - 0x10CCA
{
	return (fParam0 / 1.609344f);
}

float func_420(float fParam0)//Position - 0x10CDA
{
	return (fParam0 / 0.3048f);
}

int func_421(int iParam0)//Position - 0x10CEA
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

int func_422(bool bParam0)//Position - 0x10D46
{
	int iVar0;
	
	iVar0 = func_425(bParam0);
	if (iVar0 == -1)
	{
		func_423(bParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_423(bool bParam0, bool bParam1)//Position - 0x10D7C
{
	if (!func_788(bParam0, 0, 1))
	{
		return;
	}
	if (func_425(bParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (bParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_424(bParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = bParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_424(bool bParam0)//Position - 0x10DE8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_425(bool bParam0)//Position - 0x10E1A
{
	int iVar0;
	
	if (!func_788(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_426(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_426(int iParam0)//Position - 0x10E99
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1681386)
	{
		Global_1681225[iVar32 /*5*/] = { Global_1681225[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_427(&(Global_1681225[iVar32 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_427(var uParam0)//Position - 0x10F4F
{
	*uParam0 = 0;
	uParam0->f_1 = func_26();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_428(bool bParam0)//Position - 0x10F7C
{
	char cVar0[32];
	
	if (func_788(bParam0, 0, 1))
	{
		Global_2707307 = { func_43(bParam0) };
		if (func_66())
		{
			if (func_70(Global_2707307))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2707307))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_432(&Global_2707307))
		{
			Global_2707237 = { func_430(bParam0) };
			func_429(&Global_2707237, &cVar0);
		}
	}
	return cVar0;
}

void func_429(var* uParam0, char* sParam1)//Position - 0x10FFD
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_430(bool bParam0)//Position - 0x1100F
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_431(bParam0))
	{
		return Global_1575115[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_43(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_431(int iParam0)//Position - 0x1104B
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_432(var* uParam0)//Position - 0x11061
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

int func_433(bool bParam0, int iParam1, bool bParam2)//Position - 0x11087
{
	if (iParam1 == 29)
	{
		if ((func_242(bParam0) || func_435(bParam0)) || func_273(bParam0))
		{
			return 0;
		}
	}
	if (!func_434(bParam0))
	{
		return 0;
	}
	if (!func_447(bParam0) && !func_444(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_434(bool bParam0)//Position - 0x110E6
{
	return BitTest(Global_1845281[bParam0 /*883*/].f_140, 22);
}

int func_435(bool bParam0)//Position - 0x110FC
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1887305[bParam0 /*610*/].f_1, 10) || BitTest(Global_1887305[bParam0 /*610*/].f_1, 9));
	}
	return 0;
}

int func_436(bool bParam0)//Position - 0x11134
{
	bool bVar0;
	
	if (bParam0 == func_26())
	{
		return 0;
	}
	if (func_38(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1845281[bVar0 /*883*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_437()//Position - 0x11176
{
	switch (func_118(PLAYER::PLAYER_ID()))
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
	switch (func_274(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_113(PLAYER::PLAYER_ID()))
	{
		switch (func_118(PLAYER::PLAYER_ID()))
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
	if (func_407(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)//Position - 0x112B0
{
	if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 && func_439(Global_1887305[iParam0 /*610*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1)
	{
		if (func_439(Global_1887305[iParam0 /*610*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x11316
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
	return func_440(iParam0, 0);
	return 0;
}

int func_440(int iParam0, int iParam1)//Position - 0x11370
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

void func_441(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x113C5
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_788(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_38(bVar1, 0))
			{
				if (func_447(bVar1) || func_444(bVar1, bParam4))
				{
					if (func_442(bVar1, bParam1, 0))
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

int func_442(bool bParam0, int iParam1, bool bParam2)//Position - 0x1143E
{
	if (func_33(iParam1))
	{
		if (!bParam2)
		{
			if (func_443(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1887305[bParam0 /*610*/].f_10 != func_26())
		{
			return iParam1 == Global_1887305[bParam0 /*610*/].f_10;
		}
	}
	return 0;
}

int func_443(int iParam0, int iParam1)//Position - 0x11488
{
	if (iParam1 != func_26())
	{
		if (iParam0 != func_26())
		{
			if (Global_1887305[iParam0 /*610*/].f_10 != func_26())
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_444(bool bParam0, bool bParam1)//Position - 0x114CD
{
	if (bParam1)
	{
		return 0;
	}
	if (func_446(PLAYER::PLAYER_ID(), 24) && !func_446(bParam0, 24))
	{
		return 0;
	}
	return (Global_2657971[bParam0 /*465*/].f_247 != -1 || func_445(bParam0));
}

bool func_445(int iParam0)//Position - 0x11516
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

bool func_446(int iParam0, int iParam1)//Position - 0x1152B
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_6, iParam1);
}

int func_447(bool bParam0)//Position - 0x11543
{
	if (!func_788(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_788(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_448(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_118(bParam0) == 233) || func_118(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x115AC
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_449(PLAYER::PLAYER_ID());
	bVar1 = func_449(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_449(int iParam0)//Position - 0x115E8
{
	return func_450(&(Global_2657971[iParam0 /*465*/].f_444), 0);
}

var func_450(var uParam0, int iParam1)//Position - 0x11601
{
	return BitTest(*uParam0, iParam1);
}

void func_451(int* iParam0, int iParam1, int iParam2)//Position - 0x1160F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_452(bool bParam0)//Position - 0x1163D
{
	if (bParam0)
	{
		if (Global_1668664.f_2 == 0)
		{
			Global_1668664.f_2 = 1;
		}
	}
	else if (Global_1668664.f_2 == 1)
	{
		Global_1668664.f_2 = 0;
	}
}

void func_453()//Position - 0x1166F
{
	if (BitTest(Global_2738934.f_4709, 1))
	{
		if (func_253())
		{
			func_454();
		}
	}
}

void func_454()//Position - 0x1168E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			func_49(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_455()//Position - 0x116D9
{
	if (BitTest(Global_2738934.f_4709, 0) && func_253())
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_4709, 1) && func_253())
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x11714
{
	if (func_253())
	{
		if (func_48(Global_2672855.f_2557[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_457()//Position - 0x1173B
{
	if (func_253())
	{
		if (func_62(Global_2672855.f_2557[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_458(int iParam0)//Position - 0x11762
{
	if (Global_1668664.f_1 != Global_1668664)
	{
		Global_1668664.f_1 = Global_1668664;
	}
	if (Global_1668664 != iParam0)
	{
		Global_1668664 = iParam0;
	}
}

int func_459(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x11790
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 22;
	bVar6 = func_506(iParam1);
	fVar7 = func_505();
	iVar8 = -1;
	if (iParam1 == 29 || iParam1 == 30)
	{
		if (func_504())
		{
			if (func_503() > 0 && Global_1836447)
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
		if (!func_492())
		{
			func_491(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2738934.f_4712, 26))
	{
		func_491(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_503() == 1)
		{
			func_490(bVar6, iParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_491(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2738934.f_4714), 5);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_503() == 0 && !bParam5))
		{
			func_491(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_489();
				if (iParam1 == 29 || iParam1 == 30)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_489();
					if (iParam1 == 29 || iParam1 == 30)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_490(bVar6, iParam0, 0))
				{
					func_451(iParam0, 0, 0);
					sVar4 = func_487(iParam1, &(Global_4718592.f_127185), bParam4);
					Var0 = { func_485(iParam1) };
					if (bParam4)
					{
						func_482(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 29)
					{
						func_476(iParam0, func_479(uParam2), func_477(uParam2), -1);
					}
					else if (iParam1 == 30)
					{
						sVar9 = func_470(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_468(iParam0, sVar9, func_469(), -1);
					}
					else if (func_402())
					{
						uParam2->f_34 = Global_1836446;
						func_482(iParam0, sVar4, &Var0, 1, -1, Global_1836446, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_461(iParam1);
						uParam2->f_34 = Global_1836446;
						func_482(iParam0, sVar4, "", 0, iVar8, func_460(), 1);
					}
					else
					{
						iVar8 = func_461(iParam1);
						func_482(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836445 = uParam3;
				Global_1836444 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836446)
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

int func_460()//Position - 0x11A66
{
	return Global_1836446;
}

int func_461(int iParam0)//Position - 0x11A72
{
	int iVar0;
	
	iVar0 = -1;
	if (func_467())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 42:
			iVar0 = 22;
			break;
		
		case 0:
		case 33:
		case 32:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
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
		
		case 28:
		case 13:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 14:
		case 15:
		case 16:
		case 19:
		case 45:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 17;
			break;
		
		case 18:
			iVar0 = 18;
			break;
		
		case 20:
			if (func_466(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_465(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_464(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_462())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_462()//Position - 0x11BE9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_60();
	}
	return func_463(Global_4718592.f_127178);
}

int func_463(int iParam0)//Position - 0x11C0D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_464(int iParam0)//Position - 0x11C47
{
	return Global_2657971[iParam0 /*465*/].f_122 == 4;
}

bool func_465(int iParam0)//Position - 0x11C5C
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

bool func_466(int iParam0)//Position - 0x11C71
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_467()//Position - 0x11C86
{
	return Global_4718592.f_1 == 0;
}

void func_468(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x11C96
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_399(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_399("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_469()//Position - 0x11CF6
{
	switch (func_118(PLAYER::PLAYER_ID()))
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

char* func_470(var uParam0)//Position - 0x11D4F
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
	switch (func_118(PLAYER::PLAYER_ID()))
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
			if (func_472())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_126(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_126(1))
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
			if (func_471(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_471(int iParam0)//Position - 0x1217C
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

bool func_472()//Position - 0x121AE
{
	return (func_475() && func_473(func_474()));
}

int func_473(int iParam0)//Position - 0x121C7
{
	return func_77(iParam0, 1);
}

int func_474()//Position - 0x121D6
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_35;
}

bool func_475()//Position - 0x121ED
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148;
}

void func_476(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x12203
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_399(sParam1);
		}
		else if (func_274(PLAYER::PLAYER_ID()) == 133)
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
		func_399("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_477(var uParam0)//Position - 0x1228B
{
	int iVar0;
	
	iVar0 = func_274(PLAYER::PLAYER_ID());
	if (func_478())
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
			switch (func_152())
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

bool func_478()//Position - 0x1243B
{
	return Global_1845149;
}

char* func_479(var uParam0)//Position - 0x12447
{
	int iVar0;
	
	iVar0 = func_274(PLAYER::PLAYER_ID());
	if (func_478())
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
			if (func_481() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_481() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_152())
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
					return "AMCH_20SLC" /* GXT: Drive-By */;
				
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
			if (func_480() == 1)
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

int func_480()//Position - 0x1263D
{
	return Global_2738934.f_5170;
}

int func_481()//Position - 0x1264C
{
	if (func_274(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2738934.f_5165;
	}
	return -1;
}

void func_482(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1266F
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_410(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_399(sParam1);
		}
		if (func_504() && iParam6)
		{
			if (func_484())
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
			func_399(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_483(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_60())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_483(int iParam0)//Position - 0x12730
{
	if (func_466(iParam0) || func_465(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_484()//Position - 0x12752
{
	return Global_1836447;
}

struct<4> func_485(int iParam0)//Position - 0x1275E
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_486(PLAYER::PLAYER_ID()) || func_464(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 19:
		case 17:
		case 18:
		case 20:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_3525, 16);
			break;
	}
	if (func_402() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_3525, 16);
	}
	return Var0;
}

bool func_486(int iParam0)//Position - 0x127FC
{
	return Global_2657971[iParam0 /*465*/].f_122 == 5;
}

char* func_487(int iParam0, char* sParam1, bool bParam2)//Position - 0x12811
{
	var uVar0;
	
	if (iParam0 == 22 && (!func_402() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_488();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 27)
	{
		if (Global_1836696 == 0)
		{
			Global_1836696 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836696 == 1)
		{
			Global_1836696 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836696 == 0)
		{
			Global_1836696 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 33:
			case 44:
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
			case 28:
			case 11:
			case 12:
			case 13:
				return "HUD_LBD_RCE" /* GXT: Race Leaderboard */;
				break;
			
			case 7:
				return "HUD_LBD_BRCE" /* GXT: Parachute Race Leaderboard */;
				break;
			
			case 20:
			case 16:
			case 19:
			case 17:
			case 15:
			case 14:
			case 18:
			case 21:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD" /* GXT: Survival Leaderboard */;
				break;
			
			case 24:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_488()//Position - 0x12987
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW() || NETWORK::NETWORK_SESSION_GET_UNIQUE_CREW_LIMIT() > 0)
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_489()//Position - 0x129D7
{
	Global_44999 = 1;
}

bool func_490(bool bParam0, int* iParam1, bool bParam2)//Position - 0x129E3
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

void func_491(int* iParam0, var uParam1, bool bParam2)//Position - 0x12A23
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836445 = 0;
	func_392();
	Global_1836444 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2738934.f_4714), 5);
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

int func_492()//Position - 0x12A92
{
	if (func_502())
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (!func_500())
	{
		return 0;
	}
	if (!func_346())
	{
		return 0;
	}
	if (func_499(8, -1))
	{
		return 0;
	}
	if (func_503() == 2)
	{
		return 0;
	}
	if (Global_2738934.f_4664)
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	else if (!func_266(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_498(1) || func_496(1)) || Global_23692.f_124) || Global_23692)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_495() && Global_1963845 == 2)
	{
		return 0;
	}
	if (func_725(PLAYER::PLAYER_ID()) && !func_495())
	{
		return 0;
	}
	if (Global_1928440)
	{
		return 0;
	}
	if (Global_1928445)
	{
		return 0;
	}
	if (func_494(0))
	{
		return 0;
	}
	if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 4))
	{
		return 0;
	}
	if (Global_1663277)
	{
		return 0;
	}
	if ((Global_1957929.f_718.f_5 || Global_1960755.f_718.f_5) || Global_1956957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1964849.f_724.f_5 || Global_1964849.f_744.f_724.f_5) || Global_1964849.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1971648.f_732.f_5)
	{
		return 0;
	}
	if (func_493(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1663320 || Global_1663321) || Global_1663322)
	{
		return 0;
	}
	return 1;
}

int func_493(int iParam0)//Position - 0x12C6A
{
	if (iParam0 == func_26())
	{
		return 0;
	}
	return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 6);
}

bool func_494(int iParam0)//Position - 0x12C8F
{
	return BitTest(Global_2738934.f_5249.f_50, iParam0);
}

bool func_495()//Position - 0x12CA3
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_496(bool bParam0)//Position - 0x12CBF
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_497(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23692.f_130)
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

int func_497(int iParam0)//Position - 0x12DAA
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

bool func_498(bool bParam0)//Position - 0x12E07
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

bool func_499(int iParam0, int iParam1)//Position - 0x12E30
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

int func_500()//Position - 0x12E68
{
	if (func_501())
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

bool func_501()//Position - 0x12EA7
{
	return Global_1574604;
}

bool func_502()//Position - 0x12EB3
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

int func_503()//Position - 0x12EC8
{
	return Global_1668667.f_68;
}

int func_504()//Position - 0x12ED6
{
	if (Global_1836446 > 16)
	{
		return 1;
	}
	return 0;
}

float func_505()//Position - 0x12EEC
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_506(int iParam0)//Position - 0x12F10
{
	switch (iParam0)
	{
		case 22:
		case 23:
		case 29:
		case 30:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

int func_507()//Position - 0x12F42
{
	if (func_510())
	{
		return 1;
	}
	if (func_273(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_478())
	{
		return 1;
	}
	if (func_361(PLAYER::PLAYER_ID()))
	{
		switch (func_274(PLAYER::PLAYER_ID()))
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
				if (!func_508(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_508(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_508(PLAYER::PLAYER_ID()))
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

bool func_508(int iParam0)//Position - 0x1301D
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_1, 4);
}

int func_509(int iParam0)//Position - 0x13032
{
	if (iParam0 == 30)
	{
		if ((func_361(PLAYER::PLAYER_ID()) && !func_113(PLAYER::PLAYER_ID())) && !func_407(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 29)
	{
		if (func_32(PLAYER::PLAYER_ID(), 0) && func_113(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_353(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_510()//Position - 0x130A1
{
	if (func_511(PLAYER::PLAYER_ID()))
	{
		return Global_1582002;
	}
	return 0;
}

int func_511(bool bParam0)//Position - 0x130BC
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_38(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_512()//Position - 0x130DF
{
	if (!func_18(&uLocal_560))
	{
		if (func_513(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_11(&uLocal_560, 0, 1);
		}
	}
}

int func_513(int iParam0)//Position - 0x13106
{
	if (BitTest(Local_396[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (BitTest(Local_396[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (BitTest(Local_396[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (BitTest(Local_396[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_514()//Position - 0x13157
{
	if (func_323(1, 1))
	{
		if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
		{
			MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
		}
	}
	else if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
	{
		MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
	}
	if (func_323(0, 1))
	{
		if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
		{
			MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
		}
	}
	else if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
	{
		MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
	}
	if (func_323(1, 0))
	{
		if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
		{
			MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
		}
	}
	else if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
	{
		MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
	}
	if (func_323(0, 0))
	{
		if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
		{
			MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
		}
	}
	else if (BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
	{
		MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
	}
}

void func_515()//Position - 0x132A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_522(iVar0);
		func_516(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_516(int iParam0)//Position - 0x132EF
{
	if (func_323(0, 0) || bLocal_3199 == -1)
	{
		func_89(iParam0);
		func_91(iParam0);
		func_86(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_275(NETWORK::PARTICIPANT_ID_TO_INT(), iParam0))
		{
			func_91(iParam0);
		}
		else
		{
			func_518(iParam0);
		}
	}
	else
	{
		func_91(iParam0);
	}
	if (iLocal_3200 != func_87(iParam0, 1))
	{
		switch (iLocal_3201)
		{
			case 0:
				func_86(iParam0, -1);
				iLocal_3201++;
				break;
			
			case 1:
				func_517(iParam0);
				iLocal_3200 = func_87(iParam0, 1);
				iLocal_3201 = 0;
				break;
			}
	}
}

void func_517(int iParam0)//Position - 0x1339A
{
	if (!BitTest(uLocal_558, func_542(iParam0)))
	{
		HUD::SET_MINIMAP_COMPONENT(func_88(iParam0, 0), true, func_87(iParam0, 1));
		if (func_542(iParam0) == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_88(iParam0, 1), true, func_87(iParam0, 1));
		}
		MISC::SET_BIT(&uLocal_558, func_542(iParam0));
	}
}

void func_518(int iParam0)//Position - 0x133EF
{
	if (!HUD::DOES_BLIP_EXIST(func_92(iParam0)))
	{
		func_521(iParam0, HUD::ADD_BLIP_FOR_COORD(func_382(iParam0)));
		HUD::SET_BLIP_PRIORITY(func_92(iParam0), 12);
		if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME" /* GXT: King of the Castle */))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_92(iParam0), "KOTC_AREANAME" /* GXT: King of the Castle */);
		}
		HUD::SET_BLIP_SPRITE(func_92(iParam0), 438 /*RADAR_KING_OF_THE_CASTLE*/);
		func_519(&(Local_1243[iParam0 /*68*/].f_27), func_87(iParam0, 1));
		if (!BitTest(bLocal_557, 13))
		{
			HUD::SET_BLIP_FLASHES(Local_1243[iParam0 /*68*/].f_27, true);
			HUD::SET_BLIP_FLASH_TIMER(Local_1243[iParam0 /*68*/].f_27, 7000);
			MISC::SET_BIT(&bLocal_557, 13);
		}
		if (!BitTest(bLocal_557, 12))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&bLocal_557, 12);
		}
		HUD::SHOW_HEIGHT_ON_BLIP(func_92(iParam0), true);
		HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(func_92(iParam0), true);
	}
	else
	{
		func_519(&(Local_1243[iParam0 /*68*/].f_27), func_87(iParam0, 0));
		if (HUD::DOES_BLIP_EXIST(func_92(iParam0)))
		{
			if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME" /* GXT: King of the Castle */))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_92(iParam0), "KOTC_AREANAME" /* GXT: King of the Castle */);
			}
		}
	}
}

void func_519(var uParam0, int iParam1)//Position - 0x134FC
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_520(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_520(int iParam0)//Position - 0x13522
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

void func_521(int iParam0, int iParam1)//Position - 0x1378A
{
	Local_1243[iParam0 /*68*/].f_27 = iParam1;
}

void func_522(int iParam0)//Position - 0x1379D
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	var uVar21[3];
	struct<3> Var25[3];
	var uVar35[3];
	bool bVar39;
	float fVar40;
	float fVar41;
	
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_542(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_532(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_531(iParam0, iVar0) };
		uVar21[iVar0] = func_530(iParam0, iVar0);
		func_529(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (BitTest(uLocal_3192, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (BitTest(uLocal_3191, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
			{
				if (!BitTest(uLocal_3193, Local_562[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
				{
					if (!func_323(1, 1))
					{
						if (bLocal_3199 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
							{
								if ((!func_528(Var1[iVar0 /*3*/]) && !func_528(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1139[PLAYER::PLAYER_ID() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], false, true, 0))
									{
										bVar39 = true;
									}
								}
								if (func_542(iParam0) == 7)
								{
									if (func_527(iParam0) < 0f)
									{
										if (func_527(iParam0) <= fVar40 && func_527(iParam0) >= (fVar40 * -1f))
										{
											if (func_526(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_528(Var25[iVar0 /*3*/]))
								{
									if (func_525(iParam0, iVar0) < 0f)
									{
										if (func_525(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_524(iParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_523(iParam0, bVar39);
}

void func_523(int iParam0, bool bParam1)//Position - 0x13973
{
	Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), iParam0);
	}
}

float func_524(int iParam0, int iParam1)//Position - 0x139B6
{
	return Local_1243[iParam0 /*68*/].f_41[iParam1];
}

float func_525(int iParam0, int iParam1)//Position - 0x139CB
{
	return Local_1243[iParam0 /*68*/].f_45[iParam1];
}

float func_526(int iParam0)//Position - 0x139E0
{
	return Local_1243[iParam0 /*68*/].f_38;
}

float func_527(int iParam0)//Position - 0x139F1
{
	return Local_1243[iParam0 /*68*/].f_39;
}

int func_528(struct<3> Param0)//Position - 0x13A02
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_529(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x13A2C
{
	switch (iParam1)
	{
		case 0:
			switch (func_542(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_542(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_542(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_530(int iParam0, int iParam1)//Position - 0x13C77
{
	return Local_1243[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_531(int iParam0, int iParam1)//Position - 0x13C8C
{
	return Local_1243[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_532(int iParam0, int iParam1)//Position - 0x13CA3
{
	return Local_1243[iParam0 /*68*/][iParam1 /*3*/];
}

void func_533(int iParam0)//Position - 0x13CB8
{
	Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = iParam0;
}

void func_534(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13CCB
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 6:
					func_535(12);
					break;
			}
			break;
	}
}

void func_535(int iParam0)//Position - 0x13CF9
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_541(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_4544411[iVar1 /*26*/].f_12, 11))
		{
			if (func_536(&(Global_4544411[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_4544411[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_4544411[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_536(var uParam0)//Position - 0x13D74
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_538(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_537(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_537(var uParam0)//Position - 0x13DDB
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_538(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_135107[iVar13 /*13*/];
		
		case 62:
			return Global_949659.f_28505[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_538(var uParam0)//Position - 0x13E52
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_540(uParam0->f_1))
	{
		if (func_539(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1518)
			{
				if (BitTest(Global_794744.f_4[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_949659.f_1804[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_982384.f_4[iVar0 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_539(var uParam0)//Position - 0x140A9
{
	if (Global_2628582)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_540(int iParam0)//Position - 0x140CE
{
	return iParam0 == 9999;
}

int func_541(int iParam0)//Position - 0x140DC
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 0:
			return MISC::GET_HASH_KEY("fXl9rb9ZW0KNkiaqmbV48Q");
		
		case 1:
			return MISC::GET_HASH_KEY("1n5uWPRHHUSjE71oygaFjQ");
		
		case 2:
			return MISC::GET_HASH_KEY("BffKLFClw0qXLkqr0Hh5mA");
		
		case 3:
			return MISC::GET_HASH_KEY("fUi3OcVHSk2BENX1rCrMnQ");
		
		case 4:
			return MISC::GET_HASH_KEY("HdgoQCvj9Uah2F7g4J_Ytw");
		
		case 5:
			return MISC::GET_HASH_KEY("9-9CRMVazU-V5zCLSJOLpQ");
		
		case 6:
			return MISC::GET_HASH_KEY("BCzUO0f2oEabhOUkd8kLdw");
		
		case 7:
			return MISC::GET_HASH_KEY("cIyGoaFVFECl1J8-vgHnUA");
		
		case 8:
			return MISC::GET_HASH_KEY("NCWwNYdkYkOMGbD196ujMg");
		
		case 9:
			return MISC::GET_HASH_KEY("tVsw33Vpx0SYy5ZavTyzQA");
		
		case 10:
			return MISC::GET_HASH_KEY("jSWoqEVSy0a9Ooltyu3j7w");
		
		case 11:
			return MISC::GET_HASH_KEY("R4wff65YmEi9YpijfRrSDg");
		
		case 12:
			return MISC::GET_HASH_KEY("734uySYXUk2ej47Ni5jlZw");
		
		case 13:
			return MISC::GET_HASH_KEY("lrzPuq8XL06_hq_GWOXFPQ");
		
		case 14:
			return MISC::GET_HASH_KEY("HaOV5MHIxk-3RJ0-y4DXQA");
		
		case 15:
			return MISC::GET_HASH_KEY("vPKgcOhrMkizAqhqn4qzIg");
		
		case 16:
			return MISC::GET_HASH_KEY("7yauF2fboUCjDM9TbuZZEQ");
		
		case 17:
			return MISC::GET_HASH_KEY("3trklOr22kS9DU-mXJh1qA");
		
		case 18:
			return MISC::GET_HASH_KEY("1hg2iY8LZ0KmWS2rlodW-g");
		
		case 19:
			return MISC::GET_HASH_KEY("NzShi-OiLk679G01b-DLbg");
		
		case 20:
			return MISC::GET_HASH_KEY("k-tuZ-mn6UKQlXT_bsB8Yg");
		
		case 21:
			return MISC::GET_HASH_KEY("Mu_L8vLbCUm32nIl_z61ug");
		
		case 22:
			return MISC::GET_HASH_KEY("6GGfmeTgR0KUAjTIQUmWXQ");
		
		case 23:
			return MISC::GET_HASH_KEY("XDpP0K4sgUq_gS6IK_hi5Q");
		
		case 24:
			return MISC::GET_HASH_KEY("G-5i7HSTsUeCWWDymd_14g");
		
		case 25:
			return MISC::GET_HASH_KEY("WsA9Weyo4EqaoGJEM7GAGA");
		
		case 26:
			return MISC::GET_HASH_KEY("0RQfVKkq30i3Xtmpo5HNSg");
		
		case 27:
			return MISC::GET_HASH_KEY("3HWcaKl-RkiCS5I5w5A9fA");
		
		case 28:
			return MISC::GET_HASH_KEY("NVHcew3RaEqhamPuLrzccg");
		
		case 29:
			return MISC::GET_HASH_KEY("5WI8qiscrUmmL2vjsGSEGQ");
		
		case 30:
			return MISC::GET_HASH_KEY("nPNK7URl_EerWTlMXDeFKA");
		
		case 31:
			return -1;
		
		default:
	}
	return -1;
}

bool func_542(int iParam0)//Position - 0x1430F
{
	return Local_98.f_6[iParam0 /*204*/].f_69;
}

int func_543()//Position - 0x14321
{
	return Local_98.f_0;
}

int func_544(int iParam0)//Position - 0x1432B
{
	return Local_396[iParam0 /*5*/];
}

void func_545()//Position - 0x1433A
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	bVar0 = -1;
	bVar1 = -1;
	if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_542(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_563(iVar2, iVar3, func_564(iVar2, iVar3));
					func_561(iVar2, iVar3, func_562(iVar2, iVar3));
					func_559(iVar2, func_560(iVar2));
					func_557(iVar2, iVar3, func_558(iVar2, iVar3));
					MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_556(iVar2) <= 1)
			{
				func_555(iVar2, 0);
			}
			else
			{
				func_555(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_153(iVar2))
			{
				MISC::SET_BIT(&bLocal_557, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_555(iVar2, 0);
			}
		}
		else
		{
			bVar0 = func_8(iVar2);
			bVar1 = func_7(iVar2);
			if (!func_153(iVar2))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (bVar0 > -1)
					{
						if (!BitTest(uLocal_3192, bVar0))
						{
							MISC::SET_BIT(&bLocal_557, 0);
						}
						if (!BitTest(uLocal_3191, bVar0))
						{
							MISC::SET_BIT(&bLocal_557, 0);
						}
						if (BitTest(uLocal_3193, bVar0))
						{
							MISC::SET_BIT(&bLocal_557, 0);
						}
						if (!func_275(bVar0, iVar2))
						{
							MISC::SET_BIT(&bLocal_557, 0);
						}
					}
				}
			}
			else if (bVar0 > -1)
			{
				if (!BitTest(uLocal_3192, bVar0))
				{
					bVar5 = true;
				}
				if (!BitTest(uLocal_3191, bVar1))
				{
					bVar5 = true;
				}
				if (BitTest(uLocal_3193, bVar1))
				{
					bVar5 = true;
				}
				if (!func_275(bVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_554(iVar2, -1);
				func_553(iVar2, -1);
			}
			func_552(iVar2, uVar4);
		}
		if (BitTest(bLocal_557, 0))
		{
			if (func_551(iVar2) > -1 && func_550(iVar2) > -1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_554(iVar2, func_551(iVar2));
					func_553(iVar2, func_550(iVar2));
					func_552(iVar2, func_549(iVar2));
					if (!BitTest(Local_98.f_6[iVar2 /*204*/].f_203, func_551(iVar2)))
					{
						MISC::SET_BIT(&(Local_98.f_6[iVar2 /*204*/].f_203), func_551(iVar2));
					}
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_546(iVar2);
		}
		iVar2++;
	}
}

void func_546(int iParam0)//Position - 0x14595
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	var uVar17;
	var uVar18;
	var uVar19;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar17 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar18 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar19 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar17;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar18;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar19;
				}
				if ((iVar1 - 1) == 0 && Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_98.f_283 == Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_98.f_283 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_3 = 509575003;
						Var2.f_11 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_547(Var2, func_548(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_547(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0x14743
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_548(int iParam0)//Position - 0x14772
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_788(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_549(int iParam0)//Position - 0x147CF
{
	return Local_1243[iParam0 /*68*/].f_31;
}

int func_550(int iParam0)//Position - 0x147E0
{
	return Local_1243[iParam0 /*68*/].f_35;
}

bool func_551(int iParam0)//Position - 0x147F1
{
	return Local_1243[iParam0 /*68*/].f_34;
}

void func_552(int iParam0, var uParam1)//Position - 0x14802
{
	Local_1243[iParam0 /*68*/].f_30 = uParam1;
}

void func_553(int iParam0, int iParam1)//Position - 0x14815
{
	Local_98.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_554(int iParam0, int iParam1)//Position - 0x14829
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_98.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_555(int iParam0, int iParam1)//Position - 0x14848
{
	Local_98.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_556(int iParam0)//Position - 0x1485C
{
	return Local_1243[iParam0 /*68*/].f_37;
}

void func_557(int iParam0, int iParam1, var uParam2)//Position - 0x1486D
{
	Local_1243[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_558(int iParam0, int iParam1)//Position - 0x14884
{
	switch (iParam1)
	{
		case 0:
			switch (func_542(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_542(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_542(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_559(int iParam0, struct<3> Param1)//Position - 0x149E0
{
	Local_1243[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_560(int iParam0)//Position - 0x149F7
{
	switch (func_542(iParam0))
	{
		case 0:
			return -1195.4352f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.2153f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.6768f, 52.0053f;
		
		case 1:
			return 1667.1927f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_561(int iParam0, int iParam1, struct<3> Param2)//Position - 0x14ACD
{
	Local_1243[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_562(int iParam0, int iParam1)//Position - 0x14AE8
{
	switch (iParam1)
	{
		case 0:
			switch (func_542(iParam0))
			{
				case 0:
					return -1178.5751f, -1795.2189f, 22.428284f;
				
				case 2:
					return -377.41928f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.1184f, 3772.4978f, 58.135464f;
				
				case 1:
					return 1673.9747f, -24.626637f, 199.25632f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.170082f;
				
				case 5:
					return -391.53812f, 1125.1415f, 325.02884f;
				
				case 6:
					return 470.23883f, -1335.7678f, 38.441536f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_542(iParam0))
			{
				case 0:
					return -1180.3752f, -1777.3478f, 22.481255f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.2025f, -25.81484f, 200.18019f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_542(iParam0))
			{
				case 0:
					return -1194.2051f, -1806.8198f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_563(int iParam0, int iParam1, struct<3> Param2)//Position - 0x14CCE
{
	Local_1243[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_564(int iParam0, int iParam1)//Position - 0x14CE7
{
	switch (iParam1)
	{
		case 0:
			switch (func_542(iParam0))
			{
				case 0:
					return -1212.3806f, -1780.1083f, 7.481341f;
				
				case 2:
					return -381.23276f, 6089.6807f, 34.37778f;
				
				case 4:
					return 2516.8198f, 3795.6455f, 49.829475f;
				
				case 1:
					return 1660.5317f, -27.948818f, 181.58702f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.531216f;
				
				case 5:
					return -386.50803f, 1144.1223f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.1857f, 34.141537f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_542(iParam0))
			{
				case 0:
					return -1209.8297f, -1798.1812f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.6134f, -27.267546f, 182.28743f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_542(iParam0))
			{
				case 0:
					return -1197.3328f, -1769.5844f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_565()//Position - 0x14ECD
{
	func_567();
	iLocal_3190++;
	func_566();
}

void func_566()//Position - 0x14EE5
{
	if (iLocal_3190 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iLocal_3190 = 0;
	}
}

void func_567()//Position - 0x14EFD
{
	if (iLocal_3190 == 0)
	{
	}
}

void func_568()//Position - 0x14F0C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	
	bVar0 = -1;
	bVar1 = -1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_1139[bVar1 /*3*/] = func_26();
		Local_1139[bVar1 /*3*/].f_1 = -1;
		Local_1139[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_3191, bVar1);
		MISC::CLEAR_BIT(&uLocal_3193, bVar1);
		bVar1++;
	}
	bVar0 = false;
	while (bVar0 < 32)
	{
		Local_562[bVar0 /*18*/] = func_599();
		Local_562[bVar0 /*18*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_3192, bVar0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				MISC::CLEAR_BIT(&(Local_98.f_6[iVar25 /*204*/].f_73), bVar0);
				iVar25++;
			}
		}
		Local_562[bVar0 /*18*/].f_2 = { Var4 };
		bVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_598(iVar25, 0);
		func_597(iVar25, 0);
		func_596(iVar25, 0f);
		func_595(iVar25, 0f);
		func_594(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_593(iVar25, iVar28, 0f);
			func_592(iVar25, iVar28, 0f);
			func_591(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0))
		{
			Local_562[bVar0 /*18*/] = bVar0;
			MISC::SET_BIT(&uLocal_3192, bVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_562[bVar0 /*18*/]);
			bVar1 = iVar2;
			if (func_788(iVar2, 0, 1))
			{
				Local_1139[bVar1 /*3*/] = iVar2;
				Local_562[bVar0 /*18*/].f_1 = bVar1;
				Local_1139[bVar1 /*3*/].f_1 = bVar0;
				Local_1139[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_562[bVar0 /*18*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				iVar27++;
				if (func_513(bVar0))
				{
					iVar29++;
				}
				MISC::SET_BIT(&uLocal_3191, bVar1);
				if ((ENTITY::IS_ENTITY_DEAD(Local_1139[bVar1 /*3*/].f_2, false) || PED::IS_PED_INJURED(Local_1139[bVar1 /*3*/].f_2)) || !PLAYER::IS_PLAYER_PLAYING(Local_1139[bVar1 /*3*/]))
				{
					MISC::SET_BIT(&uLocal_3193, bVar1);
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!BitTest(Local_396[bVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!BitTest(Local_396[bVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_589(bVar1, 2);
				if (func_273(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_587(bVar0);
					}
				}
				if (func_132(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_587(bVar0);
					}
				}
				if (func_277(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_587(bVar0);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_3192, bVar0);
			if (func_699() <= 1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_587(bVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!BitTest(Local_98.f_213, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_586(bVar0, iVar25);
				}
			}
			if (BitTest(uLocal_3192, bVar0))
			{
				if (BitTest(uLocal_3191, bVar1))
				{
					if (!BitTest(Local_98.f_213, 1))
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_585(bVar0, bVar1, iVar25, func_144(iVar25, bVar0));
						}
					}
					if (!BitTest(uLocal_3193, bVar1))
					{
						if (bVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							fVar36 = func_584(Local_1139[bVar1 /*3*/].f_2, func_382(iVar25), 0);
							fVar37 = func_584(Local_1139[bVar1 /*3*/].f_2, func_382(iVar25), 1);
							Var38 = { ENTITY::GET_ENTITY_COORDS(Local_1139[bVar1 /*3*/].f_2, true) };
							fVar41 = (Local_1243[iVar25 /*68*/].f_24.f_2 - Var38.f_2);
							func_596(iVar25, fVar36);
							func_595(iVar25, fVar41);
							func_594(iVar25, fVar37);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_529(iVar25, iVar28, &Var20, &fVar23);
								if (!func_528(Var20))
								{
									fVar42 = func_584(Local_1139[bVar1 /*3*/].f_2, Var20, 0);
									fVar43 = func_584(Local_1139[bVar1 /*3*/].f_2, Var20, 1);
									fVar44 = (Var20.f_2 - Var38.f_2);
									func_593(iVar25, iVar28, fVar42);
									func_592(iVar25, iVar28, fVar44);
									func_591(iVar25, iVar28, fVar43);
								}
								iVar28++;
							}
						}
						if (func_275(bVar0, iVar25))
						{
							func_598(iVar25, 1);
							iVar26 = func_556(iVar25);
							iVar26++;
							func_597(iVar25, iVar26);
							if (func_8(iVar25) != bVar0 && func_7(iVar25) != bVar1)
							{
								if (func_551(iVar25) == -1)
								{
									func_652(iVar25, bVar0);
								}
								if (func_550(iVar25) == -1)
								{
									func_651(iVar25, bVar1);
								}
								func_650(iVar25, Local_1139[bVar1 /*3*/].f_2);
							}
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								MISC::SET_BIT(&(Local_98.f_6[iVar25 /*204*/].f_73), bVar0);
							}
						}
					}
					if (bVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!BitTest(uLocal_3193, bVar1))
						{
							if (func_249(iVar25) <= IntToFloat(Global_262145.f_11962 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */))
							{
								if (!BitTest(Local_396[bVar0 /*5*/].f_4, 12))
								{
									MISC::SET_BIT(&(Local_396[bVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_249(iVar25) >= IntToFloat(Global_262145.f_11963 /* Tunable: FREEMODE_EVENT_UI_EXIT_DISTANCE */))
							{
								if (BitTest(Local_396[bVar0 /*5*/].f_4, 12))
								{
									MISC::CLEAR_BIT(&(Local_396[bVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_276(1, 0))
							{
								if (func_249(iVar25) <= IntToFloat(Global_262145.f_11962 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */))
								{
									if (!BitTest(Local_396[bVar0 /*5*/].f_4, 3))
									{
										MISC::SET_BIT(&(Local_396[bVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_249(iVar25) >= IntToFloat(Global_262145.f_11963 /* Tunable: FREEMODE_EVENT_UI_EXIT_DISTANCE */))
								{
									if (BitTest(Local_396[bVar0 /*5*/].f_4, 3))
									{
										MISC::CLEAR_BIT(&(Local_396[bVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (BitTest(Local_396[bVar0 /*5*/].f_4, 3))
							{
								MISC::CLEAR_BIT(&(Local_396[bVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (PLAYER::PLAYER_ID() != Local_1139[bVar1 /*3*/])
				{
					if (func_219(PLAYER::PLAYER_ID(), Local_1139[bVar1 /*3*/]))
					{
						iVar24 = func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
					}
				}
				if (!BitTest(uLocal_3193, bVar1))
				{
					if (func_323(0, 0))
					{
						func_583(bVar1);
					}
					else if (func_7(iVar25) != bVar1)
					{
						func_583(bVar1);
					}
					else if (func_699() != 1)
					{
						func_583(bVar1);
					}
					else
					{
						func_578(bVar1);
						if (bVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								HUD::GET_HUD_COLOUR(iVar24, &iVar32, &iVar33, &iVar34, &iVar35);
								iVar35 = 100;
								GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(Local_1139[bVar1 /*3*/].f_2, true) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar32, iVar33, iVar34, iVar35, true, true, 2, false, 0, 0, false);
							}
						}
					}
				}
				if (func_788(Local_1139[bVar1 /*3*/], 1, 1))
				{
					if (func_576(Local_1139[bVar1 /*3*/]))
					{
						func_569(Local_1139[bVar1 /*3*/], func_520(iVar24), func_572(bVar0, bVar1, iVar25), 0);
					}
				}
			}
			iVar25++;
		}
		bVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar30)
		{
			MISC::SET_BIT(&(Local_98.f_213), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_98.f_213), 0);
		}
		if (bVar31)
		{
			MISC::SET_BIT(&(Local_98.f_213), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_98.f_213), 1);
		}
	}
	if (iVar29 > iLocal_559)
	{
		iLocal_559 = iVar29;
	}
	if (iVar27 > iLocal_3194)
	{
		iLocal_3194 = iVar27;
	}
	else
	{
		Local_98.f_216 = (iLocal_3194 - iVar27);
	}
}

void func_569(bool bParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1561A
{
	var uVar0;
	
	if (func_571(bParam0))
	{
		return;
	}
	if (func_570(&(Global_2647061.f_624[bParam0]), &(Global_2647061.f_987[bParam0]), &(Global_2647061.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2647061.f_459[bParam0] = uParam1;
		}
	}
}

int func_570(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x1566C
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_571(int iParam0)//Position - 0x1572B
{
	if (iParam0 == func_26())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_236())
	{
		return 1;
	}
	return 0;
}

int func_572(bool bParam0, bool bParam1, int iParam2)//Position - 0x15754
{
	if (func_323(0, 0))
	{
		return 0;
	}
	if (bParam0 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0;
	}
	if (func_573(bParam1))
	{
		return 0;
	}
	if (bParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_573(int iParam0)//Position - 0x157A4
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_135();
	}
	return BitTest(Global_1668667.f_241.f_136[func_575(10) /*33*/][iParam0], func_574(10));
}

int func_574(int iParam0)//Position - 0x157D7
{
	return (iParam0 % 32);
}

int func_575(int iParam0)//Position - 0x157E4
{
	return (iParam0 / 32);
}

bool func_576(int iParam0)//Position - 0x157F1
{
	return func_577(&(Global_2647061.f_624[iParam0]));
}

int func_577(var uParam0)//Position - 0x15808
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_578(bool bParam0)//Position - 0x1582B
{
	int iVar0;
	
	iVar0 = 6;
	if (bParam0 > -1)
	{
		if (BitTest(uLocal_3191, bParam0))
		{
			if (!BitTest(uLocal_3193, bParam0))
			{
				if (func_219(PLAYER::PLAYER_ID(), Local_1139[bParam0 /*3*/]))
				{
					iVar0 = func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
				}
				func_581(Local_1139[bParam0 /*3*/], 439, 1, 0);
				if (func_576(Local_1139[bParam0 /*3*/]))
				{
					func_569(Local_1139[bParam0 /*3*/], func_520(iVar0), 1, 0);
				}
				func_579(Local_1139[bParam0 /*3*/], 1, 1, 0);
				MISC::SET_BIT(&uLocal_3198, bParam0);
			}
		}
	}
}

void func_579(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x158B9
{
	var uVar0;
	
	if (func_571(bParam0))
	{
		return;
	}
	if (func_570(&(Global_2647061.f_822[bParam0]), &(Global_2647061.f_1185[bParam0]), &(Global_2647061.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_580(bParam0, bParam2);
	}
}

void func_580(bool bParam0, bool bParam1)//Position - 0x15901
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2647061.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2647061.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2647061[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647061[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647061[bParam0], true);
		}
	}
}

void func_581(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1595C
{
	bool bVar0;
	
	if (func_571(bParam0))
	{
		return;
	}
	if (func_570(&(Global_2647061.f_591[bParam0]), &(Global_2647061.f_954[bParam0]), &(Global_2647061.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2647061.f_426[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_582();
		}
	}
}

void func_582()//Position - 0x159B7
{
	Global_2647061.f_1656 = 1;
	Global_1943520.f_3864 = 1;
}

void func_583(bool bParam0)//Position - 0x159CF
{
	int iVar0;
	
	iVar0 = 6;
	if (BitTest(uLocal_3198, bParam0))
	{
		if (bParam0 > -1)
		{
			if (BitTest(uLocal_3191, bParam0))
			{
				if (!BitTest(uLocal_3193, bParam0))
				{
					if (PLAYER::PLAYER_ID() != Local_1139[bParam0 /*3*/])
					{
						if (func_219(PLAYER::PLAYER_ID(), Local_1139[bParam0 /*3*/]))
						{
							iVar0 = func_169(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
						}
					}
					func_581(Local_1139[bParam0 /*3*/], 439, 0, 0);
					if (func_576(Local_1139[bParam0 /*3*/]))
					{
						func_569(Local_1139[bParam0 /*3*/], func_520(iVar0), 0, 0);
					}
					func_579(Local_1139[bParam0 /*3*/], 0, 0, 0);
					MISC::CLEAR_BIT(&uLocal_3198, bParam0);
				}
			}
		}
	}
}

float func_584(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x15A74
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

void func_585(bool bParam0, bool bParam1, int iParam2, float fParam3)//Position - 0x15AAE
{
	Local_98.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/] = bParam0;
	Local_98.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_1 = bParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_2 = bParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_3 = fParam3;
}

void func_586(int iParam0, int iParam1)//Position - 0x15AFC
{
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_26();
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_587(int iParam0)//Position - 0x15B49
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_145(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_588(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_98.f_217[iVar1] > 0f)
			{
				if (Local_98.f_250[iVar1] == iParam0)
				{
					Local_98.f_217[iVar1] = 0f;
					Local_98.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_588(int iParam0, int iParam1, float fParam2)//Position - 0x15BD1
{
	Local_98.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_589(bool bParam0, int iParam1)//Position - 0x15BE9
{
	bool bVar0;
	
	if (BitTest(Global_1836959.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1836959.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836959.f_2, bParam0))
	{
		if (Global_1836959 < iParam1 && BitTest(Global_1836959.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836959.f_1), 0);
			return;
		}
		if (Global_1836959 != 0)
		{
			MISC::SET_BIT(&(Global_1836959.f_1), 1);
		}
		Global_1836959 = 0;
		Global_1836959.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836959.f_2), bParam0);
	bVar0 = true;
	if (func_242(bParam0))
	{
		bVar0 = false;
	}
	if (func_590(bParam0))
	{
		bVar0 = false;
	}
	if (func_38(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_273(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836959++;
	}
}

bool func_590(bool bParam0)//Position - 0x15CAE
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 10);
}

void func_591(int iParam0, int iParam1, float fParam2)//Position - 0x15CC4
{
	Local_1243[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_592(int iParam0, int iParam1, float fParam2)//Position - 0x15CDB
{
	Local_1243[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_593(int iParam0, int iParam1, float fParam2)//Position - 0x15CF2
{
	Local_1243[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_594(int iParam0, float fParam1)//Position - 0x15D09
{
	Local_1243[iParam0 /*68*/].f_40 = fParam1;
}

void func_595(int iParam0, float fParam1)//Position - 0x15D1C
{
	Local_1243[iParam0 /*68*/].f_39 = fParam1;
}

void func_596(int iParam0, float fParam1)//Position - 0x15D2F
{
	Local_1243[iParam0 /*68*/].f_38 = fParam1;
}

void func_597(int iParam0, int iParam1)//Position - 0x15D42
{
	Local_1243[iParam0 /*68*/].f_37 = iParam1;
}

void func_598(int iParam0, int iParam1)//Position - 0x15D55
{
	Local_1243[iParam0 /*68*/].f_36 = iParam1;
}

int func_599()//Position - 0x15D68
{
	return -1;
}

void func_600()//Position - 0x15D71
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 186)
		{
			func_601(iVar0);
		}
		if (iVar1 == 154)
		{
		}
		iVar0++;
	}
}

void func_601(int iParam0)//Position - 0x15DAC
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
	bool bVar10;
	struct<6> Var11;
	struct<15> Var24;
	float fVar39;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var11, 13);
	if (ENTITY::DOES_ENTITY_EXIST(Var11.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var11.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var11.f_1))
					{
						if (ENTITY::IS_ENTITY_A_PED(Var11.f_1))
						{
							iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_1);
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								iVar8 = iVar3;
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
								{
									iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
									if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_276(1, 0))
													{
														if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
															{
																MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_5)
													{
														if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (iLocal_3197 < func_649())
															{
																iLocal_3197++;
																func_605(0, iVar1, "", joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_KILLS"), func_648(), 1, -1, 0, 0, 0);
																Local_382.f_7 = (Local_382.f_7 + func_648());
															}
															else
															{
																iLocal_3197++;
															}
														}
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															fVar39 = func_145(iVar9, iVar6);
															fVar39 = (fVar39 + IntToFloat(Global_262145.f_11664 /* Tunable: KING_OF_THE_CASTLE_POINTS_PER_PLAYER_KILL_AS_KING */));
															func_588(iVar9, iVar6, fVar39);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														if (!func_276(1, 0))
														{
															if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
															{
																MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
															}
															if (!BitTest(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
															{
																MISC::SET_BIT(&(Local_396[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
																func_254(1);
															}
														}
														if (Var11.f_5)
														{
															if (iLocal_3195 < func_604())
															{
																iLocal_3195++;
																func_605(0, iVar1, "", joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_KILLS"), func_603(), 1, -1, 0, 0, 0);
																Local_382.f_7 = (Local_382.f_7 + func_603());
															}
															else
															{
																iLocal_3195++;
															}
														}
													}
													if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														iLocal_3196++;
													}
													if (func_275(iVar6, iVar9))
													{
														if (Var11.f_5)
														{
															if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
															{
																if (func_551(iVar9) == -1)
																{
																	func_652(iVar9, iVar6);
																}
																if (func_550(iVar9) == -1)
																{
																	func_651(iVar9, iVar8);
																}
																MISC::SET_BIT(&bLocal_557, 0);
															}
														}
													}
													else if (Var11.f_5)
													{
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															Var24.f_3 = -376947579;
															Var24.f_11 = iVar3;
															bVar10 = false;
															while (bVar10 < 32)
															{
																if (BitTest(uLocal_3192, bVar10))
																{
																	if (BitTest(uLocal_3191, Local_562[bVar10 /*18*/].f_1))
																	{
																		if (!BitTest(Local_396[bVar10 /*5*/].f_4, 9) && !BitTest(Local_396[bVar10 /*5*/].f_4, 10))
																		{
																			if (func_210(bVar10))
																			{
																				func_547(Var24, func_602(Local_562[bVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																bVar10++;
															}
														}
													}
												}
												iVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_602(int iParam0)//Position - 0x160EC
{
	var uVar0;
	
	if (func_33(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_603()//Position - 0x16107
{
	return Global_262145.f_11477 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_KILLED_KING */;
}

int func_604()//Position - 0x16116
{
	return Global_262145.f_11479 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_KILLED_KING_CAP */;
}

int func_605(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x16125
{
	return func_606(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_606(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x16147
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_616(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_612(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_607(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_607(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x161DA
{
	struct<3> Var0;
	
	Var0 = { func_610(iParam0, 1) };
	if (iParam0 == func_609(PLAYER::PLAYER_PED_ID()))
	{
		func_608(1);
	}
	func_612(Var0, iParam1, 0, sParam2, iParam3);
}

void func_608(int iParam0)//Position - 0x1620E
{
	Global_2672855.f_1725 = iParam0;
}

int func_609(int iParam0)//Position - 0x1621F
{
	return iParam0;
}

Vector3 func_610(int iParam0, bool bParam1)//Position - 0x16229
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
	if (iParam0 == func_611(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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

int func_611(int iParam0)//Position - 0x162ED
{
	return iParam0;
}

void func_612(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x162F7
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672855.f_1124[iVar0 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672855.f_1124[iVar1 /*30*/] = { Param0 };
			Global_2672855.f_1124[iVar1 /*30*/].f_6 = 1;
			Global_2672855.f_1124[iVar1 /*30*/].f_4 = func_615(Global_2672855.f_1124[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672855.f_1124[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1124[iVar1 /*30*/].f_3 = iParam3;
			Global_2672855.f_1124[iVar1 /*30*/].f_8 = iParam4;
			Global_2672855.f_1124[iVar1 /*30*/].f_9 = func_614();
			Global_2672855.f_1124[iVar1 /*30*/].f_10 = func_613();
			StringCopy(&(Global_2672855.f_1124[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672855.f_1124[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_613()//Position - 0x1640E
{
	if (Global_2672855.f_1725)
	{
		Global_2672855.f_1725 = 0;
		return 1;
	}
	Global_2672855.f_1725 = 0;
	return 0;
}

var func_614()//Position - 0x16438
{
	var uVar0;
	
	uVar0 = Global_2672855.f_1727;
	Global_2672855.f_1727 = 1;
	return uVar0;
}

float func_615(struct<3> Param0, var uParam3, var uParam4)//Position - 0x16453
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

var func_616(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x164EC
{
	var uVar0;
	
	uVar0 = func_617(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_617(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1650F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_642();
	if (func_131(sParam2))
	{
	}
	if (func_641())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_639(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_638(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_635(0, &iVar1);
					break;
				
				case 3:
					func_635(1, &iVar1);
					break;
				
				case 1:
					func_632(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369 /* Tunable: -9502162 */)
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
			func_285(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_623((func_631(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_2 != -1)
				{
					func_285(1166, iVar1, -1);
				}
				func_620(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_618((func_619(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_618((func_619(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_618(int iParam0)//Position - 0x1667D
{
	if (func_641())
	{
		Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_5 = iParam0;
		func_288(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

int func_619(int iParam0)//Position - 0x166A8
{
	if (iParam0 > -1)
	{
		if (func_788(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_289(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_289(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_620(int iParam0)//Position - 0x166F9
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_43(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_621(func_622(&Var0));
			if (iVar13 == 0)
			{
				func_288(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_289(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_288(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_289(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_288(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_289(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_288(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_289(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_288(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_289(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_621(int iParam0)//Position - 0x167C3
{
	if (iParam0 == func_289(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_289(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_289(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_289(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_289(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_622(var* uParam0)//Position - 0x16839
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

void func_623(int iParam0, int iParam1, int iParam2)//Position - 0x1685C
{
	if (func_641())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_228(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_228(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_INITIALISE"), joaat("XPCATEGORY_LIVE_RP_RESET"));
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_630(PLAYER::PLAYER_ID()))
		{
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_6 = func_627(iParam0, 1);
		}
		func_286(640, iParam0, -1, 1);
		func_286(641, func_627(iParam0, 1), -1, 1);
		func_624(-1109644434, 7, 0);
	}
}

void func_624(int iParam0, int iParam1, int iParam2)//Position - 0x1696E
{
	int iVar0;
	
	if (func_626(iParam1, iParam2))
	{
		iVar0 = func_625();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_625()//Position - 0x1699B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_626(int iParam0, var uParam1)//Position - 0x169D0
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_627(int iParam0, bool bParam1)//Position - 0x16A56
{
	if (bParam1)
	{
	}
	return func_628(iParam0, 0);
}

int func_628(int iParam0, int iParam1)//Position - 0x16A6A
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
		if (func_629(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_629(iVar3) < iParam0)
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

int func_629(int iParam0)//Position - 0x16B25
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

int func_630(int iParam0)//Position - 0x17060
{
	if (!func_33(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_631(int iParam0)//Position - 0x1707F
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_228(640, -1);
			}
			else if (func_630(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_228(640, -1);
	}
	return 0;
}

void func_632(int iParam0)//Position - 0x170D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_176(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_634(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_633(*iParam0, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_633(*iParam0, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_633(int iParam0, int iParam1)//Position - 0x171C2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_634(int iParam0, int iParam1)//Position - 0x171E3
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { func_43(iParam0) };
		Global_2707320 = { func_43(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_635(bool bParam0, int iParam1)//Position - 0x17250
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
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
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_788(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_634(PLAYER::PLAYER_ID(), iVar4))
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
			iVar4 = iVar0;
			if (func_788(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_636(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_634(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_633(*iParam1, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_633(*iParam1, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_636(int iParam0, int iParam1)//Position - 0x17368
{
	return SYSTEM::VDIST(func_637(iParam0), func_637(iParam1));
	return 0f;
}

Vector3 func_637(int iParam0)//Position - 0x17384
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_638(int iParam0)//Position - 0x17397
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_633(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_639(int iParam0)//Position - 0x173CE
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_631(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_631(PLAYER::PLAYER_ID());
		}
	}
	if (func_640(8000, 0, 0) > 0)
	{
		if (func_640(8000, 0, 0) < (iParam0 + func_631(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_640(8000, 0, 0) - func_631(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_640(int iParam0, bool bParam1, int iParam2)//Position - 0x17432
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
	return func_629(iParam0);
}

int func_641()//Position - 0x17458
{
	return 1;
}

int func_642()//Position - 0x17461
{
	int iVar0;
	
	if (func_647(PLAYER::PLAYER_ID()) || func_646(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_462() || func_644(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_643(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */;
		}
	}
	else if (Global_262145.f_7168 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_643(int iParam0)//Position - 0x1752F
{
	return iParam0 == 89;
}

int func_644(int iParam0)//Position - 0x1753C
{
	return func_645(func_118(iParam0));
}

int func_645(int iParam0)//Position - 0x1754E
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_646(int iParam0)//Position - 0x17568
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_647(int iParam0)//Position - 0x1757D
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

int func_648()//Position - 0x17592
{
	return Global_262145.f_11478 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_KILL_AS_KING */;
}

int func_649()//Position - 0x175A1
{
	return Global_262145.f_11480 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_KILL_AS_KING_CAP */;
}

void func_650(int iParam0, var uParam1)//Position - 0x175B0
{
	Local_1243[iParam0 /*68*/].f_31 = uParam1;
}

void func_651(int iParam0, bool bParam1)//Position - 0x175C3
{
	Local_1243[iParam0 /*68*/].f_35 = bParam1;
}

void func_652(int iParam0, bool bParam1)//Position - 0x175D6
{
	Local_1243[iParam0 /*68*/].f_34 = bParam1;
}

void func_653(int iParam0, int iParam1)//Position - 0x175E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!BitTest(bLocal_557, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_273(PLAYER::PLAYER_ID()))
			{
				if (!func_132(PLAYER::PLAYER_ID()))
				{
					if (func_513(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (iParam1 <= 2)
						{
							if (func_210(NETWORK::PARTICIPANT_ID_TO_INT()) || func_513(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_681(func_695(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_680(1);
						}
						if (iVar1 > 0)
						{
							func_679();
							func_605(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
							Local_382.f_7 = (Local_382.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_668(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_667())
							{
								func_656(joaat("SERVICE_EARN_AMBIENT_JOB_KING"), iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_382.f_6 = (Local_382.f_6 + iVar0);
							if (!Global_262145.f_11869 /* Tunable: KING_OF_THE_CASTLE_DISABLE_SHARE_CASH */)
							{
								if (Local_382.f_6 > 0)
								{
									func_654(16, Local_382.f_6);
								}
							}
							Global_2698715 = iVar0;
						}
					}
					else
					{
						func_680(0);
					}
				}
				else
				{
					func_680(0);
				}
			}
			else
			{
				func_680(0);
			}
		}
		else
		{
			func_680(0);
		}
		MISC::SET_BIT(&bLocal_557, 5);
	}
}

void func_654(int iParam0, int iParam1)//Position - 0x17734
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 /* Tunable: SETTINGFORCASHSHARE */ != -1)
		{
			if (func_655())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_655()//Position - 0x17789
{
	if (MISC::IS_PC_VERSION() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_656(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x177A8
{
	int iVar0;
	
	if (!func_667())
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
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_657(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_657(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_657(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
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
		case 2131157548:
		case joaat("SERVICE_EARN_BAIL_OFFICE_PRISONER"):
		case joaat("SERVICE_EARN_BAIL_OFFICE_HIGH_VALUE_PRISONER"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY24_DISPATCH_WORK"):
		case joaat("SERVICE_EARN_BOUNTY24_PIZZA_DELIVERY"):
		case joaat("SERVICE_EARN_BOUNTY24_UFO_ABDUCTION"):
		case joaat("SERVICE_EARN_BOUNTY24_AWARD"):
			func_657(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_657(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1843A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_667())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_40()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_664(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_663(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_658(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x185E7
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_659(iParam0);
	}
}

void func_659(int iParam0)//Position - 0x1861F
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_667())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_662(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_660(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_660(var uParam0)//Position - 0x18673
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
	func_661(&(uParam0->f_14));
	func_661(&(uParam0->f_14.f_13));
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

void func_661(var uParam0)//Position - 0x18783
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

int func_662(int iParam0)//Position - 0x187CB
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_663(int iParam0, int iParam1)//Position - 0x187F6
{
	Global_2698855 = iParam1;
	Global_2698854 = iParam0;
}

int func_664(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1880A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_667())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_665(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_665(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x18947
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
	iVar37 = func_602(Var0.f_1);
	if ((Global_262145.f_23711 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_23712 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_23713 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_666();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_666()//Position - 0x189DB
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_667()//Position - 0x189EB
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_668(int iParam0, int iParam1)//Position - 0x18A02
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_678())
		{
			if (func_146(0))
			{
				if (!func_126(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_677()))
					{
						if (func_676() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_676());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_674(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_673("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_677(), iVar0, 0, 0, 1);
						}
						func_672(20);
						func_669(func_677(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_669(int iParam0, int iParam1, int iParam2)//Position - 0x18AA2
{
	struct<9> Var0;
	
	if (func_788(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_671(iParam0);
		func_670(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_602(iParam0), Var0.f_0);
	}
}

void func_670(var uParam0, var uParam1)//Position - 0x18AFA
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_671(int iParam0)//Position - 0x18B14
{
	return Global_1887305[iParam0 /*610*/].f_512;
}

void func_672(int iParam0)//Position - 0x18B28
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738934.f_5249.f_7[iVar0]), iVar1);
}

int func_673(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x18B51
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_169(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_44(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_35(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_674(int iParam0, bool bParam1)//Position - 0x18BE9
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_675(1);
	}
	else
	{
		iVar1 = func_675(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_675(bool bParam0)//Position - 0x18C1B
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12843 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_676()//Position - 0x18C41
{
	return Global_262145.f_12842 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_677()//Position - 0x18C50
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

bool func_678()//Position - 0x18C65
{
	return func_79(PLAYER::PLAYER_ID());
}

void func_679()//Position - 0x18C75
{
	Global_2698052 = 1;
}

void func_680(bool bParam0)//Position - 0x18C82
{
	if (bParam0)
	{
		if (func_227(1))
		{
			MISC::SET_BIT(&Global_1836984, 1);
		}
	}
	else if (func_227(2))
	{
		MISC::SET_BIT(&Global_1836984, 2);
	}
}

void func_681(float fParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18CB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_560, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_11900 /* Tunable: PARTICIPATION_T_CAP */)
	{
		iVar0 = Global_262145.f_11900 /* Tunable: PARTICIPATION_T_CAP */;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_694() * iVar0);
	*uParam2 = (func_693() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_11659 /* Tunable: KING_OF_THE_CASTLE_EVENT_TIME_LIMIT */ / 60) / 1000);
		if (iVar1 > func_692())
		{
			iVar1 = func_692();
		}
		iVar2 = iLocal_559;
		if (iVar2 > func_691())
		{
			iVar2 = func_691();
		}
		*uParam1 = SYSTEM::ROUND((IntToFloat(func_684(func_690(), func_689(), iVar1, fParam0, func_688(), func_687(), func_686(), iVar2)) * Global_262145.f_11927 /* Tunable: KING_OF_THE_CASTLE_EVENT_MULTIPLIER_CASH */));
		*uParam2 = (*uParam2 + SYSTEM::ROUND((IntToFloat(func_684(func_683(), func_682(), iVar1, fParam0, func_688(), func_687(), func_686(), iVar2)) * Global_262145.f_11928 /* Tunable: KING_OF_THE_CASTLE_EVENT_MULTIPLIER_RP */)));
	}
}

int func_682()//Position - 0x18D9D
{
	return Global_262145.f_11474 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_SCALE */;
}

int func_683()//Position - 0x18DAC
{
	return Global_262145.f_11476 /* Tunable: KING_OF_THE_CASTLE_RP_REWARD_BASE */;
}

int func_684(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x18DBB
{
	return func_685(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_685(int iParam0, int iParam1, int iParam2)//Position - 0x18DEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_686()//Position - 0x18E34
{
	return Global_262145.f_11483 /* Tunable: KING_OF_THE_CASTLE_REWARD_PLAYER_DIVIDER */;
}

float func_687()//Position - 0x18E43
{
	return Global_262145.f_11482 /* Tunable: KING_OF_THE_CASTLE_REWARD_PLAYER_WEIGHTING */;
}

float func_688()//Position - 0x18E52
{
	return Global_262145.f_11481 /* Tunable: KING_OF_THE_CASTLE_REWARD_TIME_WEIGHTING */;
}

int func_689()//Position - 0x18E61
{
	return Global_262145.f_11473 /* Tunable: KING_OF_THE_CASTLE_CASH_REWARD_SCALE */;
}

int func_690()//Position - 0x18E70
{
	return Global_262145.f_11475 /* Tunable: KING_OF_THE_CASTLE_CASH_REWARD_BASE */;
}

int func_691()//Position - 0x18E7F
{
	return Global_262145.f_11815 /* Tunable: KING_OF_THE_CASTLE_P_CAP */;
}

int func_692()//Position - 0x18E8E
{
	return Global_262145.f_11814 /* Tunable: KING_OF_THE_CASTLE_T_CAP */;
}

int func_693()//Position - 0x18E9D
{
	return Global_262145.f_11472 /* Tunable: KING_OF_THE_CASTLE_EOM_DEFAULT_RP_REWARD */;
}

int func_694()//Position - 0x18EAC
{
	return Global_262145.f_11471 /* Tunable: KING_OF_THE_CASTLE_EOM_DEFAULT_CASH_REWARD */;
}

float func_695(int iParam0)//Position - 0x18EBB
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11484 /* Tunable: KING_OF_THE_CASTLE_MODIFIER_IN_PLACE_1 */;
		
		case 1:
			return Global_262145.f_11485 /* Tunable: KING_OF_THE_CASTLE_MODIFIER_IN_PLACE_2 */;
		
		case 2:
			return Global_262145.f_11486 /* Tunable: KING_OF_THE_CASTLE_MODIFIER_IN_PLACE_3 */;
		
		default:
	}
	return 0f;
}

int func_696(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x18EFB
{
	if (func_32(PLAYER::PLAYER_ID(), 0) || func_438(PLAYER::PLAYER_ID(), 0))
	{
		if (func_31(PLAYER::PLAYER_ID()) || func_113(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_698(sParam3, sParam4, 1);
		}
		if (func_283(26, -1))
		{
			func_314(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1836959.f_18)))
	{
		if (!func_5(&(Global_1836959.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1836959.f_18));
	}
	if (func_697())
	{
		if (bParam2)
		{
			func_698(sParam3, sParam4, 0);
		}
		if (func_283(26, -1))
		{
			func_314(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_698(sParam3, sParam4, 1);
		}
		if (func_283(26, -1))
		{
			func_314(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_697()//Position - 0x18FF2
{
	return BitTest(Global_1836959.f_1, 0);
}

void func_698(char* sParam0, char* sParam1, bool bParam2)//Position - 0x19002
{
	if ((!BitTest(Global_1836959.f_1, 2) && !func_242(PLAYER::PLAYER_ID())) && !func_273(PLAYER::PLAYER_ID()))
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
		func_216(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836959.f_1), 2);
	}
}

int func_699()//Position - 0x19079
{
	return Local_98.f_1;
}

void func_700()//Position - 0x19085
{
	if (BitTest(Global_1836959.f_1, 6))
	{
		func_720();
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 6);
	}
	if (!BitTest(Global_1836959.f_1, 7))
	{
		if (BitTest(Global_1836959.f_1, 4) || BitTest(Global_1836959.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_253()) && func_788(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836959.f_1), 7);
				func_252("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_251(1);
			}
		}
		else if (BitTest(Global_1836959.f_1, 17))
		{
			if (func_135() && !func_134())
			{
				MISC::CLEAR_BIT(&(Global_1836959.f_1), 17);
				MISC::SET_BIT(&(Global_1836959.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836959.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738934.f_868, 2)) && func_788(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76498) && !Global_61347) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_718())
			{
				func_252("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_118(PLAYER::PLAYER_ID()) != 200)
				{
					func_251(1);
				}
				MISC::SET_BIT(&(Global_1836959.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_234(PLAYER::PLAYER_ID()))
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
	if (BitTest(Global_1836959.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_253()) && func_788(PLAYER::PLAYER_ID(), 1, 1)) && !func_133(PLAYER::PLAYER_ID(), 21)) && !func_133(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836959.f_1), 9);
			func_717(0);
			func_252("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_251(1);
		}
	}
	if (func_361(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836959.f_1, 18))
		{
			if ((func_133(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836959.f_1, 20)) && !BitTest(Global_1836959.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836959.f_1), 18);
			}
		}
		else if (BitTest(Global_1836959.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_253()) && func_788(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_716())
			{
				MISC::CLEAR_BIT(&(Global_1836959.f_1), 18);
				MISC::SET_BIT(&(Global_1836959.f_1), 19);
				func_252("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_251(1);
			}
		}
	}
	if (((((func_361(PLAYER::PLAYER_ID()) && !func_242(PLAYER::PLAYER_ID())) && func_274(PLAYER::PLAYER_ID()) != 146) && !func_273(PLAYER::PLAYER_ID())) && !func_132(PLAYER::PLAYER_ID())) && !func_710())
	{
		if (func_233(func_274(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836959.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836959.f_1), 22);
		}
		if (func_114(PLAYER::PLAYER_ID()) || func_222())
		{
			if (!BitTest(Global_1836959.f_1, 10))
			{
				if (func_708(func_274(PLAYER::PLAYER_ID())))
				{
					if (func_227(0) && !Global_4594767)
					{
						MISC::SET_BIT(&(Global_1836959.f_1), 9);
					}
					if (!Global_4594767)
					{
						func_231(1);
						MISC::SET_BIT(&(Global_1836959.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836959.f_1), 10);
			}
		}
		if (func_234(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836959.f_1, 11))
			{
				if (!Global_101585.f_8)
				{
					MISC::SET_BIT(&(Global_1836959.f_1), 12);
					func_225(1);
				}
				if (!func_707())
				{
					MISC::SET_BIT(&(Global_1836959.f_1), 13);
					func_224();
				}
				if (!Global_4594767)
				{
					MISC::SET_BIT(&(Global_1836959.f_1), 14);
					if (func_227(0) && !Global_4594767)
					{
						MISC::SET_BIT(&(Global_1836959.f_1), 9);
					}
					func_231(1);
				}
				MISC::SET_BIT(&(Global_1836959.f_1), 11);
			}
		}
		else
		{
			func_705(0);
		}
	}
	else
	{
		func_705(1);
	}
	func_701();
	if (func_221(func_274(PLAYER::PLAYER_ID())) && !BitTest(Global_1836959.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836959.f_1), 21);
	}
	if (((func_135() && !func_134()) || func_133(PLAYER::PLAYER_ID(), 21)) || func_133(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 10);
	}
}

void func_701()//Position - 0x1958C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_253())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_215(iVar2))
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
				if (BitTest(Global_1836959.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836959.f_1), 26);
				}
				func_702(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836959.f_1, 26))
	{
		func_3(&(Global_1836959.f_22));
		MISC::SET_BIT(&(Global_1836959.f_1), 26);
	}
}

void func_702(int iParam0, int iParam1)//Position - 0x19629
{
	if (!func_18(&(Global_1836959.f_22)))
	{
		func_11(&(Global_1836959.f_22), 0, 0);
	}
	else if (func_5(&(Global_1836959.f_22), iParam1, 0))
	{
		if (func_503() > 0)
		{
			func_248(iParam0);
			if (func_250("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_3(&(Global_1836959.f_22));
		}
	}
	else
	{
		func_704(0);
		func_703();
	}
}

void func_703()//Position - 0x19692
{
	Global_2738934.f_4651 = 0;
}

void func_704(int iParam0)//Position - 0x196A2
{
	Global_1668667.f_68 = iParam0;
}

void func_705(int iParam0)//Position - 0x196B2
{
	if ((BitTest(Global_1836959.f_1, 11) || (BitTest(Global_1836959.f_1, 10) && iParam0)) || (BitTest(Global_1836959.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836959.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836959.f_1), 12);
			func_225(0);
		}
		if (BitTest(Global_1836959.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836959.f_1), 13);
			func_706();
		}
		if (BitTest(Global_1836959.f_1, 14) && !func_32(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836959.f_1), 14);
			func_231(0);
		}
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 22);
	}
}

void func_706()//Position - 0x1977B
{
	MISC::CLEAR_BIT(&(Global_2738934.f_5084), 0);
}

bool func_707()//Position - 0x1978F
{
	return BitTest(Global_2738934.f_5084, 0);
}

int func_708(int iParam0)//Position - 0x197A0
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
			return func_234(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_222() || func_709(func_152()));
		
		default:
	}
	return 0;
}

int func_709(int iParam0)//Position - 0x19810
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

int func_710()//Position - 0x19848
{
	if (((((((((func_337() || func_336()) || func_335()) || func_142()) || (func_332() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_713() && !func_712())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_711() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_711()//Position - 0x198DC
{
	return Global_1057440;
}

bool func_712()//Position - 0x198E8
{
	return BitTest(Global_2684504.f_2, 27);
}

int func_713()//Position - 0x198F9
{
	if (func_715() || func_714())
	{
		return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 == 8;
	}
	return 0;
}

var func_714()//Position - 0x19926
{
	return Global_2684504.f_737;
}

var func_715()//Position - 0x19935
{
	return BitTest(Global_2684504.f_2, 11);
}

bool func_716()//Position - 0x19946
{
	return Global_2738934.f_5179 != -1;
}

void func_717(int iParam0)//Position - 0x19957
{
	int iVar0;
	
	iVar0 = func_228(2537, -1);
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
	func_286(2537, iVar0, -1, 1);
}

int func_718()//Position - 0x19A69
{
	int iVar0;
	
	if (!func_18(&(Global_1836959.f_15)))
	{
		func_11(&(Global_1836959.f_15), 0, 0);
		Global_1836959.f_17 = 0;
	}
	else if (func_5(&(Global_1836959.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836959.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836959.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_788(iVar0, 1, 1) && func_719(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_637(PLAYER::PLAYER_ID()), func_637(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836959.f_17++;
		if (Global_1836959.f_17 >= 32)
		{
			Global_1836959.f_17 = 0;
			func_3(&(Global_1836959.f_15));
		}
	}
	return 0;
}

int func_719(int iParam0, int iParam1)//Position - 0x19B31
{
	int iVar0;
	
	if (func_238() != 0)
	{
		return 0;
	}
	if (!func_630(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845281[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_720()//Position - 0x19B6A
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_377();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836959.f_1), 8);
}

var func_721()//Position - 0x19B8C
{
	if (ENTITY::DOES_ENTITY_EXIST(func_722()))
	{
		return func_722();
	}
	return func_207();
}

var func_722()//Position - 0x19BAA
{
	return Global_2621446.f_3;
}

bool func_723()//Position - 0x19BB8
{
	return BitTest(Global_2621446, 11);
}

var func_724()//Position - 0x19BC7
{
	return BitTest(Global_2621446, 4);
}

int func_725(int iParam0)//Position - 0x19BD5
{
	if (func_38(iParam0, 0))
	{
		return 1;
	}
	if (func_726())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_726()//Position - 0x19C14
{
	return BitTest(Global_2621446, 3);
}

bool func_727()//Position - 0x19C22
{
	return Global_1836959.f_24;
}

int func_728()//Position - 0x19C30
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2738934.f_5081)
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_18(&(Local_98.f_1.f_1)))
	{
		iVar0 = func_729(&iVar2, &(Local_98.f_1.f_1));
		iVar1 = Global_262145.f_11659 /* Tunable: KING_OF_THE_CASTLE_EVENT_TIME_LIMIT */;
	}
	else if (func_18(&(Local_98.f_1.f_3)))
	{
		iVar0 = func_729(&iVar2, &(Local_98.f_1.f_3));
		iVar1 = Global_262145.f_11660 /* Tunable: KING_OF_THE_CASTLE_EVENT_EXPIRY_TIME */;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_729(int iParam0, var uParam1)//Position - 0x19CB3
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

bool func_730(int iParam0)//Position - 0x19CC9
{
	return !func_731(iParam0);
}

int func_731(int iParam0)//Position - 0x19CD8
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7192 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7193 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7194 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7195 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_732(4))
			{
				return 0;
			}
			if (func_133(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_732(bool bParam0)//Position - 0x1A00C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_788(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657971[iVar0 /*465*/].f_219, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_733()//Position - 0x1A04F
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_736())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734(159))
	{
		if (!func_337())
		{
			return 1;
		}
	}
	if (func_734(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_236() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_236()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_734(int iParam0)//Position - 0x1A0D3
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_735()//Position - 0x1A0EA
{
	return Global_2696172;
}

bool func_736()//Position - 0x1A0F6
{
	return Global_2684504.f_695;
}

void func_737()//Position - 0x1A105
{
	SYSTEM::WAIT(0);
}

void func_738()//Position - 0x1A112
{
	int iVar0;
	
	func_214();
	func_771(141);
	func_749(141, 0, BitTest(bLocal_557, 5));
	func_322();
	func_254(0);
	if (BitTest(bLocal_557, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&bLocal_557, 16);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_85();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_746(iVar0);
		iVar0++;
	}
	func_372();
	func_744();
	func_743(0);
	func_246(29, 0);
	if (func_733())
	{
		Local_382.f_5 = 5;
	}
	else if (BitTest(bLocal_557, 24))
	{
		Local_382.f_5 = 6;
	}
	else if (Local_382.f_5 != 1)
	{
		Local_382.f_5 = 2;
	}
	Local_382.f_0 = Local_98.f_214;
	Local_382.f_1 = Local_98.f_215;
	Local_382.f_4 = Local_98.f_216;
	Local_382.f_3 = iLocal_559;
	Local_382.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_382.f_9);
	if (!Global_262145.f_11869 /* Tunable: KING_OF_THE_CASTLE_DISABLE_SHARE_CASH */)
	{
		if (Local_382.f_6 > 0)
		{
			if (Local_382.f_5 == 1)
			{
				func_742();
			}
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_740(Local_382, iLocal_395, iLocal_3197, iLocal_3196, func_82(func_144(0, NETWORK::PARTICIPANT_ID_TO_INT())), -1, -1);
	}
	func_739();
}

void func_739()//Position - 0x1A238
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_740(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)//Position - 0x1A244
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
	if (Global_79389)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_741()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			Var14.f_15 = uParam15;
			Var14.f_16 = iParam16;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var31 = { Param0 };
			Var31.f_12 = uParam12;
			Var31.f_13 = iParam13;
			Var31.f_14 = iParam14;
			Var31.f_15 = uParam15;
			Var31.f_16 = iParam16;
			Var31.f_17 = iParam17;
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

char* func_741()//Position - 0x1A4CB
{
	switch (Global_2698864)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_742()//Position - 0x1A4ED
{
	MISC::SET_BIT(&(Global_2738934.f_1849), 18);
}

void func_743(bool bParam0)//Position - 0x1A502
{
	if (bParam0)
	{
		if (!BitTest(Global_2738934.f_1849, 9))
		{
			MISC::SET_BIT(&(Global_2738934.f_1849), 9);
		}
	}
	else if (BitTest(Global_2738934.f_1849, 9))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_1849), 9);
	}
}

void func_744()//Position - 0x1A547
{
	if (Global_2644881.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_745();
	}
}

void func_745()//Position - 0x1A560
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644881.f_6))
	{
		if (!Global_2644881.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644881 = { Var0 };
	Global_2644881.f_6 = -1;
}

void func_746(int iParam0)//Position - 0x1A5BD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_748(iParam0))
	{
		func_747(iVar0);
		iVar0++;
	}
	func_372();
	func_744();
	func_381(func_382(iParam0), 0, 0);
}

void func_747(int iParam0)//Position - 0x1A5F6
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2635563.f_368[iParam0 /*12*/].f_9)
		{
			Global_2635563.f_368[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_748(int iParam0)//Position - 0x1A638
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_749(int iParam0, bool bParam1, int iParam2)//Position - 0x1A698
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (iParam0 == 133)
	{
		func_769(79, 1);
	}
	else
	{
		func_769(80, 1);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 13);
		}
		if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836959.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836959.f_1), 21);
	}
	func_765();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_764(func_274(PLAYER::PLAYER_ID()));
		func_246(func_247(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && func_763(PLAYER::PLAYER_ID()) >= 12)
		{
			func_762(2549, -1);
			iVar1 = func_228(2549, -1);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836985, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836985, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836985, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836985, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836985, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836985, 5);
			}
		}
		func_761();
		func_760();
		func_759();
		if ((!func_31(PLAYER::PLAYER_ID()) && !func_29(PLAYER::PLAYER_ID())) && !func_119())
		{
			func_368();
		}
		func_758();
		if (!BitTest(Global_1941104.f_3, 0) && !BitTest(Global_1941104.f_3, 1))
		{
			func_720();
		}
		func_757();
		MISC::CLEAR_BIT(&(Global_2738934.f_1863), 2);
		func_756();
		func_755();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_133(PLAYER::PLAYER_ID(), 21)) && !func_133(PLAYER::PLAYER_ID(), 25)) && !func_32(PLAYER::PLAYER_ID(), 0))
		{
			func_231(0);
			func_225(0);
			if (!bParam1)
			{
				func_754();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_283(26, -1))
		{
			Global_2698685 = -1;
			func_314(26, -1);
		}
	}
	if (!func_750())
	{
		Global_2707198 = 1;
	}
}

int func_750()//Position - 0x1A90C
{
	if (((((((!func_483(PLAYER::PLAYER_ID()) && !func_464(PLAYER::PLAYER_ID())) && func_274(PLAYER::PLAYER_ID()) != 146) && !func_753()) && !func_752()) && !func_751(Global_4718592.f_185586)) && !func_202()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_751(int iParam0)//Position - 0x1A987
{
	return iParam0 == 57;
}

int func_752()//Position - 0x1A994
{
	if (Global_4718592.f_127178 == Global_262145.f_10088 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_753()//Position - 0x1A9B5
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_185586 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_754()//Position - 0x1AA4D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4544411[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4544411[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4544411[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_755()//Position - 0x1AA9D
{
	Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_7 = 0;
}

void func_756()//Position - 0x1AAB3
{
	if (BitTest(Global_2738934.f_5083, 1))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_5083), 1);
	}
	if (Global_2738934.f_5083 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2738934.f_5083 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2738934.f_5093 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738934.f_5093);
				Global_2738934.f_5093 = -1;
			}
		}
	}
}

void func_757()//Position - 0x1AB4E
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836959 = { Var0 };
}

void func_758()//Position - 0x1AB7D
{
	var uVar0;
	
	Global_1582002 = uVar0;
}

void func_759()//Position - 0x1AB8B
{
	Global_2738934.f_5084 = 0;
}

void func_760()//Position - 0x1AB9B
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1 = 0;
	}
}

void func_761()//Position - 0x1ABB9
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1887305[iVar0 /*610*/] = -1;
	}
}

void func_762(int iParam0, int iParam1)//Position - 0x1ABD7
{
	int iVar0;
	
	iVar0 = func_228(iParam0, func_230(iParam1));
	iVar0++;
	func_286(iParam0, iVar0, iParam1, 1);
}

int func_763(int iParam0)//Position - 0x1ABFE
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

int func_764(int iParam0)//Position - 0x1AC13
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
			if (func_234(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_765()//Position - 0x1AC75
{
	if (BitTest(Global_2738934.f_1850, 3) || BitTest(Global_2738934.f_1850, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2738934.f_1850, 5))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_1850), 5);
	}
	if (BitTest(Global_2738934.f_1850, 3))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_1850), 3);
	}
	if (BitTest(Global_2738934.f_1850, 4))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_1850), 4);
	}
	func_768(0);
	func_767(0);
	func_766(0);
}

void func_766(int iParam0)//Position - 0x1AD07
{
	if (Global_2738934.f_4639 != iParam0)
	{
		Global_2738934.f_4639 = iParam0;
	}
}

void func_767(bool bParam0)//Position - 0x1AD24
{
	if (Global_2738934.f_4638 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2738934.f_4638 = bParam0;
	}
}

void func_768(int iParam0)//Position - 0x1AD49
{
	if (Global_2738934.f_4636 != iParam0)
	{
		Global_2738934.f_4636 = iParam0;
	}
}

void func_769(int iParam0, int iParam1)//Position - 0x1AD66
{
	int iVar0;
	
	if (!func_770())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2737992[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574749.f_4[iVar0] == -1)
			{
				Global_1574749.f_4[iVar0] = iParam0;
				Global_1574749.f_1 = 1;
				Global_1574749 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_770()//Position - 0x1ADC2
{
	if (Global_262145.f_34959 /* Tunable: 511978708 */)
	{
		return 1;
	}
	return 0;
}

void func_771(int iParam0)//Position - 0x1ADDC
{
	if (iParam0 == iParam0)
	{
	}
}

void func_772(struct<21> Param0)//Position - 0x1ADEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_786(Param0.f_0);
	func_785(iVar3, Param0);
	func_784(0, -1, 0);
	func_782(141);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_98, 284, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_396, 161, 0);
	if (!func_781())
	{
		func_738();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_246(29, 1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = func_777();
			func_774(func_776(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_773(iVar1, iVar0);
				iVar1++;
			}
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_98.f_214), &(Local_98.f_215));
		}
		Local_382.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_382.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Local_382.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_98.f_250[iVar2] = -1;
			iVar2++;
		}
		func_533(0);
	}
	else
	{
		func_738();
	}
}

void func_773(int iParam0, int iParam1)//Position - 0x1AECC
{
	Local_98.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_774(int iParam0)//Position - 0x1AEE0
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	iVar4 = func_775(1, 1);
	if (!iVar4 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

var func_775(int iParam0, bool bParam1)//Position - 0x1AF1C
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_788(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_38(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_776(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AF81
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
	if (func_223(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

var func_777()//Position - 0x1B7FB
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_780(iVar10) && !func_778(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
	return uVar11;
}

int func_778(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B851
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_779(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8638 /* Tunable: NUMBER_OF_SCRIPTS_IN_LAUNCH_HISTORY_LIST */)
		{
			if (Global_2699171.f_136[iVar0 /*2*/] == iVar1 && Global_2699171.f_136[iVar0 /*2*/].f_1 == func_776(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_779(int iParam0)//Position - 0x1B8D6
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_780(int iParam0)//Position - 0x1B975
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11665 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_1 */)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_11666 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_2 */)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_11667 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_3 */)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_11668 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_4 */)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_11669 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_5 */)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_11670 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_6 */)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_11671 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_7 */)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_11672 /* Tunable: KING_OF_THE_CASTLE_DISABLE_VARIANT_8 */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_781()//Position - 0x1BA3D
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
		if (func_736())
		{
			return 0;
		}
		if (func_734(157))
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

void func_782(int iParam0)//Position - 0x1BA96
{
	func_757();
	func_783();
	func_759();
	Global_1836959.f_4 = iParam0;
	Global_1836959.f_5 = iParam0;
	func_243(iParam0, -1);
	func_271(&(Global_1836959.f_18), 0, 0);
	Global_2738934.f_4709 = 0;
	Global_2697542[0] = func_26();
	Global_2697542[1] = func_26();
	Global_2697542[2] = func_26();
	Global_2697542[3] = func_26();
	Global_2697542[4] = func_26();
	func_755();
	if (!func_348(func_349()))
	{
		func_454();
	}
	if (func_135() && !func_134())
	{
		MISC::SET_BIT(&(Global_1836959.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836959.f_1), 17);
	}
}

void func_783()//Position - 0x1BB4C
{
	var uVar0;
	
	Global_1836984 = uVar0;
}

int func_784(int iParam0, int iParam1, bool bParam2)//Position - 0x1BB5A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_739();
			}
			else
			{
				return 0;
			}
		}
		if (!func_104(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_739();
					}
					else
					{
						return 0;
					}
				}
				if (func_736())
				{
					if (!bParam2)
					{
						func_739();
					}
					else
					{
						return 0;
					}
				}
				if (func_734(157))
				{
					if (!bParam2)
					{
						func_739();
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
					func_739();
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
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_739();
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
			func_739();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_785(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1BC70
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_739();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_786(int iParam0)//Position - 0x1BC8F
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
		
		case 197:
			return 32;
		
		case 198:
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
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_223(func_787(iParam0, 1)))
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

int func_787(int iParam0, bool bParam1)//Position - 0x1C78E
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
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
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

int func_788(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1CE71
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

