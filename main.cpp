#include <iostream>

using namespace std;

int main()
{
  float sal;
  float novoSal;
  float valorReajuste;

  cout << " informe seu salario: ";
  cin >> sal;

  if (sal < 1000)
  {
      valorReajuste = (sal * 1.15) / 100;
  }
  else if (sal >= 100 && sal <= 1500)
  {
      valorReajuste = (sal * 1.10) / 100;
  }
  else
  {
      valorReajuste = (sal * 0.5) / 100;
  }

  novoSal = sal + valorReajuste;

  cout << " seu novo salario e: " << novoSal << endl;
}
