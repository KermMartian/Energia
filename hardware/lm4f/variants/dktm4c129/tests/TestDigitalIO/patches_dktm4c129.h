patch_t patches[] = {
    // booster pack 1
    // J29
    { 3,"PH_6", 23,"PE_3"},
    { 4,"PH_7", 24,"PE_6"},
    { 5,"PN_7", 25,"PK_0"},
    { 6,"PF_3", 26,"PK_1"},
    { 7,"PG_7", 27,"PK_2"},
    { 8,"PJ_2", 28,"PK_3"},
    { 9,"PB_4", 29,"PE_0"},
    {10,"PJ_7", 30,"PE_1"},

    // J30
    {39,"PD_3", 19,"PS_2"},
    {38,"PS_3", 18,"PQ_7"},
    {37,"PL_5", 36,"PL_4"},
    {35,"PS_0", 15,"PG_5"},
    {34,"PS_1", 14,"PG_4"},
    {33,"PQ_3", 13,"PN_0"},
    {32,"PD_2", 12,"PN_1"},
    {31,"PM_7", 11,"PN_2"},

    { 2,"PE_2", 40,"PM_5"},

    // booster pack 2
    {42,"PD_0", 59,"PD_1"},
    {43,"PJ_0", 58,"PJ_3"},
    {44,"PJ_1", 57,"PE_4"},
    {46,"PT_1", 54,"PA_5"},
    {47,"PA_2", 55,"PA_4"},
    {48,"PS_6", 53,"PH_5"},
    {49,"PS_7", 52,"PP_6"},
    {50,"PB_5", 51,"PD_5"},

    { 0,"", 0,""}
};

/*
not connected
45,"PT_0",
67,"PE_5"
63,"PF_1"
64,"PK_4"
65,"PK_6"
66,"PN_3"
61,"PN_5"
68,"PP_1"
62,"PQ_4"
*/



// grep "static const uint8_t.*P._" pins_energia.h | sed "s/;/ /" | awk '{ print "/* " $4 " - " $6 " */"}' | grep "_" | sort
/* PA_2 - 47 */
/* PA_4 - 55 */
/* PA_5 - 54 */
/* PB_4 - 9 */
/* PB_5 - 50 */
/* PD_0 - 42 */
/* PD_1 - 59 */
/* PD_2 - 32 */
/* PD_3 - 39 */
/* PD_5 - 51 */
/* PE_0 - 29 */
/* PE_1 - 30 */
/* PE_2 - 2 */
/* PE_3 - 23 */
/* PE_4 - 57 */
/* PE_5 - 67 */
/* PE_6 - 24 */
/* PF_1 - 63 */
/* PF_3 - 6 */
/* PG_4 - 14 */
/* PG_5 - 15 */
/* PG_7 - 7 */
/* PH_5 - 53 */
/* PH_6 - 3 */
/* PH_7 - 4 */
/* PJ_0 - 43 */
/* PJ_1 - 44 */
/* PJ_2 - 8 */
/* PJ_3 - 58 */
/* PJ_7 - 10 */
/* PK_0 - 25 */
/* PK_1 - 26 */
/* PK_2 - 27 */
/* PK_3 - 28 */
/* PK_4 - 64 */
/* PK_6 - 65 */
/* PL_4 - 36 */
/* PL_5 - 37 */
/* PM_5 - 40 */
/* PM_7 - 31 */
/* PN_0 - 13 */
/* PN_1 - 12 */
/* PN_2 - 11 */
/* PN_3 - 66 */
/* PN_5 - 61 */
/* PN_7 - 5 */
/* PP_1 - 68 */
/* PP_6 - 52 */
/* PQ_3 - 33 */
/* PQ_4 - 62 */
/* PQ_7 - 18 */
/* PS_0 - 35 */
/* PS_1 - 34 */
/* PS_2 - 19 */
/* PS_3 - 38 */
/* PS_6 - 48 */
/* PS_7 - 49 */
/* PT_0 - 45 */
/* PT_1 - 46 */


// grep "static const uint8_t.*P._" pins_energia.h | sed "s/;/ /" | awk '{ print  $6 ",\"" $4 "\""}' | grep "_" | sort -t',' -k2
