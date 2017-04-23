#include <iostream>
using namespace std;

main(){
int r[]={0,1,0,1,1,0,0,1};
int t[]={1,0,1,1,1,0,1,1};
int v[8];
int dim =8;
for(int i=0;i<dim;i++) cout<<r[i]<<" ";cout<<" +"<<endl;
for(int i=0;i<dim;i++) cout<<t[i]<<" "; cout<<" ="<<endl;
cout<<"_________________"<<endl;

for(int i=7;i>=0;i--){
    if(r[i]==0&&t[i]>0||t[i]==0&&r[i]>0) v[i]=1;
    else if(r[i]==0&&t[i]==0) v[i]=0;
    else if(r[i]>=1&&t[i]>=1){ v[i]=r[i]+t[i]-2;
    r[i]++;
    }
for(int i=0; i<dim; i++) cout<<v[i];
}

}
