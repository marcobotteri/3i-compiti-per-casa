#include <iostream>

using namespace std;

main()
{

int num;
int somma=0;
int N;
int resto;
cout<<"Quanti numeri vuoi inserire? ( N<100 )"<<endl;
cin>>N;
int i=0;
while(i<N)
{
    cout<<"inserire un numero intero"<<endl;
    cin>>num;
    resto=num%2;
    if(resto==1||resto==-1)
        somma+=num;

    i++;
}
cout<<"la somma dei numeri dispari e': "<<somma;

return 0;

}
