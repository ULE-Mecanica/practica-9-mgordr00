#include <stdio.h>
#include <stdlib.h>
int main ()
{
int i,fil,col,*mat,j,suma=0;
printf("Dame el nº de filas y columnas de la matriz\n");
scanf("%d %d",&fil,&col);
mat=(int *)malloc(fil*col*sizeof(int));
for (i=0;i<fil;i++)
{
for (j=0;j<col;j++)
{
printf("Dame el nº de elementos de la matriz\n");
scanf("%d",&*(mat+fil*i+j));

}
}
for (i=0;i<fil;i++)
{
for (j=0;j<col;j++)
{
printf("%4d",*(mat+fil*i+j));
}
printf("\n");
}
for (i=0;i<fil;i++)
{
for (j=0;j<col;j++)
{
suma=suma+*(mat+fil*i+j);
}}
printf("La suma de los elementos es: %d\n",suma);
free(mat);
}
