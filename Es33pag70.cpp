#include <iostream>
using namespace std;
main(){

int x;
int y;
int ris=1;
cout<<"POTENZA DI UN NUMERO DATO IL NUMERO E L'ESPONENTE"<<endl;
cout<<"Inserisci un numero positivo: "<<endl;
cin>>x;
cout<<"Inserisci un esponente positivo: "<<endl;
cin>>y;
for(int i=0; i<y; i++)
{
    ris=ris*x;
}
cout<<"Il risultato di "<<x<<" alla "<<y<<" e': "<<ris<<endl;
return 0;
}
