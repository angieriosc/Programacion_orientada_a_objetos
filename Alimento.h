/*
 * Clase Alimento, maneja grupos de productos, divididos en
 * Comida, Postre, y Bebida
 *
 */

#ifndef ALIMENTO_H_ //para evitar fallas al incluir archivos
#define ALIMENTO_H_

#include <sstream> //para el uso de strngstream y aux 
#include <string>
using namespace std;

class Alimento{
//Declara las variables de instancia
protected:
  int cantidad;
  string nombre;

public: 
  //Constuctor inicial
  Alimento(){};
  Alimento(string name, int cant):cantidad(cant),nombre(name){};

  // Metodos miembros de la clase
  int get_cantidad();
  string get_nombre();
  void set_cantidad(int);
  string to_str();
};
//Getter de cantidad y nombre

/**
 * getter cantidad
 *
 * @param
 * @return int: cantidad del alimento
*/
int Alimento:: get_cantidad(){
  return cantidad;
}
/**
 * getter nombre
 *
 * @param
 * @return string: nombre del alimento
*/
string Alimento:: get_nombre(){
  return nombre;
}
//Setter de cantidad 

/**
 * setter cantidad
 *    otorga valor de cantidad para que no se acceda directamente
 * @param int:cant
 * @return 
*/
void Alimento:: set_cantidad(int cant){
  cantidad=cant;
}
/**
 * Funcion que almacena los valores de nombre y cantidad
 * en una cadena.
 *    
 * @param 
 * @return cadena convertida en string
*/
string Alimento::to_str(){

    stringstream aux;
    aux << " Nombre del producto:  " << nombre << " Cantidad:  "<< cantidad <<  "\n";
    return aux.str();
}

// Clase hija

//Declaro clase Comida que hereda de Alimento
class Comida : public Alimento{
  //Declaro las variables de instancia
  private:
    float costo;
  
  public: 
    //Metodos que tendra el objeto
    Comida(); //Constructores
    Comida(string nombre,int cantidad,float cost);

    float get_costo();
    void set_costo(float);
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

//Getter de costo

/**
 * getter costo
 *
 * @param
 * @return float: costo de la comida
*/
float Comida:: get_costo(){
  return costo;
}

//Setter de costo

/**
 * setter costo
 *    otorga valor de cantidad para que no se acceda directamente
 * @param float:cost
 * @return  
*/
void Comida:: set_costo(float cost){
  costo=cost;
 }
/**
 * Funcion que almacena los valores de nombre y cantidad
 * en una cadena.
 *    
 * @param 
 * @return cadena convertida en string
*/

// Clase hija

//Declaro clase Postre que hereda de Alimento
class Postre : public Alimento {
  //Variables de instancia
  private:
    string temperatura;
    float costo;
  
  
  public: 
    //Declaro metodos
    Postre(); //Constructor
    Postre(string nombre,int cantidad,string temp,float cost);

    float get_costo();
    void set_costo(float);

};
/**
 * Constructor por default
 *
 * @param string name: nombre del postre, int cant: cantidad,
 *        string: hielos float: costo,
 * @return Objeto Postre
*/
Postre::Postre(){
    nombre="";
    cantidad=0;
}


Postre::Postre(string name, int cant, string temp, float cost){

    nombre=name;
    cantidad=cant;
    temperatura=temp;
    costo=cost;
}
//Getter de costo

/**
 * getter costo
 *
 * @param
 * @return float: costo del postre
*/
float Postre:: get_costo(){
  return costo;
}
//Setter de costo

/**
 * setter costo
 *    otorga valor de cantidad para que no se acceda directamente
 * @param float:cost
 * @return
*/
void Postre:: set_costo(float cost){
  costo=cost;
 }

//Clase hija

//Declaro clase Bebida que hereda de Alimento
class Bebida : public Alimento {
  //Variables de instancia
  private:
    string hielos;
    float costo;
    
  public: 
    //Metodos 
    Bebida(); //Constructor
    Bebida(string nombre,int cantidad,string hiel,float cost);

    float get_costo();
    void set_costo(float);
};
/**
 * Constructor por default
*/
Bebida::Bebida(){
    nombre="";
    cantidad=0;
}

/**
 * Constructor que recibe nombre, cantidad y costo
 *
 * @param string name: nombre de la bebida, int cant: cantidad,
 *        string: hielos float: costo,
 * @return Objeto Bebida
*/
Bebida::Bebida(string name, int cant, string hiel, float cost){

    nombre=name;
    cantidad=cant;
    hielos=hiel;
    costo=cost;

}

//Getter de costo

/**
 * getter costo
 *
 * @param
 * @return float: costo de bebida
*/
float Bebida:: get_costo(){
  return costo;
}
//Setter de costo

/**
 * setter costo
 *    otorga valor de cantidad para que no se acceda directamente
 * @param float:cost
 * @return 
*/
void Bebida:: set_costo(float cost){
  costo=cost;
 }
#endif // ALIMENTO_H_
