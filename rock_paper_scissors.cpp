#include <iostream>
#include <stdlib.h>

int main() {
srand(time(NULL));
int computer = rand() % 3 + 1;
int user = 0;
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "shoot! ";
std::cin >> user;
if (user == 1 && computer == 1) {std::cout << "Tie!\n";}
if (user == 1 && computer == 2) {std::cout << "You lose!\n";}
if (user == 1 && computer ==3) {std::cout << "You Win!\n";}
if (user == 2 && computer == 1) {std::cout << "You Win!\n";}
if (user == 2 && computer == 2) {std::cout << "Tie!\n";}
if (user == 2 && computer ==3) {std::cout << "You lose!\n";}
if (user == 3 && computer == 1) {std::cout << "You lose!\n";}
if (user == 3 && computer == 2) {std::cout << "You Win!\n";}
if (user == 3 && computer ==3) {std::cout << "Tie!\n";}
}