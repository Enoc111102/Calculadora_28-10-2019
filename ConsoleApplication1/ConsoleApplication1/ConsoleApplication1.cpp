// ProgramaMenu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iomanip>
#include <cmath>
#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include<vector>
#include<array>
#define REDF "\x1b[41m"
#define LIGHT_CYANF "\x1b[106m"
#define WHITEF "\x1b[47m"
#define BLACK "\x1b[30m"
#define LIGHT_WHITEF "\x1b[107m"
#define MAGENTA "\x1b[35m"

using namespace std;

void pausa();

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();

		cout << BLACK REDF "------------------------------------------------------------" << endl << endl;
		cout << "                       Calculadora                         " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
		cout << "\t1 .- Multiplicacion" << endl;
		cout << "\t2 .- Divison" << endl;
		cout << "\t3 .- Suma" << endl;
		cout << "\t4 .- Resta" << endl;
		cout << "\t5 .- Salir" << endl;

		cout << "Elige una opcion: ";
		cin >> tecla;
		cout << endl;
		cout << LIGHT_CYANF "Poryecto realizado por; \n Hector Enoc Alvarez Diaz \n Diego Aponte Cabrera \n Gustavo Alejanro Toscano Ramirez  \n Luis Antonio Hernandez Preciado" << endl << endl << endl;

		switch (tecla)
		{

		case '1':
			system("cls");
			cout << "Has elegido Multiplicacion. \n" << endl;
			{
				int dig1, dig2, resultado;
				cout << "Introduce el primer digito: ";
				cin >> dig1;
				cout << endl;
				cout << "Introduce el segundo digito digito: ";
				cin >> dig2;
				cout << endl;
				resultado = dig1 * dig2;
				cout << "El resultado es; " << resultado << endl;
				getwchar();
			}
			pausa();
			break;

		case '2':
			system("cls");
			cout << "Has elejido Division. \n";
			{
				int dig1, dig2, resultado;
				cout << "Introduce el primer digito: ";
				cin >> dig1;
				cout << endl;
				cout << "Introduce el segundo digito digito: ";
				cin >> dig2;
				cout << endl;
				resultado = dig1 / dig2;
				cout << "El resultado es; " << resultado << endl;
				getwchar();
			}
			pausa();
			break;

		case '3':
			system("cls");
			cout << "Has elejido Suma. \n";
			{
				int dig1, dig2, resultado;
				cout << "Introduce el primer digito: ";
				cin >> dig1;
				cout << endl;
				cout << "Introduce el segundo digito digito: ";
				cin >> dig2;
				cout << endl;
				resultado = dig1 + dig2;
				cout << "El resultado es; " << resultado << endl;
				getwchar();
			}
			pausa();
			break;

		case '4':
			system("cls");
			cout << "Has elejido Resta. \n";
			{
				int dig1, dig2, resultado;
				cout << "Introduce el primer digito: ";
				cin >> dig1;
				cout << endl;
				cout << "Introduce el segundo digito digito: ";
				cin >> dig2;
				cout << endl;
				resultado = dig1 - dig2;
				cout << "El resultado es; " << resultado << endl;
				getwchar();
			}
			pausa();
			break;

		case '5':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;
		}
	} while (bandera != true);
	return 0;
}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa dos veces la tecla " << "Enter" << " para continuar... ";
	getwchar();
	getwchar();
}