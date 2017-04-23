#include <iostream>
using namespace std;
void stampa(int[], int);

main(){
int v[]={6,-9,-6,8,3,-1};
int dim =6;
int somma=0;
stampa(v, dim);
for(int i=0;i<dim;i++) somma+=v[i];
cout<<somma;
}

void stampa(int v[], int dim){
for(int i=0;i<dim;i++) cout<<v[i]<<" ";
cout<<endl;
}
