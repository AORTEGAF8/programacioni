#include<iostream>
#include<cstdlib>
using namespace std;
	int menu;
	int par;
	int ano;
	int igual;
	int iguall;
	int edad;
	int nota;
	int main(){
		do{
			cout<<"5 EJERCICIOS ABNER ORTEGA"<< endl;
			cout<<"1.Si un numero ingresado es par. [1]"<< endl;
			cout<<"2.Si un año ingresado es bisiesto o no. [2]"<< endl;
			cout<<"3.Dos numeros y determine si son iguales. [3]"<< endl;
			cout<<"4.Verifique si es mayor de edad. [4]"<< endl;
			cout<<"5.Si un estudiante aprobo un examen [5]"<< endl;
			cin>> menu;
			system("cls");
			switch(menu)
				{
					case 1:
							cout<<"Ver si el numero ingresado es par"<< endl;
							cout<<"Ingresa tu numero:"<< endl;
							cin>> par;
							if(par % 2 == 0){
								cout<<"El numero es par \n";
							}
							else{
								cout<<"El numero es impar \n";
							}
							system("pause");
							break;
					case 2:
							cout<<"Saber si el año es biciesto o no"<< endl;
							cout<<"Ingresa tu año"<< endl;
							cin>> ano;
							if(ano % 4== 0 && ano % 100 != 0 || ano % 400 == 0) {
								cout<<"El año es biciesto \n";
							}
							else{
								cout<<"el año no es biciesto \n";
							}
							system("pause");
							break;
					case 3:
							cout<<"Saber si los nueros son iguales"<< endl;
							cout<<"Ingresa numero 1"<< endl;
							cin>> igual;
							cout<<"ingresa numero 2"<< endl,
							cin>> iguall;
							if(igual == iguall){
								cout<<"Los numeros son iguales \n";
							}
							else{
								cout<<"Los numeros no son iguales \n";
							}
							system("pause");
							break;
					case 4:
							cout<<"Saber si es mayor de edad"<< endl;
							cout<<"Ingrese su edad"<< endl;
							cin>> edad;
							if(edad >= 18){
							cout << "Eres mayor de edad \n";	
							}
							else{
							cout << "Eres menor de edad \n";
							}
							system("pause");
							break;
							case 5:
							cout<<"Saber si aprobe el examen"<< endl;
							cout<<"Escribe tu nota"<< endl;
							cin>> nota;
							if("nota >= 6"){
								cout<<"Examen aprobado \n";
							}
							else{
								cout<<"Examen fallado \n";
							}
							system("pause");
							break;
							
				}
		system("cls");
	
	}while (menu <= 5);
	cout << "Opcion invalida" << endl;
		return 0;
	}
