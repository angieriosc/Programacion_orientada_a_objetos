#ifndef BEBIDA_H_
#define BEBIDA_H_

#include <string>
using namespace std;

class Bebida{
private:
  int cantidad;
  float costo;

public: 
  Bebida();
  Bebida(int cant,float cost):cantidad(cant),costo(cost){};

  int get_cantidad();
  float get_costo();

  void set_cantidad(int);
  void set_costo(float);
};


int Bebida:: get_cantidad(){
  return cantidad;
}
void Bebida:: set_cantidad(int cant){
  cantidad=cant;
}


float Bebida:: get_costo(){
  return costo;
}

void Bebida:: set_costo(float cost){
  costo=cost;
 }

