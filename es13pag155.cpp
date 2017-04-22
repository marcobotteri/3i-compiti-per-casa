#include <iostream>
using namespace std;
int main(){
int a[]={3,6,9,2,6,8,76,34,90,5,23,54,76,-65,-25,-32}; //N=15
int b[]={2,5,8,9,3,8,2,65,29,93,67,27,689,-876,3};     //N=15
int c[]={-65,-354,58,986,35,1,6,4,8,5,9,-35,-4,-3,78}; //N=15
int dim=15;
int prod_scal=0;

for(int i=0;i<dim;i++) prod_scal+=a[i]*b[i];
for(int i=0;i<dim;i++) c[i]*prod_scal;
}
