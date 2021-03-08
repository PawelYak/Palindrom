#include <algorithm>
#include <ios>
#include <iostream>
#include <string>

bool isPalindrom(const std::string &text) {
  std::cout << "before : " << text << '\n';
  std::string t2{text};
  std::reverse_copy(text.begin(), text.end(), t2.begin());
  std::cout << "After: " << t2 << '\n';
  return text == t2;
}
int main() {
  std::cout << "Enter world: " << '\n';
  std::string inputText{};
  std::cin >> inputText;

  std::cout << isPalindrom(inputText) << '\n';

  return 0;
}