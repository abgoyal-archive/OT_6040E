#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif
  

#define BYD_Q_MAX_POS_50	1990
#define BYD_Q_MAX_POS_25	2005
#define BYD_Q_MAX_POS_0		1823
#define BYD_Q_MAX_NEG_10	1634

#define BYD_Q_MAX_POS_50_H_CURRENT	1974
#define BYD_Q_MAX_POS_25_H_CURRENT	1983
#define BYD_Q_MAX_POS_0_H_CURRENT	  1764
#define BYD_Q_MAX_NEG_10_H_CURRENT	1304  

#define SCUD_Q_MAX_POS_50	2027
#define SCUD_Q_MAX_POS_25	2003
#define SCUD_Q_MAX_POS_0		1822
#define SCUD_Q_MAX_NEG_10	1383

#define SCUD_Q_MAX_POS_50_H_CURRENT	2004
#define SCUD_Q_MAX_POS_25_H_CURRENT	1965
#define SCUD_Q_MAX_POS_0_H_CURRENT	  1479
#define SCUD_Q_MAX_NEG_10_H_CURRENT	741

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			77 //1.00

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;


 //BYD          
// T0 -10C
BATTERY_PROFILE_STRUC byd_battery_profile_t0[] =
{
	{0    , 4320},         
	{2    , 4297},         
	{4    , 4277},         
	{6    , 4257},         
	{7    , 4238},         
	{9    , 4217},         
	{11   , 4189},         
	{13   , 4157},         
	{15   , 4128},         
	{16   , 4103},         
	{18   , 4082},         
	{20   , 4062},         
	{22   , 4041},         
	{24   , 4019},         
	{26   , 3998},         
	{27   , 3980},         
	{29   , 3962},         
	{31   , 3946},         
	{33   , 3930},         
	{35   , 3917},         
	{37   , 3904},         
	{38   , 3893},         
	{40   , 3882},         
	{42   , 3872},         
	{44   , 3863},         
	{46   , 3855},         
	{47   , 3846},         
	{49   , 3839},         
	{51   , 3831},         
	{53   , 3824},         
	{55   , 3818},         
	{57   , 3811},         
	{58   , 3805},         
	{60   , 3800},         
	{62   , 3794},         
	{64   , 3789},         
	{66   , 3784},         
	{68   , 3778},         
	{69   , 3774},         
	{71   , 3770},         
	{73   , 3765},         
	{75   , 3760},         
	{77   , 3753},         
	{79   , 3746},         
	{80   , 3737},         
	{82   , 3729},         
	{84   , 3720},         
	{86   , 3714},         
	{88   , 3707},         
	{89   , 3703},         
	{91   , 3698},         
	{93   , 3693},         
	{95   , 3685},         
	{97   , 3675},         
	{98   , 3661},         
	{99   , 3645},         
	{99   , 3630},         
	{100  , 3400},         
	{100  , 3400},         
	{100  , 3400},         
	{100  , 3400},          
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
  {100  , 3400},
	{100  , 3400}, 
	{100  , 3400},
	{100  , 3400},
	{100  , 3400},
	{100  , 3400}
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC byd_battery_profile_t1[] =
{              
	{0   , 4323},
	{2   , 4277},
	{3   , 4237},
	{5   , 4209},
	{7   , 4189},
	{8   , 4170},
	{10  , 4153},
	{12  , 4136},
	{13  , 4120},
	{15  , 4104},
	{16  , 4089},
	{18  , 4075},
	{20  , 4060},
	{21  , 4044},
	{23  , 4026},
	{25  , 4010},
	{26  , 3994},
	{28  , 3978},
	{30  , 3964},
	{31  , 3948},
	{33  , 3933},
	{35  , 3919},
	{36  , 3905},
	{38  , 3893},
	{40  , 3881},
	{41  , 3872},
	{43  , 3863},
	{44  , 3854},
	{46  , 3847},
	{48  , 3840},
	{49  , 3832},
	{51  , 3826},
	{53  , 3820},
	{54  , 3815},
	{56  , 3810},
	{58  , 3805},
	{59  , 3800},
	{61  , 3796},
	{63  , 3792},
	{64  , 3788},
	{66  , 3784},
	{68  , 3780},
	{69  , 3776},
	{71  , 3772},
	{72  , 3768},
	{74  , 3761},
	{76  , 3756},
	{77  , 3749},
	{79  , 3740},
	{81  , 3730},
	{82  , 3719},
	{84  , 3706},
	{86  , 3700},
	{87  , 3695},
	{89  , 3692},
	{91  , 3690},
	{92  , 3687},
	{94  , 3676},
	{96  , 3640},
	{97  , 3587},
	{99  , 3493},
  {100 , 3423},
  {100 , 3393},
  {100 , 3376},
  {100 , 3362},
  {100 , 3354},
  {100 , 3354},
  {100 , 3354},
  {100 , 3354},
  {100 , 3354},
	{100 , 3354},
	{100 , 3354},
	{100 , 3354},
	{100 , 3354},
	{100 , 3354}
};             


// T2 25C
BATTERY_PROFILE_STRUC byd_battery_profile_t2[] =
{              
	{0   , 4337},
	{1   , 4317},
	{3   , 4299},
	{4   , 4281},
	{6   , 4264},
	{7   , 4247},
	{9   , 4230},
	{10  , 4212},
	{12  , 4196},
	{13  , 4180},
	{15  , 4163},
	{16  , 4147},
	{18  , 4132},
	{19  , 4116},
	{21  , 4100},
	{22  , 4086},
	{24  , 4071},
	{25  , 4057},
	{27  , 4042},
	{28  , 4027},
	{30  , 4012},
	{31  , 3999},
	{33  , 3985},
	{34  , 3972},
	{36  , 3958},
	{37  , 3944},
	{39  , 3929},
	{40  , 3914},
	{42  , 3900},
	{43  , 3888},
	{45  , 3877},
	{46  , 3866},
	{48  , 3857},
	{49  , 3849},
	{51  , 3841},
	{52  , 3834},
	{54  , 3828},
	{55  , 3822},
	{57  , 3816},
	{58  , 3809},
	{60  , 3804},
	{61  , 3800},
	{63  , 3795},
	{64  , 3791},
	{66  , 3786},
	{67  , 3783},
	{69  , 3779},
	{70  , 3775},
	{72  , 3772},
	{73  , 3768},
	{75  , 3763},
	{76  , 3756},
	{78  , 3749},
	{79  , 3743},
	{81  , 3737},
	{82  , 3726},
	{84  , 3716},
	{85  , 3705},
	{87  , 3692},
	{88  , 3689},
	{90  , 3686},
  {91  , 3685},
  {93  , 3683},
  {94  , 3679},
  {96  , 3663},
  {97  , 3605},
  {99  , 3516},
  {100 , 3366},
  {100 , 3305},
  {100 , 3305},
	{100 , 3305},
	{100 , 3305},
	{100 , 3305},
	{100 , 3305},
	{100 , 3305}
};             


// T3 50C
BATTERY_PROFILE_STRUC byd_battery_profile_t3[] =
{              
	{0   , 4335},
	{2   , 4318},
	{3   , 4300},
	{5   , 4283},
	{6   , 4266},
	{7   , 4249},
	{9   , 4232},
	{11  , 4216},
	{12  , 4199},
	{14  , 4183},
	{15  , 4166},
	{16  , 4149},
	{18  , 4133},
	{19  , 4118},
	{21  , 4102},
	{23  , 4087},
	{24  , 4072},
	{25  , 4058},
	{27  , 4043},
	{28  , 4030},
	{30  , 4016},
	{32  , 4003},
	{33  , 3989},
	{34  , 3975},
	{36  , 3962},
	{37  , 3948},
	{39  , 3934},
	{41  , 3920},
	{42  , 3905},
	{44  , 3891},
	{45  , 3880},
	{46  , 3869},
	{48  , 3860},
	{49  , 3852},
	{51  , 3843},
	{53  , 3836},
	{54  , 3829},
	{55  , 3822},
	{57  , 3816},
	{58  , 3810},
	{60  , 3805},
	{62  , 3799},
	{63  , 3794},
	{64  , 3790},
	{66  , 3785},
	{67  , 3780},
	{69  , 3773},
	{71  , 3765},
	{72  , 3758},
	{73  , 3753},
	{75  , 3747},
	{76  , 3741},
	{78  , 3734},
	{79  , 3728},
	{81  , 3722},
	{83  , 3713},
	{84  , 3702},
	{85  , 3691},
	{87  , 3677},
	{88  , 3674},
	{90  , 3672},
  {92  , 3671},
  {93  , 3669},
  {94  , 3665},
  {96  , 3645},
  {97  , 3589},
  {99  , 3500},
  {100 , 3351},
  {100 , 3280},
  {100 , 3280},
	{100 , 3280},
	{100 , 3280},
	{100 , 3280},
	{100 , 3280},
	{100 , 3280}
};           
//SCUD
// T0 -10C
BATTERY_PROFILE_STRUC scud_battery_profile_t0[] =
{
	{0   , 4289},         
	{2   , 4261},         
	{4   , 4236},         
	{7   , 4208},         
	{9   , 4182},         
	{11  , 4157},         
	{13  , 4134},         
	{15  , 4115},         
	{17  , 4098},         
	{20  , 4084},         
	{22  , 4068},         
	{24  , 4049},         
	{26  , 4029},         
	{28  , 4011},         
	{30  , 3994},         
	{33  , 3979},         
	{35  , 3965},         
	{37  , 3951},         
	{39  , 3937},         
	{41  , 3923},         
	{43  , 3910},         
	{46  , 3898},         
	{48  , 3886},         
	{50  , 3874},         
	{52  , 3865},         
	{54  , 3856},         
	{56  , 3848},         
	{59  , 3840},         
	{61  , 3833},         
	{63  , 3827},         
	{65  , 3820},         
	{67  , 3815},         
	{69  , 3809},         
	{72  , 3804},         
	{74  , 3799},         
	{76  , 3795},         
	{78  , 3792},         
	{80  , 3788},         
	{83  , 3786},         
	{85  , 3784},         
	{87  , 3780},         
	{89  , 3777},         
	{91  , 3772},         
	{93  , 3770},         
	{94  , 3769},         
	{95  , 3768},         
	{96  , 3766},         
	{96  , 3766},         
	{97  , 3766},         
	{97  , 3764},         
	{98  , 3763},         
	{98  , 3763},         
	{99  , 3762},         
	{99  , 3761},         
	{99  , 3760},         
	{100 , 3760},         
	{100 , 3759},         
	{100 , 3400},         
	{100 , 3400},         
	{100 , 3400},         
	{100 , 3400},          
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
  {100 , 3400},
	{100 , 3400}, 
	{100 , 3400},
	{100 , 3400},
	{100 , 3400},
	{100 , 3400}
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC scud_battery_profile_t1[] =
{              
	{0   , 4320},
	{2   , 4285},
	{3   , 4252},
	{5   , 4226},
	{7   , 4204},
	{8   , 4185},
	{10  , 4169},
	{12  , 4152},
	{13  , 4136},
	{15  , 4120},
	{16  , 4104},
	{18  , 4092},
	{20  , 4079},
	{21  , 4064},
	{23  , 4046},
	{25  , 4028},
	{26  , 4012},
	{28  , 3997},
	{30  , 3984},
	{31  , 3971},
	{33  , 3958},
	{35  , 3944},
	{36  , 3928},
	{38  , 3913},
	{40  , 3898},
	{41  , 3885},
	{43  , 3874},
	{45  , 3864},
	{46  , 3855},
	{48  , 3848},
	{49  , 3840},
	{51  , 3833},
	{53  , 3827},
	{54  , 3821},
	{56  , 3815},
	{58  , 3810},
	{59  , 3804},
	{61  , 3800},
	{63  , 3796},
	{64  , 3791},
	{66  , 3788},
	{68  , 3785},
	{69  , 3783},
	{71  , 3781},
	{73  , 3778},
	{74  , 3775},
	{76  , 3771},
	{77  , 3765},
	{79  , 3759},
	{81  , 3752},
	{82  , 3743},
	{84  , 3734},
	{86  , 3723},
	{87  , 3712},
	{89  , 3705},
	{91  , 3700},
	{92  , 3697},
	{94  , 3693},
	{96  , 3689},
	{97  , 3683},
	{98  , 3675},
  {98  , 3665},
  {99  , 3656},
  {99  , 3647},
  {99  , 3640},
  {100 , 3633},
  {100 , 3625},
  {100 , 3621},
  {100 , 3400},
  {100 , 3400},
	{100 , 3400},
	{100 , 3400},
	{100 , 3400},
	{100 , 3400},
	{100 , 3400}
};             


// T2 25C
BATTERY_PROFILE_STRUC scud_battery_profile_t2[] =
{              
	{0  , 4331},
	{1  , 4310},
	{3  , 4291},
	{4  , 4274},
	{6  , 4256},
	{7  , 4239},
	{9  , 4222},
	{10 , 4205},
	{12 , 4189},
	{13 , 4173},
	{15 , 4157},
	{16 , 4141},
	{18 , 4125},
	{19 , 4110},
	{21 , 4096},
	{22 , 4083},
	{24 , 4070},
	{25 , 4053},
	{27 , 4035},
	{29 , 4020},
	{30 , 4006},
	{32 , 3993},
	{33 , 3981},
	{34 , 3971},
	{36 , 3961},
	{37 , 3949},
	{39 , 3937},
	{40 , 3921},
	{42 , 3903},
	{43 , 3886},
	{45 , 3872},
	{46 , 3862},
	{48 , 3852},
	{49 , 3844},
	{51 , 3837},
	{52 , 3831},
	{54 , 3824},
	{55 , 3818},
	{57 , 3813},
	{58 , 3808},
	{60 , 3803},
	{61 , 3798},
	{63 , 3794},
	{64 , 3790},
	{66 , 3786},
	{67 , 3782},
	{69 , 3780},
	{70 , 3777},
	{72 , 3774},
	{73 , 3771},
	{75 , 3766},
	{76 , 3760},
	{78 , 3754},
	{79 , 3747},
	{81 , 3741},
	{82 , 3731},
	{84 , 3718},
	{85 , 3704},
	{87 , 3692},
	{88 , 3688},
	{90 , 3686},
  {91 , 3684},
  {93 , 3682},
  {94 , 3677},
  {96 , 3650},
  {97 , 3586},
  {99 , 3494},
  {100, 3380},
  {100, 3358},
  {100, 3358},
	{100, 3358},
	{100, 3358},
	{100, 3358},
	{100, 3358},
	{100, 3358}
};             


// T3 50C
BATTERY_PROFILE_STRUC scud_battery_profile_t3[] =
{              
	{0   , 4340},
	{1   , 4322},
	{3   , 4305},
	{4   , 4288},
	{6   , 4271},
	{7   , 4254},
	{9   , 4237},
	{10  , 4221},
	{12  , 4204},
	{13  , 4188},
	{15  , 4171},
	{16  , 4154},
	{18  , 4139},
	{19  , 4123},
	{21  , 4107},
	{22  , 4092},
	{24  , 4077},
	{25  , 4063},
	{27  , 4050},
	{28  , 4034},
	{30  , 4020},
	{31  , 4006},
	{33  , 3994},
	{34  , 3982},
	{36  , 3971},
	{37  , 3959},
	{39  , 3948},
	{40  , 3937},
	{41  , 3924},
	{43  , 3909},
	{44  , 3891},
	{46  , 3875},
	{47  , 3863},
	{49  , 3854},
	{50  , 3846},
	{52  , 3838},
	{53  , 3831},
	{55  , 3824},
	{56  , 3818},
	{58  , 3813},
	{59  , 3807},
	{61  , 3801},
	{62  , 3797},
	{64  , 3792},
	{65  , 3788},
	{67  , 3784},
	{68  , 3780},
	{70  , 3775},
	{71  , 3767},
	{73  , 3758},
	{74  , 3754},
	{76  , 3749},
	{77  , 3743},
	{78  , 3738},
	{80  , 3731},
	{81  , 3725},
	{83  , 3717},
	{84  , 3704},
	{86  , 3691},
	{87  , 3677},
	{89  , 3674},
  {90  , 3673},
  {92  , 3670},
  {93  , 3668},
  {95  , 3661},
  {96  , 3630},
  {98  , 3568},
  {99  , 3478},
  {100 , 3330},
  {100 , 3330},
	{100 , 3330},
	{100 , 3330},
	{100 , 3330},
	{100 , 3330},
	{100 , 3330}
};             
  
// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
        {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};      

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;


//BYD
// T0 -10C
R_PROFILE_STRUC byd_r_profile_t0[] =
{              
	{360 , 4320},
	{360 , 4297},
	{368 , 4277},
	{368 , 4257},
	{370 , 4238},
	{380 , 4217},
	{405 , 4189},
	{488 , 4157},
	{568 , 4128},
	{625 , 4103},
	{680 , 4082},
	{733 , 4062},
	{765 , 4041},
	{765 , 4019},
	{760 , 3998},
	{760 , 3980},
	{753 , 3962},
	{750 , 3946},
	{748 , 3930},
	{748 , 3917},
	{748 , 3904},
	{750 , 3893},
	{750 , 3882},
	{748 , 3872},
	{750 , 3863},
	{753 , 3855},
	{750 , 3846},
	{753 , 3839},
	{753 , 3831},
	{755 , 3824},
	{758 , 3818},
	{760 , 3811},
	{758 , 3805},
	{758 , 3800},
	{758 , 3794},
	{760 , 3789},
	{758 , 3784},
	{760 , 3778},
	{763 , 3774},
	{773 , 3770},
	{783 , 3765},
	{798 , 3760},
	{813 , 3753},
	{833 , 3746},
	{858 , 3737},
	{888 , 3729},
	{918 , 3720},
	{955 , 3714},
	{993 , 3707},
	{1033, 3703},
	{1075, 3698},
	{1125, 3693},
	{1185, 3685},
	{1188, 3675},
	{1155, 3661},
	{1115, 3645},
	{1078, 3630},
	{505 , 3400},
	{505 , 3400},
	{505 , 3400},
	{505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
  {505 , 3400},
	{505 , 3400},
	{505 , 3400},
	{505 , 3400},
	{505 , 3400},
	{505 , 3400}
};             
              

// T1 0C
R_PROFILE_STRUC byd_r_profile_t1[] =
{              
	{265 , 4323},
	{265 , 4277},
	{365 , 4237},
	{420 , 4209},
	{455 , 4189},
	{465 , 4170},
	{475 , 4153},
	{478 , 4136},
	{485 , 4120},
	{485 , 4104},
	{478 , 4089},
	{475 , 4075},
	{465 , 4060},
	{460 , 4044},
	{458 , 4026},
	{458 , 4010},
	{453 , 3994},
	{443 , 3978},
	{435 , 3964},
	{415 , 3948},
	{400 , 3933},
	{385 , 3919},
	{370 , 3905},
	{365 , 3893},
	{363 , 3881},
	{363 , 3872},
	{358 , 3863},
	{355 , 3854},
	{358 , 3847},
	{358 , 3840},
	{355 , 3832},
	{355 , 3826},
	{353 , 3820},
	{355 , 3815},
	{360 , 3810},
	{363 , 3805},
	{360 , 3800},
	{358 , 3796},
	{355 , 3792},
	{353 , 3788},
	{350 , 3784},
	{348 , 3780},
	{345 , 3776},
	{343 , 3772},
	{343 , 3768},
	{335 , 3761},
	{338 , 3756},
	{338 , 3749},
	{335 , 3740},
	{335 , 3730},
	{340 , 3719},
	{335 , 3706},
	{340 , 3700},
	{348 , 3695},
	{363 , 3692},
	{385 , 3690},
	{418 , 3687},
	{445 , 3676},
	{470 , 3640},
	{515 , 3587},
	{575 , 3493},
  {560 , 3423},
  {485 , 3393},
  {440 , 3376},
  {408 , 3362},
  {388 , 3354},
  {388 , 3354},
  {388 , 3354},
  {388 , 3354},
  {388 , 3354},
	{388 , 3354},
	{388 , 3354},
	{388 , 3354},
	{388 , 3354},
	{388 , 3354}
}; 

// T2 25C
R_PROFILE_STRUC byd_r_profile_t2[] =
{              
	{208 , 4337},
	{208 , 4317},
	{213 , 4299},
	{213 , 4281},
	{218 , 4264},
	{223 , 4247},
	{225 , 4230},
	{223 , 4212},
	{225 , 4196},
	{228 , 4180},
	{228 , 4163},
	{230 , 4147},
	{235 , 4132},
	{238 , 4116},
	{235 , 4100},
	{243 , 4086},
	{245 , 4071},
	{248 , 4057},
	{250 , 4042},
	{250 , 4027},
	{253 , 4012},
	{255 , 3999},
	{255 , 3985},
	{255 , 3972},
	{253 , 3958},
	{250 , 3944},
	{243 , 3929},
	{235 , 3914},
	{230 , 3900},
	{225 , 3888},
	{223 , 3877},
	{223 , 3866},
	{220 , 3857},
	{223 , 3849},
	{220 , 3841},
	{223 , 3834},
	{225 , 3828},
	{228 , 3822},
	{228 , 3816},
	{225 , 3809},
	{228 , 3804},
	{230 , 3800},
	{230 , 3795},
	{233 , 3791},
	{230 , 3786},
	{233 , 3783},
	{230 , 3779},
	{230 , 3775},
	{230 , 3772},
	{233 , 3768},
	{228 , 3763},
	{220 , 3756},
	{218 , 3749},
	{220 , 3743},
	{223 , 3737},
	{218 , 3726},
	{220 , 3716},
	{223 , 3705},
	{218 , 3692},
	{220 , 3689},
	{220 , 3686},
  {230 , 3685},
  {243 , 3683},
  {258 , 3679},
  {265 , 3663},
  {255 , 3605},
  {273 , 3516},
  {308 , 3366},
  {268 , 3305},
  {268 , 3305},
	{268 , 3305},
	{268 , 3305},
	{268 , 3305},
	{268 , 3305},
	{268 , 3305}
};

// T3 50C
R_PROFILE_STRUC byd_r_profile_t3[] =
{              
	{105, 4335},
	{163, 4318},
	{163, 4300},
	{173, 4283},
	{170, 4266},
	{165, 4249},
	{168, 4232},
	{170, 4216},
	{170, 4199},
	{170, 4183},
	{170, 4166},
	{170, 4149},
	{173, 4133},
	{173, 4118},
	{175, 4102},
	{178, 4087},
	{180, 4072},
	{180, 4058},
	{183, 4043},
	{185, 4030},
	{188, 4016},
	{193, 4003},
	{193, 3989},
	{193, 3975},
	{193, 3962},
	{193, 3948},
	{190, 3934},
	{188, 3920},
	{178, 3905},
	{173, 3891},
	{173, 3880},
	{170, 3869},
	{168, 3860},
	{170, 3852},
	{170, 3843},
	{173, 3836},
	{173, 3829},
	{173, 3822},
	{175, 3816},
	{178, 3810},
	{180, 3805},
	{183, 3799},
	{183, 3794},
	{185, 3790},
	{185, 3785},
	{188, 3780},
	{183, 3773},
	{178, 3765},
	{175, 3758},
	{178, 3753},
	{178, 3747},
	{175, 3741},
	{173, 3734},
	{175, 3728},
	{178, 3722},
	{178, 3713},
	{173, 3702},
	{175, 3691},
	{170, 3677},
	{170, 3674},
	{173, 3672},
  {180, 3671},
  {188, 3669},
  {193, 3665},
  {188, 3645},
  {190, 3589},
  {193, 3500},
  {208, 3351},
  {205, 3280},
  {205, 3280},
	{205, 3280},
	{205, 3280},
	{205, 3280},
	{205, 3280},
	{205, 3280}
};
//SCUD
// T0 -10C
R_PROFILE_STRUC scud_r_profile_t0[] =
{              
	{518 , 4289},
	{785 , 4261},
	{805 , 4236},
	{830 , 4208},
	{870 , 4182},
	{910 , 4157},
	{940 , 4134},
	{973 , 4115},
	{995 , 4098},
	{1023, 4084},
	{1040, 4068},
	{1058, 4049},
	{1070, 4029},
	{1083, 4011},
	{1090, 3994},
	{1095, 3979},
	{1100, 3965},
	{1113, 3951},
	{1120, 3937},
	{1125, 3923},
	{1128, 3910},
	{1130, 3898},
	{1135, 3886},
	{1133, 3874},
	{1143, 3865},
	{1150, 3856},
	{1158, 3848},
	{1168, 3840},
	{1178, 3833},
	{1190, 3827},
	{1200, 3820},
	{1205, 3815},
	{1213, 3809},
	{1223, 3804},
	{1233, 3799},
	{1245, 3795},
	{1260, 3792},
	{1278, 3788},
	{1305, 3786},
	{1333, 3784},
	{1355, 3780},
	{1393, 3777},
	{1425, 3772},
	{1428, 3770},
	{1423, 3769},
	{1420, 3768},
	{1418, 3766},
	{1415, 3766},
	{1418, 3766},
	{1410, 3764},
	{1408, 3763},
	{1410, 3763},
	{1408, 3762},
	{1405, 3761},
	{1400, 3760},
	{1405, 3760},
	{1400, 3759},
	{503 , 3400},
	{503 , 3400},
	{503 , 3400},
	{503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
  {503 , 3400},
	{503 , 3400},
	{503 , 3400},
	{503 , 3400},
	{503 , 3400},
	{503 , 3400}
};             
              

// T1 0C
R_PROFILE_STRUC scud_r_profile_t1[] =
{              
	{415  , 4320},
	{415  , 4285},
	{458  , 4252},
	{500  , 4226},
	{525  , 4204},
	{533  , 4185},
	{538  , 4169},
	{540  , 4152},
	{545  , 4136},
	{548  , 4120},
	{550  , 4104},
	{563  , 4092},
	{580  , 4079},
	{593  , 4064},
	{603  , 4046},
	{608  , 4028},
	{615  , 4012},
	{620  , 3997},
	{625  , 3984},
	{630  , 3971},
	{635  , 3958},
	{633  , 3944},
	{628  , 3928},
	{620  , 3913},
	{615  , 3898},
	{613  , 3885},
	{613  , 3874},
	{618  , 3864},
	{620  , 3855},
	{628  , 3848},
	{633  , 3840},
	{638  , 3833},
	{645  , 3827},
	{650  , 3821},
	{653  , 3815},
	{663  , 3810},
	{668  , 3804},
	{675  , 3800},
	{683  , 3796},
	{688  , 3791},
	{698  , 3788},
	{710  , 3785},
	{728  , 3783},
	{750  , 3781},
	{773  , 3778},
	{798  , 3775},
	{818  , 3771},
	{835  , 3765},
	{853  , 3759},
	{870  , 3752},
	{885  , 3743},
	{900  , 3734},
	{920  , 3723},
	{930  , 3712},
	{953  , 3705},
	{985  , 3700},
	{1035 , 3697},
	{1095 , 3693},
	{1168 , 3689},
	{1210 , 3683},
	{1190 , 3675},
  {1163 , 3665},
  {1140 , 3656},
  {1118 , 3647},
  {1103 , 3640},
  {1085 , 3633},
  {1065 , 3625},
  {1055 , 3621},
  {503  , 3400},
  {503  , 3400}, 
	{503  , 3400}, 
	{503  , 3400}, 
	{503  , 3400}, 
	{503  , 3400}, 
	{503  , 3400}
}; 

// T2 25C
R_PROFILE_STRUC scud_r_profile_t2[] =
{              
	{225, 4331},
	{225, 4310},
	{233, 4291},
	{240, 4274},
	{245, 4256},
	{253, 4239},
	{258, 4222},
	{260, 4205},
	{268, 4189},
	{275, 4173},
	{280, 4157},
	{285, 4141},
	{290, 4125},
	{295, 4110},
	{300, 4096},
	{313, 4083},
	{323, 4070},
	{330, 4053},
	{243, 4035},
	{218, 4020},
	{220, 4006},
	{218, 3993},
	{213, 3981},
	{218, 3971},
	{228, 3961},
	{230, 3949},
	{233, 3937},
	{230, 3921},
	{220, 3903},
	{208, 3886},
	{200, 3872},
	{200, 3862},
	{198, 3852},
	{200, 3844},
	{208, 3837},
	{215, 3831},
	{218, 3824},
	{215, 3818},
	{220, 3813},
	{225, 3808},
	{225, 3803},
	{228, 3798},
	{230, 3794},
	{233, 3790},
	{233, 3786},
	{235, 3782},
	{238, 3780},
	{238, 3777},
	{240, 3774},
	{243, 3771},
	{245, 3766},
	{243, 3760},
	{245, 3754},
	{250, 3747},
	{258, 3741},
	{258, 3731},
	{260, 3718},
	{260, 3704},
	{255, 3692},
	{260, 3688},
	{275, 3686},
  {293, 3684},
  {313, 3682},
  {333, 3677},
  {338, 3650},
  {348, 3586},
  {395, 3494},
  {455, 3380},
  {398, 3358},
  {398, 3358},
	{398, 3358},
	{398, 3358},
	{398, 3358},
	{398, 3358},
	{398, 3358}
};

// T3 50C
R_PROFILE_STRUC scud_r_profile_t3[] =
{              
	{163 , 4340},
	{163 , 4322},
	{160 , 4305},
	{170 , 4288},
	{165 , 4271},
	{170 , 4254},
	{173 , 4237},
	{173 , 4221},
	{180 , 4204},
	{183 , 4188},
	{185 , 4171},
	{183 , 4154},
	{193 , 4139},
	{193 , 4123},
	{193 , 4107},
	{195 , 4092},
	{198 , 4077},
	{200 , 4063},
	{203 , 4050},
	{203 , 4034},
	{215 , 4020},
	{220 , 4006},
	{225 , 3994},
	{223 , 3982},
	{233 , 3971},
	{240 , 3959},
	{238 , 3948},
	{253 , 3937},
	{245 , 3924},
	{240 , 3909},
	{230 , 3891},
	{218 , 3875},
	{213 , 3863},
	{213 , 3854},
	{190 , 3846},
	{230 , 3838},
	{238 , 3831},
	{298 , 3824},
	{290 , 3818},
	{230 , 3813},
	{230 , 3807},
	{228 , 3801},
	{238 , 3797},
	{240 , 3792},
	{240 , 3788},
	{238 , 3784},
	{283 , 3780},
	{318 , 3775},
	{310 , 3767},
	{288 , 3758},
	{198 , 3754},
	{205 , 3749},
	{205 , 3743},
	{205 , 3738},
	{203 , 3731},
	{198 , 3725},
	{195 , 3717},
	{188 , 3704},
	{193 , 3691},
	{188 , 3677},
	{190 , 3674},
  {200 , 3673},
  {203 , 3670},
  {215 , 3668},
  {210 , 3661},
  {215 , 3630},
  {230 , 3568},
  {253 , 3478},
  {295 , 3330},
  {295 , 3330},
	{295 , 3330},
	{295 , 3330},
	{295 , 3330},
	{295 , 3330},
	{295 , 3330}
};
// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};   


int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY
