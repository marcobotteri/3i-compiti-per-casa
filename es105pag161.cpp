#include <iostream>
using namespace std;

int main(){
char stringa_in[]={'c','i','a','o','\0'};
string stringa_in2="Ciao mamma come va?";
int numero_vocali=0;
int i=0;
while (stringa_in[i]!='\0'){
    if(stringa_in[i]=='a' ||stringa_in[i]=='e' ||stringa_in[i]=='i' ||stringa_in[i]=='o' ||stringa_in[i]=='u' ||
       stringa_in[i]=='A' ||stringa_in[i]=='E' ||stringa_in[i]=='I' ||stringa_in[i]=='O' ||stringa_in[i]=='U')
        numero_vocali++;
    i++;
}

return 0;
}
