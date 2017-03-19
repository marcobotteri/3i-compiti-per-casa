#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define max 1000
using namespace std;
main()
{
int arrayNumeri[max], dato, max;
unsigned int i, num=0, posizMax;
arrayNumeri[0]=0;
cout<<"\nInserire i valori (0 per terminare): \n";
cin>>dato;
while(dato !=0 && num<max)
}
arrayNumeri[num]=dato;
num++;
if(num<max)
{
cin>>dato;
}
}
max=arrayNumeri[0];
posizMax=0;
for(i=1;i<max;i++)
{
if(array[i]>max)
{
max=arrayNumeri[i];
posizMax=1;
}
}
cout<<"Max:%d,posizione:%u\n"<<max<<posizMax;
system("PAUSE");
}
