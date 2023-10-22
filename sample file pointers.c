// Online C compiler to run C program online
#include <stdio.h>

int main() {
    FILE *ptr;
    ptr=fopen("hi.txt", "w");
    
    fprintf(ptr, "My bad");
    fclosef(ptr);
