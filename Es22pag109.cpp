#include <iostream>
using namespace std;

int inverti(int);

main()
{
    int n;
    cout<<"Inserire un numero intero:";
    cin>>n;
    cout<<"\nL'inverso del numero inserito e':"<<inverti();
}

int inverti(int n)
{
    int primacifra=n%10;
    int secondacifra=(n/10)%10;
    int terzacifra=(n/100)%10;
    int quartacifra=(n/1000)%10;
    if (secondacifra==0) return primacifra;
    if (terzacifra==0) return primacifra*10+secondacifra;
    if (quartacifra==0) return primacifra*100+secondacifra*10+terzacifra;

}
