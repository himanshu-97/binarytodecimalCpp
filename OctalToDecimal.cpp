#include <iostream>
#include <cmath>
using namespace std;
int OtoD(int n)
{
 int decimal = 0;
 int b = 0;
 while (n > 0)
 {
  int lastdigit;
  lastdigit = n % 10;
  decimal = decimal + (lastdigit * pow(8, b));
  b++;
  n = n / 10;
 }
 return decimal;
}

int main()
{
 int n, ans;
 cout << "Enter Octal" << endl;
 cin >> n;
 ans = OtoD(n);
 cout << ans << endl;

 return 0;
}
