#include <stdio.h>

int main()
{
    int num=8, i;
    printf("%d\n", num);
    printf("%p\n",&num);
    int *pointer=&num;
    printf("%d\n",pointer);
    printf("%d\n",*pointer);
    int a[]={1, 4, 2, 8};
    printf("%d\n", a[0]);
    for (i=0; i<4; i++){
        printf("%d\n", a[i]);
    }
    for(i=0; i<4; i++){
        printf("%d\n", *(a+i));
    }
    
}
