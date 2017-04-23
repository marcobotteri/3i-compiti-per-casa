#include <iostream>
#include <string.h>
using namespace std;

main(){
string frase="Questo e' un esercizio di informatica";
int dim=37;
cout<<frase<<endl;
int tot_spazi=0;
for(int i=0; i<dim; i++){
    if(frase[i]==' ')
        tot_spazi++;
}
cout<<"Parole totali= "<<tot_spazi+1<<endl;
}
