#include <iostream>
using namespace std;
main()
{

int v[10];
int numeri;
int i=0;
int sd=0;
int mp=1;
do{
cout<<"Quanti numeri vuoi inserire? (<=10) ";
cin>>numeri;} while(numeri>10);
for(i=0;i<numeri;i++)
{
    cout<<"Inserire il "<<i+1<<" numero: ";
    cin>>
    v[i];
}
for(i=1;i<=numeri;i=i+2)
{
    mp*=v[i];
}
cout<<"Il prodotto dei numeri di posto pari e': "<<mp<<endl;

//non funziona la somma
for(i=0;i<=numeri;i=i+2)
{
    sd+=v[i];
}
cout<<"La somma dei numeri di posto dispari e': "<<sd<<endl;
}
