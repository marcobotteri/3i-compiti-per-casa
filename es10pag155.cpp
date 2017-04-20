#include <iostream>
using namespace std;

int main(){
int a[]={3,6,8,5,8,5,8,4,9,2,-3,-75,-4,7,45};
int b[]={35,2,7,6,1,4,9,8,3,-65,-962,-245,654,98,3};
int dim=15;
int prodotto_scalare=0;
for(int i=0, i<dim;i++){
    prodotto_scalare+=a[i]*b[i];
}
return 0;
}
