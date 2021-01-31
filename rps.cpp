#include <iostream>
using namespace std;

int randNum() {
     int randomNumber;
     for (int index = 1; index < 5;index++) {
          randomNumber = (rand() % 3) + 1;
          return randomNumber;
     }
}


void checkWinner(int input) {
     string winner;
     if(input > randNum()) {
          winner = "You Win!";
     }
     else if(input < randNum()) {
           winner = "You Lose!";
     } else {
           winner = "Draw!!";
     }
     cout << winner;
}

void game() {
     int input;
     cout << "Welcome to the game of RPS!" << endl;
     cout << "Enter 1 for Rock, 2 for Paper or 3 for Scissors" << endl;
     cin >> input;
     if (input > 0 && input < 4) {
          checkWinner(input);
     } else {
          cout << "My man provide some real digits" << endl;
     };
}

int main() {
     game();
     string answer;
     cout << "\n Wanna play Again? Type Y/N ";
     cin >> answer;
     if(answer == "y" || answer == "yes") {
          game();
     } else {
          cout << "Have a Nice Day!";
     }
     return 0;
}
// Credits: Delta, discord.gg/devs