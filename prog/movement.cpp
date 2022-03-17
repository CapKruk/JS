#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int v, t;
  cout << "¬ведите врем€" << endl;
  cin >> t;
  cout << "¬ведите скорость" << endl;
  cin >> v;
  cout << v * t << endl;
  return 0;
}