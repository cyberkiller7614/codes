#include <stdio.h>
#include <string.h>

struct tran
{
    char money[100];
};

struct teacher
{
    char fname[30];
    int age;
    char sub[10];
    int salary;
};

struct student
{
    char name[20];
    int std;
    int Age;
    char grade[5];
};

// Student data type

int main()
{

    /*
    students name or details
    attendence
    teacher list
    fees of student
    salary of teacher paid
    */
    struct student shubham;
    strcpy(shubham.name, "Shubham \0");
    strcpy(shubham.grade, "A1 \0");
    shubham.std = 12;
    shubham.Age = 17;

    struct student dev;
    strcpy(dev.name, "Dev \0");
    strcpy(dev.grade, "A2 \0");
    dev.std = 12;
    dev.Age = 17;

    struct student aditya;
    strcpy(aditya.name, "Aditya \0");
    strcpy(aditya.grade, "C2 \0");
    aditya.std = 12;
    aditya.Age = 17;

    struct student vraj;
    strcpy(vraj.name, "Vraj \0");
    strcpy(vraj.grade, "A1 \0");
    vraj.std = 12;
    vraj.Age = 17;

    struct student jainel;
    strcpy(jainel.name, "Jainel \0");
    strcpy(jainel.grade, "D \0");
    jainel.std = 12;
    jainel.Age = 17;

    // Teacher section

    struct teacher mk;
    strcpy(mk.fname, "Monika Khatri \0");
    strcpy(mk.sub, "Chemistry \0");
    mk.age = 25;
    mk.salary = 1200000;

    struct teacher sk;
    strcpy(sk.fname, "Shaunak Patel \0");
    strcpy(sk.sub, "Physics \0");
    sk.age = 23;
    sk.salary = 800000;

    struct teacher vk;
    strcpy(vk.fname, "Vijay Kachadiya \0");
    strcpy(vk.sub, "Physics \0");
    vk.age = 35;
    vk.salary = 2000000;

    struct teacher kk;
    strcpy(kk.fname, "Kanti Khimanand \0");
    strcpy(kk.sub, "Maths \0");
    kk.age = 50;
    kk.salary = 1500000;

    struct teacher km;
    strcpy(km.fname, "Krunal Makhwana \0");
    strcpy(km.sub, "Chemistry \0");
    km.age = 26;
    km.salary = 1000000;

    // Structure over
    printf("Welcome to ABC union Institute  \n");
    printf("Enter the input to get the following information:  \n");

    printf("1)Names of student \n");
    printf("2)Names of teacher \n");
    printf("3)Fees status of students \n");
    printf("4)Salary status of teachers \n");
    char x;
    struct tran parikh = {"Shubham - All checks are cleared! \n \0"};
    struct tran ram = {"Dev - 2 checks are remaining \n \0"};
    struct tran gupta = {"Aditya - All checks are remaining \n \0"};
    struct tran patel = {"Vraj - 1 check is remaining \n \0"};
    struct tran jpatel = {"Jainel - Baap ni school che \n \0"};

    scanf("%c", &x);

    if (x == '1')
    {
        printf("Enter the SR number of the student to get details! \n");
        printf("1)Shubham \n");
        printf("2)Dev \n");
        printf("3)Vraj \n");
        printf("4)Aditya \n");
        printf("5)Jainel \n");
        printf("6)all \n");

        int f;
        scanf("%d", &f);
        if (f == 1)
        {
            printf("Name \n");
            printf("%s", shubham.name);
            printf("\n Age \n");
            printf("%d", shubham.Age);
            printf("\n Standard \n");
            printf("%d", shubham.std);
            printf("\n Grade \n");
            printf("%s", shubham.grade);
        }
        else if (f == 2)
        {
            printf("\n Name \n");
            printf("%s", dev.name);
            printf("\n Age \n");
            printf("%d", dev.Age);
            printf("\n Standard \n");
            printf("%d", dev.std);
            printf("\n Grade \n");
            printf("%s", dev.grade);
        }
        else if (f == 3)
        {
            printf("\n Name \n");
            printf("%s", vraj.name);
            printf("\n Age \n");
            printf("%d", vraj.Age);
            printf("\n Standard \n");
            printf("%d", vraj.std);
            printf("\n Grade \n");
            printf("%s", vraj.grade);
        }
        else if (f == 4)
        {
            printf("\n Name \n");
            printf("%s", aditya.name);
            printf("\n Age \n");
            printf("%d", aditya.Age);
            printf("\n Standard \n");
            printf("%d", aditya.std);
            printf("\n Grade \n");
            printf("%s", aditya.grade);
        }
        else if (f == 5)
        {
            printf("\n Name \n");
            printf("%s", jainel.name);
            printf("\n Age \n");
            printf("%d", jainel.Age);
            printf("\n Standard \n");
            printf("%d", jainel.std);
            printf("\n Grade \n");
            printf("%s", jainel.grade);
        }
        else if (f == 6)
        {
            // Shubham
            printf("Name \n");
            printf("%s", shubham.name);
            printf("\n Age \n");
            printf("%d", shubham.Age);
            printf("\n Standard \n");
            printf("%d", shubham.std);
            printf("\n Grade \n");
            printf("%s", shubham.grade);

            // Dev
            printf("\n Name \n");
            printf("%s", dev.name);
            printf("\n Age \n");
            printf("%d", dev.Age);
            printf("\n Standard \n");
            printf("%d", dev.std);
            printf("\n Grade \n");
            printf("%s", dev.grade);

            // vraj
            printf("\n Name \n");
            printf("%s", vraj.name);
            printf("\n Age \n");
            printf("%d", vraj.Age);
            printf("\n Standard \n");
            printf("%d", vraj.std);
            printf("\n Grade \n");
            printf("%s", vraj.grade);

            // aditya
            printf("\n Name \n");
            printf("%s", aditya.name);
            printf("\n Age \n");
            printf("%d", aditya.Age);
            printf("\n Standard \n");
            printf("%d", aditya.std);
            printf("\n Grade \n");
            printf("%s", aditya.grade);

            // Jainel
            printf("\n Name \n");
            printf("%s", jainel.name);
            printf("\n Age \n");
            printf("%d", jainel.Age);
            printf("\n Standard \n");
            printf("%d", jainel.std);
            printf("\n Grade \n");
            printf("%s", jainel.grade);
        }
        else
        {
            printf("Wrong Number!");
        }
    }
    else if (x == '2')
    {
        printf("Please enter the sr no of the teacher to get the information \n");
        printf("1)Monika Khatri \n");
        printf("2)Shaunak Patel \n");
        printf("3)Vijay Kachadiya \n");
        printf("4)Kanti Khimanand \n");
        printf("5)Krunal Makhawana \n");
        printf("6)All \n");

        int u;
        scanf("%d", &u);
        if (u == 1)
        {
            printf("Name ");
            printf("%s \n", mk.fname);
            printf("Subject ");
            printf("%s \n", mk.sub);
            printf("Salary ");
            printf("%d \n", mk.salary);
            printf("Age ");
            printf("%d \n", mk.age);
        }
        else if (u == 2)
        {
            printf("Name ");
            printf("%s \n", sk.fname);
            printf("Subject ");
            printf("%s \n", sk.sub);
            printf("Salary ");
            printf("%d \n", sk.salary);
            printf("Age ");
            printf("%d \n", sk.age);
        }
        else if (u == 3)
        {
            printf("Name ");
            printf("%s \n", vk.fname);
            printf("Subject ");
            printf("%s \n", vk.sub);
            printf("Salary ");
            printf("%d \n", vk.salary);
            printf("Age ");
            printf("%d \n", vk.age);
        }
        else if (u == 4)
        {
            printf("Name ");
            printf("%s \n", kk.fname);
            printf("Subject ");
            printf("%s \n", kk.sub);
            printf("Salary ");
            printf("%d \n", kk.salary);
            printf("Age ");
            printf("%d \n", kk.age);
        }
        else if (u == 5)
        {
            printf("Name ");
            printf("%s \n", km.fname);
            printf("Subject ");
            printf("%s \n", km.sub);
            printf("Salary ");
            printf("%d \n", km.salary);
            printf("Age ");
            printf("%d \n", km.age);
        }
        else if (u == 6)
        {
            printf("Name ");
            printf("%s \n", mk.fname);
            printf("Subject ");
            printf("%s \n", mk.sub);
            printf("Salary ");
            printf("%d \n", mk.salary);
            printf("Age ");
            printf("%d \n \n \n", mk.age);

            printf("Name ");
            printf("%s \n", sk.fname);
            printf("Subject ");
            printf("%s \n", sk.sub);
            printf("Salary ");
            printf("%d \n", sk.salary);
            printf("Age ");
            printf("%d \n \n \n", sk.age);

            printf("Name ");
            printf("%s \n", vk.fname);
            printf("Subject ");
            printf("%s \n", vk.sub);
            printf("Salary ");
            printf("%d \n", vk.salary);
            printf("Age ");
            printf("%d \n \n \n", vk.age);

            printf("Name ");
            printf("%s \n", kk.fname);
            printf("Subject ");
            printf("%s \n", kk.sub);
            printf("Salary ");
            printf("%d \n", kk.salary);
            printf("Age ");
            printf("%d \n \n \n", kk.age);

            printf("Name ");
            printf("%s \n", km.fname);
            printf("Subject ");
            printf("%s \n", km.sub);
            printf("Salary ");
            printf("%d \n", km.salary);
            printf("Age ");
            printf("%d \n \n \n", km.age);
        }
        else
        {
            printf("Wrong input!");
        }
    }
    else if (x == '3')
    {
        printf("Enter the SR number of the student to get details! \n");
        printf("1)Shubham \n");
        printf("2)Dev \n");
        printf("3)Vraj \n");
        printf("4)Aditya \n");
        printf("5)Jainel \n");
        printf("6)all \n");

        int o;
        scanf("%d", &o);

        if (o == 1)
        {
            printf("%s", parikh.money);
        }
        else if (o == 2)
        {
            printf("%s", ram.money);
        }
        else if (o == 3)
        {
            printf("%s", patel.money);
        }
        else if (o == 4)
        {
            printf("%s", gupta.money);
        }
        else if (o == 5)
        {
            printf("%s", jpatel.money);
        }
        else if (o == 6)
        {
            printf("%s", parikh.money);
            printf("%s", ram.money);
            printf("%s", patel.money);
            printf("%s", gupta.money);
            printf("%s", jpatel.money);
        }
        else
        {
            printf("Wrong input!");
        }
    }
    else if (x == '4')
    {
        
    }
    else
    {
        printf("Worng input! \n");
    }

    return 0;
}