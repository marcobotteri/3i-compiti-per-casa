#include <iostream>
using namespace std;

int main(){
char stringa_in[]={'c','i','a','o','\0'};
string stringa_in2="Ciao mamma come va?";
int numero_vocali=0;
int i=0;
while (stringa_in2[i]!='\0'){
    if(stringa_in2[i]=='a' ||stringa_in2[i]=='e' ||stringa_in2[i]=='i' ||stringa_in2[i]=='o' ||stringa_in2[i]=='u' ||
       stringa_in2[i]=='A' ||stringa_in2[i]=='E' ||stringa_in2[i]=='I' ||stringa_in2[i]=='O' ||stringa_in2[i]=='U')
        numero_vocali++;
    i++;
}
cout<<"Il numero di vocali e': "<<numero_vocali<<endl;
return 0;
}
