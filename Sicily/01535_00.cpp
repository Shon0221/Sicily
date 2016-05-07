// Problem#: 1535
// Submission#: 2832085
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
    int n, s[20], j, i, k;
    char m[21][4] = {"000", "002", "004", "006", "030", "032", "034", "036", "040", "042", "044", "046", "050", "052", "054", "056", "060", "062", "064", "066", "000"};
    while (scanf("%d", &n) && n) {
        j = 0;
        while (n) {
            s[j++] = n % 20;
            n /= 20;
        }
        for (i = 0; i < 3; i++)
            if (m[s[j - 1]][i] - '0') {
                for (k = i; k < 3; k++)
                    printf("%c", m[s[j - 1]][k]);
                break;
            }
        if (j > 7)
            printf(",000,000");
        for (j -= 2; j >= 0; j--)
            printf(",%s", m[s[j]]);
        printf("\n");
    }
    return 0;
}                                 