#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        char *a = malloc(10485760);
        memset(a, 0, 10485760);
        sleep(1);
    }
    return 0;
}
/*
procs -----------memory---------- ---swap-- -----io---- -system-- ------cpu-----
 r  b   swpd   free   buff  cache   si   so    bi    bo   in   cs us sy id wa st
 2  0      0 10411524 127116 3114028    0    0   228    52  238  443  3  1 96  0  0
 1  0      0 10397080 127116 3117756    0    0     0     0  612 1506  2  0 98  0  0
 0  0      0 10387968 127124 3117756    0    0     0    24 1122 1770  1  1 98  0  0
 0  0      0 10373644 127124 3122120    0    0     0     0 3244 3741  2  1 97  0  0
 0  0      0 10364280 127124 3121656    0    0     0     0 2976 2631  2  1 97  0  0
 3  0      0 10318612 127124 3153996    0    0     0     0 4724 10776 13  4 83  0  0
 0  0      0 10312000 127124 3151344    0    0     0     0 2521 4745  3  1 96  0  0
 0  0      0 10318440 127124 3134584    0    0     0     0  349  805  0  0 99  0  0
 0  0      0 10321716 127124 3122008    0    0     0     0  411 1023  1  0 99  0  0
 0  0      0 10424036 127124 3120724    0    0     0     0 2549 5146  1  1 97  0  0
procs -----------memory---------- ---swap-- -----io---- -system-- ------cpu-----
 r  b   swpd   free   buff  cache   si   so    bi    bo   in   cs us sy id wa st
 1  0      0 10423516 127124 3120788    0    0     0     0 1090 2163  1  0 99  0  0
 0  0      0 10424036 127124 3120756    0    0     0     0 3561 3382  2  1 97  0  0
 0  0      0 10402080 127124 3144292    0    0     0     0 2853 5216  5  2 93  0  0
 0  0      0 10385992 127124 3143036    0    0     0     0 3704 3608  6  1 93  0  0
 0  0      0 10384432 127124 3142492    0    0     0     0 1623 2077  2  1 98  0  0
 5  0      0 10402324 127124 3124012    0    0     0     0 5564 7405  8  3 89  0  0
 0  0      0 10403656 127124 3123488    0    0     0     0 7580 10521 10  3 87  0  0
 0  0      0 10403332 127124 3123504    0    0     0     0 5331 7406  6  2 92  0  0
 0  0      0 10404136 127124 3123544    0    0     0     0  992 1911  1  0 98  0  0
 0  0      0 10422500 127124 3123560    0    0     0     0  503 1116  1  1 98  0  0
 */