#include <iostream>

//Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
//a. A hora trabalhada vale a metade do sal�rio m�nimo;
//b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada
//c. O imposto equivale a 3% do sal�rio bruto;
//d.O sal�rio a receber equivale ao sal�rio bruto menos o imposto.


using namespace std;

int main()
{
    float horasTrabalhadas;
    float salarioMinimo;
    float salarioReceber;
    float numeroHoras;
    float salarioBruto;
    float imposto;


    cout << "Digite as horas trabalhadas: " << endl;
    cin >> horasTrabalhadas;

    cout << "Digite o valor do salario minimo: " << endl;
    cin >> salarioMinimo;

    horasTrabalhadas = salarioMinimo / 2;
    salarioBruto = numeroHoras * horasTrabalhadas;
    imposto = salarioBruto * 3/100;
    salarioReceber = salarioBruto - imposto;

    cout << "Salario Bruto: " << salarioBruto << endl;
    cout << "Salario a receber: " << salarioReceber << endl;



    return 0;
}
