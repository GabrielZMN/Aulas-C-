// Programa que tem como função descobrir a idade de uma das 3 pessoas armazenadas no sistema usando o Class.

#include <iostream>
#include <string.h>
using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;

};

int getIdade(Pessoa pessoas[], char nome[])
{
	int tam = sizeof(pessoas) -1 ; // Usado para ver a quantidade de pessoas no programa
	
	for(int i = 0; i < tam ; i++)
	{
		if(strcmp(nome, pessoas[i].nome) ==0) //Usado para checar se é o nome digitado
			return pessoas[i].idade;
	}
	return -1; // Caso não encontre o nome digitado retorna -1 como erro
}


int main(int argc, char *argv[])
{
	int idade;
	char nome[100];
	Pessoa pessoas[3] =
	{
		{"joao", "11111111111", 30},
		{"maria", "22222222222", 20},
		{"lucas", "33333333333", 24}
	};

	/* Ou pode fazer esse comando
		strcpy(pessoas[0].nome, "joao");
		strcpy(pessoas[0].cpf, "11111111111");
		pessoas[0].idade = 30;
	*/
	cout << "Nome: " << pessoas[0].nome << endl;
	cout << "Nome: " << pessoas[1].nome << endl;
	cout << "Nome: " << pessoas[2].nome << endl;

	cout << "Digite a pessoa que quer a idade: ";
	cin >> nome;
	
	idade = getIdade(pessoas, nome);
	
	if(idade != -1)
	{
		cout << "Idade de " << nome << ": "<< idade<<endl;
	}
	else
	{
		cout << "pessoa nao encontrada";		
	}
	
	return 0;
}
