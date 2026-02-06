#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int a;
    int b;
    int Sum,Difference,Product,Quotient,Remainder;
    scanf("%d",&a);
    scanf("%d",&b);
    Sum = a+b;
    Difference = a-b;
    Product = a*b;
    Quotient = a/b;
    Remainder = a%b;
    printf("Sum: %d\n",Sum);
    printf("Difference: %d\n",Difference);
    printf("Product: %d\n",Product);
    printf("Quotient: %d\n",Quotient);
    printf("Remainder: %d\n",Remainder);
    return 0;
}
