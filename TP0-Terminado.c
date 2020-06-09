/***JUGADOR***/
#include <stdio.h>


/*void comienza_enfrentamiento();
    printf("Comienza el enfrentamiento");*/


const char CARACTER_NIVEL_BAJO = 'b';
const char CARACTER_NIVEL_MEDIO = 'm';
const char CARACTER_NIVEL_ALTO = 'a';

const float NUMERO_CONFIANZA_BAJO = 0.7;
const float NUMERO_CONFIANZA_MEDIO = 1.3;
const float NUMERO_CONFIANZA_ALTO = 3.7;



int
main ()
{
  int valor_animo = -1;
  char nivel_confianza = 'z';
  int valor_nivel_confianza = -1;
  float numero_nivel_confianza = 0.0;
  float fuerza_psiquica = 0.0;

  printf ("Comienza enfrentamiento \n");


  printf ("Ingrese valor animo entre 1 y 100 \n");
  scanf ("%i", &valor_animo);

  do
    {
        if ((valor_animo >= 1) && (valor_animo <= 100)){
            printf ("Valor verificado\n");
        }else{
            printf ("Ingreso incorrecto vuelva a intentarlo\n");
            scanf ("%i", &valor_animo);
        }    
        
    }while (!((valor_animo >= 1) && (valor_animo <= 100)));
    
  printf ("Ingrese valor confianza para BAJO= b, MEDIO= m, ALTO= a.\n");
  scanf (" %c", &nivel_confianza);

  do
    {
        if (nivel_confianza == 'a'){
         printf ("Confianza verificada: Alta\n");
        }else if (nivel_confianza == 'b'){
            printf ("Confianza recibida: Baja\n");
        }else if (nivel_confianza == 'm'){
            printf ("Confianza recibida: Media\n");
        }else{
            printf ("Ingreso incorrecto vuelva a intentarlo\n");
            scanf (" %c", &nivel_confianza);
        }   
    }while(!(((nivel_confianza == 'a') || (nivel_confianza == 'b')) || (nivel_confianza == 'm')));
    
    if(nivel_confianza==CARACTER_NIVEL_ALTO){
      printf ("%f Valor asignado a confianza\n", NUMERO_CONFIANZA_ALTO);
    }else if (nivel_confianza==CARACTER_NIVEL_MEDIO){
      printf ("%f Valor asignado a confianza\n", NUMERO_CONFIANZA_MEDIO);
    }else if (nivel_confianza==CARACTER_NIVEL_BAJO){
      printf ("%f Valor asignado a confianza\n", NUMERO_CONFIANZA_BAJO);
    }else{
      printf ("ERROR\n");
    }
    
    fuerza_psiquica=nivel_confianza*valor_animo;
    printf("\nLa fuerza psiquica que posee es: %f \n", fuerza_psiquica);

    if (fuerza_psiquica<=65){
        printf ("Resultado es desconocido\n");
        printf ("jugador y contrincante desaparecen del enfrentamiento\n");
    }else if ((fuerza_psiquica>65) && (fuerza_psiquica<67)){
        printf ("Resultado positivo\n ataque certero\nJugador debilitado\n");
    }else if ((fuerza_psiquica>=67) && (fuerza_psiquica<=370)){
        printf ("Resultado positivo\n");
        printf ("Jugador vence contrincante\n");
    }else{
        printf ("ERROR\n");
    }
    
  return 0;
}
