#include <iostream>

using namespace std;

main()
{

int num=1;
int qta=1;
int resto;

cout<<"I primi 100 numeri pari sono:"<<endl;

while(qta<=100)
{
    resto=num%2;
    if(resto==0)
   {
       cout<<num<<",";
       qta++;
   }
   num++;
}
}
