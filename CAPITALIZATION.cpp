//write a program that acceptsa string as input,capitalise the first letter of each word in the string and then return tje result string
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string capitalize_first_letters(string str) {
  for (int i = 0; i < str.length(); ++i) {
    if (i == 0 || iswspace(str[i - 1])) {
      str[i] = toupper(str[i]);
    }
  }
  return str;
}

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  string result = capitalize_first_letters(input);

  cout << "Result: " << result << endl;

  return 0;
}

