#include <iostream>
using namespace std;
 int numero1 = 0, numero2 = 1, numero3;
// Función para calcular la serie de Fibonacci usando un ciclo for
void fibonacciFor(int num) {
cout << "La Serie de Fibonacci usando ciclo for:" << endl; //imprime la opcion para elegida en este caso for 1
cout << numero1 << " " << numero2 << " "; //lee variables
for (int i = 2; i < num; i++) { //como crecera la secuencia
numero3 = numero1 + numero2; //igualamos valores a otros ppara seguir
cout << numero3 << " "; // imprime el resultando de la regla de fibonacci
numero1 = numero2;
numero2 = numero3;
}
cout << endl;//termina el caso 1 for
}

// Función para calcular la serie de Fibonacci usando un ciclo while
void fibonacciWhile(int num) {
cout << "La Serie de Fibonacci usando ciclo while:" << endl;
cout << numero1 << " " << numero2 << " ";
int i = 2;
while (i < num) {
numero3 = numero1 + numero2;
cout << numero3 << " ";
numero1 = numero2;
numero2 = numero3;
i++;
}
cout << endl;
}

// Función para calcular la serie de Fibonacci usando un ciclo do-while
void fibonacciDoWhile(int num) {
cout << "La Serie de Fibonacci usando ciclo do-while:" << endl;
cout << numero1 << " " << numero2 << " ";
int i = 2;
do {
numero3 = numero1 + numero2;
cout << numero3 << " ";
numero1 = numero2;
numero2 = numero3;
i++;
} while (i < num);
cout << endl;
}
int main() { //iniciamos con la funcion inicial
int num;
cout << "Elige la cantidad de numeros para la serie de Fibonacci: "; //imprime cuantas veces se utlilizara la serie 
cin >> num;  //lee el numero a elegir
cout << "Selecciona el ciclo que prefieras para generar la serie Fibonacci:" << endl;
cout << "1. Ciclo 'for'" << endl;
cout << "2. Ciclo 'while'" << endl;
cout << "3. Ciclo 'do-while'" << endl;
int opcion;
cin >> opcion;
switch (opcion) {//esta funciona para elegir un caso especifico definido
case 1: // define cada caso con un numero diferente
fibonacciFor(num);
break;//termina el caso seleccionado
case 2:
fibonacciWhile(num);
break;
case 3:
fibonacciDoWhile(num);
break;
default:
cout << "Opción no válida. Inténtalo nuevamente." << endl;// al elegir un numero no existente imprime esto
}
return 0;//finaliza la ejecucion
}

