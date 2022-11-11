#include <stdio.h>
#include <string>
using namespace std;

class Inventario{
private:
  string nombre;
  int cantidad;
  

public: 
  Inventario();
  Inventario(string name,int cant):nombre (name),cantidad(cant){};

  string get_nombre();
  int get_cantidad();

  void set_nombre(string);
  void set_cantidad(int);

};

string Inventario:: get_nombre(){
  return nombre;
}
void Inventario:: set_nombre(string name){
  nombre=name;
}

int Inventario:: get_cantidad(){
  return cantidad;
}
void Inventario:: set_cantidad(int cant){
  cantidad=cant;
}
