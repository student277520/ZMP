#include <iostream>

using namespace std;

bool contains(int arr[], int size, int n) {
  for (int i = 0; i < size; i++) {
    if (n == arr[i]) {
      return 1;
    }
  }
  return 0;
}

bool contains_sorted(int arr[], int size, int n) {
  // w tej wersjii potrzeba nie więcej niż ceiling(log2(size)) iteracji pętli
  int *first = arr;
  int *last = arr+size;
  int *mid;
  
  while (first+1 < last) {
    mid = first + (last-first)/2;
    if (n < *mid) {
      last = mid;
    } else if (n > *mid) {
      first = mid;
    } else {
      return true;
    }
  }
  return false;
}

int main() {
  int tab[1000];
  int n;
  for (int i = 0; i < 1000; i++) cin >> tab[i];
  cin >> n;
  cout << "contains: " << contains(tab, 1000, n) << endl << "contains (assuming sorted): " << contains_sorted(tab, 1000, n) << endl;
}
