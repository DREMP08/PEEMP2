/******************************************************************************
/*NOMBRE: Emmanuel Murillo Picazo
FECHA: 22 de Abril de 2024
PROGRAMACION ESTRUCTURADA 
ahorcado
ahorcado. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION: realizar el juego del ahorcado 
*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> palabras = {"arianagrande", "adele", "adrianfavela", "alfredoolivas", "billieeilish", "bizarrap", "daddyyankee", "dannapaola", "dojacat", "enriqueiglesias", "fuerzaregida", "juniorh", "jennirivera", "joansebastian", "julionalvarez", "keniaos", "ladygaga", "marisela", "nickyjam", "pesopluma"};

int vidas = 6;
string palabraoculta;
string palabraGuiones;

void inicializarJuego() {
    srand(time(0));
    palabraoculta = palabras[rand() % palabras.size()];
    palabraGuiones = string(palabraoculta.size(), '_' );
}

void mostrarEstadoJuego() {
    cout <<"Bienvenido al ahorcado el tema de la palabra es artistas"<<endl;
    cout <<"la palabra es todo junto sin espacios"<<endl;
    cout << "La palabra es: " << palabraGuiones << endl;
    cout << "Vidas restantes: " << vidas << endl;
}

bool letraEnPalabra(char letra) {
    bool encontrada = false;
    for (int i = 0; i < palabraoculta.size(); ++i) {
        if (palabraoculta[i] == letra) {
            palabraGuiones[i] = letra;
            encontrada = true;
        }
    }
    return encontrada;
}

bool juegoTerminado() {
    return palabraGuiones == palabraoculta || vidas == 0;
}

int main() {
    inicializarJuego();
    while (!juegoTerminado()) {
        mostrarEstadoJuego();
        char letra;
        cout << "Ingresa una letra: ";
        cin >> letra;
        if (letraEnPalabra(letra)) {
            cout << "¡Letra encontrada!" << endl;
        } else {
            cout << "Letra incorrecta. Pierdes una vida." << endl;
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                --vidas; // Penalización por vocal
            } else {
                --vidas;
            }
        }
    }
    if (vidas == 0) {
        cout << "¡Has perdido! El artista era: " << palabraoculta << endl;
    } else {
        cout << "¡Felicidades! Has adivinado a el artista: " << palabraoculta << endl;
    }
    return 0;
}

