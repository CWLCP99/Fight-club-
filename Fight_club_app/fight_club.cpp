#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>     

int main() {
  // Write code here 
  // Terminal Adventure Game
  // FIGHT CLUB. 

  // Declaration variables
  int hp = 100; // health points in order to 
  int action_user ; // user next action variable
  int fighter; // fighters available. 



  // Mike Tyson variable as string
  std::string Mike = "Mike Tyson";
  std::string Ali = "Muhammad Ali";
  std::string Maymoney = "Floyd Mayweather";

  // fight initilization  
  std::cout << "Lets the fight begins!\n";
  std::cout << "Choose your fighter: \n"; 
  std::cout << "1) " << Mike << "\n"; 
  std::cout << "2) " << Ali << "\n"; 
  std::cout << "3) " << Maymoney << "\n";

  std::cout << "Input for fighter: ";
  //choose fighter
  std::cin >> fighter; 
  if (fighter == 1) {
    std::cout << "You have chosen: " << Mike << ". Let the fight begins!\n";
  }
  else if (fighter == 2) {
    std::cout << "You have chosen: " << Ali << ". Let the fight begins!\n";
  }
  else if (fighter == 3) {
    std::cout << "You have chosen: " << Maymoney << ". Let the fight begins!\n";
  }
  else {
    std::cout << "Please input a valid number\n";
  }

  // random generator seed
  std::srand(std::time(nullptr));

  std::cout << "Choose your next move: \n";
  std::cout << "1. Attack\n"; 
  std::cout << "2. Defend\n"; 
  std::cout << "3. Rest\n"; 
  std::cout << "Your selection: ";
  std::cin >> action_user;
  std::cout << "You chose: " << action_user << "\n";
  
  

}