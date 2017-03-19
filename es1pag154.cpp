#include <stdlib.h>
#include <stdio.h>
main()
{
int i,j;
int array[100];
for(i=0;i<100;i++)
array[i]==1;
for(i=2;i<100;i++)
{
if(array[i]==1)
{
for(j=0;j<(100/i)+1;j++)
array[i*j]=0;
}
}
printf("\n numeri primi <100\n");
for(i=1;i<100;i++)
{
if(array[i]=0)printf("\t%d",i);
}
system("PAUSE");
}
