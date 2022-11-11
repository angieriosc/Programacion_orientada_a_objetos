#include <stdio.h>
#include <string>
using namespace std;

class Comida{
private:
  string temperatura;
  int cantidad;
  string ingredientes;
  float costo;
  

public: 
  Comida();
  Comida(string temp,int cant,string ingre,float cost):temperatura(temp),cantidad(cant),ingredientes(ingre),costo(cost){};

  string get_temperatura();
  int get_cantidad();
  string get_ingredientes();
  float get_costo();

  void set_temperatura(string);
  void set_cantidad(int);
  void set_ingredientes(string);
  void set_costo(float);
};

string Comida:: get_temperatura(){
  return temperatura;
}
void Comida:: set_temperatura(string temp){
  temperatura=temp;
}

int Comida:: get_cantidad(){
  return cantidad;
}
void Comida:: set_cantidad(int cant){
  cantidad=cant;
}

string Comida:: get_ingredientes(){
  return ingredientes;
}
void Comida:: set_ingredientes(string ingre){
  ingredientes=ingre;
}


float Comida:: get_costo(){
  return costo;
}

void Comida:: set_costo(float cost){
  costo=cost;
}
