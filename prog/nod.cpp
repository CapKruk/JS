#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int x = n, y = m;
  
  while (x != y) {
    if (x > y) x -= y;
    else y -= x;
  }
  cout << x << endl;
  if (x == 0) cout << max(n, m) << endl;
  else cout << n * m / x;
  return 0;    
}
