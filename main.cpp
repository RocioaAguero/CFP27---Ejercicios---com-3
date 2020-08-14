/**Ejercicio 1.3***/

#include <iostream>
using namespace std;

    typedef struct tienda{
        int cant_prendas = 0;
        string tipo_pago = "cheque";
        bool descuento = false;
        bool envio = false;
    }tienda_t;

    int main(){
        tienda_t suc_lanus = {3, "contado", true, false};
        cout << "Cantidad de prendas inventariadas"<< " " <<suc_lanus.cant_prendas <<endl;
        
        return 0;
    }
