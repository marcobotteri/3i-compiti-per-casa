#include <iostream>
using namespace std;

void stampa(int[],int);

int main(){
int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int dim=20;
int pos;
stampa(a,dim);
cout<<"Digitare la posizione dell'elemento da cancellare (si parte a contare dallo 0)"<<endl;
cin>>pos;
for(int i=pos;i<dim;i++) a[i]=a[i+1];
dim=dim-1;
stampa(a,dim);

}

void stampa(int a[],int dim){
for(int i=0;i<dim;i++) cout<<" "<<a[i];
cout<<endl;

}
