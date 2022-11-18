#ifndef MENU_H_
#define MENU_H_

#include <stdio.h>
#include <string>
using namespace std;

class Menu{


public: 
  Menu();

  void mostrar_menu();
  void quitar_menu(Alimento);
  void anadir_menu(Alimento);
};

void Menu:: mostrar_menu(){
  ---;
 }

void Menu:: quitar_menu(Alimento){
  ---;
 }

void Menu:: anadir_menu(Alimento){
  ---;
 }

