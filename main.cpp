// Programa de Rocio

/*EJ 1 de struct
	- Crear un tipo de dato persona con campos/miembros: dni, inicial_nombre, edad, si tiene gato, si tiene perro
	- Una vez creado el tipo de dato persona proceda a definirlo en la funcion main 
	- Luego asignar valores ficticios a esta variable/struct de las siguientes maneras:
		- Junto a la definicion
		- Igualandolo a otra variable/struct
		- De campo a campo, o en otras palabras de atributo a atributo
		
 Ej2: implementar un menu que permita al usuario mostrar/actualizar informacion
    de variable struct alguien_t 
    
    extra: el programa solo termina si se selecciona la opcion salir
*/

#include <iostream>
using namespace std;

typedef struct alguien{
    int dni;
    int edad;
    string nombre;
    bool tiene_mascota;
        
}alguien_t;

void menu(){
    cout << "Menú actualizar edad"<<endl;
    cout << "SI [1]"<<endl;
    cout << "NO [2]"<<endl;
    cout << "SALIR [0]"<<endl;
}


int main(){
    int opcion_recib = -1;
    alguien_t sujeto = {23456789, 36, "jose", true};
    cout << "La edad es"<< " " << sujeto.edad<<endl;
    cout << "Ingrese edad actualizada \n" ;
    cin >> sujeto.edad;
    cout << "La edad actualizada es "<< sujeto.edad<<endl; 
        
    menu();
    cout << "Opcion recibida: "<<opcion_recib<<endl;
     
    return 0;
}