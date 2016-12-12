#include <iostream>
using namespace std;

int main(){
int N, quadrato;
cout<<"Dammi un numero intero > 0: "<<endl;
cin>>N;
for(int i=1; i<=N; i++){
    quadrato =1;
    for(int j=0; j<i; j++)
        quadrato=quadrato+2;
    cout<<"il quadrato del "<<i<<" numero naturale e' "<<quadrato<<endl;
}
return 0;
}
