#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int HtoD(string n)
{
 int decimal = 0;
 int b = 0;
 int size = n.size();
 for (int i = size - 1; i >= 0; i--)
 {
  if (n[i] >= '0' && n[i] <= '9')
  {
   // if (n[i] == '0')
   // {
   //  n[i] = 0;
   // }
   // if (n[i] == '1')
   // {
   //  n[i] = 1;
   // }
   // if (n[i] == '2')
   // {
   //  n[i] = 2;
   // }
   // if (n[i] == '3')
   // {
   //  n[i] = 3;
   // }
   // if (n[i] == '4')
   // {
   //  n[i] = 4;
   // }
   // if (n[i] == '5')
   // {
   //  n[i] = 5;
   // }
   // if (n[i] == '6')
   // {
   //  n[i] = 6;
   // }
   // if (n[i] == '7')
   // {
   //  n[i] = 7;
   // }
   // if (n[i] == '8')
   // {
   //  n[i] = 8;
   // }
   // if (n[i] == '9')
   // {
   //  n[i] = 9;
   // }

   decimal = decimal + ((n[i] - '0') * pow(16, b));
   b++;
  }
  else if (n[i] >= 'a' && n[i] <= 'f')
  {
   // if (n[i] == 'a')
   // {
   //  n[i] = 10;
   // }
   // if (n[i] == 'b')
   // {
   //  n[i] = 11;
   // }
   // if (n[i] == 'c')
   // {
   //  n[i] = 12;
   // }
   // if (n[i] == 'd')
   // {
   //  n[i] = 13;
   // }
   // if (n[i] == 'e')
   // {
   //  n[i] = 14;
   // }
   // if (n[i] == 'f')
   // {
   //  n[i] = 15;
   // }
   decimal = decimal + ((n[i] - 'a' + 10) * pow(16, b));
   b++;
  }
 }
 return decimal;
}

int main()
{
 string n;
 int ans;
 cout << "Enter Hexa" << endl;
 cin >> n;
 ans = HtoD(n);
 cout << ans << endl;

 return 0;
}
