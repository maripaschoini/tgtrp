#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int numero, n1 = 0, n2 = 1, n3, resp;
	cout << "Informe um n�mero que ser� o limite da sequ�ncia: ";
	cin >> numero;

	for (int i = 0; i < numero; i++)
	{
		cout << n1 << " - " ;
		if (n1 == numero)
		{
			resp = 1;
		}

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

	}
	cout << endl;
	if (resp == 1)
		cout << "O n�mero digitado pertence a sequ�ncia. \n";
	else
	{
		cout << "O n�mero digitado n�o pertence a sequ�ncia. \n";
	}


	return 0;
}