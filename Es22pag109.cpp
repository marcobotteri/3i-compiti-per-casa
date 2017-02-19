#include <iostream>
using namespace std;

int inverti(int, int);

main(){
int numero;
int inverso=0;
cout<<"Inserire un numero: "<<endl;
cin>>numero;
cout<<"Il numero invertito e' "<<inverti(numero, inverso)<<endl;

}

int inverti(int numero, int inverso)
{
    if(numero==0)
        return inverso;
    else
    {
        inverso=inverso*10+numero%10;
        return inverti(numero/10, inverso);
    }
}
