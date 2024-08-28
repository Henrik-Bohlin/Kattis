#include <stdio.h>

int main () {
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    int numbers[n][m];
    int lower=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &numbers[i][j]);
        }
    }
    for(i=1;i<n-1;i++) {
        for(j=1;j<m-1;j++) {
            if (numbers[i][j] < numbers[i-1][j] && numbers[i][j] < numbers[i][j-1] && numbers[i][j] < numbers[i][j+1] && numbers[i][j] < numbers[i+1][j]) {
                lower=1;
            }
        }
    }
    if (lower==1) {
        printf("Jebb");
    } else {
        printf("Neibb");
    }
    return 0;
}
