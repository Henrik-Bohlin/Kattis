#include <stdio.h>
#include <string.h>

int main () {
    int n, m, i, j, count=0, a, b;
    scanf("%d", &n);
    int output[n];
    for (i=0;i<n;i++) {
        scanf("%d", &m);
        count = m;
        char cities[m][100];
        for (j=0;j<m;j++) {
            scanf("%s", cities[j]);
        }
        for (a=0;a<m;a++) {
            for (b=a+1;b<m;b++) {
                if(strcmp(cities[a],cities[b])==0) {
                    count -= 1;
                    b = m;
                }
            }
        }
        output[i] = count;
    }
    for(i=0;i<n;i++) {
        printf("%d\n", output[i]);
    }   
    return 0;
}
