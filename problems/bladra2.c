#include <stdio.h>

int main () {
    float v,a,t;
    scanf("%f %f %f", &v, &a, &t);
    float d = v*t+(a*(t*t))/2;  
    printf("%f", d);
}
