// Problem#: 1693
// Submission#: 3421232
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>

int ans[602]={895,1911,2038,2783,2927,3035,3053,3066,3439,3573,3580,5047,5051,5471,5559,5815,5869,7003,7021,7597,7605,7609,7637,7644,7885,7894,7898,8021,8037,8042,8148,8575,8639,9179,9210,9709,9903,11039,11055,11125,11132,11708,12173,12197,12202,12415,12479,12607,12789,12793,12796,13045,13052,13487,13871,14249,14308,15143,15251,16831,17335,17402,17879,17909,18655,18909,19163,19194,19567,19893,19900,19915,20123,20154,20188,20195,20251,20323,20401,20440,20450,20703,21723,21754,21847,21877,21884,22202,22233,22236,22295,22357,22364,22449,22469,22481,22512,23465,25838,26735,27258,27695,28073,29045,29113,29302,29339,29370,30037,30044,30057,30164,30377,30420,30433,30436,30471,30576,30937,31003,31030,31337,31499,31509,31562,31588,31592,31914,32013,32021,32069,32074,32084,32133,32137,32168,32408,32450,32518,32536,32578,32608,33215,33471,33755,33786,33919,34159,34285,34293,34300,34549,34556,34943,35167,35259,35287,35487,36439,36519,36537,36757,36777,36833,36836,38223,38805,38975,40339,41183,41435,41466,42095,42205,42327,42357,42364,42421,42428,42779,43103,43611,43642,43644,43881,44008,44063,44528,45167,45231,45301,45678,46545,46832,47289,47387,47414,47418,47445,47765,47772,47785,47825,47828,47844,48181,48298,48300,48451,48515,48653,48724,48773,48804,48901,48906,48961,49026,49028,49032,49056,49471,49653,49660,49727,50335,50351,50767,51091,51359,51791,52007,52115,54303,54319,54799,55024,55575,55595,55605,55610,55612,55977,56359,56377,56455,56476,56845,57280,57963,58151,58771,59701,60570,61004,66487,67035,67066,67135,69175,69319,69340,69602,69983,70103,70133,71021,71354,71447,71509,71514,71636,71839,71855,71929,72533,72583,72660,72676,72999,73161,74527,74543,74620,75493,75633,76175,76443,76470,76474,76508,76652,76724,76760,76770,76971,76981,76988,77148,77226,78223,79403,79413,79420,79572,79990,80075,80442,80483,80610,80668,80752,80995,81457,81688,82395,82397,82426,82615,82682,82812,83131,83287,83317,83324,83797,83924,84063,84079,84968,85023,85039,85488,85651,85705,86127,86389,86396,86453,86460,86621,86683,86714,86731,86811,86883,86994,87010,87319,87323,87354,87381,87388,87473,87493,87505,87508,87536,87815,87920,88186,88281,88347,88366,88374,88681,88853,88906,88932,88944,89159,89357,89365,89372,89413,89418,89428,89512,89626,89752,89794,89862,89873,89880,89922,89924,89952,90207,90223,90287,90295,90331,90349,90358,90362,90485,90492,91112,91183,91663,91888,92695,92935,93040,93521,93616,93709,93904,94018,94024,94112,94503,94507,94867,95381,95495,95818,96005,96036,99163,99194,99706,100463,101455,101497,101543,101561,101781,101860,101927,102116,102715,102799,102859,103069,103141,103246,103282,103334,103352,103366,103707,106940,107067,108071,108089,108181,108307,108388,108761,108827,108829,108854,109161,109710,110735,110871,110891,110901,110906,110908,110931,110933,110997,111050,111076,111253,111260,111273,111332,111786,112003,112048,112141,112212,112292,112389,112394,112449,112514,112520,112544,112679,112779,112915,113221,113442,113552,115037,115117,115157,115164,115255,115318,115633,115799,115829,116449,116795,116854,116939,116963,117021,117105,117134,117158,117176,117347,117474,118957,119063,119067,119094,119125,119249,119252,119879,120034,120133,120138,120148,120593,120610,120644,120967,121057,121357,121477,121552,121680,121729,121732,121744,122304,123085,123094,123419,123667,123673,123689,124003,124070,124102,124242,125005,125014,125029,125036,125144,125321,125352,125453,125466,125489,125510,125528,125640,125965,125973,125978,125987,125989,125996,126026,126052,126274,126304,126368,127062,127077,127082,127369,127400,127526,127537,127558,127650,128013,128037,128042,128273,128290,128336,128522,128532,128548,128672,129074,129158,129217,129286,129304,129560,129666,129794,129796,129800,130072,130082,130114,130312,130432};
char text[50];

inline int search(int l, int r, int target) {
    while (l < r) {
        int m = l + ((r - l) >> 1);
        if (ans[m] < target) l = m + 1;
        else r = m;
    }
    if (ans[l] == target) return l;
    else return -1;
}

int main() {
    int caseNum;
    scanf("%d", &caseNum);
    gets(text);
    while (caseNum--) {
        gets(text);
        int sum = 0;
        int p = 65536;
        for (int i = 0; text[i] != '\0'; i++) {
            if (text[i] != ' ') {
                if (text[i] == '3') sum += p;
                p /= 2;
            }
        }
        if (search(0, 601, sum) != -1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}                                 