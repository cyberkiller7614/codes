#include<stdio.h>

int main(){

    printf("---     ---\n");
    printf("|a   b   c|\n");
    printf("|d   e   f|\n");
    printf("|g   h   i|\n");
    printf("---     ---\n");

    int a,b,c,d,e,f,g,h,i;

    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    printf("Enter the value of d \n");
    scanf("%d", &d);
    printf("Enter the value of e \n");
    scanf("%d", &e);
    printf("Enter the value of f \n");
    scanf("%d", &f);
    printf("Enter the value of g \n");
    scanf("%d", &g);
    printf("Enter the value of h \n");
    scanf("%d", &h);
    printf("Enter the value of i \n");
    scanf("%d", &i);

    int x,y,z,m,n,v,q,j,u,w,t,r,add;
    x= e*i;
    y= f*h;
    z= x-y;
    m= z*a;
    // calc 1 over
    n= d*i;
    v= g*f;
    q= n-v;
    j= b*q;
    //calc 2 over
    u= d*h;
    w= g*e;
    t= u-w;
    r= c*t;
    add = r-j+m;
    //calc 3 over

    printf("The value of this matrice is %d \n",add );



 return 0;

}