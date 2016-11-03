#include <iostream>

using namespace std;

main()
{
    int N;
    int num;
    int X;
    int num_magg=0;
    int num_min=0;
    int num_uguali=0;

    cout<<"Quanti numeri interi vuoi digitare?"<<endl;
    cin>>N;
    cout<<"Digitare un numero intero come riferimento"<<endl;
    cin>>X;

    int i;
    for(i=0;i<N;i++)
    {
        cout<<"Digitare un numero intero ";
        cin>>num;
        if(num>X)
            num_magg++;
        if(num<X)
            num_min++;
        if(num==X)
            num_uguali++;
    }
    cout<<endl;
    cout<<"I numeri digitati maggiori di "<<X<<" sono "<<num_magg<<endl;
    cout<<"I numeri digitati minori di "<<X<<" sono "<<num_min<<endl;
    cout<<"I numeri digitati uguali a "<<X<<" sono "<<num_uguali<<endl;






}
