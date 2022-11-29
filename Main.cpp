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
#include "Alimento.h"//donde estan los objetos de mi proyecto.
#include "Menu.h"
#include "Inventario.h"
#include <string> 


using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Elija una opción:\n";
    cout << "1. Mostrar menú \n";
    cout << "2. Mostrar Inventario \n";
    cout << "3. Agregar alimento a la cuenta \n";
    cout << "4. Calcular total de cuenta \n";
    cout << "5. Editar costo de algun producto \n";
    cout << "6. Agregar nuevo producto al inventario \n";
    cout << "7. Crear ejemplos inventario \n";
    cout << "8. Salir \n";
}

int validar_opcion(int opcion){
  while (1>opcion||opcion>8){
    cout << "Ingresa respuesta valida: ";
    cin >> opcion;
  }
  return opcion; 
}
  
int validar_opcion_6(int opcion_6){
  while (1>opcion_6||opcion_6>3){
    cout << "Ingresa respuesta valida: ";
    cin >> opcion_6;
  }
  return opcion_6;  
  
}

int main(){
  Inventario inventario;
  inventario.crear_comidas_ejem();
  inventario.crear_postres_ejem();
  inventario.crear_bebidas_ejem();

  int opcion;
  int opcion_6;
  int ban=1;
  int cantidad_f=0;
 	string nombre_f,temperatura_f;
  float costo_f=0.0;
  bool hielos_f;

  while (ban==1){
  //Impresion de menu
  	menu();
  //Permite al usuario ingresar una opción
  	cin >> opcion;
    opcion = validar_opcion(opcion);
  	//Caso 1 que 
    if (opcion==1){
      inventario.mostrar_menu();
    }  
  	//Caso 2 que
    else if (opcion==2){
      inventario.mostrar_inventario();
    }
  	//Caso 3 que
    else if (opcion==3){

    } 
    //Caso 4 que
    else if (opcion==4){
        
    }  
    //Caso 5 que
    /**
    else if (opcion==5){
      cout<< "Dime el nombre del postre cuyo costo quieres editar: " ;
  	  cin >> nombre_f;
    	cout<< "Dime el nuevo costo que tendrá:  " ;
  		cin >> costo_f;
      cout<<inventario.editar_costo(nombre_f,costo_f);
    }  
    */
    //Caso 6 que
    else if (opcion==6){
      cout << "\n¿Qué quieres añadir al inventario?\n";
      cout << "1. Comida\n";
      cout << "2. Postre\n";
      cout << "3. Bebida\n";
      cin >> opcion_6;
      if (opcion_6==1){
  				cout<< "Dime el nombre de la comida: " ;
  				cin >> nombre_f;
  				cout<< "Dime el costo que tendrá:  " ;
  				cin >> costo_f;
  				cout<< "¿Cuántas comidas de este tipo tienes disponibles?  " ;
  				cin >> cantidad_f;        
        inventario.agrega_comida(nombre_f,cantidad_f,costo_f);
      }
      else if (opcion_6==2){
  			cout<< "Dime el nombre del postre: " ;
  			cin >> nombre_f;
  			cout<< "Dime el costo que tendrá:  " ;
  			cin >> costo_f;
				cout<< "¿Cuántos postres de este tipo vas a agregar?  " ; 	
        cin >> cantidad_f; 
        cout<< "¿Se sirve frío o caliente?  "; 	
        cin >> temperatura_f ;
        inventario.agrega_postre(nombre_f,cantidad_f,temperatura_f,costo_f);
      }
      else if (opcion_6==3){
  			cout<< "Dime el nombre de la bebida: " ;
  			cin >> nombre_f;
  			cout<< "Dime el costo que tendrá:  " ;
  			cin >> costo_f;
				cout<< "¿Cuántas bebidas de este tipo vas a agregar? " ; 	
        cin >> cantidad_f; 
        cout<< "¿Llevará hielos? Contestar solo con `true´ ó `false´ "; 	
        cin >> hielos_f;
        inventario.agrega_bebida(nombre_f,cantidad_f,hielos_f,costo_f);
      }
    }  
    //Caso 7 que
    else if (opcion==7){
      cout<<"Gracias por usar este programa";
      ban=0;
    }  
  }
}