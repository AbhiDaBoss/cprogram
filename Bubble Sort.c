#include <stdio.h>

void bubble_sort(int arr[], int length){
    int i,j;
    for (i=0; i<length-1; i++)
    {
        for(j=0; j<length-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<length; i++)
    printf("%d\t",arr[i]);
}
int main(){
    int arr[]={842, 11, 8, 34, 134, 949};
    bubble_sort(arr, 6);
}
