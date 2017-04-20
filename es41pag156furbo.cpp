#include <iostream>
#define N 100
using namespace std;

int main(){
int a[]={0, 7, -1, 0,5,4,10,1,9,2,-43,-2};
int dim=15;
int somme[15];
int appoggio=0;

for (int i=0; i< dim; i++)
appoggio+=a[i];

for( int i=0;i<dim;i++){
    somme[i]=appoggio;
    appoggio-=a[i];
}
return 0;

}
