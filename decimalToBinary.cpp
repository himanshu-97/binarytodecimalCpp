#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
void DtoB(int n)
{
 string bits;
 int c = 0;
 while (n > 0)
 {
  int bit;
  bit = n % 2;
  // cout << bit;
  if (bit == 0)
  {
   bit = '0';
  }
  if (bit == 1)
  {
   bit = '1';
  }
  bits[c] = bit;
  // cout << bits[c];
  n = n / 2;
  c++;
 }
 for (int i = c; i >= 0; i--)
 {
  cout << bits[i];
 }
}

int main()
{
 int n;
 cout << "Enter a decimal no" << endl;
 cin >> n;
 DtoB(n);
 return 0;
}
