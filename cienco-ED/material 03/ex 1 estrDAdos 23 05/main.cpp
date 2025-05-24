#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int opcao, valor;

    do {
        cout << "\n=== Menu da Pilha ===" << endl;
        cout << "1. Inserir elemento na pilha" << endl;
        cout << "2. Remover elemento do topo da pilha" << endl;
        cout << "3. Ver elemento do topo da pilha" << endl;
        cout << "4. Verificar se a pilha está vazia" << endl;
        cout << "5. Exibir tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                pilha.push(valor);
                cout << "Valor inserido com sucesso!" << endl;
                break;

            case 2:
                if (!pilha.empty()) {
                    cout << "Removendo o topo: " << pilha.top() << endl;
                    pilha.pop();
                } else {
                    cout << "A pilha está vazia!" << endl;
                }
                break;

            case 3:
                if (!pilha.empty()) {
                    cout << "Topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha está vazia!" << endl;
                }
                break;

            case 4:
                cout << (pilha.empty() ? "A pilha está vazia." : "A pilha NÃO está vazia.") << endl;
                break;

            case 5:
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;

            case 0:
                cout << "Encerrando o programa." << endl;
                break;

            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

    } while(opcao != 0);

    return 0;
}
