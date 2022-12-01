#ifndef CUENTAS_H_
#define CUENTAS_H_

#include <string>
using namespace std;

//Declaro clase cuenta
class Cuenta{
  //Variables de instancia
  protected:
    int num_mesa;
    string mesero_a_cargo;

  public: 
    //Metodos
    Cuenta(); //Constructor 
    Cuenta(int num,string mesero);    
    int get_num_mesa();
    string get_mesero_a_cargo();
};

//Constructor por default
Cuenta::Cuenta(){
  num_mesa=0;
  mesero_a_cargo="";

}
/**
* Constructor que recibe numero de mesa, y nombre del mesero
*
* @param string mesero: mesero_a_cargo, int num: num_mesa        
* @return Objeto Cuenta
*/
Cuenta::Cuenta(int num, string mesero){
    num_mesa=num;
    mesero_a_cargo=mesero;
}
//Getter de numero de mesa y nombre de mesero

/**
 * getter num_mesa
 *
 * @param
 * @return int: num_mesa
*/
int Cuenta:: get_num_mesa(){
  return num_mesa;
}
/**
 * getter mesero_a_cargo
 *
 * @param
 * @return string: mesero_a_cargo
*/
string Cuenta:: get_mesero_a_cargo(){
  return mesero_a_cargo;
}

#endif // CUENTA_H_