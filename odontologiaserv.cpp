#include<iostream>
#include<math.h>
#include<conio.h>
#include <stdlib.h>

using namespace std;



int ingresoedad()
{

	int d;
	cout << "ingrese edad entre 6 y 75 "; cin >> d;
	
	while (d >75 || d < 6)
	{
		cout << "ingrese edad entre 6y 75 "; cin >> d;
		
	}
	return d;
}



char sexo()
{

	char t;
	cout << "ingrese sexo m=masculino, f=femenino "; cin >> t;
	while (t != 'm' && t != 'M' && t != 'F' && t != 'f')
	{
		cout << "ingrese sexo m=masculino, f=femenino "; cin >> t;
	}
	return t;
}



char servicio()
{

	char t;
	cout << "ingrese servcio p=protesis, o=odontologia , i=odontologia infantil "; cin >> t;
	while (t != 'p' && t != 'P' && t != 'o' && t != 'O' && t != 'I' && t != 'i'	)
	{
		cout << "ingrese servcio p=protesis, o=odontologia , i=odontologia infantil "; cin >> t;
	}
	return t;
}



int satisfaccion()
{

	int t;
	cout << "ingrese satisfaccion 1=bueno, 2=regular , 3=malo "; cin >> t;
	while (t !=1 && t != 2 && t != 3)
	{
		cout << "ingrese satisfaccion 1=bueno, 2=regular , 3=malo "; cin >> t;
	}
	return t;
}






int main()
{
	char sex, servi;
	int satisfa;
	int edad, cantidad = 0;
	int ninos=0;
	int mujServOrtodonciaedad=0;
	int sumamujServOrtodoEda = 0;
	double promediomujServOrtodoncia=0;
	int contadoBUENO=0;
	int contadorregulaar=0;
	int contadormalo=0;
	int mayorfrecuencia=0;
	 do
	{
		edad = ingresoedad();
		
		sex = sexo();
		servi = servicio();
		
		satisfa = satisfaccion();

		
		if (edad < 11)
		ninos++;

		if ((sex == 'F' || sex == 'f' )&&(servi=='o'||servi=='O')) {
			mujServOrtodonciaedad++;
			sumamujServOrtodoEda = sumamujServOrtodoEda + edad;
			promediomujServOrtodoncia = sumamujServOrtodoEda / mujServOrtodonciaedad;

		}

		if (satisfa == 1)contadoBUENO++;
		if (satisfa == 2)contadorregulaar++;
		if (satisfa == 3)contadormalo++;

		if ((contadoBUENO > contadorregulaar) && (contadoBUENO > contadormalo))
			mayorfrecuencia = contadoBUENO;
		if ((contadormalo > contadorregulaar) && (contadormalo > contadoBUENO))
			mayorfrecuencia = contadormalo;
		if ((contadorregulaar > contadoBUENO) && (contadorregulaar > contadormalo))
			mayorfrecuencia = contadorregulaar;
			
		if ((sex == 'F' || sex == 'f') && (servi == 'e' || servi == 'E')) {
			mujServOrtodonciaedad++;
			sumamujServOrtodoEda = sumamujServOrtodoEda + mujServOrtodonciaedad;

		}
		cout << "clientes ninos menores q 11 :" << ninos << endl;
		cout << "promedio edad mujeres con servicio ortodoncia:" << promediomujServOrtodoncia << endl;
		cout << "nivel de satisfaccion de mator frecuencia:" << mayorfrecuencia << endl;
	
	} while (edad !=0);
	



	_getch();
}
