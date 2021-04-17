#include <iostream>

int main() {
  int Usuario1_edad;
  int Usuario2_edad;
  std::cout << "Este programa muestra en pantalla True o False si la edad ingresada por dos usuarios es la misma.\n";
std::cout << " Usuario 1 ingrese su edad:\n";
  std::cin >>Usuario1_edad; 
std::cout << "Usuario 2 ingrese su edad:\n";
  std::cin >> Usuario2_edad;
  if(Usuario1_edad == Usuario2_edad)
  {
   std::cout << " Verdadero\n";

  }
     else{
     std::cout << " Falso\n";
   }
}