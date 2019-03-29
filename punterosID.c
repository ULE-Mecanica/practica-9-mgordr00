#include <stdio.h>
#include <stdlib.h>
int main ()
{
int n,*p,min,i;
printf("Dime el nº de elementos\n");
scanf("%d",&n);
p=(int *)malloc(n+sizeof(int));
for (i=0;i<n;i++)
{
printf("Dame los valores\n");
scanf("%d",&*(p+i));
}
min=*p;
for (i=0;i<n;i++)
{
if (*(p+i)<min)
min=*(p+i);
}
printf("El mínimo es: %d\n",min);
free(p);
}

