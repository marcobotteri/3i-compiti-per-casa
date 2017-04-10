#include<iostream>
#include<string>
using namespace std;

// contiamo solo le lettere (alfabeto inglese)
// distinguiamo maiuscole e minuscole
int main(){
    char input [MAX];
    cout<<"Inserisci una stringa: "<<endl;
    gets (input);
    char primalettera= input[0];

	for (int i = 0; i < dim; i++){
        int contatore = 1;
        for(int j = i+1; j < dim; j++){
            if (input[j] == input[i])
                contatore++;

        }
        cout << "Ci sono " << contatore << " occorrenze di " << input[i] << endl;
	}
    return 0;
}
