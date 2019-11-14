#include<stdio.h>
int main(void)
{
int n, a=0, b=1, i, c;
printf ("enter limit ");
scanf ("%d",&n);
for(i=1;i<=n; i++){
printf ("%d \n", a);
    c=a+b;
    a=b;
    b=c;
}
}
