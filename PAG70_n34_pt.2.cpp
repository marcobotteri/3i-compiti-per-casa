#include <iostream>
using namespace std;
main(){

int n;
int m;
float ris=1;
cout<<"POTENZA DI UN NUMERO DATO IL NUMERO E L'ESPONENTE"<<endl;
cout<<"Inserire un numero: "<<endl;
cin>>n;
cout<<"Inserire l'esponente"<<endl;
cin>>m;
if(m>0){
    for(int i=0;i<m;i++){
    ris=ris*n;}
}
else if(m==0){
    ris=1;}
else{
    for(int i=0;i>m;i--){
    ris=ris*n;
}
ris=1/ris;
}

cout<<"Il risultato di "<<n<<"^"<<m<<" e' "<<ris<<endl;
}
