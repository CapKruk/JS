#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");  

  int A[6] = {2,3,4,5,44,12};
  cout << "Массив" << endl;
  for (int i = 0; i < 6; i++) {
    cout << A[i] << " ";
  }

  int max_num = A[0];

  for (int i = 1; i < 6; i++) {
    max_num = max(max_num, A[i]);
  }
  cout << endl << "Максимальный элемент" << endl;
  cout << max_num << endl;
  return 0;
}