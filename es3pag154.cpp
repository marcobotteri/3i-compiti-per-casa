#include <iostream>
using namespace std;

main()
{
int v[10];
int numeri;
int n;
int i=0;
do{
cout<<"Quanti numeri vuoi inserire? (<=10) ";
cin>>numeri;} while(numeri>10);
for(i=1;i<=numeri;i++)
{
    cout<<"Inserire il "<<i<<" numero: ";
    cin>>
    v[i];
}
cout<<"I numeri inseriti nell'ordine inverso sono:"<<endl;
for(i=numeri;i>0;i--)
{
    cout<<v[i]<<" ";
}
}
