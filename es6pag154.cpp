#include <iostream>
using namespace std;
void stampa(int[], int);

main(){
int v[]={6,-9,-6,8,3,-1};
int dim =6;
stampa(v, dim);
int sp=0, sm=0;
for(int i=0;i<dim;i++){
    if(v[i]>0) sp+=v[i];
    if(v[i]<0) sm+=v[i];
}
cout<<"somma positive= "<<sp<<endl<<"somma negative= "<<sm<<endl;
}


void stampa(int v[], int dim){
for(int i=0;i<dim;i++) cout<<v[i]<<" ";
cout<<endl;
}
