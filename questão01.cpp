#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");

	int indice = 13, soma = 0, k = 0;

	while(k < indice)
	{
		k += 1;
		soma += k;
	}

	cout << "O valor da soma é: " << soma;


	return 0;
}
