#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int v, t;
  cout << "������� �����" << endl;
  cin >> t;
  cout << "������� ��������" << endl;
  cin >> v;
  cout << v * t << endl;
  return 0;
}