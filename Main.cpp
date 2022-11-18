/*
 * Proyecto Cafetería
 * Angélica Ríos Cuentas
 * A01705651
 * 10/11/2022
 */

/**
 * Descripcion este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que captura los 
 * diferentes alimentos que se consumen en una cafetería, manteniendo
 * un control de inventario, calcula la cuenta total, y los ingresos diarios.  

*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Menu.h"
#include "Alimento.h"
#include "Comida.h" //donde estan los objetos de mi proyecto.
#include "Bebida.h"
#include "Postre.h"
#include "Inventario.h"
#include "Ingrediente.h"


using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Elija una opción:\n";
    cout << "1. Mostrar menú.\n";
    cout << "2. Mostrar Inventario \n";
    cout << "3. Mostrar ventas. \n";
    cout << "4. Calcular total de cuenta. \n";
    cout << "5. Calcular total de ventas";
    cout << "9. Agregar cuenta \n";
    cout << "10. Quitar cuenta \n";
    cout << "11. Agregar inventario \n";
    cout << "12. Salir \n";
}

int main(){
  
  Comida huevos("Huevos con jamon", 2, "Jamon, 2 Huevos",55.0);
  Comida hotcakes("Hotcakes", 2, "3 hotcakes",65.0);
  Comida chilaquiles("Chilaquiles con huevo", 1, "Totopos, 2 Huevos",75.0);
  Comida sandwich("Sandwich", 2, "Jamon, Queso, 2 Pan",65.0);
  Comida sincronizada("Sincronizada", 2, "Jamon, Queso, 2 Tortillas",55.0);
  Bebida cafe("Café", 2, "Jamon, 2 Huevos",55.0);
  Bebida jugo("Jugo de Naranja", 1, "Jamon, 2 Huevos",55.0);
  Bebida leche("Leche", 1, "Jamon, 2 Huevos",55.0);
  Bebida refresco("Refrescos", 1, "Jamon, 2 Huevos",55.0);
  Postre pay("Pay de limón", 1, "Jamon, 2 Huevos",55.0);
  Postre flan("Flan", 1, "Jamon, 2 Huevos",55.0);
  Postre galletas("Galletas", 1, "Jamon, 2 Huevos",55.0);
  Inventario ing_huevos("Huevos", 18)
  Inventario ing_jamon("Jamon", 15)
  Inventario ing_queso("Queso", 500)
  Inventario ing_hotcakes("Hotcakes", 6)
  Inventario ing_tortilla("Tortilla", 10)
  Inventario ing_totopos("Huevos", 18)
  Inventario ing_cafe("Cafe", 6)
  Inventario ing_leche("Leche", 20)
  Inventario ing_jugo("Jugo", 10)
  Inventario ing_refresco("Refresco", 58)
  Inventario ing_pay("Pay", 14)
  Inventario ing_flan("Flan", 7)
  Inventario ing_galletas("Galletas", 22)

  menu()
}