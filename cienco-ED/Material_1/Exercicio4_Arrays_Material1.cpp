#include <iostream>
using namespace std;


/*Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa.*/

int main() {
    const int TAM = 20;
    int numeros[TAM];

    // Leitura dos 20 n�meros
    cout << "Digite 20 numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    // Impress�o dos n�meros na ordem inversa
    cout << "Numeros na ordem inversa:" << endl;
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
