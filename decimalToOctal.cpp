#include <iostream>
#include <sstream>
using namespace std;
void DtoO(int n)
{
 string bits;
 int c = 0;
 while (n > 0)
 {
  int bit;
  stringstream ss;
  bit = n % 8;
  ss << bit;
  ss >> bits[c];
  n = n / 8;
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
 cout << "Enter a Decimal Number" << endl;
 cin >> n;
 DtoO(n);
 return 0;
}
