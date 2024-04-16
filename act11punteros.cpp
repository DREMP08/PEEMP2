#include<iostream>
#include <algorithm> // Necesario para sort

using namespace std;

void OrdenarPorInsercion(int* bolsa, int R) 
{
    for (int i = 1; i < R; ++i) 
    {
        int actual = bolsa[i];
        int j = i - 1;

        // Desplaza los elementos mayores hacia la derecha
        while (j >= 0 && bolsa[j] < actual)
        {
            bolsa[j + 1] = bolsa[j];
            --j;
        }

        bolsa[j + 1] = actual;
    }
}

int main ()
{
    bool ciclo = true;
    char opcion;
    const int R = 50;
    int bolsa[R];
    int valor;
    int contador = 0;

    while(ciclo)
    {
        cout<<"Elige una opcion"<<endl;
        cout <<"1.insertar valor"<< endl;
        cout <<"2.mostrar lista de valores"<< endl;
        cout <<"3.borrar datos del puntero"<<endl;
        cout <<"4.fin del programa"<< endl;

        cin>>opcion;

        switch(opcion)
        {
            case '1':
            {
                do
                {
                   cout << "Ingresa un valor (0 para salir): ";
                    cin >> valor;

                    if (valor != 0)
                    {
                        if (contador < R)
                        {
                            bolsa[contador] = valor;
                            contador++;
                        }
                        else
                        {
                            cout << "La bolsa está llena. No se pueden insertar más valores." << endl;
                        }
                    }
                } while (valor != 0);

                break;
            }

            case '2':
            {
                OrdenarPorInsercion(bolsa, contador);
                cout << "Valores ordenados de mayor a menor: ";
                for (int i = 0; i < contador; ++i) 
                {
                    cout << bolsa[i] << " ";
                }
                cout << endl;
                break;
            }

            case '3':
            {
                // Hacer que borre los valores almacenados en la variable bolsa
                break;
            }

            case '4':
            {
                ciclo = false;
                break;
            }

            default:
            {
                cout<<"No existe opción"<<endl;
            }
        }
    }

    return 0;
}
