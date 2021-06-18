

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;


void IngresarDatos(float* pesos)
{	
	srand(time(NULL));
	for (int i = 0; i < 50; i++)
	{
		
		pesos[i] = 2 + rand() % (19);
		cout << "pesos(" << i + 1 << ")" << pesos[i] << endl;
	}
}

void Devuelve_menor( float* pesos)
{
	int menor = pesos[0];
	for (int i = 1; i <50; i++)
		if (menor > pesos[i])
			menor = pesos[i];
	cout << "el minimo peso es: " << menor << endl;
}

void Lista_DebajodelPromedio( float* pesos)
{
	float suma = 0;
	float Prom;
	for (int i = 0; i <50; i++)
		suma += pesos[i];
	Prom = suma / 50;
	cout << "El promedio de pesos es: " << Prom << endl;
	int numGatosMenorPesoProm=0;
	for (int i = 0; i < 50; i++)
	{
		if (pesos[i] < Prom) {
			numGatosMenorPesoProm++;
		}
	}
	cout << "el numero de gatos con menor peso al promedio: " << numGatosMenorPesoProm << endl;
}



int main()
{

	float* pesos;
	pesos = new float[50];
	IngresarDatos( pesos);
	Devuelve_menor(pesos);
	Lista_DebajodelPromedio(pesos);
	delete[] pesos;
	_getch();
}
