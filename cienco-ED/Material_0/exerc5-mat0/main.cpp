#include <iostream>

// calcule e apresente quanto deve ser pago
// por um produto considerando a leitura do pre�o de etiqueta (PE) e o c�digo da condi��o de pagamento (CP).

using namespace std;

int main()
{
    float preco;
    char codigo;

    cout << "Informe o preco da etiqueta: ";
    cin >> preco;

    cout << "Informe o codigo da etiqueta: ";
    cin >> codigo;

    switch (codigo){
    case '1':
        {
            preco = preco + (preco * 0.10);
            cout << "Preco � : " << preco << endl;
            break;
        }
        case '2':
        {
            preco = preco + (preco * 0.05);
            cout << "Preco � : " << preco << endl;
            break;
        }
        case '3':
        {
            preco = preco + (preco / 2);
            cout << "Preco � : " << preco << endl;
            break;
        }
        case '4':
        {
            preco = (preco + (preco *0.10)) /3;
            cout << "Preco e : " << preco << endl;
            break;
        }

    default:
        {
            cout << "Op��o inv�lida!";
        }
    }

    return 0;
}
