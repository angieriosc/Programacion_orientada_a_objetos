/*
 * Proyecto Cafetería
 * Angélica Ríos Cuentas
 * A01705651
 * 10/11/2022
 */

/**
 * Descripcion: este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que captura los 
 * diferentes alimentos que se consumen en una cafetería, manteniendo
 * un control de inventario, calcula la cuenta total, y los ingresos diarios.  

*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Alimento.h"//Clase padre, contiene clases hijas.
#include "Cuenta.h"
#include "Inventario.h"//Donde se encuentran la mayoriade las funciones
#include <string> 
using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "\n";
    cout << "Elija una opción:\n";
    cout << "1. Mostrar menú \n";
    cout << "2. Mostrar Inventario \n";
    cout << "3. Agregar alimento a la cuenta \n";
    cout << "4. Agregar cuenta \n";
    cout << "5. Calcular total de cuenta \n";
    cout << "6. Agregar nuevo producto al inventario \n";
    cout << "7. Editar costo de algun producto \n";
    cout << "8. Salir \n";
    cout << "\n";
}
/**
 * Función para validar la opcion ingresada por el usuario
 *
 * @param int opcion
 *        ciclo while que comprueba que la respuesta 
 *        sea un número entre el 1 y el 8
 * @return opcion
*/
int validar_opcion(int opcion){
  while (1>opcion||opcion>8){
    cout << "Ingresa respuesta valida: ";
    cin >> opcion;
  }
  return opcion; 
}
/**
 * Función para validar la opcion ingresada por el usuario
 *
 * @param int opcion_6
 *        ciclo while que comprueba que la respuesta 
 *        sea un número entre el 1 y el 3
 * @return opcion
*/  
int validar_opcion_6(int opcion_6){
  while (1>opcion_6||opcion_6>3){
    cout << "Ingresa respuesta valida: ";
    cin >> opcion_6;
  }
  return opcion_6;  
  
}
//Se crean objetos iniciales
int main(){
  Inventario inventario;
  inventario.crear_comidas_ejem();
  inventario.crear_postres_ejem();
  inventario.crear_bebidas_ejem();
  inventario.crear_cuentas_ejem();
//Declaración de variables
  int opcion,opcion_a;
  int opcion_6;
  int num,num_m;
  int ban=1;
  int cantidad_f;
 	string nombre_f,temperatura_f;
  float costo_f;
  string hielos_f;
  
//Ciclo while que permite que el usuario continue en el programa hasta que elija la opción de salir
  while (ban==1){
  //Impresion de menu
  	menu();
  //Permite al usuario ingresar una opción
  	cin >> opcion;
    opcion = validar_opcion(opcion);
  	//Caso 1 manda a llamar la funcion que se encuentra en inventario, para mostrar el menu
    if (opcion==1){
      inventario.mostrar_menu();
    }  
  	//Caso 2 manda a llamar la funcion que se encuentra en inventario, para mostrar el inventario
    else if (opcion==2){
      inventario.mostrar_inventario();
    }
  /**
  *	Caso 3 que manda a llamar la funcion mostrar_menu() y realiza preguntas para poder mandar
  *  a llamar consultar_lista_c o consultar_lista_c o consultar_lista_c depende la opcion
  *  elegida por el usuario
  */  
    else if (opcion==3){
      inventario.mostrar_menu();
      cout << "\nEscribe el numero de la mesa cuya cuenta quieras editar: \n";
      cin >> num_m;
      cout << "\nResponder solo con números\n\n¿Qué quieres añadir a la cuenta?\n";
      cout << "1. Comida\n";
      cout << "2. Postre\n";
      cout << "3. Bebida\n";
      cin >> opcion_a;
      if (opcion_a==1){
        cout << "\nResponder solo con números\n\n¿Qué comida quiere añadir a la cuenta?\n";
        cin >> num;
        inventario.consultar_lista_c(num_m,num);
      }
      else if (opcion_a==2){
        cout << "\nResponder solo con números\n\n¿Qué postre quiere añadir a la cuenta?\n";
        cin >> num;
        inventario.consultar_lista_p(num_m, num);
      }
      else if (opcion_a==3){
        cout << "\nResponder solo con números\n\n¿Qué bebida quiere añadir a la cuenta?\n";
        cin >> num;
        inventario.consultar_lista_b(num_m, num);
        
      }
    } 
    //Caso 4 que manda a llamar la funcion agrega_cuenta que se encuentra en inventario
    else if (opcion==4){
      cout<<"Numero de mesa:" ;
  		cin >>num_m;
  		cout<<"¿Cómo se llama el mesero encargado de la mesa?" ;
  		cin >>nombre_f;
      inventario.agrega_cuenta(num_m,nombre_f);   
    }  
    //Caso 5 que manda a llamar la funcion calcular_cuenta que se encuentra en inventario
    else if (opcion==5){
      cout<<"Numero de mesa:" ;
  		cin >>num_m;
      inventario.calcular_cuenta(num_m);    
    }  
  /**
  *	Caso 6 realiza preguntas para poder mandar a llamar la función agrega_comida, agrega_postre 
  *  o agrega_bebida depende la opcion elegida por el usuario.
  */ 
    else if (opcion==6){
      cout << "\n¿Qué quieres añadir al inventario?\n";
      cout << "1. Comida\n";
      cout << "2. Postre\n";
      cout << "3. Bebida\n";
      cin >> opcion_6;
      opcion_6=validar_opcion_6(opcion_6);
      if (opcion_6==1){
  				cout<<"Dime el nombre de la comida: " ;
  				cin >>nombre_f;
  				cout<<"Dime el costo que tendrá:  " ;
  				cin >>costo_f;
  				cout<<"¿Cuántas comidas de este tipo tienes disponibles?  " ;
  				cin >>cantidad_f;        
        inventario.agrega_comida(nombre_f,cantidad_f,costo_f);
      }
      else if (opcion_6==2){
  			cout<<"Dime el nombre del postre: " ;
  			cin >>nombre_f;
  			cout<<"Dime el costo que tendrá:  " ;
  			cin >>costo_f;
				cout<<"¿Cuántos postres de este tipo vas a agregar?  " ; 	
        cin >>cantidad_f; 
        cout<<"¿Se sirve frío o caliente?  "; 	
        cin >>temperatura_f ;
        inventario.agrega_postre(nombre_f,cantidad_f,temperatura_f,costo_f);
      }
      else if (opcion_6==3){
  			cout<<"Dime el nombre de la bebida: " ;
  			cin >>nombre_f;
  			cout<<"Dime el costo que tendrá:  " ;
  			cin >>costo_f;
				cout<<"¿Cuántas bebidas de este tipo vas a agregar? " ; 	
        cin >>cantidad_f; 
        cout<<"¿Llevará hielos? Contestar solo con `si´ ó `no´ "; 	
        cin >>hielos_f;
        inventario.agrega_bebida(nombre_f,cantidad_f,hielos_f,costo_f);
      }
    }  
    //Caso 7 que realiza preguntas para poder mandar a llamar la función editar_costo
    else if (opcion==7){
      cout<< "Dime el nombre del alimento cuyo costo quieres editar: " ;
  	  cin >>nombre_f;
    	cout<< "Dime el nuevo costo que tendrá:  " ;
  		cin >>costo_f;
      inventario.editar_costo(nombre_f,costo_f);
    }  
    //Caso 8 que finaliza el progama cambiando el valor de la bandera (ban)  
    else if (opcion==8){
      cout<<"Gracias por usar este programa";
      ban=0;
    }  
  }
}