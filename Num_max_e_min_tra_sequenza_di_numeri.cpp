#include <iostream>

using namespace std;

main(){

int num=0;
int num_max;
int num_min;
int pos_max;
int pos_min;
cout<<"inserire una sequenza di numeri interi, digitare il numero 0 per terminare"<<endl<<"la sequenza e continuare"<<endl<<endl;

    cout<<"digitare un numero: ";
    cin>>num;
    num_max=num;
    num_min=num;
    if(num!=0)
    {
    if(num>num_max)
        num_max=num;
    if(num<num_min)
        num_min=num;
    }
do
{
    cout<<"digitare un numero: ";
    cin>>num;
    if(num!=0)
    {
    if(num>num_max)
        num_max=num;
    if(num<num_min)
        num_min=num;
    }
}
while(num!=0);

cout<<"Il numero maggiore tra quelli digitati e': "<<num_max<<endl;
cout<<"Il numero minore tra quelli digitati e': "<<num_min<<endl;

}
