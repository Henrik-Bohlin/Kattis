#include <stdio.h>

int main () {
    int N, X, Y; 
    
    if (scanf("%d %d %d" ,&X, &Y, &N) ==0) {
        return 0; 
    }
    for(int i = 1; i <= N;i++) {
        if (i % X == 0 && i % Y != 0)
            printf("Fizz\n");
        else if (i % X != 0 && i % Y == 0)
            printf("Buzz\n"); 
        else if (i % X == 0 && i % Y == 0)
            printf("FizzBuzz\n");
        else {
            printf("%d\n", i); 
        }
    }
    return 0; 
}
