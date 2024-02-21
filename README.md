#include <iostream>
#include <cmath>

// Declaración de funciones
int suma_pares_o_impares(int numero, bool es_par);
int factorial_while(int n);
int contar_digitos(int numero);
void ordenar_numeros(int& a, int& b, int& c);
int suma_digitos(int numero);

int main() {
    int opcion;

    do {
        // Menú de opciones
        std::cout << "Seleccione una opción:" << std::endl;
        std::cout << "1. Suma de números pares e impares" << std::endl;
        std::cout << "2. Factorial con bucle while" << std::endl;
        std::cout << "3. Contador de dígitos" << std::endl;
        std::cout << "4. Ordenamiento de números" << std::endl;
        std::cout << "5. Suma de dígitos de un número" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Ingrese el número de opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero_input;
                std::cout << "Ingrese un número: ";
                std::cin >> numero_input;

                int resultado_pares = suma_pares_o_impares(numero_input, true);
                int resultado_impares = suma_pares_o_impares(numero_input, false);
                std::cout << "Suma de pares: " << resultado_pares << std::endl;
                std::cout << "Suma de impares: " << resultado_impares << std::endl;
                break;
            }
            case 2: {
                int numero_factorial;
                std::cout << "Ingrese un número para calcular el factorial: ";
                std::cin >> numero_factorial;

                int resultado_factorial = factorial_while(numero_factorial);
                std::cout << "Factorial de " << numero_factorial << ": " << resultado_factorial << std::endl;
                break;
            }
            case 3: {
                int numero_digitos;
                std::cout << "Ingrese un número para contar sus dígitos: ";
                std::cin >> numero_digitos;

                int cantidad_digitos = contar_digitos(numero_digitos);
                std::cout << "Cantidad de dígitos: " << cantidad_digitos << std::endl;
                break;
            }
            case 4: {
                int num1, num2, num3;
                std::cout << "Ingrese tres números para ordenar: ";
                std::cin >> num1 >> num2 >> num3;

                ordenar_numeros(num1, num2, num3);
                std::cout << "Números ordenados: " << num1 << " " << num2 << " " << num3 << std::endl;
                break;
            }
            case 5: {
                int numero_suma_digitos;
                std::cout << "Ingrese un número para sumar sus dígitos: ";
                std::cin >> numero_suma_digitos;

                int suma_digitos_resultado = suma_digitos(numero_suma_digitos);
                std::cout << "Suma de dígitos: " << suma_digitos_resultado << std::endl;
                break;
            }
            case 0:
                std::cout << "Saliendo del programa. ¡Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}

// Implementación de funciones
int suma_pares_o_impares(int numero, bool es_par) {
    int suma = 0;
    for (int i = 0; i <= numero; ++i) {
        if ((i % 2 == 0) == es_par) {
            suma += i;
        }
    }
    return suma;
}

int factorial_while(int n) {
    int resultado = 1;
    while (n > 1) {
        resultado *= n;
        --n;
    }
    return resultado;
}

int contar_digitos(int numero) {
    int contador = 0;
    do {
        ++contador;
        numero /= 10;
    } while (abs(numero) > 0);
    return contador;
}

void ordenar_numeros(int& a, int& b, int& c) {
    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);
}

int suma_digitos(int numero) {
    int suma = 0;
    do {
        suma += numero % 10;
        numero /= 10;
    } while (numero > 0);
    return suma;
}
