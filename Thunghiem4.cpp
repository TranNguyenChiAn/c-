#include <stdio.h>

void drawHeart(int m, int n) {
    int i, j;
    for(i = 1; i < 7; i++) {
        for(j = 1; j <= 11; j++) {
            if(!((i == 2 && (j == 6))
            || (i == 3 && (j == 5 || j == 6 || j == 7))
            || (i == 4 && (j >= 4 && j <= 8 ))
            || (i == 5 && (j >= 3 && j <= 9 )))) {
                    printf(" * ");
                 } else {
                    printf("   ");
                 }
        }
        printf("\n");
    }
 }
int main() {
    int m = 11, n = 7;
    drawHeart(m, n);
    return 0;
}
