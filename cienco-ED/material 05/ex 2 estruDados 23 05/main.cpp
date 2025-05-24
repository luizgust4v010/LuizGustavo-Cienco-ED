#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite n�meros inteiros positivos (digite 0 ou negativo para encerrar):" << endl;

    while (true) {
        cout << "N�mero: ";
        cin >> numero;

        if (numero <= 0)
            break;

        pilha.push(numero);
    }

    cout << "\nN�meros na ordem inversa:" << endl;

    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << endl;

    return 0;
}
