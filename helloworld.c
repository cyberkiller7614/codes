#include<stdio.h>

int main(){
    
    int a,b,c,d;

    printf(" --        --\n");
    printf("|a          b|\n");
    printf("|            |\n");
    printf("|c          d|\n");
    printf(" --        --\n");


    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    printf("Enter the value of d \n");
    scanf("%d", &d);

    int e,f,g;
    e = a * d;
    f = b * c;
    g= e - f;

    printf("The value of the matrice is %d \n", g);


    // int a,b;
    // printf("Enter a number \n");
    // scanf("%d",&a);
    // if (a%2==0){
    //     printf("The number is even");
    // }
    // else{
    //     printf("The number is odd");
    // }

    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // if(age>90){
    //     printf("You can't drive");
    //    }

    // else if (age>50)
    // {
    //     printf("you need license");
    // }
    

    // else{
    //     printf("you can drive");
    // }

    return 0;

}