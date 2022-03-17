#include <iostream>
using namespace std;

int main() {
  int p = 1, n;
  cin >> n;
  
  if (n == 0) cout << p << endl;
  else {
    for (int i = 1; i <= n; i++) p *= i;
    cout << p << endl;
  }
  return 0;    
}
