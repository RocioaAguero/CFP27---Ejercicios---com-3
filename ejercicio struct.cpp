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

    const int OP_ACTUALIZAR = 1;
    const int OPCION_NO = 2;
    const int SALIR= 0;
    

    typedef struct alguien{
        int dni;
        int edad;
        string nombre;
        bool tiene_mascota;
        
    }alguien_t;

    int menu(int opcion){
        cout << "Menú actualizar edad"<<endl;
        cout << "SI [1]"<<endl;
        cout << "NO [2]"<<endl;
        cout << "SALIR [0]"<<endl;
        cin >> opcion;
        return 5;
    }

  
    int ejecutar_opc(int opcion, alguien_t sujeto){
        if (opcion == OP_ACTUALIZAR){
            cout << "Ingrese edad actualizada \n" ;
            cin >> sujeto.edad;
            if (opcion == OPCION_NO){
                cout <<"Edad confirmada \n" ;
            }
        }else if(opcion == SALIR){
            cout << "Finalizo \n" ;
        }else{
            cout << "Error \n" ;
        }
        return 0;  
    }
    
   void iniciar_programa(int opcion, alguien_t sujeto){
	do{
		menu(opcion);
		
		ejecutar_opc(opcion, sujeto);
	}while(opcion != SALIR);
}

 int main(){
        int opcion=-1;
    
        alguien_t sujeto = {23456789, 36, "jose", true};
        
        cout << "La edad es"<< " " << sujeto.edad<<endl;
        
        iniciar_programa(opcion, sujeto);
        ejecutar_opc(opcion, sujeto);
       

        return 0;
    }

