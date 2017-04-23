#include <iostream>
using namespace std;
void stampa(int[], int);

main(){
int v[]={6,-9,-6,8,3,-1};
int dim =6;
stampa(v, dim);
int k[6];
int j=0;
for(int i=5;i>=0;i--){
    k[j]=v[i];
    j++;
}
for(int i=0;i<dim;i++) cout<<k[i]<<" ";
cout<<endl;
}

void stampa(int v[], int dim){
for(int i=0;i<dim;i++) cout<<v[i]<<" ";
cout<<endl;
}
