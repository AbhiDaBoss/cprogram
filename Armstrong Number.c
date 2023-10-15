#include <stdio.h>

int main()
{
    printf("Enter the number to check the armstrong property: ");
    int num;
    scanf("%d", &num);
    int temp=num, sum=0;
    
    for(temp=num; temp>0; temp/=10)
    {
        int a=temp%10;
        sum+=a*a*a;
    }
    if(sum==num)
    {
        printf("It is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number");
    }

}
