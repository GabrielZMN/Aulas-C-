/* 
	Calculadora Basica - 
	Programa com a ideia de fazer operações basicas: Multiplição, Divisão, Soma e Subtração de dois numeros recebidos do usuário
*/
#include <iostream>

using namespace std;

int main()
{
	float num1, num2;
	float resultado;
	char op;
	num1= 0;
	num2= 0;
	resultado = 0;
	
	cout << "Digite o primeiro numero:";
	cin >> num1;
	cout << endl;
	cout << "Digite o segundo numero:";
	cin >> num2;
	cout << endl;
	
	
	// O modelo vai ser resultado = num1 (op) num2
	cout << "Digite o operador" << endl;
	cout << "+ -> Soma" << endl;
	cout << "- -> Subtracao" << endl;
	cout << "* -> Multiplicacao" << endl;
	cout << "/ -> Divisao" << endl;
	cin >> op;
	
	switch(op)
	{
		case '+':
			resultado = num1 + num2;
			cout << resultado;
			break;
		
		case '-':
			resultado = num1 - num2;
			cout << resultado;
			break;
		
		case '*':
			resultado = num1 * num2;
			cout << resultado;
			break;
		
		case '/':
			resultado = num1 / num2;
			cout << resultado;
			break;
		
		default:
			cout << "operacao invalida";
			
	}
	
	
	
	
	
	return 0;
}