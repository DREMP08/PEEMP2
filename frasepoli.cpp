/*NOMBRE: Emmanuel Murillo Picazo
FECHA: -- de Abril de 2024
PROGRAMACION ESTRUCTURADA 
freses y palabras
frasespoli. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Pedir al usuario ingresar una palabra o frase
ver si es palindromo cambiar letras de mayusculas a minusculas o visebersa 
solicitaar otra palabra para que se una con la que ya tienen*/
#include <iostream>
#include <string>
using namespace std;
 //inicia valores de variables
    bool ciclo=true;
   char opcion;
	string frase;
    int vocales = 0, consonantes = 0, espacios = 0;
    bool palindromo = true;
	//funciones void




int main()
{//inici main
  while(ciclo)
  {//inicia l while
	//secciones de el menu
     cout<<"Elige una opcion"<<endl;
     cout <<"1.insertar una palabra o frase"<< endl;
     cout <<"2.mostrar palabras o frases"<< endl;
     cout <<"3.revisar si es palindromo"<< endl;
     cout <<"4.hacerlas mayusculas"<< endl;
     cout <<"5.hacerlas minusculas"<< endl;
     cout <<"6.Solicitar otra palabra o frase y que se concatene con la anterior"<< endl;
     cout<<"7.contar el numero de vocales, consonantes y espacios"<<endl;
     cout <<"8.fin del programa"<< endl;
	 cin>>opcion;//leer la opcion del menu

     switch(opcion)
	  {//empieza el switch
	      case '1':
	   	  {//inicia case1
	   	    cout << "Ingresa una frase: ";
         // getline(cin, frase);
         cin>>frase;
         //cout<<"tu frase es:"<<frase;
	   	   break;
		  } //fin case1
	      
		case '2':
	      	{//inicio case2
	         	cout<<frase<<endl;

	      		break;
			  }//fin case2
	case'3':
		{//inicia case3
		for (int i = 0; i < frase.length() / 2; i++) {
        if (frase[i] != frase[frase.length() - i - 1]) {
            palindromo = false;
            break;
        }
    }
         if (palindromo) {
        cout << "La frase es un palíndromo" << endl;
    } else {
        cout << "La frase no es un palíndromo" << endl;
    }
		      	break;
		}//fin case 3
	
	    case'4':
		{
			 for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
			break;
		}
		case'5':
		{//hacer la frase en minusculas
			for (int i = 0; i < frase.length(); i++) {
        frase[i] = tolower(frase[i]);
    }
			break;
		}
		case'6':
		{//Solicitar otra palabra o frase y que se concatene con la anterior
			string new_frase;
			cout << "Ingresa otra frase: ";
			//getline(cin, new_frase);
			cin>>new_frase;
			frase += " " + new_frase;
			break;
		}
		case '7':
			{
				 for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            vocales++;
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            consonantes++;
        } else if (frase[i] == ' ') {
            espacios++;
        }
    }
    cout << "Número de vocales: " << vocales << endl;
    cout << "Número de consonantes: " << consonantes << endl;
    cout << "Número de espacios: " << espacios << endl;
				break;
			}
		  case '8':
	      {//inicia case8
	       ciclo= false;
           break;
          }//fin case 8
      
          default:
		  {//inicia default
		   cout<<"no existe opcion"<<endl;
        }//fin de dato no existente en el menu default

      }//fin swich
   }//fin while
return 0;
}//fin main
