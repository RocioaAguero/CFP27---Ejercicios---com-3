/***STAR CODE***/

#include <stdio.h>

const char VOLUNTAD_FLOJA='f';
const char VOLUNTAD_BUENA='b';
const char VOLUNTAD_MEDIANA='m'; 
const char VOLUNTAD_ALTA='a';
const char VOLUNTAD_ENORME='e';
const char VOLUNTAD_PELIGROSA='p';

const char PASADO_BUENO='b';
const char PASADO_NORMAL='n';
const char PASADO_TRAGICO='t';

const float VALOR_INFLUENCIA=3.4f;
const float VALOR_OSCURIDAD=0.001117684315f;

const float VOLUNTAD_VALOR_BAJO=10.3f;
const float VOLUNTAD_VALOR_MEDIO=54.5f;
const float VOLUNTAD_VALOR_ALTO=103.4f;

const float PASADO_VALOR_BAJO=0.4f;
const float PASADO_VALOR_ALTO=1.5f;

int main()
{
    float influencia=0.0f;
    float midiclonarios=0.0f;
    float valor_numerico_voluntad=0.0f;
    char voluntad='z';
    char pasado='z';
    float probabilidad_conversion=0.0f;
    int voluntad_tiempo=-1;
    int influencia_tiempo=-1;
    int tiempo_restante=-1;
    
  
    printf("Ingrese Midiclorianos dentro de un rango desde 100.0 a 2999.9:\n");
    scanf ("%f", &midiclonarios);

  do
    {
        if ((midiclonarios>=100.0) && (midiclonarios <= 2999.9)){
            printf ("Midiclonarios\n");
        }else{
            printf ("Ingreso incorrecto vuelva a intentarlo\n");
            scanf ("%f", &midiclonarios);
        }    
        
    }while (!((midiclonarios>=100.0) && (midiclonarios <= 2999.9)));
    
    printf("Ingrese voluntad:\n\tf para Floja, \n\tb para Buena, \n\tm para Mediana, \n\ta para Alta, \n\te para Enorme,\n\tp Peligrosa\n");
    scanf (" %c", &voluntad);
    
  do
    {
        if (voluntad == VOLUNTAD_FLOJA){
            printf ("Voluntad registrada: FLOJA\n");
            
        }else if (voluntad == VOLUNTAD_BUENA){
            printf ("Voluntad registrada: BUENA\n");
            
        }else if (voluntad == VOLUNTAD_MEDIANA){
            printf ("Voluntad registrada: MEDIANA\n");
            
        }else if (voluntad == VOLUNTAD_ALTA){
            printf ("Voluntad registrada: ALTA\n");
            
        }else if (voluntad == VOLUNTAD_ENORME){
            printf ("Voluntad registrada: ENORME\n");
            
        }else if (voluntad == VOLUNTAD_PELIGROSA){
            printf ("Voluntad registrada: PELIGROSA\n");
            
        }else{
            printf ("Ingreso incorrecto vuelva a intentarlo\n");
            scanf (" %c", &voluntad);
        }   
    }while(!( ((voluntad == VOLUNTAD_FLOJA) || (voluntad == VOLUNTAD_BUENA)) || ((voluntad == VOLUNTAD_MEDIANA) || (voluntad == VOLUNTAD_ALTA)) || ((voluntad == VOLUNTAD_ENORME) || (voluntad == VOLUNTAD_PELIGROSA)) ));
    
    
    
    if ((voluntad==VOLUNTAD_FLOJA) || (voluntad==VOLUNTAD_BUENA)) {
      printf ("%f Valor asignado a voluntad\n", VOLUNTAD_VALOR_BAJO);
      
    }else if ((voluntad==VOLUNTAD_MEDIANA) || (voluntad==VOLUNTAD_ALTA)){
      printf ("%f Valor asignado a voluntad\n", VOLUNTAD_VALOR_MEDIO);
      
    }else if ((voluntad==VOLUNTAD_ENORME) || (voluntad==VOLUNTAD_PELIGROSA)){
      printf ("%f Valor asignado a voluntad\n", VOLUNTAD_VALOR_ALTO);
      
    }else{
      printf ("ERROR\n");
    }
    
    printf("Ingrese pasado:\n\tPasadado Bueno = b\n\tPasado Normal = n\n\tPasado Tragico = t \n");
    scanf (" %c", &pasado);
  do
    {
        if (pasado == PASADO_BUENO){
            printf ("Pasado registrada: BUENO\n");
            
        }else if (pasado == PASADO_NORMAL){
            printf ("Pasado registrada: NORMAL\n");
            
        }else if (pasado == PASADO_TRAGICO){
            printf ("Pasado registrada: TRAGICO\n");
            
        }else{
            printf ("Ingreso incorrecto vuelva a intentarlo\n");
            scanf (" %c", &pasado);
        }   
    }while(!(((pasado == PASADO_BUENO) || (pasado == PASADO_NORMAL)) || (pasado == PASADO_TRAGICO)));
  
    if ((pasado==PASADO_NORMAL) || (pasado==PASADO_TRAGICO)) {
      printf ("%f Valor asignado a pasado\n", PASADO_VALOR_BAJO);
      
    }else if (pasado==PASADO_BUENO){
      printf ("%f Valor asignado a pasado\n", PASADO_VALOR_ALTO);
      
    }else{
      printf ("ERROR\n");
    }

    influencia=midiclonarios*VALOR_INFLUENCIA;
    printf ("\nPosee %f de fuerza\n", influencia);
    
    probabilidad_conversion=voluntad+((VALOR_OSCURIDAD*influencia)/pasado);
    printf ("\nPosee %f porciento\n", probabilidad_conversion);
    
    tiempo_restante=(influencia+(influencia*20/100))/(voluntad-(voluntad*75/100));
    printf ("\n %i meses para convertirse\n", tiempo_restante);
    
    if (probabilidad_conversion>80){
      printf ("\nTransmite lo que has aprendido:\n\tfuerza, maestria; pero insensatez, debilidad, fracaso tambien.\n\t\t¡Si, fracaso sobre todo! El mejor profesor, el fracaso es.\n\t\t\t\t\tBy Master Yoda\n");
      
    }else{
      printf ("ERROR\n");
    }



    return 0;
}
