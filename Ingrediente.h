#ifndef INGREDIENTE_H_
#define INGREDIENTE_H_

#include <stdio.h>
#include <string>
using namespace std;

class Ingrediente{
private:
  string nombre_ing;
  int cantidad_ing;
  

public: 
  Ingrediente();
  Ingrediente(,string nombre_ing,int cant_ing):nombre_ing(name_ing),cantidad_ing(cant_ing){};

  string get_nombre_ing();
  int get_cantidad_ing();

  void set_nombre_ing(string);
  void set_cantidad_ing(int);
};


int Ingrediente:: get_cantidad_ing(){
  return cantidad_ing;
}
void Ingrediente:: set_cantidad_ing(int cant_ing){
  cantidad_ing=cant_ing;
}

string Ingrediente:: get_nombre_ing(){
  return nombre_ing;
}
void Ingrediente:: set_nombre_ing(string name_ing){
  nombre_ing=name_ing;
 }


