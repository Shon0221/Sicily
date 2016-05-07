// Problem#: 1535
// Submission#: 2832079
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>

int main() {
    int n;
    char num[21][4] = {"000", "002", "004", "006", "030", "032", "034", "036", "040", "042", "044", "046", "050", "052", "054", "056", "060", "062", "064", "066", "000"};
    while (scanf("%lld", &n) && n) {
        int i;
        int ans[20];
        int j = 0;
        i--;
        while (n) {
            ans[j++] = n % 20;
            n /= 20;
        }
        if (j >= 8) {
            for (int ii = 0; ii < 3; ii++) {
                if (num[ans[j - 1]][ii] != '0') {
                    for (int k = ii; k < 3; k++) {
                        printf("%c", num[ans[j - 1]][k]);
                    }
                    break;
                }
            }
            printf(",000,000");
        } else {
            for (int ii = 0; ii < 3; ii++) {
                if (num[ans[j - 1]][ii] != '0') {
                    for (int k = ii; k < 3; k++) {
                        printf("%c", num[ans[j - 1]][k]);
                    }
                    break;
                }
            }
        }
        for (j -= 2; j >= 0; j--) {
            printf(",%s", num[ans[j]]);
        }
        printf("\n");
    }
    return 0;
}                                 