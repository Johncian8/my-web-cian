#include<stdio.h>
main()
{   double num1, num2, num3, num4, num5;
    
    printf("Enter the first number \n");
    scanf("%lf", &num1);
    
    printf("Enter the second number \n");
    scanf("%lf", &num2);
    
    printf("Enter the third number \n");
    scanf("%lf", &num3);
    
    printf("Enter the fourth number \n");
    scanf("%lf", &num4);
    
    printf("Enter the fifth number \n");
    scanf("%lf", &num5);
    
    double product = num1 * num2 * num3 * num4 * num5;
    
    double average = product / 5;
    
    printf("Product is equal to %.2lf\n", product);
    
    printf("Average is equal to %.2lf\n", average);
    
}