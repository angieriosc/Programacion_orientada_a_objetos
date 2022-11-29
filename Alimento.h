#ifndef ALIMENTO_H_
#define ALIMENTO_H_

#include <sstream>
#include <string>
using namespace std;

class Alimento{
protected:
  int cantidad;
  string nombre;

public: 
  //Constuctor
  Alimento(){};
  Alimento(string name, int cant):cantidad(cant),nombre(name){};

  // Metodos miembros de la clase
  int get_cantidad();
  string get_nombre();

  void set_cantidad(int);
  void set_nombre(string);

  string to_str();


};

int Alimento:: get_cantidad(){
  return cantidad;
}
void Alimento:: set_cantidad(int cant){
  cantidad=cant;
}

string Alimento:: get_nombre(){
  return nombre;
}
void Alimento:: set_nombre(string name){
  nombre=name;
}

string Alimento::to_str(){

    stringstream aux;
    aux << " Nombre del producto:  " << nombre << " Cantidad:  "<< cantidad <<  "\n";
    return aux.str();
}

class Comida : public Alimento{
  private:
    float costo;
  
  public: 
    Comida();
    Comida(string nombre,int cantidad,float cost);

    float get_costo();
    void set_costo(float);
    string to_str();

};
/**
 * Constructor por default
*/
Comida::Comida(){
    nombre="";
    cantidad=0;
}

/**
 * Constructor que recibe nombre, cantidad y costo
 *
 * @param string name: nombre de la comida, int cant: cantidad,
 *        float: costo,
 * @return Objeto Comida
*/
Comida::Comida(string name, int cant, float cost){

    nombre=name;
    cantidad=cant;
    costo=cost;

}


float Comida:: get_costo(){
  return costo;
}

void Comida:: set_costo(float cost){
  costo=cost;
 }

string Comida::to_str(){

    stringstream aux;
    aux << "Nombre del producto: " << nombre << "\nCantidad:  "<< cantidad <<  " unidades\n";
    return aux.str();
}



/**
 * Clase hija
*/



class Postre : public Alimento {
protected:
  string temperatura;
  float costo;
  

public: 
  Postre();
  Postre(string nombre,int cantidad,string temp,float cost);

  string get_temperatura();
  float get_costo();

  void set_temperatura(string);
  void set_costo(float);
  string to_str();
};
/**
 * Constructor por default
*/
Postre::Postre(){
    nombre="";
    cantidad=0;
}

/**
 * Constructor que recibe nombre, cantidad, temperatura, y costo
 *
 * @param string name: nombre de la bebida, int cant: cantidad,
 *        string temp: temperatura,  float: costo,
 * @return Objeto Postre
*/
Postre::Postre(string name, int cant, string temp, float cost){

    nombre=name;
    cantidad=cant;
    temperatura=temp;
    costo=cost;

}


string Postre:: get_temperatura(){
  return temperatura;
}
void Postre:: set_temperatura(string temp){
  temperatura=temp;
}

float Postre:: get_costo(){
  return costo;
}

void Postre:: set_costo(float cost){
  costo=cost;
 }

string Postre::to_str(){

    stringstream aux;
    aux << "Nombre del producto:  " << nombre << "\nCantidad:  "<< cantidad <<  " unidades\n";
    return aux.str();
}




/**
 * Clase hija
*/


class Bebida : public Alimento {
  private:
    bool hielos;
    float costo;
    
  public: 
    Bebida();
    Bebida(string nombre,int cantidad,bool hiel,float cost);

    bool get_hielos();
    float get_costo();

    void set_hielos(bool);
    void set_costo(float);
    string to_str();
};
/**
 * Constructor por default
*/
Bebida::Bebida(){
    nombre="";
    cantidad=0;
}

/**
 * Constructor que recibe id, nombre, horas y salario
 *
 * @param string name: nombre de la bebida, int cant: cantidad,
 *        bool: hielos float: costo,
 * @return Objeto Bebida
*/
Bebida::Bebida(string name, int cant, bool hiel, float cost){

    nombre=name;
    cantidad=cant;
    hielos=hiel;
    costo=cost;

}


bool Bebida:: get_hielos(){
  return hielos;
}
void Bebida:: set_hielos(bool hiel){
  hielos=hiel;
}


float Bebida:: get_costo(){
  return costo;
}

void Bebida:: set_costo(float cost){
  costo=cost;
 }

string Bebida::to_str(){

    stringstream aux;
    aux << "Nombre del producto:  " << nombre << "\nCantidad:  "<< cantidad <<  " unidades\n";
    return aux.str();
}

#endif