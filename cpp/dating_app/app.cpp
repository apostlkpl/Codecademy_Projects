#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listenign to music");
  std::cout << sam.view_profile();
}