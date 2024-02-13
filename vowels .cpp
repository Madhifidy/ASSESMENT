//write the program  to count the vowels in a sentence
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  int count = 0;
  cout << "write your sentence:";
  cin >> x;

  for (int i = 0; i < x.length(); i++) {
    if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') {
      count = count + 1;
    }
  }

  cout << count;

  return 0;
}