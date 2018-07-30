#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.c"
#include "md5.c"

void test();
// char *md(const char *str);
char *md(const char *str);


/*
    Steps to success

        Figure out where we are adding files from (need to add lots)
            -specific folder within project?  auto read all of them in and make nodes?

        
        Init tree
        Add children to tree
            recalculate hash on each add
        

        3c0f823b5a26de6039f7bad5a5fd9360



*/


int main() {
    // test();

    printf("First things\n");

    int full_list = 1000;
    int list_size = full_list;   //TODO read the number of input files

    //declare list; give it some space
    struct Node* list[list_size];
    for(int i = 0; i < list_size+1; i++) {
       list[i] = (struct Node *) malloc (sizeof(struct Node));
    }



    list[0] = new_node( md("miss is my 00") );
    list[1] = new_node( md("this is my 01") );
    list[2] = new_node( md("this is my 02") );
    list[3] = new_node( md("this is my 03") );
    list[4] = new_node( md("this is my 04") );
    list[5] = new_node( md("this is my 05") );
    list[6] = new_node( md("this is my 06") );
    list[7] = new_node( md("this is my 07") );
    list[8] = new_node( md("this is my 08") );
    list[9] = new_node( md("this is my 09") );

    list[10] = new_node( md("this is my 10") );
    list[11] = new_node( md("this is my 11") );
    list[12] = new_node( md("this is my 12") );
    list[13] = new_node( md("this is my 13") );
    list[14] = new_node( md("this is my 14") );
    list[15] = new_node( md("this is my 15") );
    list[16] = new_node( md("this is my 16") );
    list[17] = new_node( md("this is my 17") );
    list[18] = new_node( md("this is my 18") );
    list[19] = new_node( md("this is my 19") );

    list[20] = new_node( md("this is my 20") );
    list[21] = new_node( md("this is my 21") );
    list[22] = new_node( md("this is my 22") );
    list[23] = new_node( md("this is my 23") );
    list[24] = new_node( md("this is my 24") );
    list[25] = new_node( md("this is my 25") );
    list[26] = new_node( md("this is my 26") );
    list[27] = new_node( md("this is my 27") );
    list[28] = new_node( md("this is my 28") );
    list[29] = new_node( md("this is my 29") );

    list[30] = new_node( md("this is my 20") );
    list[31] = new_node( md("this is my 21") );
    list[32] = new_node( md("this is my 22") );
    list[33] = new_node( md("this is my 23") );
    list[34] = new_node( md("this is my 24") );
    list[35] = new_node( md("this is my 25") );
    list[36] = new_node( md("this is my 26") );
    list[37] = new_node( md("this is my 27") );
    list[38] = new_node( md("this is my 28") );
    list[39] = new_node( md("this is my 29") );

    list[40] = new_node( md("this is my 20") );
    list[41] = new_node( md("this is my 21") );
    list[42] = new_node( md("this is my 22") );
    list[43] = new_node( md("this is my 23") );
    list[44] = new_node( md("this is my 24") );
    list[45] = new_node( md("this is my 25") );
    list[46] = new_node( md("this is my 26") );
    list[47] = new_node( md("this is my 27") );
    list[48] = new_node( md("this is my 28") );
    list[49] = new_node( md("this is my 29") );

    list[50] = new_node( md("this is my 00") );
    list[51] = new_node( md("this is my 01") );
    list[52] = new_node( md("this is my 02") );
    list[53] = new_node( md("this is my 03") );
    list[54] = new_node( md("this is my 04") );
    list[55] = new_node( md("this is my 05") );
    list[56] = new_node( md("this is my 06") );
    list[57] = new_node( md("this is my 07") );
    list[58] = new_node( md("this is my 08") );
    list[59] = new_node( md("this is my 09") );

    list[60] = new_node( md("this is my 00") );
    list[61] = new_node( md("this is my 01") );
    list[62] = new_node( md("this is my 02") );
    list[63] = new_node( md("this is my 03") );
    list[64] = new_node( md("this is my 04") );
    list[65] = new_node( md("this is my 05") );
    list[66] = new_node( md("this is my 06") );
    list[67] = new_node( md("this is my 07") );
    list[68] = new_node( md("this is my 08") );
    list[69] = new_node( md("this is my 09") );

    list[70] = new_node( md("this is my 00") );
    list[71] = new_node( md("this is my 01") );
    list[72] = new_node( md("this is my 02") );
    list[73] = new_node( md("this is my 03") );
    list[74] = new_node( md("this is my 04") );
    list[75] = new_node( md("this is my 05") );
    list[76] = new_node( md("this is my 06") );
    list[77] = new_node( md("this is my 07") );
    list[78] = new_node( md("this is my 08") );
    list[79] = new_node( md("this is my 09") );

    list[80] = new_node( md("this is my 00") );
    list[81] = new_node( md("this is my 01") );
    list[82] = new_node( md("this is my 02") );
    list[83] = new_node( md("this is my 03") );
    list[84] = new_node( md("this is my 04") );
    list[85] = new_node( md("this is my 05") );
    list[86] = new_node( md("this is my 06") );
    list[87] = new_node( md("this is my 07") );
    list[88] = new_node( md("this is my 08") );
    list[89] = new_node( md("this is my 09") );

    list[90] = new_node( md("this is my 00") );
    list[91] = new_node( md("this is my 01") );
    list[92] = new_node( md("this is my 02") );
    list[93] = new_node( md("this is my 03") );
    list[94] = new_node( md("this is my 04") );
    list[95] = new_node( md("this is my 05") );
    list[96] = new_node( md("this is my 06") );
    list[97] = new_node( md("this is my 07") );
    list[98] = new_node( md("this is my 08") );
    list[99] = new_node( md("this is my 09") );


    list[101] = new_node( md("this is my 00") );
    list[100] = new_node( md("this is my 01") );
    list[102] = new_node( md("this is my 02") );
    list[103] = new_node( md("this is my 03") );
    list[104] = new_node( md("this is my 04") );
    list[105] = new_node( md("this is my 05") );
    list[106] = new_node( md("this is my 06") );
    list[107] = new_node( md("this is my 07") );
    list[108] = new_node( md("this is my 08") );
    list[109] = new_node( md("this is my 09") );

    list[110] = new_node( md("this is my 10") );
    list[111] = new_node( md("this is my 11") );
    list[112] = new_node( md("this is my 12") );
    list[113] = new_node( md("this is my 13") );
    list[114] = new_node( md("this is my 14") );
    list[115] = new_node( md("this is my 15") );
    list[116] = new_node( md("this is my 16") );
    list[117] = new_node( md("this is my 17") );
    list[118] = new_node( md("this is my 18") );
    list[119] = new_node( md("this is my 19") );

    list[120] = new_node( md("this is my 20") );
    list[121] = new_node( md("this is my 21") );
    list[122] = new_node( md("this is my 22") );
    list[123] = new_node( md("this is my 23") );
    list[124] = new_node( md("this is my 24") );
    list[125] = new_node( md("this is my 25") );
    list[126] = new_node( md("this is my 26") );
    list[127] = new_node( md("this is my 27") );
    list[128] = new_node( md("this is my 28") );
    list[129] = new_node( md("this is my 29") );

    list[130] = new_node( md("this is my 20") );
    list[131] = new_node( md("this is my 21") );
    list[132] = new_node( md("this is my 22") );
    list[133] = new_node( md("this is my 23") );
    list[134] = new_node( md("this is my 24") );
    list[135] = new_node( md("this is my 25") );
    list[136] = new_node( md("this is my 26") );
    list[137] = new_node( md("this is my 27") );
    list[138] = new_node( md("this is my 28") );
    list[139] = new_node( md("this is my 29") );

    list[140] = new_node( md("this is my 20") );
    list[141] = new_node( md("this is my 21") );
    list[142] = new_node( md("this is dy 22") );
    list[143] = new_node( md("this is my 23") );
    list[144] = new_node( md("this is my 24") );
    list[145] = new_node( md("this is my 25") );
    list[146] = new_node( md("this is my 26") );
    list[147] = new_node( md("this is my 27") );
    list[148] = new_node( md("this is my 28") );
    list[149] = new_node( md("this is my 29") );

    list[150] = new_node( md("this is my 00") );
    list[151] = new_node( md("this is my 01") );
    list[152] = new_node( md("this is my 02") );
    list[153] = new_node( md("this is my 03") );
    list[154] = new_node( md("this is my 04") );
    list[155] = new_node( md("this is my 05") );
    list[156] = new_node( md("this is my 06") );
    list[157] = new_node( md("this is my 07") );
    list[158] = new_node( md("this is my 08") );
    list[159] = new_node( md("this is my 09") );

    list[160] = new_node( md("this is my 00") );
    list[161] = new_node( md("this is my 01") );
    list[162] = new_node( md("this is my 02") );
    list[163] = new_node( md("this is my 03") );
    list[164] = new_node( md("this is my 04") );
    list[165] = new_node( md("this is my 05") );
    list[166] = new_node( md("this is my 06") );
    list[167] = new_node( md("this is my 07") );
    list[168] = new_node( md("this is my 08") );
    list[169] = new_node( md("this is my 09") );

    list[170] = new_node( md("this is my 00") );
    list[171] = new_node( md("this is my 01") );
    list[172] = new_node( md("this is my 02") );
    list[173] = new_node( md("this is my 03") );
    list[174] = new_node( md("this is my 04") );
    list[175] = new_node( md("this is my 05") );
    list[176] = new_node( md("this is my 06") );
    list[177] = new_node( md("this is my 07") );
    list[178] = new_node( md("this is my 08") );
    list[179] = new_node( md("this is my 09") );

    list[180] = new_node( md("this is my 00") );
    list[181] = new_node( md("this is my 01") );
    list[182] = new_node( md("this is my 02") );
    list[183] = new_node( md("this is my 03") );
    list[184] = new_node( md("this is my 04") );
    list[185] = new_node( md("this is my 05") );
    list[186] = new_node( md("this is my 06") );
    list[187] = new_node( md("this is my 07") );
    list[188] = new_node( md("this is my 08") );
    list[189] = new_node( md("this is my 09") );

    list[190] = new_node( md("this is my 00") );
    list[191] = new_node( md("this is my 01") );
    list[192] = new_node( md("this is my 02") );
    list[193] = new_node( md("this is my 03") );
    list[194] = new_node( md("this is my 04") );
    list[195] = new_node( md("this is my 05") );
    list[196] = new_node( md("this is my 06") );
    list[197] = new_node( md("this is my 07") );
    list[198] = new_node( md("this is my 08") );
    list[199] = new_node( md("this is my 09") );

    //200
    list[201] = new_node( md("this is my 00") );
    list[200] = new_node( md("this is my 01") );
    list[202] = new_node( md("this is my 02") );
    list[203] = new_node( md("this is my 03") );
    list[204] = new_node( md("this is my 04") );
    list[205] = new_node( md("this is my 05") );
    list[206] = new_node( md("this is my 06") );
    list[207] = new_node( md("this is my 07") );
    list[208] = new_node( md("this is my 08") );
    list[209] = new_node( md("this is my 09") );

    list[210] = new_node( md("this is my 10") );
    list[211] = new_node( md("this is my 11") );
    list[212] = new_node( md("this is my 12") );
    list[213] = new_node( md("this is my 13") );
    list[214] = new_node( md("this is my 14") );
    list[215] = new_node( md("this is my 15") );
    list[216] = new_node( md("this is my 16") );
    list[217] = new_node( md("this is my 17") );
    list[218] = new_node( md("this is my 18") );
    list[219] = new_node( md("this is my 19") );

    list[220] = new_node( md("this is my 20") );
    list[221] = new_node( md("this is my 21") );
    list[222] = new_node( md("this is my 22") );
    list[223] = new_node( md("this is my 23") );
    list[224] = new_node( md("this is my 24") );
    list[225] = new_node( md("this is my 25") );
    list[226] = new_node( md("this is my 26") );
    list[227] = new_node( md("this is my 27") );
    list[228] = new_node( md("this is my 28") );
    list[229] = new_node( md("this is my 29") );

    list[230] = new_node( md("this is my 20") );
    list[231] = new_node( md("this is my 21") );
    list[232] = new_node( md("this is my 22") );
    list[233] = new_node( md("this is my 23") );
    list[234] = new_node( md("this is my 24") );
    list[235] = new_node( md("this is my 25") );
    list[236] = new_node( md("this is my 26") );
    list[237] = new_node( md("this is my 27") );
    list[238] = new_node( md("this is my 28") );
    list[239] = new_node( md("this is my 29") );

    list[240] = new_node( md("this is my 20") );
    list[241] = new_node( md("this is my 21") );
    list[242] = new_node( md("this is dy 22") );
    list[243] = new_node( md("this is my 23") );
    list[244] = new_node( md("this is my 24") );
    list[245] = new_node( md("this is my 25") );
    list[246] = new_node( md("this is my 26") );
    list[247] = new_node( md("this is my 27") );
    list[248] = new_node( md("this is my 28") );
    list[249] = new_node( md("this is my 29") );

    list[250] = new_node( md("this is my 00") );
    list[251] = new_node( md("this is my 01") );
    list[252] = new_node( md("this is my 02") );
    list[253] = new_node( md("this is my 03") );
    list[254] = new_node( md("this is my 04") );
    list[255] = new_node( md("this is my 05") );
    list[256] = new_node( md("this is my 06") );
    list[257] = new_node( md("this is my 07") );
    list[258] = new_node( md("this is my 08") );
    list[259] = new_node( md("this is my 09") );

    list[260] = new_node( md("this is my 00") );
    list[261] = new_node( md("this is my 01") );
    list[262] = new_node( md("this is my 02") );
    list[263] = new_node( md("this is my 03") );
    list[264] = new_node( md("this is my 04") );
    list[265] = new_node( md("this is my 05") );
    list[266] = new_node( md("this is my 06") );
    list[267] = new_node( md("this is my 07") );
    list[268] = new_node( md("this is my 08") );
    list[269] = new_node( md("this is my 09") );

    list[270] = new_node( md("this is my 00") );
    list[271] = new_node( md("this is my 01") );
    list[272] = new_node( md("this is my 02") );
    list[273] = new_node( md("this is my 03") );
    list[274] = new_node( md("this is my 04") );
    list[275] = new_node( md("this is my 05") );
    list[276] = new_node( md("this is my 06") );
    list[277] = new_node( md("this is my 07") );
    list[278] = new_node( md("this is my 08") );
    list[279] = new_node( md("this is my 09") );

    list[280] = new_node( md("this is my 00") );
    list[281] = new_node( md("this is my 01") );
    list[282] = new_node( md("this is my 02") );
    list[283] = new_node( md("this is my 03") );
    list[284] = new_node( md("this is my 04") );
    list[285] = new_node( md("this is my 05") );
    list[286] = new_node( md("this is my 06") );
    list[287] = new_node( md("this is my 07") );
    list[288] = new_node( md("this is my 08") );
    list[289] = new_node( md("this is my 09") );

    list[290] = new_node( md("this is my 00") );
    list[291] = new_node( md("this is my 01") );
    list[292] = new_node( md("this is my 02") );
    list[293] = new_node( md("this is my 03") );
    list[294] = new_node( md("this is my 04") );
    list[295] = new_node( md("this is my 05") );
    list[296] = new_node( md("this is my 06") );
    list[297] = new_node( md("this is my 07") );
    list[298] = new_node( md("this is my 08") );
    list[299] = new_node( md("this is my 09") );

    //300
    list[301] = new_node( md("this is my 00") );
    list[300] = new_node( md("this is my 01") );
    list[302] = new_node( md("this is my 02") );
    list[303] = new_node( md("this is my 03") );
    list[304] = new_node( md("this is my 04") );
    list[305] = new_node( md("this is my 05") );
    list[306] = new_node( md("this is my 06") );
    list[307] = new_node( md("this is my 07") );
    list[308] = new_node( md("this is my 08") );
    list[309] = new_node( md("this is my 09") );

    list[310] = new_node( md("this is my 10") );
    list[311] = new_node( md("this is my 11") );
    list[312] = new_node( md("this is my 12") );
    list[313] = new_node( md("this is my 13") );
    list[314] = new_node( md("this is my 14") );
    list[315] = new_node( md("this is my 15") );
    list[316] = new_node( md("this is my 16") );
    list[317] = new_node( md("this is my 17") );
    list[318] = new_node( md("this is my 18") );
    list[319] = new_node( md("this is my 19") );

    list[320] = new_node( md("this is my 20") );
    list[321] = new_node( md("this is my 21") );
    list[322] = new_node( md("this is my 22") );
    list[323] = new_node( md("this is my 23") );
    list[324] = new_node( md("this is my 24") );
    list[325] = new_node( md("this is my 25") );
    list[326] = new_node( md("this is my 26") );
    list[327] = new_node( md("this is my 27") );
    list[328] = new_node( md("this is my 28") );
    list[329] = new_node( md("this is my 29") );

    list[330] = new_node( md("this is my 20") );
    list[331] = new_node( md("this is my 21") );
    list[332] = new_node( md("this is my 22") );
    list[333] = new_node( md("this is my 23") );
    list[334] = new_node( md("this is my 24") );
    list[335] = new_node( md("this is my 25") );
    list[336] = new_node( md("this is my 26") );
    list[337] = new_node( md("this is my 27") );
    list[338] = new_node( md("this is my 28") );
    list[339] = new_node( md("this is my 29") );

    list[340] = new_node( md("this is my 20") );
    list[341] = new_node( md("this is my 21") );
    list[342] = new_node( md("this is dy 22") );
    list[343] = new_node( md("this is my 23") );
    list[344] = new_node( md("this is my 24") );
    list[345] = new_node( md("this is my 25") );
    list[346] = new_node( md("this is my 26") );
    list[347] = new_node( md("this is my 27") );
    list[348] = new_node( md("this is my 28") );
    list[349] = new_node( md("this is my 29") );

    list[350] = new_node( md("this is my 00") );
    list[351] = new_node( md("this is my 01") );
    list[352] = new_node( md("this is my 02") );
    list[353] = new_node( md("this is my 03") );
    list[354] = new_node( md("this is my 04") );
    list[355] = new_node( md("this is my 05") );
    list[356] = new_node( md("this is my 06") );
    list[357] = new_node( md("this is my 07") );
    list[358] = new_node( md("this is my 08") );
    list[359] = new_node( md("this is my 09") );

    list[360] = new_node( md("this is my 00") );
    list[361] = new_node( md("this is my 01") );
    list[362] = new_node( md("this is my 02") );
    list[363] = new_node( md("this is my 03") );
    list[364] = new_node( md("this is my 04") );
    list[365] = new_node( md("this is my 05") );
    list[366] = new_node( md("this is my 06") );
    list[367] = new_node( md("this is my 07") );
    list[368] = new_node( md("this is my 08") );
    list[369] = new_node( md("this is my 09") );

    list[370] = new_node( md("this is my 00") );
    list[371] = new_node( md("this is my 01") );
    list[372] = new_node( md("this is my 02") );
    list[373] = new_node( md("this is my 03") );
    list[374] = new_node( md("this is my 04") );
    list[375] = new_node( md("this is my 05") );
    list[376] = new_node( md("this is my 06") );
    list[377] = new_node( md("this is my 07") );
    list[378] = new_node( md("this is my 08") );
    list[379] = new_node( md("this is my 09") );

    list[380] = new_node( md("this is my 00") );
    list[381] = new_node( md("this is my 01") );
    list[382] = new_node( md("this is my 02") );
    list[383] = new_node( md("this is my 03") );
    list[384] = new_node( md("this is my 04") );
    list[385] = new_node( md("this is my 05") );
    list[386] = new_node( md("this is my 06") );
    list[387] = new_node( md("this is my 07") );
    list[388] = new_node( md("this is my 08") );
    list[389] = new_node( md("this is my 09") );

    list[390] = new_node( md("this is my 00") );
    list[391] = new_node( md("this is my 01") );
    list[392] = new_node( md("this is my 02") );
    list[393] = new_node( md("this is my 03") );
    list[394] = new_node( md("this is my 04") );
    list[395] = new_node( md("this is my 05") );
    list[396] = new_node( md("this is my 06") );
    list[397] = new_node( md("this is my 07") );
    list[398] = new_node( md("this is my 08") );
    list[399] = new_node( md("this is my 09") );


    //400
    list[401] = new_node( md("this is my 00") );
    list[400] = new_node( md("this is my 01") );
    list[402] = new_node( md("this is my 02") );
    list[403] = new_node( md("this is my 03") );
    list[404] = new_node( md("this is my 04") );
    list[405] = new_node( md("this is my 05") );
    list[406] = new_node( md("this is my 06") );
    list[407] = new_node( md("this is my 07") );
    list[408] = new_node( md("this is my 08") );
    list[409] = new_node( md("this is my 09") );

    list[410] = new_node( md("this is my 10") );
    list[411] = new_node( md("this is my 11") );
    list[412] = new_node( md("this is my 12") );
    list[413] = new_node( md("this is my 13") );
    list[414] = new_node( md("this is my 14") );
    list[415] = new_node( md("this is my 15") );
    list[416] = new_node( md("this is my 16") );
    list[417] = new_node( md("this is my 17") );
    list[418] = new_node( md("this is my 18") );
    list[419] = new_node( md("this is my 19") );

    list[420] = new_node( md("this is my 20") );
    list[421] = new_node( md("this is my 21") );
    list[422] = new_node( md("this is my 22") );
    list[423] = new_node( md("this is my 23") );
    list[424] = new_node( md("this is my 24") );
    list[425] = new_node( md("this is my 25") );
    list[426] = new_node( md("this is my 26") );
    list[427] = new_node( md("this is my 27") );
    list[428] = new_node( md("this is my 28") );
    list[429] = new_node( md("this is my 29") );

    list[430] = new_node( md("this is my 20") );
    list[431] = new_node( md("this is my 21") );
    list[432] = new_node( md("this is my 22") );
    list[433] = new_node( md("this is my 23") );
    list[434] = new_node( md("this is my 24") );
    list[435] = new_node( md("this is my 25") );
    list[436] = new_node( md("this is my 26") );
    list[437] = new_node( md("this is my 27") );
    list[438] = new_node( md("this is my 28") );
    list[439] = new_node( md("this is my 29") );

    list[440] = new_node( md("this is my 20") );
    list[441] = new_node( md("this is my 21") );
    list[442] = new_node( md("this is dy 22") );
    list[443] = new_node( md("this is my 23") );
    list[444] = new_node( md("this is my 24") );
    list[445] = new_node( md("this is my 25") );
    list[446] = new_node( md("this is my 26") );
    list[447] = new_node( md("this is my 27") );
    list[448] = new_node( md("this is my 28") );
    list[449] = new_node( md("this is my 29") );

    list[450] = new_node( md("this is my 00") );
    list[451] = new_node( md("this is my 01") );
    list[452] = new_node( md("this is my 02") );
    list[453] = new_node( md("this is my 03") );
    list[454] = new_node( md("this is my 04") );
    list[455] = new_node( md("this is my 05") );
    list[456] = new_node( md("this is my 06") );
    list[457] = new_node( md("this is my 07") );
    list[458] = new_node( md("this is my 08") );
    list[459] = new_node( md("this is my 09") );

    list[460] = new_node( md("this is my 00") );
    list[461] = new_node( md("this is my 01") );
    list[462] = new_node( md("this is my 02") );
    list[463] = new_node( md("this is my 03") );
    list[464] = new_node( md("this is my 04") );
    list[465] = new_node( md("this is my 05") );
    list[466] = new_node( md("this is my 06") );
    list[467] = new_node( md("this is my 07") );
    list[468] = new_node( md("this is my 08") );
    list[469] = new_node( md("this is my 09") );

    list[470] = new_node( md("this is my 00") );
    list[471] = new_node( md("this is my 01") );
    list[472] = new_node( md("this is my 02") );
    list[473] = new_node( md("this is my 03") );
    list[474] = new_node( md("this is my 04") );
    list[475] = new_node( md("this is my 05") );
    list[476] = new_node( md("this is my 06") );
    list[477] = new_node( md("this is my 07") );
    list[478] = new_node( md("this is my 08") );
    list[479] = new_node( md("this is my 09") );

    list[480] = new_node( md("this is my 00") );
    list[481] = new_node( md("this is my 01") );
    list[482] = new_node( md("this is my 02") );
    list[483] = new_node( md("this is my 03") );
    list[484] = new_node( md("this is my 04") );
    list[485] = new_node( md("this is my 05") );
    list[486] = new_node( md("this is my 06") );
    list[487] = new_node( md("this is my 07") );
    list[488] = new_node( md("this is my 08") );
    list[489] = new_node( md("this is my 09") );

    list[490] = new_node( md("this is my 00") );
    list[491] = new_node( md("this is my 01") );
    list[492] = new_node( md("this is my 02") );
    list[493] = new_node( md("this is my 03") );
    list[494] = new_node( md("this is my 04") );
    list[495] = new_node( md("this is my 05") );
    list[496] = new_node( md("this is my 06") );
    list[497] = new_node( md("this is my 07") );
    list[498] = new_node( md("this is my 08") );
    list[499] = new_node( md("this is my 09") );


    //500
    list[501] = new_node( md("this is my 00") );
    list[500] = new_node( md("this is my 01") );
    list[502] = new_node( md("this is my 02") );
    list[503] = new_node( md("this is my 03") );
    list[504] = new_node( md("this is my 04") );
    list[505] = new_node( md("this is my 05") );
    list[506] = new_node( md("this is my 06") );
    list[507] = new_node( md("this is my 07") );
    list[508] = new_node( md("this is my 08") );
    list[509] = new_node( md("this is my 09") );

    list[510] = new_node( md("this is my 10") );
    list[511] = new_node( md("this is my 11") );
    list[512] = new_node( md("this is my 12") );
    list[513] = new_node( md("this is my 13") );
    list[514] = new_node( md("this is my 14") );
    list[515] = new_node( md("this is my 15") );
    list[516] = new_node( md("this is my 16") );
    list[517] = new_node( md("this is my 17") );
    list[518] = new_node( md("this is my 18") );
    list[519] = new_node( md("this is my 19") );

    list[520] = new_node( md("this is my 20") );
    list[521] = new_node( md("this is my 21") );
    list[522] = new_node( md("this is my 22") );
    list[523] = new_node( md("this is my 23") );
    list[524] = new_node( md("this is my 24") );
    list[525] = new_node( md("this is my 25") );
    list[526] = new_node( md("this is my 26") );
    list[527] = new_node( md("this is my 27") );
    list[528] = new_node( md("this is my 28") );
    list[529] = new_node( md("this is my 29") );

    list[530] = new_node( md("this is my 20") );
    list[531] = new_node( md("this is my 21") );
    list[532] = new_node( md("this is my 22") );
    list[533] = new_node( md("this is my 23") );
    list[534] = new_node( md("this is my 24") );
    list[535] = new_node( md("this is my 25") );
    list[536] = new_node( md("this is my 26") );
    list[537] = new_node( md("this is my 27") );
    list[538] = new_node( md("this is my 28") );
    list[539] = new_node( md("this is my 29") );

    list[540] = new_node( md("this is my 20") );
    list[541] = new_node( md("this is my 21") );
    list[542] = new_node( md("this is dy 22") );
    list[543] = new_node( md("this is my 23") );
    list[544] = new_node( md("this is my 24") );
    list[545] = new_node( md("this is my 25") );
    list[546] = new_node( md("this is my 26") );
    list[547] = new_node( md("this is my 27") );
    list[548] = new_node( md("this is my 28") );
    list[549] = new_node( md("this is my 29") );

    list[550] = new_node( md("this is my 00") );
    list[551] = new_node( md("this is my 01") );
    list[552] = new_node( md("this is my 02") );
    list[553] = new_node( md("this is my 03") );
    list[554] = new_node( md("this is my 04") );
    list[555] = new_node( md("this is my 05") );
    list[556] = new_node( md("this is my 06") );
    list[557] = new_node( md("this is my 07") );
    list[558] = new_node( md("this is my 08") );
    list[559] = new_node( md("this is my 09") );

    list[560] = new_node( md("this is my 00") );
    list[561] = new_node( md("this is my 01") );
    list[562] = new_node( md("this is my 02") );
    list[563] = new_node( md("this is my 03") );
    list[564] = new_node( md("this is my 04") );
    list[565] = new_node( md("this is my 05") );
    list[566] = new_node( md("this is my 06") );
    list[567] = new_node( md("this is my 07") );
    list[568] = new_node( md("this is my 08") );
    list[569] = new_node( md("this is my 09") );

    list[570] = new_node( md("this is my 00") );
    list[571] = new_node( md("this is my 01") );
    list[572] = new_node( md("this is my 02") );
    list[573] = new_node( md("this is my 03") );
    list[574] = new_node( md("this is my 04") );
    list[575] = new_node( md("this is my 05") );
    list[576] = new_node( md("this is my 06") );
    list[577] = new_node( md("this is my 07") );
    list[578] = new_node( md("this is my 08") );
    list[579] = new_node( md("this is my 09") );

    list[580] = new_node( md("this is my 00") );
    list[581] = new_node( md("this is my 01") );
    list[582] = new_node( md("this is my 02") );
    list[583] = new_node( md("this is my 03") );
    list[584] = new_node( md("this is my 04") );
    list[585] = new_node( md("this is my 05") );
    list[586] = new_node( md("this is my 06") );
    list[587] = new_node( md("this is my 07") );
    list[588] = new_node( md("this is my 08") );
    list[589] = new_node( md("this is my 09") );

    list[590] = new_node( md("this is my 00") );
    list[591] = new_node( md("this is my 01") );
    list[592] = new_node( md("this is my 02") );
    list[593] = new_node( md("this is my 03") );
    list[594] = new_node( md("this is my 04") );
    list[595] = new_node( md("this is my 05") );
    list[596] = new_node( md("this is my 06") );
    list[597] = new_node( md("this is my 07") );
    list[598] = new_node( md("this is my 08") );
    list[599] = new_node( md("this is my 09") );

    //600
    list[601] = new_node( md("this is my 00") );
    list[600] = new_node( md("this is my 01") );
    list[602] = new_node( md("this is my 02") );
    list[603] = new_node( md("this is my 03") );
    list[604] = new_node( md("this is my 04") );
    list[605] = new_node( md("this is my 05") );
    list[606] = new_node( md("this is my 06") );
    list[607] = new_node( md("this is my 07") );
    list[608] = new_node( md("this is my 08") );
    list[609] = new_node( md("this is my 09") );

    list[610] = new_node( md("this is my 10") );
    list[611] = new_node( md("this is my 11") );
    list[612] = new_node( md("this is my 12") );
    list[613] = new_node( md("this is my 13") );
    list[614] = new_node( md("this is my 14") );
    list[615] = new_node( md("this is my 15") );
    list[616] = new_node( md("this is my 16") );
    list[617] = new_node( md("this is my 17") );
    list[618] = new_node( md("this is my 18") );
    list[619] = new_node( md("this is my 19") );

    list[620] = new_node( md("this is my 20") );
    list[621] = new_node( md("this is my 21") );
    list[622] = new_node( md("this is my 22") );
    list[623] = new_node( md("this is my 23") );
    list[624] = new_node( md("this is my 24") );
    list[625] = new_node( md("this is my 25") );
    list[626] = new_node( md("this is my 26") );
    list[627] = new_node( md("this is my 27") );
    list[628] = new_node( md("this is my 28") );
    list[629] = new_node( md("this is my 29") );

    list[630] = new_node( md("this is my 20") );
    list[631] = new_node( md("this is my 21") );
    list[632] = new_node( md("this is my 22") );
    list[633] = new_node( md("this is my 23") );
    list[634] = new_node( md("this is my 24") );
    list[635] = new_node( md("this is my 25") );
    list[636] = new_node( md("this is my 26") );
    list[637] = new_node( md("this is my 27") );
    list[638] = new_node( md("this is my 28") );
    list[639] = new_node( md("this is my 29") );

    list[640] = new_node( md("this is my 20") );
    list[641] = new_node( md("this is my 21") );
    list[642] = new_node( md("this is dy 22") );
    list[643] = new_node( md("this is my 23") );
    list[644] = new_node( md("this is my 24") );
    list[645] = new_node( md("this is my 25") );
    list[646] = new_node( md("this is my 26") );
    list[647] = new_node( md("this is my 27") );
    list[648] = new_node( md("this is my 28") );
    list[649] = new_node( md("this is my 29") );

    list[650] = new_node( md("this is my 00") );
    list[651] = new_node( md("this is my 01") );
    list[652] = new_node( md("this is my 02") );
    list[653] = new_node( md("this is my 03") );
    list[654] = new_node( md("this is my 04") );
    list[655] = new_node( md("this is my 05") );
    list[656] = new_node( md("this is my 06") );
    list[657] = new_node( md("this is my 07") );
    list[658] = new_node( md("this is my 08") );
    list[659] = new_node( md("this is my 09") );

    list[660] = new_node( md("this is my 00") );
    list[661] = new_node( md("this is my 01") );
    list[662] = new_node( md("this is my 02") );
    list[663] = new_node( md("this is my 03") );
    list[664] = new_node( md("this is my 04") );
    list[665] = new_node( md("this is my 05") );
    list[666] = new_node( md("this is my 06") );
    list[667] = new_node( md("this is my 07") );
    list[668] = new_node( md("this is my 08") );
    list[669] = new_node( md("this is my 09") );

    list[670] = new_node( md("this is my 00") );
    list[671] = new_node( md("this is my 01") );
    list[672] = new_node( md("this is my 02") );
    list[673] = new_node( md("this is my 03") );
    list[674] = new_node( md("this is my 04") );
    list[675] = new_node( md("this is my 05") );
    list[676] = new_node( md("this is my 06") );
    list[677] = new_node( md("this is my 07") );
    list[678] = new_node( md("this is my 08") );
    list[679] = new_node( md("this is my 09") );

    list[680] = new_node( md("this is my 00") );
    list[681] = new_node( md("this is my 01") );
    list[682] = new_node( md("this is my 02") );
    list[683] = new_node( md("this is my 03") );
    list[684] = new_node( md("this is my 04") );
    list[685] = new_node( md("this is my 05") );
    list[686] = new_node( md("this is my 06") );
    list[687] = new_node( md("this is my 07") );
    list[688] = new_node( md("this is my 08") );
    list[689] = new_node( md("this is my 09") );

    list[690] = new_node( md("this is my 00") );
    list[691] = new_node( md("this is my 01") );
    list[692] = new_node( md("this is my 02") );
    list[693] = new_node( md("this is my 03") );
    list[694] = new_node( md("this is my 04") );
    list[695] = new_node( md("this is my 05") );
    list[696] = new_node( md("this is my 06") );
    list[697] = new_node( md("this is my 07") );
    list[698] = new_node( md("this is my 08") );
    list[699] = new_node( md("this is my 09") );

    //700
    list[701] = new_node( md("this is my 00") );
    list[700] = new_node( md("this is my 01") );
    list[702] = new_node( md("this is my 02") );
    list[703] = new_node( md("this is my 03") );
    list[704] = new_node( md("this is my 04") );
    list[705] = new_node( md("this is my 05") );
    list[706] = new_node( md("this is my 06") );
    list[707] = new_node( md("this is my 07") );
    list[708] = new_node( md("this is my 08") );
    list[709] = new_node( md("this is my 09") );

    list[710] = new_node( md("this is my 10") );
    list[711] = new_node( md("this is my 11") );
    list[712] = new_node( md("this is my 12") );
    list[713] = new_node( md("this is my 13") );
    list[714] = new_node( md("this is my 14") );
    list[715] = new_node( md("this is my 15") );
    list[716] = new_node( md("this is my 16") );
    list[717] = new_node( md("this is my 17") );
    list[718] = new_node( md("this is my 18") );
    list[719] = new_node( md("this is my 19") );

    list[720] = new_node( md("this is my 20") );
    list[721] = new_node( md("this is my 21") );
    list[722] = new_node( md("this is my 22") );
    list[723] = new_node( md("this is my 23") );
    list[724] = new_node( md("this is my 24") );
    list[725] = new_node( md("this is my 25") );
    list[726] = new_node( md("this is my 26") );
    list[727] = new_node( md("this is my 27") );
    list[728] = new_node( md("this is my 28") );
    list[729] = new_node( md("this is my 29") );

    list[730] = new_node( md("this is my 20") );
    list[731] = new_node( md("this is my 21") );
    list[732] = new_node( md("this is my 22") );
    list[733] = new_node( md("this is my 23") );
    list[734] = new_node( md("this is my 24") );
    list[735] = new_node( md("this is my 25") );
    list[736] = new_node( md("this is my 26") );
    list[737] = new_node( md("this is my 27") );
    list[738] = new_node( md("this is my 28") );
    list[739] = new_node( md("this is my 29") );

    list[740] = new_node( md("this is my 20") );
    list[741] = new_node( md("this is my 21") );
    list[742] = new_node( md("this is dy 22") );
    list[743] = new_node( md("this is my 23") );
    list[744] = new_node( md("this is my 24") );
    list[745] = new_node( md("this is my 25") );
    list[746] = new_node( md("this is my 26") );
    list[747] = new_node( md("this is my 27") );
    list[748] = new_node( md("this is my 28") );
    list[749] = new_node( md("this is my 29") );

    list[750] = new_node( md("this is my 00") );
    list[751] = new_node( md("this is my 01") );
    list[752] = new_node( md("this is my 02") );
    list[753] = new_node( md("this is my 03") );
    list[754] = new_node( md("this is my 04") );
    list[755] = new_node( md("this is my 05") );
    list[756] = new_node( md("this is my 06") );
    list[757] = new_node( md("this is my 07") );
    list[758] = new_node( md("this is my 08") );
    list[759] = new_node( md("this is my 09") );

    list[760] = new_node( md("this is my 00") );
    list[761] = new_node( md("this is my 01") );
    list[762] = new_node( md("this is my 02") );
    list[763] = new_node( md("this is my 03") );
    list[764] = new_node( md("this is my 04") );
    list[765] = new_node( md("this is my 05") );
    list[766] = new_node( md("this is my 06") );
    list[767] = new_node( md("this is my 07") );
    list[768] = new_node( md("this is my 08") );
    list[769] = new_node( md("this is my 09") );

    list[770] = new_node( md("this is my 00") );
    list[771] = new_node( md("this is my 01") );
    list[772] = new_node( md("this is my 02") );
    list[773] = new_node( md("this is my 03") );
    list[774] = new_node( md("this is my 04") );
    list[775] = new_node( md("this is my 05") );
    list[776] = new_node( md("this is my 06") );
    list[777] = new_node( md("this is my 07") );
    list[778] = new_node( md("this is my 08") );
    list[779] = new_node( md("this is my 09") );

    list[780] = new_node( md("this is my 00") );
    list[781] = new_node( md("this is my 01") );
    list[782] = new_node( md("this is my 02") );
    list[783] = new_node( md("this is my 03") );
    list[784] = new_node( md("this is my 04") );
    list[785] = new_node( md("this is my 05") );
    list[786] = new_node( md("this is my 06") );
    list[787] = new_node( md("this is my 07") );
    list[788] = new_node( md("this is my 08") );
    list[789] = new_node( md("this is my 09") );

    list[790] = new_node( md("this is my 00") );
    list[791] = new_node( md("this is my 01") );
    list[792] = new_node( md("this is my 02") );
    list[793] = new_node( md("this is my 03") );
    list[794] = new_node( md("this is my 04") );
    list[795] = new_node( md("this is my 05") );
    list[796] = new_node( md("this is my 06") );
    list[797] = new_node( md("this is my 07") );
    list[798] = new_node( md("this is my 08") );
    list[799] = new_node( md("this is my 09") );

    //800
    list[801] = new_node( md("this is my 00") );
    list[800] = new_node( md("this is my 01") );
    list[802] = new_node( md("this is my 02") );
    list[803] = new_node( md("this is my 03") );
    list[804] = new_node( md("this is my 04") );
    list[805] = new_node( md("this is my 05") );
    list[806] = new_node( md("this is my 06") );
    list[807] = new_node( md("this is my 07") );
    list[808] = new_node( md("this is my 08") );
    list[809] = new_node( md("this is my 09") );

    list[810] = new_node( md("this is my 10") );
    list[811] = new_node( md("this is my 11") );
    list[812] = new_node( md("this is my 12") );
    list[813] = new_node( md("this is my 13") );
    list[814] = new_node( md("this is my 14") );
    list[815] = new_node( md("this is my 15") );
    list[816] = new_node( md("this is my 16") );
    list[817] = new_node( md("this is my 17") );
    list[818] = new_node( md("this is my 18") );
    list[819] = new_node( md("this is my 19") );

    list[820] = new_node( md("this is my 20") );
    list[821] = new_node( md("this is my 21") );
    list[822] = new_node( md("this is my 22") );
    list[823] = new_node( md("this is my 23") );
    list[824] = new_node( md("this is my 24") );
    list[825] = new_node( md("this is my 25") );
    list[826] = new_node( md("this is my 26") );
    list[827] = new_node( md("this is my 27") );
    list[828] = new_node( md("this is my 28") );
    list[829] = new_node( md("this is my 29") );

    list[830] = new_node( md("this is my 20") );
    list[831] = new_node( md("this is my 21") );
    list[832] = new_node( md("this is my 22") );
    list[833] = new_node( md("this is my 23") );
    list[834] = new_node( md("this is my 24") );
    list[835] = new_node( md("this is my 25") );
    list[836] = new_node( md("this is my 26") );
    list[837] = new_node( md("this is my 27") );
    list[838] = new_node( md("this is my 28") );
    list[839] = new_node( md("this is my 29") );

    list[840] = new_node( md("this is my 20") );
    list[841] = new_node( md("this is my 21") );
    list[842] = new_node( md("this is dy 22") );
    list[843] = new_node( md("this is my 23") );
    list[844] = new_node( md("this is my 24") );
    list[845] = new_node( md("this is my 25") );
    list[846] = new_node( md("this is my 26") );
    list[847] = new_node( md("this is my 27") );
    list[848] = new_node( md("this is my 28") );
    list[849] = new_node( md("this is my 29") );

    list[850] = new_node( md("this is my 00") );
    list[851] = new_node( md("this is my 01") );
    list[852] = new_node( md("this is my 02") );
    list[853] = new_node( md("this is my 03") );
    list[854] = new_node( md("this is my 04") );
    list[855] = new_node( md("this is my 05") );
    list[856] = new_node( md("this is my 06") );
    list[857] = new_node( md("this is my 07") );
    list[858] = new_node( md("this is my 08") );
    list[859] = new_node( md("this is my 09") );

    list[860] = new_node( md("this is my 00") );
    list[861] = new_node( md("this is my 01") );
    list[862] = new_node( md("this is my 02") );
    list[863] = new_node( md("this is my 03") );
    list[864] = new_node( md("this is my 04") );
    list[865] = new_node( md("this is my 05") );
    list[866] = new_node( md("this is my 06") );
    list[867] = new_node( md("this is my 07") );
    list[868] = new_node( md("this is my 08") );
    list[869] = new_node( md("this is my 09") );

    list[870] = new_node( md("this is my 00") );
    list[871] = new_node( md("this is my 01") );
    list[872] = new_node( md("this is my 02") );
    list[873] = new_node( md("this is my 03") );
    list[874] = new_node( md("this is my 04") );
    list[875] = new_node( md("this is my 05") );
    list[876] = new_node( md("this is my 06") );
    list[877] = new_node( md("this is my 07") );
    list[878] = new_node( md("this is my 08") );
    list[879] = new_node( md("this is my 09") );

    list[880] = new_node( md("this is my 00") );
    list[881] = new_node( md("this is my 01") );
    list[882] = new_node( md("this is my 02") );
    list[883] = new_node( md("this is my 03") );
    list[884] = new_node( md("this is my 04") );
    list[885] = new_node( md("this is my 05") );
    list[886] = new_node( md("this is my 06") );
    list[887] = new_node( md("this is my 07") );
    list[888] = new_node( md("this is my 08") );
    list[889] = new_node( md("this is my 09") );

    list[890] = new_node( md("this is my 00") );
    list[891] = new_node( md("this is my 01") );
    list[892] = new_node( md("this is my 02") );
    list[893] = new_node( md("this is my 03") );
    list[894] = new_node( md("this is my 04") );
    list[895] = new_node( md("this is my 05") );
    list[896] = new_node( md("this is my 06") );
    list[897] = new_node( md("this is my 07") );
    list[898] = new_node( md("this is my 08") );
    list[899] = new_node( md("this is my 09") );

    //900
    list[901] = new_node( md("this is my 00") );
    list[900] = new_node( md("this is my 01") );
    list[902] = new_node( md("this is my 02") );
    list[903] = new_node( md("this is my 03") );
    list[904] = new_node( md("this is my 04") );
    list[905] = new_node( md("this is my 05") );
    list[906] = new_node( md("this is my 06") );
    list[907] = new_node( md("this is my 07") );
    list[908] = new_node( md("this is my 08") );
    list[909] = new_node( md("this is my 09") );

    list[910] = new_node( md("this is my 10") );
    list[911] = new_node( md("this is my 11") );
    list[912] = new_node( md("this is my 12") );
    list[913] = new_node( md("this is my 13") );
    list[914] = new_node( md("this is my 14") );
    list[915] = new_node( md("this is my 15") );
    list[916] = new_node( md("this is my 16") );
    list[917] = new_node( md("this is my 17") );
    list[918] = new_node( md("this is my 18") );
    list[919] = new_node( md("this is my 19") );

    list[920] = new_node( md("this is my 20") );
    list[921] = new_node( md("this is my 21") );
    list[922] = new_node( md("this is my 22") );
    list[923] = new_node( md("this is my 23") );
    list[924] = new_node( md("this is my 24") );
    list[925] = new_node( md("this is my 25") );
    list[926] = new_node( md("this is my 26") );
    list[927] = new_node( md("this is my 27") );
    list[928] = new_node( md("this is my 28") );
    list[929] = new_node( md("this is my 29") );

    list[930] = new_node( md("this is my 20") );
    list[931] = new_node( md("this is my 21") );
    list[932] = new_node( md("this is my 22") );
    list[933] = new_node( md("this is my 23") );
    list[934] = new_node( md("this is my 24") );
    list[935] = new_node( md("this is my 25") );
    list[936] = new_node( md("this is my 26") );
    list[937] = new_node( md("this is my 27") );
    list[938] = new_node( md("this is my 28") );
    list[939] = new_node( md("this is my 29") );

    list[940] = new_node( md("this is my 20") );
    list[941] = new_node( md("this is my 21") );
    list[942] = new_node( md("this is dy 22") );
    list[943] = new_node( md("this is my 23") );
    list[944] = new_node( md("this is my 24") );
    list[945] = new_node( md("this is my 25") );
    list[946] = new_node( md("this is my 26") );
    list[947] = new_node( md("this is my 27") );
    list[948] = new_node( md("this is my 28") );
    list[949] = new_node( md("this is my 29") );

    list[950] = new_node( md("this is my 00") );
    list[951] = new_node( md("this is my 01") );
    list[952] = new_node( md("this is my 02") );
    list[953] = new_node( md("this is my 03") );
    list[954] = new_node( md("this is my 04") );
    list[955] = new_node( md("this is my 05") );
    list[956] = new_node( md("this is my 06") );
    list[957] = new_node( md("this is my 07") );
    list[958] = new_node( md("this is my 08") );
    list[959] = new_node( md("this is my 09") );

    list[960] = new_node( md("this is my 00") );
    list[961] = new_node( md("this is my 01") );
    list[962] = new_node( md("this is my 02") );
    list[963] = new_node( md("this is my 03") );
    list[964] = new_node( md("this is my 04") );
    list[965] = new_node( md("this is my 05") );
    list[966] = new_node( md("this is my 06") );
    list[967] = new_node( md("this is my 07") );
    list[968] = new_node( md("this is my 08") );
    list[969] = new_node( md("this is my 09") );

    list[970] = new_node( md("this is my 00") );
    list[971] = new_node( md("this is my 01") );
    list[972] = new_node( md("this is my 02") );
    list[973] = new_node( md("this is my 03") );
    list[974] = new_node( md("this is my 04") );
    list[975] = new_node( md("this is my 05") );
    list[976] = new_node( md("this is my 06") );
    list[977] = new_node( md("this is my 07") );
    list[978] = new_node( md("this is my 08") );
    list[979] = new_node( md("this is my 09") );

    list[980] = new_node( md("this is my 00") );
    list[981] = new_node( md("this is my 01") );
    list[982] = new_node( md("this is my 02") );
    list[983] = new_node( md("this is my 03") );
    list[984] = new_node( md("this is my 04") );
    list[985] = new_node( md("this is my 05") );
    list[986] = new_node( md("this is my 06") );
    list[987] = new_node( md("this is my 07") );
    list[988] = new_node( md("this is my 08") );
    list[989] = new_node( md("this is my 09") );

    list[990] = new_node( md("this is my 00") );
    list[991] = new_node( md("this is my 01") );
    list[992] = new_node( md("this is my 02") );
    list[993] = new_node( md("this is my 03") );
    list[994] = new_node( md("this is my 04") );
    list[995] = new_node( md("this is my 05") );
    list[996] = new_node( md("this is my 06") );
    list[997] = new_node( md("this is my 07") );
    list[998] = new_node( md("this is my 08") );
    list[999] = new_node( md("this is my 09") );




    //print inital values
    for(int i=0; i < list_size; i++) {
        printf("%d: %s\n", i, list[i]->data);
    }
    printf("Done written test data \n");



    //start program
    
    char* concatanate = (char *) malloc (64 * sizeof(char));
    char* encrypted = (char *) malloc (32 * sizeof(char));
    int number_of_loops = 0;


/// loop test ///

    printf("\n\n////////////Loop test///////////////\n\n");
    int n = 0; 

    printf("\nStarting Program\n");

    while(list_size >= 2) {



        printf("\nlist_size: %d", list_size);
        printf("\n---THIS IS LOOP: %d", number_of_loops);
        n=0;


        // ////////////// HANDLE LIST SIZE ///////////////
                    // DO THIS IF UNEVEN # OF NODES //
        if( list_size % 2 == 1 && list_size > 2) {
            printf("\nwe are uneven\n");

            if(list_size == full_list) {
                printf("need new\n");
                list[list_size] = new_node( md("thirteencharc") );
            }
            
            strcpy( list[list_size]->data, list[list_size - 1]->data);
            list_size++;

             /////// PRINT NEW LIST IF NEEDED ///
            printf("\nlist_size with dup: %d\n\n", list_size);
            for(int i=0; i < list_size; i++) {
                printf("%d: %s\n", i, list[i]->data);
            }
        }


        printf("\nnew list_size: %d\n", list_size/2);
        ///////////// PERFORM REDUCTION ///////////////
        for(int i = 0; i < (list_size / 2); i++) {
            strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
            encrypted = md(concatanate);
            list[i]->data = encrypted;
            n = n + 2;
        }


        ///////////// PRINT ALL VALUES /////////////
        for(int i=0; i < list_size / 2; i++) {
            printf("%d: %s\n", i, list[i]->data);
        }


        /////////// set new list size //////////
        list_size = list_size / 2;
        number_of_loops++;
        printf("\n/////////////////END OF LOOP///////////////////////\n");



    }

    printf("\n\nfinished\nnumber_of_loop: %d\n", number_of_loops);

}



void test() {
    // struct Node root = &new_node_empty( "some text", 0);
    printf("hello world");

    char *a = "thiscanhavespaces";
    char *b = "thiscannothavespaces";

    // int length = strlen(a);

    // printf("\nLength Test\n\ta: %d\n\tb: %d", length, length);


    printf("\nA\n\tStr: %s\n\tLength: %d\n", a, strlen(a) );
    printf("\nb\n\tStr: %s\n\tLength: %d\n", b, strlen(b) );

    printf("\na: %s\n", md(a ) );
    printf("\nb: %s\n", md(b ) );
}



/* Alternative md function 
    // -made by todd - editted by ryan michal
    // -https://stackoverflow.com/questions/7627723/how-to-create-a-md5-hash-of-a-string-in-c
*/
char *md(const char *str) {
    int n;

    int length = strlen(str);
    // printf("length: %d", length);
    // int length = 13;

    MD5_CTX c;
    unsigned char digest[16];
    char *out = (char*)malloc(33);

    //initalize process
    MD5_Init(&c);

    //computer md5 hash from contents
    while (length > 0) {
        if (length > 512) {
            MD5_Update(&c, str, 512);
        } else {
            MD5_Update(&c, str, length);
        }
        length -= 512;
        str += 512;
    }

    // copmles hash; generates final hash value
    MD5_Final(digest, &c);

    for (n = 0; n < 16; ++n) {
        // printf("n=%d:out=--------------------%s\n", n, out);
        snprintf(&(out[n*2]), 16*2, "%02x", (unsigned int)digest[n]);
    }

    return out;
}
