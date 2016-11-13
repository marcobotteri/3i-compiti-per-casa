#include <iostream>
using namespace std;
main(){

int n;
int m;
int ris=1;
cout<<"POTENZA DI UN NUMERO DATO IL NUMERO E L'ESPONENTE POSITIVO"<<endl;
cout<<"Inserire un numero: "<<endl;
cin>>n;
cout<<"Inserire l'esponente positivo"<<endl;
cin>>m;
for(int i=0;i<m;i++){
    ris=ris*n;
}
cout<<"Il risultato di "<<n<<"^"<<m<<" e' "<<ris<<endl;
}
