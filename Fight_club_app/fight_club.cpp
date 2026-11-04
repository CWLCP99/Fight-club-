#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>     

int main() {
  // Write code here 
  // Terminal Adventure Game
  // FIGHT CLUB. 

  // random generator seed
  std::srand(std::time(nullptr)); // time(): changes once per second

  // Declaration variables
  int hp_user = 100; // health points of user 
  int hp_fighter = 100; // health points of fighter 
  int action_user ; // user next action variable
  int fighter; // fighters available.

  // Fighters variables as string
  std::string Mike = "Mike Tyson";
  std::string Ali = "Muhammad Ali";
  std::string Maymoney = "Floyd Mayweather";

  // Fight initilization  
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

  while (hp_user > 0 && hp_fighter > 0 ) { 
    // Random variable declaration
    int action_fighter_rand = std::rand() % 3 + 1; // randomizer variable for fighter choosing. 

    std::cout << "Choose your next move: \n";
    std::cout << "1. Attack\n"; 
    std::cout << "2. Defend\n"; 
    std::cout << "3. Rest\n"; 

    // Rules: 
    // 1. Attack wins on Rest. (-10hp) 
    // 2. Defend ties with Attack. (0 hp) 
    // 3. Rest wins on Defend. (+5 hp) 
    std::cout << "Your selection: ";
    std::cin >> action_user;
    std::cout << "You chose: " << action_user << "\n";

    std::cout << fighter << " chose: " << action_fighter_rand << "\n";
    
    // Logic to randomize selection of the boxer. 

    // Attack vs Defend
    if (action_user == 1 && action_fighter_rand == 2) {
        std::cout << "You wanted to attack but was properly blocked by " << fighter << "\n";
        }
    // Attack vs Rest
    else if (action_user == 1 && action_fighter_rand == 3) {
        std::cout << "What a great punch! " << fighter << " loses 10 hp\n";
        hp_fighter = hp_fighter - 10;
        }
    // Attack vs Attack 
    else if (action_user == 1 && action_fighter_rand == 1) {
        std::cout << "Ooof, both of you are hitting yourselves hard!\n";
        hp_fighter = hp_fighter - 10;
        hp_user = hp_user - 10;
        }
    // Defend vs Attack
    else if (action_user == 2 && action_fighter_rand == 1) {
        std::cout << fighter << " wanted to attack but it was properly defended by you...\n";
    }
    // Defend vs Defend
    else if (action_user == 2 && action_fighter_rand == 2) {
        std::cout << "Both are waiting to throw the punch!... who is going to take the initiative\n";
    }
    // Defend vs Rest
    else if (action_user == 2 && action_fighter_rand == 3) {
        std::cout << "You are very playing very careful\n";
        std::cout << fighter << " had some time to rest...\n";
        hp_fighter = hp_fighter + 5;
    }
    // Rest vs Attack
    else if (action_user == 3 && action_fighter_rand == 1) {
        std::cout << "What a great hit by " << fighter << " You lose 10hp\n"; 
        hp_user = hp_user - 10; 
    }
    // Rest vs Defend
    else if (action_user == 3 && action_fighter_rand == 2) {
        std::cout << fighter << " is playing very careful\n"; 
        std::cout << " You had some time to rest...\n"; 
        hp_user = hp_user + 5; 
    }
    // Rest vs Rest
    else if (action_user == 3 && action_fighter_rand == 3) {
        std::cout <<" Both fighters are resting their arms a bit...\n"; 
        hp_user = hp_user + 5;
        hp_fighter = hp_fighter + 5; 
    }

    // small checks so that the hp doesnt go above 100 hp. 
    if (hp_user >= 100) {
      hp_user = 100; 
    }
    // Second independent check for the hp
    if (hp_fighter >= 100) {
      hp_fighter = 100;
    }

    std::cout << fighter << " has " << hp_fighter << " hp left..\n";
    std::cout << "You have " << hp_user << " hp left..\n";
    }   
  


}