#include <stdio.h>


#define HABILIDAD_ASTUCIA

#define HABILIDAD_LEALTAD 

#define HABILIDAD_PODER


int main ()
{
    const char CASA_GRYFFINDOR= 'G'; CASA_RAVENCLAW= 'R'; CASA_SLYTHERIN= 'S'; CASA_HUFFLEPUFF= 'H';
    const char INTELIGENCIA_BUENO= 'B'; INTELIGENCIA_MALO= 'M'; INTELIGENCIA_REGULAR= 'R';
    const char MAGO_BUENO= 'B'; MAGO_MALO= 'M'; MAGO_REGULAR= 'R';

    const int  CASA_GRYFFINDOR=15; CASA_RAVENCLAW=10; CASA_SLYTHERIN=7; CASA_HUFFLEPUFF=5;
    const int  INTELIGENCIA_BUENO=15; INTELIGENCIA_REGULAR=10; INTELIGENCIA_MALO=15;
    const int  MAGO_BUENO=15; MAGO_REGULAR=10; MAGO_MALO= -10;

    const char VARITA_FIBRA_CORAZON_DRAGON[]="y"; VARITA_UNICORNIO []= "x";
    const char VARITA_VEELA[]="j"; VARITA_THESTRAL[]= "w";VARITA_FENIX[]="u"; VARITA_PAVO_REAL[]= "i";
    
    char varita[]="z";
    char casa='z';
    char inteligencia='x';
    char mago='j';
    int habilidad=-1;
    int puntaje=-1;
    
    
    int varita_fibra_corazon_dragon []="y"; varita_pelo_unicornio []= "x";
    int varita_pelo_Veela []="j"; varita_pelo_Thestral []= "w";
    int varita_pluma_fenix []="u";varita_pluma_pavo_real[]= "i";

    int habilidad_lealtad=-1; habilidad_poder=-1; habilidad_astucia=-1;
    //Pre: Solicitar variable casa
    //Post: Asignar valor a variable casa
    printf ("Ingrese casa de pertenencia:GRYFFINDOR'G',RAVENCLAW 'R';SLYTHERIN 'S'; HUFFLEPUFF'H'");
    scanf (" %c", &casa);
    printf("Pertenece a la casa\n" &casa);
    
    //Pre: Solicitar condición para variable inteligencia
    //Post: Asignar valor a variable inteligencia
    printf ("Ingrese su condición en inteligencia:BUENO 'B', REGULAR 'R', MALO 'M' ");
    scanf (" %c", &inteligencia);
    printf("Condición\n" &inteligencia);
    
    //Pre: Solicitar condición para variable mago
    //Post: Asignar valor a variable mago
    printf ("Ingrese su condición en mago:BUENO 'B', REGULAR 'R', MALO 'M' ");
    scanf (" %c", &mago);
    printf("Condición\n" &mago);
    
    //Pre: Solicitar valor a usuario
    //Post: Asignar valor a variable habilidad
    printf ("Ingrese valor entre 0 y 10 para habilidades, Astucia, Poder, Lealtad");
    scanf ("%i", &habilidad);
    
    switch(habilidad){
        case HABILIDAD_PODER:
            printf("Ingrese valor habilidad Poder \n");
            scanf("%i", &habilidad_poder);
            printf("Valor Asignado a la habilidad poder\n" &habilidad);
            break;
		case HABILIDAD_ASTUCIA:
            printf("Ingrese valor habilidad astucia \n");
            scanf("%i", &habilidad_astucia);
			printf("Valor Asignado a la habilidad astucia\n" &habilidad);
			break;
		case HABILIDAD_LEALTAD:
            printf("Ingrese valor habilidad poder\n");
            scanf("%i", &habilidad_lealtad);
			printf("Valor Asignado a la habilidad poder\n" &habilidad);
			break;
		default:
			printf("Error en ingreso");
		
    }
    //Pre: Operar con los valores de puntaje
    //Post: Asignar puntaje final para alumno
    scanf("%i", &puntaje = casa+inteligencia+mago+habilidad);
    printf ("%i Puntaje Alumno\n", &puntaje);
    
    
    //Determinar rango para constante de varitas
    //Asignar según pertenencia al rango la varita adecuada
    
    if(puntaje >=0) && (puntaje <=15){
        printf ("%s varita adecuada\n", &VARITA_VEELA);
    }
    else(puntaje >=16)&& (puntaje <=15);{
        printf ("%s varita adecuada\n", &VARITA_PAVO_REAL);
    }
    if(puntaje >=31) && (puntaje <=40){
        printf ("%s varita adecuada\n", &VARITA_UNICORNIO);
    }
    else (puntaje >=41)&& (puntaje <=50){
        printf ("%s varita adecuada\n", &VARITA_FENIX);
        }
    if(puntaje >=51) && (puntaje <=60){
        printf ("%s varita adecuada\n", &VARITA_FIBRA_CORAZON_DRAGON);
    }
    else(puntaje <61);{
        printf ("%s varita adecuada", &VARITA_THESTRAL);
    }

  return 0;
}
