/*Progama com a funcao de aprende a utilizar modulos em c++

	Criei um programa com o modulo da my_math.cpp com as funcoes e defini ela em my_math.h
	Esse programa realiza funcoes de Fatorial, Area do quadrado e area do Retangulo.
	Existe um menu onde o usuario pode escolher entre as 3 opcoes.
	
	É necessario que estejam na mesma pasta o "main.cpp", "my_math.cpp" e o "my_math.h". Caso elas n estejam na mesma pasta o programa ira dar erro. 
*/
#include <iostream>
#include "my_math.h" // Inclui aqui o modulo criado por mim
using namespace std;

int main(int argc, char** argv)
{
	int op, n, lado, altura;
	n = 0;
	lado = 0;
	altura = 0;
	
	//Menu com as opcoes
	cout << "Qual operacao quer fazer?" << endl;
	cout << "1 - Fatorial" << endl;
	cout << "2 - Area do Quadrado" << endl;
	cout << "3 - Area do Retangulo" << endl;
	cout << "Opcao:";
	cin >> op;
	
	switch(op)
	{
		//Fatorial
		case 1:
			cout << "Digite o numero no qual quer se o fatorial:";
			cin >> n;
			cout << "Fatorial de " << n << " : " << fatorial(n);
			break;
		
		//Area do Quadrado
		case 2:
			cout <<"Digite a medida do lado do quadrado:";
			cin >> lado;
			cout << "A area do Quadrado eh: " << area_quadrado(lado);
			break;
		
		//Area do Retangulo
		case 3:
			cout <<"Digite a medida da base do retangulo: ";
			cin >> lado;
			cout <<"Digite a medida da altura do retangulo: ";
			cin >> altura;
			cout << "A area do retangulo eh:" << area_retangulo(lado, altura) ;
			break;
		
		//Caso o Usuario digite uma opcao invalida
		default:
			cout << "Operacao invalida";
			
	}
	return 0;
}
