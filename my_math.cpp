// Este Modulo Inclui Funcoes Matematicas

//Funcao do Fatorial
int fatorial(int n)
{
	int fat = 1;
	for(int i= 1; i < n; i++)
		fat = fat * (i+1);
	return fat;
	
}

//Funcao da Area do Quadrado
int area_quadrado(int lado)
{
	return lado * lado;
}

//Funcao da Area do Retangulo
int area_retangulo(int lado, int base)
{
	return lado * base;
}

