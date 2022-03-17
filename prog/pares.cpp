#include <iostream>
using namespace std;

int dev(int n) {
  int dev_summ = 0;
  
  for (int l = 1; l <= n / 2; l++) {
    if (n % l == 0) dev_summ += l;  
  }
  return dev_summ;
}

int main() {
  int a, b, control = 0;
  cin >> a >> b;
  
   for (int i = a; i < b; i++) {
    int sum_i = dev(i);
    for (int j = i + 1; j <= b; j++) {
      if (sum_i == j) {
        if (dev(j) == i) {control++; cout << i << " и " << j << endl;}  
      }    
    }
  } 
  if (control == 0) cout << "Нет" << endl;
  return 0;    
}