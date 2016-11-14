#include <iostream>
using namespace std;
main(){

int x;
int y;
int ris=1;
cout<<"POTENZA DI UN NUMERO DATO IL NUMERO E L'ESPONENTE POSITIVO"<<endl;
cout<<"Inserire la base intera della potenza: "<<endl;
cin>>x;
cout<<"Inserire l'esponente intero"<<endl;
cin>>y;
if(!(x==0 && y==0)){
    for(int i=0;i<y;i++){
    ris=ris*x;
}
cout<<"Il risultato di "<<x<<"^"<<y<<" e' "<<ris<<endl;
}
else
    cout<<"0^0 e' indefinito"<<endl;
    return 0;
}

