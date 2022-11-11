
#include <stdio.h>
#include <string>
using namespace std;

class Postre{
private:
  string caliente_frio;
  int cantidad;
  string ingredientes;
  float costo;
  

public: 
  Postre();
  Postre(string c_f,int cant,string ingre,float cost):caliente_frio(c_f),cantidad(cant),ingredientes(ingre),costo(cost){};

  string get_caliente_frio();
  int get_cantidad();
  string get_ingredientes();
  float get_costo();

  void set_caliente_frio(string);
  void set_cantidad(int);
  void set_ingredientes(string);
  void set_costo(float);
};

string Postre:: caliente_frio(){
  return caliente_frio;
}
void Postre:: set_caliente_frio(string c_f){
  caliente_frio=c_f;
}

int Postre:: get_cantidad(){
  return cantidad;
}
void Postre:: set_cantidad(int cant){
  cantidad=cant;
}

string Postre:: get_ingredientes(){
  return ingredientes;
}
void Postre:: set_ingredientes(string ingre){
  ingredientes=ingre;
 }


float Postre:: get_costo(){
  return costo;
}

void Postre:: set_costo(float cost){
  costo=cost;
 }

