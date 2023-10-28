#include <stdio.h>
int isPrime(int n);
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    int i;
    printf("The numbers in between 1 and n are: ");
    for(i=2; i<=num; i++){
        int res=isPrime(i);
        if(res==1)
        printf("%d ", i);
    }
    
}

int isPrime(int n){
    int i;
    for(i=2; i<n; i++){
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
