#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    printf("Pick a number: \n");
    scanf("%d %d %d", &x, &y, &z);
    
    int avg=(x+y+z)/3;
    printf("%d", avg);

    return 0;
}
