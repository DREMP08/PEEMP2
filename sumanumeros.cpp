#include <iostream>
using namespace std;
int main (){
	
	bool ciclo=true ;  //define a ciclo como un valor verdadero
	int numuser, veces, suma ; // define las variables como numeros enteros
	char op;  // define a op como una palabra
	//iniciar ciclo retorno de problema
	
	while (ciclo){
		
		cout << "escribe un numero: " ; //elige el numero
	cin >> numuser;  //lee el numero
		//validar numero
		if (numuser < 0 || numuser >1000){ //condicion sobre el numero
			cout << " no puedo calcular el valor" << endl; //imprime segun la condicion
		}
		else if (numuser > 0 && numuser <= 500){ // segunda condicion
			veces=100; //imprime segun la segunda condicion
			suma=5;
		} else {   // tercera condicion
			veces=50; //imprime lo de la tercera condicion
			suma=10;
		}
		// inicio del for
		for (int i= 1; i <= veces; i++ ){ //desarrollo de como se realizaran las condiciones segun sea el caso
			int res;
			res= numuser += suma;   //sucesion de sumar numeros varias veces
			cout<< "La vez :" << i << " es de:" <<res << endl;
		}
		
		cout <<"termine el ciclo,\"S\ para salir o cualquier otra tecla para continuar "<< endl; //salir o continuar ccon el codigo
		cin >> op; //lee si la variable es la solicitada para terminar
		
		if (op == 'S' || op =='s'){ 
			ciclo = false; // confirma leyendo la variable 
		}
	}// fin de ciclo while del retorno de programa
}// fin del main 
