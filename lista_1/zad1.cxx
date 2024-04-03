#include <iostream>


using namespace std;


long fib_rec(int n) {
  if (n < 2) { return 1 ;}
  return fib_rec(n-1) + fib_rec(n-2);
}


long fib_loop(int n) {
  long t, x = 1, y = 1;
  for (int i = 1; i < n; i++) {
    t = x+y;
    x = y;
    y = t;
  }
  return y;
}


int main() {
  int n;
  cout << "n: ";
  cin >> n;
  cout << endl << "fib_rec: " << fib_rec(n) << endl << "fib_loop: " << fib_loop(n) << endl;
  return 0;
}
