#ifndef INVENTARIO_H_
#define INVENTARIO_H_

#include "Alimento.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
const int MAX = 100;

class Inventario{
  private:
    //Declara las variables de instancia
    Postre postres[MAX];
    Comida comidas[MAX];
    Bebida bebidas[MAX];
    int ipostres, icomidas, ibebidas;
    string nombre_c;
    float nuevo_costo;

  public: 
    Inventario();

    void mostrar_inventario();
    void mostrar_menu();
    void alerta_inventario();
    void agrega_comida(string, int, float);
    void agrega_postre(string, int, string, float); 
    void agrega_bebida(string, int, bool, float);
    void crear_bebidas_ejem();
    void crear_postres_ejem();
    void crear_comidas_ejem();
    int obtener_cantidad();
    void editar_costo(string, float);


};

Inventario::Inventario(){
  ibebidas = 0;
  ipostres = 0;
  icomidas = 0;  
}
  
void Inventario:: mostrar_inventario(){
  stringstream aux;
    cout<<"\n";
    cout<<"           Platillos";
    cout<<"\n";
    for(int i = 0 ;i<= icomidas-1; i++){
      cout << comidas[i].to_str()<<"\n";  
    }
    cout<<"\n";
    cout<<"           Postres";
    cout<<"\n";
    for(int i = 0 ;i<= ipostres-1; i++){
      cout << postres[i].to_str()<<"\n"; 
    }
    cout<<"\n";
    cout<<"            Bebidas    ";
    cout<<"\n";
    for(int i = 0 ;i<= ibebidas-1; i++){
      cout << bebidas[i].to_str()<<"\n";
    }
    cout<<"\n";
} 
/**
void Inventario:: alerta_inventario(){
} 
*/

  
void Inventario:: agrega_comida(string nombre, int cantidad, float costo){
    comidas[icomidas] = Comida (nombre, cantidad, costo);
    icomidas += 1;
  }

void Inventario:: agrega_postre(string nombre, int cantidad, string caliente,float costo){
    postres[ipostres] = Postre(nombre, cantidad, caliente, costo);
    ipostres += 1;

  }

void Inventario:: agrega_bebida(string nombre, int cantidad, bool hielos, float costo){
    bebidas[ibebidas] = Bebida (nombre, cantidad, hielos, costo);
    ibebidas += 1;
  }

void Inventario:: crear_bebidas_ejem(){
  bebidas[ibebidas] = Bebida("Agua de Jamaica", 10, true, 30.0);
  ibebidas += 1;    
  bebidas[ibebidas] = Bebida("Agua de Horchata", 8, true, 30.0);
  ibebidas += 1;
  bebidas[ibebidas] = Bebida("Coca-Cola", 20, false, 25.0);
  ibebidas += 1;
  bebidas[ibebidas] = Bebida("Jugo Naranja",12, false, 40.0);
  ibebidas += 1;  
}

void Inventario:: crear_comidas_ejem(){
  comidas[icomidas] = Comida("Cuernito", 9, 70.0);
  icomidas += 1;    
  comidas[icomidas] = Comida("Sandwich", 8, 65.0);
  icomidas += 1;
  comidas[icomidas] = Comida("Sincronizada", 3,  55.0);
  icomidas += 1;
  comidas[icomidas] = Comida("Waffles",15,  60.0);
  icomidas += 1; 
}

void Inventario:: crear_postres_ejem(){
  postres[ipostres] = Postre("Pay de limón", 10, "frio", 60.0);
  ipostres += 1;    
  postres[ipostres] = Postre("Cheescake", 8, "frio", 70.0);
  ipostres += 1;
  postres[ipostres] = Postre("Galleta con chispas de chocolate", 16, "caliente", 15.0);
  ipostres += 1;
  postres[ipostres] = Postre("Brownie",12, "caliente", 25.0);
  ipostres += 1; 
}
/**
void Inventario:: editar_costo(string nombre_c, float nuevo_costo){
  nombre_c.set_costo(nuevo_costo);
} 
*/
void Inventario:: mostrar_menu(){
  stringstream aux;
    cout<<"\n";
    cout<<"     Platillos    \n";
    cout<<"\n";
    for(int i = 0 ;i<= icomidas-1; i++){
      cout  << i+1 << ".- " << comidas[i].get_nombre()<<" $"<<comidas[i].get_costo()<<"\n";
    }
    cout<<"\n";
    cout<<"\n    Postres    \n";
    cout<<"\n";
    for(int i = 0 ;i<= ipostres-1; i++){
      cout  << i+1 << ".- " << postres[i].get_nombre()<<" $"<<postres[i].get_costo()<<"\n";
    }
    cout<<"\n";
    cout<<"\n    Bebidas    \n";
    cout<<"\n";
    for(int i = 0 ;i<= ibebidas-1; i++){
      cout  << i+1 << ".- " << bebidas[i].get_nombre()<<" $"<<bebidas[i].get_costo()<<"\n";
    }
    cout<<"\n";
 }
#endif