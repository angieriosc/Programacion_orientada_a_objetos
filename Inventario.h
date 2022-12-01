#ifndef INVENTARIO_H_
#define INVENTARIO_H_

#include "Alimento.h" //Clase padre, contiene clases hijas.
#include "Cuenta.h" //Clase que crea objetos cuentas.
#include <string>
#include <iostream>//Utilizar inputs/outputs cin y cout
using namespace std;

//Constante para la creación de arreglos con espacio de sobra.
const int MAX = 100;
//Creación de clase Inventario
class Inventario{
  protected:
    //Variables de instancia (listas para guardar objetos)
    Postre postres[MAX];
    Comida comidas[MAX];
    Bebida bebidas[MAX];
    Cuenta cuentas[MAX];
    double alimentos_costo[MAX];
    string alimentos_nombre[MAX];
    //Declaro las variables de instancia
    private:
    int ipostres, icomidas, ibebidas, icuentas;
    int ialimentos_c, num2;
    float acum_t,nuevo_costo;  

    
  public: 
    //Métodos
    Inventario();//Constructor

    void mostrar_inventario();
    void mostrar_menu();
    void agrega_comida(string, int, float);
    void agrega_postre(string, int, string, float); 
    void agrega_bebida(string, int, string, float);
    void agrega_cuenta(int, string);
    void crear_bebidas_ejem();
    void crear_postres_ejem();
    void crear_comidas_ejem();
    void crear_cuentas_ejem();
    void editar_costo(string, float);
    void consultar_lista_c(int,int);
    void consultar_lista_p(int,int);
    void consultar_lista_b(int,int);
    void calcular_cuenta(int);

};
/**
 * Constructor por default
 *
 * @param
 * @return Objeto Inventario
 */
Inventario::Inventario(){
  ibebidas = 0;
  ipostres = 0;
  icomidas = 0;
  icuentas = 0;
  ialimentos_c= 0;
  acum_t=0;
}
/**
 * Utliza los arreglos de tipo Comida, Postre y bebida.
 * Muestra el menu con los costos por medio de getters y un ciclo
 * for que va recorriendo cada elemento de los arreglos y lo imprime
 *
 * @param
 * @return
*/
void Inventario::mostrar_menu(){
    cout<<"\n";
    cout<<"     Platillos    \n";
    cout<<"\n";
    for(int i = 0 ;i<= icomidas-1; i++){
      cout  << i+1 << ".- " << comidas[i].get_nombre()<<" $"<<comidas[i].get_costo()<<"\n";
    }
    cout<<"\n";
    cout<<"\n    Postres    \n";
    cout<<"\n";
    for(int i = 0 ;i<= ipostres-1; i++){
      cout  << i+1 << ".- " << postres[i].get_nombre()<<" $"<<postres[i].get_costo()<<"\n";
    }
    cout<<"\n";
    cout<<"\n    Bebidas    \n";
    cout<<"\n";
    for(int i = 0 ;i<= ibebidas-1; i++){
      cout  << i+1 << ".- " << bebidas[i].get_nombre()<<" $"<<bebidas[i].get_costo()<<"\n";
    }
    cout<<"\n";
 }
/**
 * Utliza los arreglos de tipo Comida, Postre y bebida.
 * Por medio de un ciclo for se llama a la función to_str
 * que imprime el nombre de los productos con la cantidad 
 * que se tiene disponible
 * @param
 * @return
*/
void Inventario::mostrar_inventario(){
    cout<<"\n";
    cout<<"           Platillos";
    cout<<"\n";
    for(int i = 0 ;i<= icomidas-1; i++){
      cout << comidas[i].to_str()<<"\n";  
    }
    cout<<"\n";
    cout<<"           Postres";
    cout<<"\n";
    for(int i = 0 ;i<= ipostres-1; i++){
      cout << postres[i].to_str()<<"\n"; 
    }
    cout<<"\n";
    cout<<"            Bebidas    ";
    cout<<"\n";
    for(int i = 0 ;i<= ibebidas-1; i++){
      cout << bebidas[i].to_str()<<"\n";
    }
    cout<<"\n";
} 
/**
 * Utliza los arreglos de tipo Comida, Postre y bebida.
 * Por medio de un ciclo for se llama a la función get_nombre()
  set_costo();
 * @param string:nombre_c, float nuevo_costo
 * @return
*/
void Inventario::editar_costo(string nombre_c, float nuevo_costo){
  for(int i = 0 ;i< icomidas-1; i++){
    if (comidas[i].get_nombre()==nombre_c){
      comidas[i].set_costo(nuevo_costo);
    }
  }
  for(int i = 0 ;i< ipostres-1; i++){
    if (postres[i].get_nombre()==nombre_c){
      postres[i].set_costo(nuevo_costo);
    }
  }
  for(int i = 0 ;i< ibebidas-1; i++){
    if (bebidas[i].get_nombre()==nombre_c){
      bebidas[i].set_costo(nuevo_costo);
    }
  }
} 
/**
 * Utiliza arreglo de Comidas y su ultimo indice.
 * Recibe el nombre, la cantidad, y el costo.
 * El metodo crea el objeto Comida y lo agrega al arreglo
 *
 * @param string:nombre, int:cantidad, float;costo
 * @return
 */
void Inventario::agrega_comida(string nombre,int cantidad, float costo){
    comidas[icomidas] = Comida (nombre, cantidad, costo);
    icomidas += 1;
}
/**
 * Utiliza arreglo dePostre y su ultimo indice.
 * Recibe el nombre, la cantidad, y el costo.
 * El metodo crea el objeto Postre y lo agrega al arreglo
 *
 * @param string:nombre, int:cantidad, string:caliente, float;costo
 * @return
 */
void Inventario::agrega_postre(string nombre,int cantidad, string caliente,float costo){
    postres[ipostres] = Postre(nombre, cantidad, caliente, costo);
    ipostres += 1;
}
/**
 * Utiliza arreglo agrega_Postre y su ultimo indice.
 * Recibe el nombre, la cantidad, el costo y si servia muerte.
 * El metodo crea el objeto Postre y lo agrega al arreglo
 *
 * @param string:nombre, int:cantidad, string:hielos, float;costo
 * @return
 */
void Inventario::agrega_bebida(string nombre,int cantidad, string hielos, float costo){
    bebidas[ibebidas] = Bebida (nombre, cantidad, hielos, costo);
    ibebidas += 1; 
}
/**
 * Utiliza arreglo dePostre y su ultimo indice.
 * Recibe el nombre, la cantidad, y el costo.
 * El metodo crea el objeto Postre y lo agrega al arreglo
 *
 * @param string:nombre, int:cantidad, string:caliente, float;costo
 * @return
 */
void Inventario::agrega_cuenta(int num_m, string nombre_c){
    cuentas[icuentas] = Cuenta (num_m, nombre_c);
    icuentas += 1;
}
/**
 * Utliza el arreglo de tipo Bebida.
 * Llena el arreglo con 4 ejemplos. Los identificadores de Bebida
 * van de 1 a 99.
 * @param
 * @return
*/
void Inventario::crear_bebidas_ejem(){
  bebidas[ibebidas] = Bebida("Agua de Jamaica", 10, "si", 30.0);
  ibebidas += 1;    
  bebidas[ibebidas] = Bebida("Agua de Horchata", 8, "si", 30.0);
  ibebidas += 1;
  bebidas[ibebidas] = Bebida("Coca-Cola", 20, "no", 25.0);
  ibebidas += 1;
  bebidas[ibebidas] = Bebida("Jugo Naranja",12, "no", 40.0);
  ibebidas += 1;  
}
/**
 * Utliza el arreglo de tipo Comida.
 * Llena el arreglo con 4 ejemplos. Los identificadores de Comida
 * van de 1 a 99.
 * @param
 * @return
*/
void Inventario::crear_comidas_ejem(){
  comidas[icomidas] = Comida("Cuernito", 9, 70.0);
  icomidas += 1;    
  comidas[icomidas] = Comida("Sandwich", 8, 65.0);
  icomidas += 1;
  comidas[icomidas] = Comida("Sincronizada", 3,  55.0);
  icomidas += 1;
  comidas[icomidas] = Comida("Waffles",15,  60.0);
  icomidas += 1; 
}
/**
 * Utliza el arreglo de tipo Postre.
 * Llena el arreglo con 4 ejemplos. Los identificadores de Postres
 * van de 1 a 99.
 * @param
 * @return
*/
void Inventario::crear_postres_ejem(){
  postres[ipostres] = Postre("Pay de limón", 10, "frio", 60.0);
  ipostres += 1;    
  postres[ipostres] = Postre("Cheescake", 8, "frio", 70.0);
  ipostres += 1;
  postres[ipostres] = Postre("Galleta con chispas de chocolate", 16, "caliente", 15.0);
  ipostres += 1;
  postres[ipostres] = Postre("Brownie",12, "caliente", 25.0);
  ipostres += 1; 
}
/**
 * Utliza el arreglo de tipo Cuenta.
 * Llena el arreglo con 4 ejemplos. Los identificadores de Cuenta
 * van de 1 a 99.
 * @param
 * @return
*/
void Inventario::crear_cuentas_ejem(){
  cuentas[icuentas] = Cuenta(1,"Salvador Iglesias");
  icuentas += 1;  
  cuentas[icuentas] = Cuenta(2,"Salvador Iglesias");
  icuentas += 1;   
  cuentas[icuentas] = Cuenta(3,"Isabela Chávez");
  icuentas += 1;   
  cuentas[icuentas] = Cuenta(4,"Isabela Chávez");
  icuentas += 1;   
}
/**
 * Utliza el arreglo de tipo Cuenta.
 * ciclo for donde recorre el arreglo de Cuentas y va obteniendo con
 * get_num_mesa a que número de mesa corresponden. Cuando esta sea igual
 * al número que ingreso el usuario guarda el numero de mesa en otra lista y
 * el costo de la comida en otra lista. Al final le resta 1 a la cantidad de 
 * la comida que se eligio y se establece a tráves de set_cantidad.
 * @param num_m, num;
 * @return
*/
void Inventario::consultar_lista_c(int num_m,int num){
  for(int i = 0 ;i< icuentas-1; i++){
    if (cuentas[i].get_num_mesa()==num_m){
       alimentos_nombre[ialimentos_c]=comidas[num-1].get_nombre();
       alimentos_costo[ialimentos_c]=comidas[num-1].get_costo();
       num2=comidas[num-1].get_cantidad();
       comidas[num-1].set_cantidad(num2-1);
       ialimentos_c += 1;
    }
  }
}
/**
 * Utliza el arreglo de tipo Cuenta.
 * ciclo for donde recorre el arreglo de Cuentas y va obteniendo con
 * get_num_mesa a que número de mesa corresponden. Cuando esta sea igual
 * al número que ingreso el usuario guarda el numero de mesa en otra lista y
 * el costo del postre en otra lista. Al final le resta 1 a la cantidad del 
 * postre que se eligio y se establece a tráves de set_cantidad.
 * @param num_m, num;
 * @return
*/  
void Inventario::consultar_lista_p(int num_m,int num){
  for(int i = 0 ;i< icuentas-1; i++){
    if (cuentas[i].get_num_mesa()==num_m){
      alimentos_nombre[ialimentos_c]=postres[num-1].get_nombre();
      alimentos_costo[ialimentos_c]=postres[num-1].get_costo();
      num2=postres[num-1].get_cantidad();
      postres[num-1].set_cantidad(num2-1);
      ialimentos_c += 1;
      }
  }
}
/**
 * Utliza el arreglo de tipo Cuenta.
 * Ciclo for donde recorre el arreglo de Cuentas y se obtiene con
 * get_num_mesa a que número de mesa corresponden. Cuando esta es igual
 * al número que ingreso el usuario guarda el nombre de la comida en una  
 * nueva lista y el costo de la bebida en otra lista. Al final le resta 1 
 * a la cantidad de la bebida y se establece a tráves de set_cantidad.
 * @param num_m, num;
 * @return
*/   
void Inventario::consultar_lista_b(int num_m,int num){
  for(int i = 0 ;i< icuentas-1; i++){
    if (cuentas[i].get_num_mesa()==num_m){
        alimentos_nombre[ialimentos_c]=bebidas[num-1].get_nombre();
        alimentos_costo[ialimentos_c]=bebidas[num-1].get_costo();
        num2=bebidas[num-1].get_cantidad();
        bebidas[num-1].set_cantidad(num2-1);
        ialimentos_c += 1;
    }
  }
}
/**
 * Por medio de ciclos for se va recorriendo el arreglo
 * de cuentas hasta encontrar la cuenta que se iguale al
 * número dado por el usuario. Imprime la lista de nombre
 * de los alimentos jinto con el precio que tienen. Por  
 * último se hace una sumatoria de los costos con un ciclo
 * for y un acumulador. Se imprime el mesero encargado.
 * @param num_m;
 * @return
*/ 
void Inventario::calcular_cuenta(int num_m){
  cout<<"\n"; 
  cout<<"Producto"<<"       Costo\n";
  cout<<"\n";
  for(int i = 0 ;i< icuentas; i++){
    if (cuentas[i].get_num_mesa()==num_m){
      for(int i = 0 ;i< ialimentos_c; i++){
        cout<<alimentos_nombre[i];
        cout<<"   $"<<alimentos_costo[i]<<"\n";
      }
      cout<<"\n";
        
      for(int i = 0 ;i< ialimentos_c; i++){
        acum_t=acum_t+alimentos_costo[i];
      }
      cout<<"\n";
      cout<<"Total         $"<<acum_t<<"\n";
      cout<<"\n";
      cout<<"Mesero encargado: "<<cuentas[i].get_mesero_a_cargo();
      cout<<"\n";
    }
  }  
}

#endif // INVENTARIO_H_
