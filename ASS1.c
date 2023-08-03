#include<stdio.h>
int main()
{   

    printf("All test are of 100 marks each");
    int math,phys,chem;
    scanf("%d \n", &math);
    scanf("%d \n", &phys);
    scanf("%d \n", &chem);

    int total,perct, taka;
    total = math+phys+chem;
    perct= total/300;
    taka=perct*100;

    if (taka>33)
    {
        printf("you are pass");
    }
    else
    {
        printf("You are fail");
    }
    
    

    return 0;
}