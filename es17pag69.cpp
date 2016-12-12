#include <iostream>
using namespace std;

int main()
{
    int zona, dimensioni;
    float percentuale, prezzo;
    cout<<"Quale zona ha scelto il cliente (0 per Centro, 1 per zona 1, 2 per zona 2, 3 per zona 3, 4 per periferia)"<<endl;
    cin>>zona;
    cout<<"Di quanti metri quadri e' l'appartamento?"<<endl;
    cin>>dimensioni;
    cout<<"Qual e' la provvigione dell'agenzia?"<<endl;
    cin>>percentuale;
    switch(zona){
    case 0: prezzo= 1500*dimensioni; break;
    case 1: prezzo= 1200*dimensioni; break;
    case 2: prezzo= 1400*dimensioni; break;
    case 3: prezzo= 1300*dimensioni; break;
    default: prezzo= 1000*dimensioni; break;
    }
    prezzo=prezzo*(1+percentuale/100);
    cout<<"Il cliente deve pagare €"<<prezzo<<endl;
    return 0;
}
