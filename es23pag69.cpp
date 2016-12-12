#include <iostream>
using namespace std;
int main()
{
    int N, x, nmin, nmax;
    cout<<"Quanti numeri interi vuoi inserire (almeno uno)?"<<endl;
    cin>>N;
    for(int i=0; i<N; i++){
        cout<<"dammi un numero intero: "<<endl;
        cin>>x;
       if(i>0){
        if(x<nmin)
            nmin=x;
        if(x>nmax)
            nmax=x;
        continue;
       }
        nmin=x;
        nmax=x;
    }
    cout<<"Il numero maggiore tra quelli dati e' "<<nmax<<endl;
    cout<<"Il numero minore tra quelli dati e' "<<nmin<<endl;
    return 0;
}
