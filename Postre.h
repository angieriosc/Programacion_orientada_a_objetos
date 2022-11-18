#ifndef POSTRE_H_
#define POSTRE_H_

#include <stdio.h>
#include <string>
using namespace std;

class Postre{
private:
  int cantidad;
  float costo;
  

public: 
  Postre();
  Postre(int cant,float cost):cantidad(cant),costo(cost){};

  int get_cantidad();
  float get_costo();

  void set_cantidad(int);
  void set_costo(float);
};


int Postre:: get_cantidad(){
  return cantidad;
}
void Postre:: set_cantidad(int cant){
  cantidad=cant;
}

float Postre:: get_costo(){
  return costo;
}

void Postre:: set_costo(float cost){
  costo=cost;
 }

