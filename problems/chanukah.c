#include <stdio.h>

int main () {
    int p,k,n,sum=0;
    scanf("%d", &p);
    for(int i=0;i<p;i++) {
        scanf("%d %d", &k, &n);
        sum=0;
        for(int j=1;j<=n;j++){
            sum += j;
        }
        printf("%d %d\n",k, sum+n);
    }
    return 0;
}
