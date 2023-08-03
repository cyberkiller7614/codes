#include<stdio.h>

int main()
{
    char i;
    float a,b,c;
    // scanf("%c",i);
    printf("Welcome to the calculator! \n \n \n ");
    printf("Press the following button to select your operation \n \n \n \n");
    printf("1) Addition \n \n");
    printf("2) Subtract \n \n");
    printf("3) Multiply \n \n");
    printf("4) Division \n \n");

    scanf("%c",&i);
    // scanf("%f",a);
    // scanf("%f",b);

    if (i=='1')
    {
        printf("Enter the input number 1: ");
        scanf("%f",&a);
        printf("Enter the input number 2: ");
        scanf("%f",&b);
        c = a + b;
        printf("The addition of 2 numbers is %f",c);
    }
    else if (i=='2')
    {
        printf("Enter the input number 1: ");
        scanf("%f",&a);
        printf("Enter the input number 2: ");
        scanf("%f",&b); 
        c = a - b;
        printf("The subtraction of 2 numbers is %f",c);
    }
    else if (i=='3')
    {
        printf("Enter the input number 1: ");
        scanf("%f",&a);
        printf("Enter the input number 2: ");
        scanf("%f",&b);
        c = a * b;
        printf("The product of 2 numbers is %f",c);
    }
    else if (i=='4')
    {
        printf("Enter the input number 1: ");
        scanf("%f",&a);
        printf("Enter the input number 2: ");
        scanf("%f",&b);
        c = a / b;
        printf("The division of 2 numbers is %f",c);
    }
    else{
        printf("Wrong input!");
    }
    
    return 0;
}  