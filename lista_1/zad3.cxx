#include <iostream>

using namespace std;

int len(char* x) {
  // length of x
  char* y;
  for (y = x; *y; y++);
  return y-x;
}

int count(char s[], int size, char c) {
  // number of occurences of c in s
  int cntr = 0;
  for (int i = 0; i < size; i++) if (c == s[i]) cntr++;
  return cntr;
}

int main(int argc, char **argv) {
  char *a = argv[1], *b = argv[2];
  int len_a = len(a), len_b = len(b);
  
  if (len_a != len_b) {cout << "NIE" << endl; return 0;};
  for (char c = 32; c < 127; c++) if (count(a, len_a, c) != count(b, len_b, c)) {cout << "NIE" << endl; return 0;}
  
  cout << "TAK" << endl;
  return 0;
}
