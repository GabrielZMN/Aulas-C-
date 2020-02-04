/*
	Usando um Laço For para Implementar o fatorial do Numero dado pelo Usuario
*/
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num, fat, i;

	cout << "Digite um numero:" ;
	cin >> num;

//Usando a condição para tratar o 0!
	
	if (num != 0)
	{
		for(i = 1, fat = 1; i <= num; i++)
		{
			fat *= i;
		}

	}
	
	else
	{
		fat = 1;
	}
	cout << "O fatorial e:" << fat << endl;

	return 0;
}
