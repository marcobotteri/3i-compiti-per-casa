#include <iostream>
using namespace std;

void inizializza(int& tentativi_max, int& tentativo, int& numero, bool& vittoria, bool& sconfitta, int& num_segreto);
int interazioneUtente(int& numero, int& tentativo);
bool controlloVittoria(int numero, int num_segreto, bool& vittoria);
bool controlloSconfitta(int tentativo, int tentativi_max, bool vittoria, bool& sconfitta);

main() {
int tentativi_max, tentativo, numero, num_segreto;
bool vittoria, sconfitta;

cout<<"Hai 10 tenattivi per indovinare il numero segreto"<<endl<<endl;

inizializza(tentativi_max, tentativo, numero, vittoria, sconfitta, num_segreto);

do{
interazioneUtente(numero, tentativo);
controlloVittoria(numero, num_segreto, vittoria);
controlloSconfitta(tentativo, tentativi_max, vittoria, sconfitta);
} while(!vittoria && !sconfitta);

}


void inizializza(int& tentativi_max, int& tentativo, int& numero, bool& vittoria, bool& sconfitta, int& num_segreto){
tentativi_max=10;
tentativo=0;
num_segreto=5;
vittoria=false;
sconfitta=false;
}


int interazioneUtente(int& numero, int& tentativo) {
    cout<<"Inserire un numero: ";
    cin>>numero;
    tentativo++;
}

bool controlloVittoria(int numero, int num_segreto, bool& vittoria){
    if(numero==num_segreto){
            vittoria=true;
            cout<<endl<<"Hai indovinato il numero"<<endl;
    }

}


bool controlloSconfitta(int tentativo, int tentativi_max, bool vittoria, bool& sconfitta){
    if(tentativo==tentativi_max && vittoria==false) {
            sconfitta=true;
            cout<<"Hai perso"<<endl;
            }
        else if (vittoria==false) cout<<"Ritenta"<<endl;
}

