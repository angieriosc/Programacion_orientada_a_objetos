
#include <stdio.h>
#include <string>
using namespace std;

class Bebida{
private:
  string temperatura;
  int cantidad;
  string ingredientes;
  float costo;
  

public: 
  Bebida();
  Bebida(string temp,int cant,string ingre,float cost):temperatura(temp),cantidad(cant),ingredientes(ingre),costo(cost){};

  string get_temperatura();
  int get_cantidad();
  string get_ingredientes();
  float get_costo();

  void set_temperatura(string);
  void set_cantidad(int);
  void set_ingredientes(string);
  void set_costo(float);
};

string Bebida:: get_temperatura(){
  return temperatura;
}
void Bebida:: set_temperatura(string temp){
  temperatura=temp;
}

int Bebida:: get_cantidad(){
  return cantidad;
}
void Bebida:: set_cantidad(int cant){
  cantidad=cant;
}

string Bebida:: get_ingredientes(){
  return ingredientes;
}
void Bebida:: set_ingredientes(string ingre){
  ingredientes=ingre;
 }


float Bebida:: get_costo(){
  return costo;
}

void Bebida:: set_costo(float cost){
  costo=cost;
 }

