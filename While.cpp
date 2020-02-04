// Comando While - Utilizei do while para imprimir apenas numeros pares de 1 a 100
#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	
	while(n <= 100)
	{
		if( n %2 != 0)
		{
			n++;
			continue; // usei o continue para voltar e fazer o loop sempre que for impar
		}
		cout << n << endl;
		n++;	
	}
	
	return 0;
}