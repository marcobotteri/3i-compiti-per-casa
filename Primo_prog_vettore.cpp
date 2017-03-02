#include <iostream>

using namespace std;
int ottienidimensione (void);

int main(){
    int v[10];        // dichiarazione di un vettore di 10 interi
    int numelementi;  // numero di elementio dell'array v
    numelementi=ottienidimensione();
    for (int i=0; i < numelementi; i++) {
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> v[i];
    }
    system("PAUSE");
    return 0;
}

int ottienidimensione(){
    int dim;
    do {
        cout << "Inserisci il numero di elementi";
        cin >> dim;
    } while (dim <= 0 || dim > 10);
    return dim;
}
