#ifndef ALIMENTO_H_
#define ALIMENTO_H_

#include <string>
using namespace std;

class Alimento{
private:
  string temperatura;
  string nombre;
  
public: 
  Alimento();
  Alimento(string temp,string name):temperatura(temp),nombre(name){};

  string get_temperatura();
  string get_nombre();

  void set_temperatura(string);
  void set_nombre(string);
};

string Alimento:: get_temperatura(){
  return temperatura;
}
void Alimento:: set_temperatura(string temp){
  temperatura=temp;
}

string Alimento:: get_nombre(){
  return nombre;
}
void Alimento:: set_nombre(string name){
  nombre=name;
 }
