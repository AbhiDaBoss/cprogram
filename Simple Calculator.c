#include <stdio.h>
#include <stdlib.h>
int main() {
    
int a=0, b, c, op;
printf("Calculator\n");
    printf("Enter the first number ");
    scanf("%d", &a);
    printf("Enter the second number ");
    scanf("%d", &b);
while(1){
    printf("The possible operations are: \n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
    scanf("%d", &op);
switch(op){
    case 1:
    printf("The addition of %d and %d is %d\n", a, b, a+b);
    break;
    case 2:
    printf("The subtraction of %d and %d is %d\n", a, b, a-b);
    break;
    case 3:
    printf("The multiplication of %d and %d is %d\n", a, b, a*b);
    break;
    case 4:
    printf("The division of %d and %d is %d\n", a, b, a/b);
    break;
    case 5:
    printf("Exiting the calculator");
    exit(0);
}

}

}
