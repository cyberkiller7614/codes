#include<stdio.h>
#include<string.h>

int main()
{
    char first[10 ];
    char last[10 ];
    printf("Enter your first name \n");
    scanf("%s \n", &first);
    printf("Enter your last name \n");
    scanf("%s \n", &last);
    printf("Your name is ", first, last);
    return 0;
}