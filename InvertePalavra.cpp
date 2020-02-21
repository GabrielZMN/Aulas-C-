/*
	Programa que inverte uma palavra
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char nome[100];
	char* pNome;
	char* pInicio;
	int tamanho;
	
	cout<< "Digite a palavra:";
	cin >> nome;
	
	tamanho = strlen(nome);
	pInicio = &nome[0];
	pNome = &nome[tamanho];
	
	//Loop que faz o ponteiro percorrer de traz para frente imprimindo letra por letra, menos a primeira já que o pInicio vai apontar para o mesmo endereço de pNome
	while(pNome != pInicio)
	{
		cout << *pNome;
		pNome--;
	}	
	
	//If usado para imprimir a primeira letra
	if(pNome == pInicio)
	{
		cout << *pNome <<endl;
	}
	
	
	return 0;
}
