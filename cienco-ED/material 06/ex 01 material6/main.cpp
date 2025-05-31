#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaClientes;
    int opcao;
    string nomeCliente;

    do {
        cout << "\n=== Sistema de Atendimento ===\n";
        cout << "1. Inserir cliente na fila\n";
        cout << "2. Atender pr�ximo cliente\n";
        cout << "3. Exibir fila de espera\n";
        cout << "4. Encerrar programa\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        cin.ignore(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nomeCliente);
                filaClientes.push(nomeCliente);
                cout << "Cliente " << nomeCliente << " inserido na fila.\n";
                break;

            case 2:
                if (!filaClientes.empty()) {
                    cout << "Atendendo cliente: " << filaClientes.front() << "\n";
                    filaClientes.pop();
                } else {
                    cout << "A fila est� vazia. Nenhum cliente para atender.\n";
                }
                break;

            case 3:
                if (!filaClientes.empty()) {
                    cout << "Clientes na fila:\n";
                    queue<string> filaTemp = filaClientes; // C�pia para exibi��o
                    while (!filaTemp.empty()) {
                        cout << "- " << filaTemp.front() << "\n";
                        filaTemp.pop();
                    }
                } else {
                    cout << "A fila est� vazia.\n";
                }
                break;

            case 4:
                cout << "Encerrando o programa...\n";
                break;

            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}
