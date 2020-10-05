
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cout << "Enter A term: ";
  cin >> a;
  cout << "Enter B term: ";
  cin >> b;
  cout << "Enter C term: ";
  cin >> c;

  double first =  double((-b)-sqrt(pow(b,2)-4*a*c))/(a*2);
  double second = double((-b)+sqrt(pow(b,2)-4*a*c))/(a*2);

  cout << "Solution 1: ";
  cout << '\n';
  cout << first;
  cout << '\n';
  cout << "Solution 2: ";
  cout << '\n';
  cout << second;
  cout << '\n';

  cin >> a;
  return 0;
}

