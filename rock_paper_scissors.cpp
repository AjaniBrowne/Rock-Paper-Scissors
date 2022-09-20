/* Rock, Paper,Scissors Game.
Prompts user to choose either of these selections.
Compares user's choice to computer's choice to declare winner*/

#include <iostream>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "==================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "==================\n";

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  
  

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  
  

  std::cout << "shoot!\n";
  std::cout << "Your choice of weapon:\n";
  std::cin >> user;
  std::cout << "computer:" << computer << "\n";

  if(user == 1 && computer == 2 ) {
    std::cout << "Paper beats rock. Computer wins.\n";
  }
  else if (user == 2 && computer == 3 ) {
    std::cout << "Scissors beats paper. Computer wins.\n";
  }
  else if (user == 3 && computer == 1) {
    std::cout << "Rock beats scissors. Computer wins.\n";
  }
  else if (user == 2 && computer == 1 ) {
    std::cout << "Paper beats rock. You win!\n";
  } 
  else if (user == 3 && computer == 2 ) {
    std::cout << "Scissors beats paper. You win!\n";
  } 
  else if (user == 1 && computer == 3 ) {
    std::cout << "Rock beats scissors. You win!\n";
  }
  else if (user == computer) {
    std::cout << "Its a tie!\n";
  }
  else {
    std::cout << "Invalid input.\n";
    return 0;
  }
}