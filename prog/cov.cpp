#include <iostream>
using namespace std;

int main() {
  int number, dev_summ = 0;
  cin >> number;
  
  for (int i = 1; i <= number / 2; i++) {
    if (number % i == 0) dev_summ += i;      
  }
  if (dev_summ == number) cout << "�����������" << endl;
  else cout << "������������" << endl;
  return 0;    
}