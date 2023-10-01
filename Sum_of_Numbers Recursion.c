#include <stdio.h>

int recursive_sum(int arr[], int length)
{
    if (length<=0){
        return 0;
    }
    return arr[length-1]+recursive_sum(arr, length-1);
    
}
int main(){
    int arr[]={4, 5, 7, 24};
 printf("%d", recursive_sum(arr, 4));   
}
