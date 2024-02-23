/*NOMBRE: Emmanuel Murillo Picazo
FECHA: 20 de Febrero de 2024
PROGRAMACION ESTRUCTURADA 
programa de vectores
vectores. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Usar vectores para una suma de vectores*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	bool ciclo = true;
    vector<int>vect;
    char op; // opción del menú
    int val, suma = 0; // valores de usuario
    int pos = 0;

    while (ciclo) {
        cout << "1. inserta valor" << endl;
        cout << "2. sumar valores" << endl;
        cout << "3. listar valores" << endl;
        cout << "4. borrar valor ingresado" << endl; // opción para borrar un dato erroneo
        cout << "5. vaciar los valores del arreglo" << endl; // opción para vaciar todo el listado de datos
        cout << "6. editar un valor" << endl;
        cout << "7. salir del programa" << endl;
        cout << "elige una opcion: ";

        cin >> op;
        switch (op) {//creamos el menu en orden
            case '1': {
            	cout << "introduce un valor: ";
            	cin >>val;
         vect.push_back(val); // Usamos push_back para agregar al vector
                pos++;
                break;//frena la ejecucion del siguiente caso
            }
            
        case '2': {
                for (int i = 0; i < pos; i++) {
                    suma += vect[i];//hace que la suma sea continua dependiendo los elementos dados
                }
                cout << "el total del arreglo es: " << suma << endl;
                break;
            }
            case'3':{
            	for (int i = 0; i < pos; i++) {
                    cout << "[" << vect[i] << "], ";
                    cout<<"el tamaño de mi vector es:" <<vect.size() <<endl;
                }
				break;
			}
			case'4':{
				cout<<"elimina el valor emezando de 0 como posicion inicial:";
				cin>> pos;
				vect.pop_back();
				break;
			}
			case'5':{ 
			vect = {}; 
			for (int i = 0; i < pos; i++) {
                    vect[i] = 0; // Restablecer a cero o valor predeterminado
                }
                pos = 0; // El arreglo está vacío y puedes empezar nuevamente
                cout << "Arreglo vaciado correctamente" << endl;
                if (vect.empty()) {
                cout << "El vector está vacío." << endl;
            } 
				break;
			}
			
			// Editar elemento
			case'6':{
			 cout << "Ingrese la posición del elemento a editar (0 al " << pos - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos < vect.size()) {
        cout << "Ingrese el nuevo valor: ";
        cin >> val;
        vect[pos] = val; // Editar el elemento en la posición especificada
        cout << "Elemento editado correctamente." << endl;
    } else {
        cout << "Posición inválida. No se puede editar." << endl;
    }
    break;
}
	      	
		
			case'7':{
				 ciclo = false;//termina el programa
				break;
			}
			default:{
            	cout<<"opcion no existente" << endl;
				break;
			}
        }
    }

 return 0;
        }

