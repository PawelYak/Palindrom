#include <algorithm>
#include <iostream>
#include <string>

bool isPalindrom(const std::string &text) {
 
  std::string t2{text};
  std::reverse_copy(text.begin(), text.end(), t2.begin());
  return text == t2;
}
int main() {
  std::cout << "Enter world: " << '\n';
  std::string inputText{};
  std::cin >> inputText;

std::cout<<isPalindrom(inputText)<<'\n';
  return 0;
}