#include<iostream>

using namespace std;
			
void llenar_matriz(int matriz[10][10], int filas, int columnas){
	for(int x=0; x < filas; x++){
			for(int y=0; y< columnas; y++){
			cout<<"Cuales seran los numeros en la posicion ["<<x<<"]["<<y<<"]:";
			cin>>matriz[x][y];
			matriz[x][y] = max(-100, min(100, matriz[x][y]));
			}
}
 cout << endl;
	
}
void mostrar_matriz(int matriz[10][10], int filas, int columnas){
	for(int x=0; x< filas; x++){
			for(int y=0; y< columnas; y++){
				cout<<"Elemento["<<x<<"]["<<y<<"]:"<<matriz [x][y]<<endl;
			}
		}
		cout<<endl;
	}


void sumar_matriz(int matriz1[10][10], int matriz2[10][10], int filas, int columnas){
	for (int x=0; x <filas; x++){
			for(int y=0; y< columnas; y++){
cout<<"Elemento["<<x<<"]["<<y<<"]:"<< (matriz1 [x][y] + matriz2[x][y])<<endl;
	}
}
cout<<endl;
}

void restar_matriz(int matriz1[10][10], int matriz2[10][10], int filas, int columnas){
	for (int x=0; x<filas; x++){
			for(int y=0; y < columnas; y++){
cout<<"Elemento["<<x<<"]["<<y<<"]:"<< (matriz1 [x][y] - matriz2[x][y])<<endl;
	}
}
cout<<endl;
}

void multiplicar_matriz(int matriz1[10][10], int matriz2[10][10], int filas, int columnas){
	for (int x=0; x <filas; x++){
			for(int y=0; y < columnas; y++){
cout<<"Elemento["<<x<<"]["<<y<<"]:"<< (matriz1 [x][y] * matriz2[x][y])<<endl;
	}
}
cout<<endl;
}

void vaciar_matriz(int matriz[10][10], int filas, int columnas) {
    for (int x = 0; x < filas; x++) {
        for (int y = 0; y < columnas; y++) {
            matriz[x][y] = 0; // Asigna el valor 0 para vaciar la celda
        }
    }
}

void editar_elemento(int matriz[10][10], int filas, int columnas) {
    int fila, columna, nuevo_valor;
    cout << "Ingrese la fila y columna del elemento a editar (0-indexed): ";
    cin >> fila >> columna;

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        cout << "Ingrese el nuevo valor: ";
        cin >> nuevo_valor;
        matriz[fila][columna] = nuevo_valor;
    } else {
        cout << "Coordenadas inválidas." << endl;
    }
}

void borrar_elemento(int matriz[10][10], int filas, int columnas) {
    int fila, columna;
    cout << "Ingrese la fila y columna del elemento a borrar (0-indexed): ";
    cin >> fila >> columna;

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        matriz[fila][columna] = 0; // Valor especial para indicar que está borrado
    } else {
        cout << "Coordenadas inválidas." << endl;
    }
}


int main (){
	int matriz1[10][10], matriz2[10][10];
	int filas, columnas;
	
	cout<<"ingresa numero de filas: ";
	cin>> filas;
	cout<<"ingresa numero de columnas: ";
	cin>> columnas;
	//llenar la primera  y segunda matriz
	cout<< endl <<"llenar la primera matriz: "<<endl << endl;
	llenar_matriz(matriz1,filas,columnas);
	cout<< endl <<"llenar la segunda matriz: "<<endl << endl;
	llenar_matriz(matriz2,filas,columnas);
	
	//mostrar matricez
	cout<<"matriz 1: "<<endl << endl;
	mostrar_matriz(matriz1,filas,columnas);
	cout<<"matriz 2: "<<endl << endl;
	mostrar_matriz(matriz2,filas,columnas);
	
	//mostrar la suma de matricez
	cout<<endl<<"suma de la matriz 1 + matriz 2:" <<endl<<endl;
	sumar_matriz(matriz1,matriz2,filas,columnas);
	
		//mostrar la resta de matricez
	cout<<endl<<"resta de la matriz 1 - matriz 2:" <<endl<<endl;
	restar_matriz(matriz1,matriz2,filas,columnas);
	
		//mostrar la multiplicacion de matricez
	cout<<endl<<"multiplicar de la matriz 1 * matriz 2:" <<endl<<endl;
	multiplicar_matriz(matriz1,matriz2,filas,columnas);
	
	//vaciar matrices
	cout << "vaciar matricez:" << endl;
	 vaciar_matriz(matriz1, filas, columnas);
    vaciar_matriz(matriz2, filas, columnas);
    cout << "Matrices vaciadas:" << endl;
    mostrar_matriz(matriz1, filas, columnas);
    mostrar_matriz(matriz2, filas, columnas);
    
       // Editar un elemento
       cout << "Elemento a editar:" << endl;
    editar_elemento(matriz1, filas, columnas);
    mostrar_matriz(matriz2, filas, columnas);

    // Borrar un elemento
    cout << "elemento a borrar:" << endl;
    borrar_elemento(matriz1, filas, columnas);
    mostrar_matriz(matriz2, filas, columnas);

	
	return 0;
}
