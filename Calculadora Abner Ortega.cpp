#include <iostream>
using namespace std;

float num1 = 0;
float num2 = 0;
float resultado = 0; 

// Declaración de funciones
void suma();
void resta();
void multiplicacion();
void division();

int main() {
    // Llamadas a funciones
    suma();
    resta();
    multiplicacion();
    division();

    return 0;
}

void suma() {
    cout << "SUMA de Abner Ortega" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    resultado = (num1 + num2);
    cout << "La suma es: " << resultado << endl;
}

void resta() {
    cout << "RESTA de Abner Ortega" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    resultado = (num1 - num2);
    cout << "La resta es: " << resultado << endl;
}

void multiplicacion() {
    cout << "MULTIPLICACION de Abner Ortega" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    resultado = (num1 * num2);
    cout << "La multiplicacion es: " << resultado << endl;
}

void division() {
    cout << "DIVISION de Abner Ortega" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;

    // Manejo de división por cero
    if (num2 != 0) {
        resultado = (num1 / num2);
        cout << "La division es: " << resultado << endl;
    } else {
        cout << "Error: No es posible dividir entre cero." << endl;
    }
}
