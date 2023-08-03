#include <stdio.h>
#include <string.h>
int main()
{

    int emplo;
    char per[] = {'%', '\0'};
    // per="";
    printf("Enter you salary: ");
    scanf("%d \n", &emplo);

    if (emplo >= 100000)
    {
        printf("The tax on your income us 30"
               "%s",
               per);
    }

    else if (emplo >= 500000)
    {
        printf("The tax on your income us 20"
               "%s",
               per);
    }
    else if (emplo >= 250000)
    {
        printf("The tax on your income us 5"
               "%s",
               per);
    }
    else if (emplo < 250000)
    {
        printf("The tax on your income is 0"
               "%s",
               per);
    }
    else
    {
        printf("Wrong Input!");
    }

    return 0;
}
