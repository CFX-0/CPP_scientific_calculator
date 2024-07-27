#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
void displayFileContent(const std::string &filename) {
  ifstream file(filename);
  string line;
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line << std::endl;
    }
    file.close();
  } else {
    cout << "Failed to open the file." << std::endl;
  }
}
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main() {
  double a, b, c, d;
  long factorial = 1.0;
  int x;
  int fraction;
  int y;
  int divisor;
  int denominator = 1000000;
  char type_fraction;
  char credits;
  char operation;
  char roundstat;
  // user input
  cout << "----------------------!CALCULATOR!----------------------" << endl;
  cout << "Please enter the amount of variables you would like to use (1-4): ";
  cin >> x;
  ifstream inputFile("test1.txt");
  cout << "Please enter the operation you want to perform from the list "
          "below:\n";
  displayFileContent("test1.txt");
  inputFile.close();
  cout << "Enter: ";
  cin >> operation;
  if (operation) {
    if (operation == 'C'){
      y = 0;
    }
    if (operation == 'A'){
      y = 0;
    }
    if (operation == '='){}
    if (operation == '?'){
      y = 1;
    } 
    if (operation == '^') {
      y = 1;
    }
    if (operation == '!') {
      y = 0;
    }
    if (operation == '+') {
      y = 0;
    }
    if (operation == '-') {
      y = 0;
    }
    if (operation == '/') {
      y = 1;
    }
    if (operation == 'x') {
      y = 1;
    }
    if (operation == 'c') {
      y = 0;
    }
    if (operation == 's') {
      y = 0;
    }
  }
  switch (x) {
  case 1:
    cout << "Enter a: ";
    cin >> a;
    b = y;
    c = y;
    d = y;
    break;
  case 2:
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;
    d = y;
    c = y;
    break;
  case 3:
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;
    d = y;
    break;
  case 4:
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << "Enter d: ";
    cin >> d;
    break;
  default:
    cout << "Invalid input/range" << endl;
    break;
  }
  // function & display
  if (operation) {
    if (operation == '?'){
      cout << "Remainder a of b is: " << remainder(a, b)<< endl;
      cout << "Remainder c of d is: " << remainder(c, d)<< endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (remainder(a, b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (remainder(c, d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'C'){
      cout << "Cosine of a:"<< cos(a)<<endl;
      cout << "Cosine of b:"<< cos(b)<<endl;
      cout << "Cosine of c:"<< cos(c)<<endl;
      cout << "Cosine of d:"<< cos(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (cos(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result cosine(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cos(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result cosine(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cos(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result cosine(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cos(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result cosine(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'A'){
      cout << "Sine of a:"<< sin(a)<<endl;
      cout << "Sine of b:"<< sin(b)<<endl;
      cout << "Sine of c:"<< sin(c)<<endl;
      cout << "Sine of d:"<< sin(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (sin(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result sine(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sin(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result sine(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sin(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result sine(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sin(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result sine(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
   if (operation == 'T'){
      cout << "Tangent of a:"<< tan(a)<<endl;
      cout << "Tangent of b:"<< tan(b)<<endl;
      cout << "Tangent of c:"<< tan(c)<<endl;
      cout << "Tangent of d:"<< tan(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (tan(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result tangent(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tan(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result tangent(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tan(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result tangent(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tan(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result tangent(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 't'){
      cout << "Hyperbolic cosine of a:"<< cosh(a)<<endl;
      cout << "Hyperbolic cosine of b:"<< cosh(b)<<endl;
      cout << "Hyperbolic cosine of c:"<< cosh(c)<<endl;
      cout << "Hyperbolic cosine of d:"<< cosh(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (cosh(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-cosine(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cosh(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-cosine(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cosh(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-cosine(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cosh(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-cosine(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'r'){
      cout << "Hyperbolic angent of a:"<< tanh(a)<<endl;
      cout << "Hyperbolic angent of b:"<< tanh(b)<<endl;
      cout << "Hyperbolic angent of c:"<< tanh(c)<<endl;
      cout << "Hyperbolic angent of d:"<< tanh(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (tanh(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-tangent(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tanh(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-tangent(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tanh(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-tangent(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (tanh(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-tangent(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'e'){
      cout << "Hyperbolic sine of a:"<< sinh(a)<<endl;
      cout << "Hyperbolic sine of b:"<< sinh(b)<<endl;
      cout << "Hyperbolic sine of c:"<< sinh(c)<<endl;
      cout << "Hyperbolic sine of d:"<< sinh(d)<<endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (sinh(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-sine(a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sinh(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-sine(b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sinh(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-sine(c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sinh(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result H-sine(d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == '!') {
      if (a < 0 )
        cout << "Error! Factorial of a negative number doesn't exist.\n";
      else {
        for (int i = 1; i <= a; ++i) {
          factorial *= i;
        }
        cout << "Factorial of " << a << " = " << factorial << endl;
      }
    }
    if (operation == '^') {
      if (a == 0) {
        cout << "invalid input";
      }
      if (d == 0) {
        cout << "invalid input";
      } else {
        cout << "a to the power of b is: " << pow(a, b) << endl;
        cout << "c to the power of d is: " << pow(c, d) << endl;
      }
    }
    if (operation == 's') {
      cout << "Square root of a: " << sqrt(a) << endl;
      cout << "Square root of b: " << sqrt(b) << endl;
      cout << "Square root of c: " << sqrt(c) << endl;
      cout << "Square root of d: " << sqrt(d) << endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (sqrt(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sqrt(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sqrt(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (sqrt(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == '/') {
      cout << "Division result: " << a / b / c / d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y') {
        cout << "Division result rounded: " << round(a / b / c / d) << endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (a / b / c / d) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result: " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == '+') {
      cout << "Sum result: " << a + b + c + d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y') {
        cout << "Sum result rounded: " << round(a + b + c + d) << endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (a + b + c + d) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result: " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == '-') {
      cout << "Subtraction result: " << a - b - c - d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y') {
        cout << "Subtraction result rounded:" << round(a - b - c - d) << endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (a - b - c - d) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result: " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'x') {
      cout << "Multiplication result: " << a * b * c * d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y') {
        cout << "Multiplication result rounded: " << round(a * b * c * d)
             << endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (a * b * c * d) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result: " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    if (operation == 'c') {
      cout << "Cubic root of a: " << cbrt(a) << endl;
      cout << "Cobic root of b: " << cbrt(b) << endl;
      cout << "Cubic root of c: " << cbrt(c) << endl;
      cout << "Cubic root of d: " << cbrt(d) << endl;
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y') {
        fraction = (cbrt(a)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (a): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cbrt(b)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (b): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cbrt(c)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (c): " << fraction / divisor << "/"
             << denominator / divisor << endl;
        fraction = (cbrt(d)) * 1000000;
        divisor = gcd(fraction, denominator);
        cout << "Fraction result (d): " << fraction / divisor << "/"
             << denominator / divisor << endl;
      }
    }
    // credits, obviously
    cout << "-----------Thank you for using my calculator!-----------" << endl;
    cout << "Show info? (y/n): ";
    cin >> credits;
    if (credits == 'y') {
      cout << "-CALCULATOR-© v1.2.1 by liquidfy_" << endl;
    } else {
    }
    cout << "\n[Program Ended]" << endl;
    return 0;
  }
}
