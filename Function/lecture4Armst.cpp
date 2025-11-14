#include <iostream>
#include <cmath>
using namespace std;

// Function of the counting digit !!!
int countDigit(int a)
{
  int n = a;
  int countt = 0;

  while (n > 0)
  {
    countt++;
    n = n / 10;
  }
  return countt;
}

// Function of the Calculating Armstrong number !!!

bool isArmstrong(int digit, int countt)
{
  int sum = 0, rem = 0;
  int check = digit;

  while (check > 0)
  {
    rem = check % 10;
    check /= 10;
    sum += pow(rem, countt);
  }

  if (sum == digit)
    return 1;
  else
    return 0;
}

int main()
{
  int digit;
  cout << "Enter the digit : ";
  cin >> digit;
  int countt = countDigit(digit);
  cout << countt << endl;
  cout << isArmstrong(digit, countt) << endl;
}
