#include <stdio.h>

int main() {
    int sum;
    int x;
    printf("Pick a number: \n");
    scanf("%d", &x);
     
    int a=0, b=1, count=2;
     int c=a+b;
    while(count<x){
        c=a+b;
        a=b;
        b=c;
        count++;
    }
    printf("%d \n", c);

    return 0;
}
