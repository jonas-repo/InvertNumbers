#include <stdio.h>
#include <conio.h>

main ()
{
int N,m,m1,c,c1,d,d1,u;
printf("Dame un numero de 4 digitos: ");
scanf("%d",&N);
m=N/1000; 
m1=N%1000;
c =m1/100;
c1=m1%100;
d=c1/10;
d1=c1%10;
u=d1/1;

printf (" el numero espejo es %d%d%d%d",u,d,c,m);
getch();
}

