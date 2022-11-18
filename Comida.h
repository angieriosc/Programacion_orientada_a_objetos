#ifndef COMIDA_H_
#define COMIDA_H_

#include <string>
using namespace std;

class Comida{
private:
  int cantidad;
  float costo;

public: 
  Comida();
  Comida(int cant,float cost):cantidad(cant),costo(cost){};

  int get_cantidad();
  float get_costo();

  void set_cantidad(int);
  void set_costo(float);
};


int Comida:: get_cantidad(){
  return cantidad;
}
void Comida:: set_cantidad(int cant){
  cantidad=cant;
}


float Comida:: get_costo(){
  return costo;
}

void Comida:: set_costo(float cost){
  costo=cost;
 }
