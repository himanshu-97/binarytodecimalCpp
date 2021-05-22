#include <iostream>
#include <cmath>
using namespace std;
//binary to decimal
int BtoD(int n)
{
 int decimal = 0;
 int b = 0;
 while (n > 0)
 {
  int lastDigit;
  lastDigit = (n % 10);
  decimal = decimal + (lastDigit * pow(2, b));
  b++;
  n = n / 10;
 }
 return decimal;
}

int main()
{
 int n, ans;
 cout << "Enter Binary Number" << endl;
 cin >> n;
 ans = BtoD(n);
 cout << ans << endl;
 return 0;
}
