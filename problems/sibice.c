#include <stdio.h>
#include <math.h>

int main () {
    int a[50];
    int n;
    double w,h, l;
    scanf("%d %lf %lf", &n, &w, &h);
    l = sqrt(w*w+h*h);
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i] <= l) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }
    return 0;
}
