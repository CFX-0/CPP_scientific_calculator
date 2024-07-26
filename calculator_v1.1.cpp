#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <algorithm>

using namespace std;
int gcd(int a, int b){
    
    if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
int main(){
  double a, b, c, d;
  int x;
  int fraction;
  int y;
  int divisor;
  int denominator = 1000000;
  char type_fraction;
  char credits;
  char operation;
  char roundstat;
  cout << "***************√-CALCULATOR-√***************" << endl;
  cout << "Please enter the amount of variables you would like to use (2-4): ";
  cin >> x;
  cout << "Please enter the operation you want to perform /, x, +, -, c(cubic root), s(square root): ";
  cin >> operation;
  if (operation){
    if (operation == '+'){
      y = 0;
    }
    if (operation == '-'){
      y = 0;
    }
    if (operation == '/'){
      y = 1;
    }
    if (operation == 'x'){
      y = 1;
    }
    if (operation == 'c'){
      y = 0;
    }
    if (operation == 's'){
      y = 0;
    }
  }
  switch(x){
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
  
  if (operation){
    if (operation == 's'){
      cout << "Square root of a: " << sqrt(a) << endl;
      cout << "Square root of b: " << sqrt(b) << endl;
      cout << "Square root of c: " << sqrt(c) << endl;
      cout << "Square root of d: " << sqrt(d) << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Rounded square root of a: " <<round(sqrt(a)) << endl;
 	      cout << "Rounded square root of b: " <<round(sqrt(b)) << endl;
        cout << "Rounded square root of c: " <<round(sqrt(c)) << endl;
 	      cout << "Rounded square root of d: " <<round(sqrt(d)) << endl;
      }
    }
    if (operation == '/'){
      cout << "Division result: "<< a / b / c / d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Division result rounded: "<<round(a / b / c / d)<< endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y'){
      fraction = (a / b / c / d) * 1000000;
      divisor = gcd(fraction, denominator);
      cout << "Fraction result: "<< fraction/divisor << "/"<< denominator/divisor << endl;
      }
    }
    if (operation == '+'){
      cout << "Sum result: " << a + b + c + d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Sum result rounded: " <<round(a + b + c + d)<< endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y'){
      fraction = (a + b + c + d) * 1000000;
      divisor = gcd(fraction, denominator);
      cout << "Fraction result: "<< fraction/divisor << "/"<< denominator/divisor << endl;
      }
    }
    if (operation == '-'){
      cout << "Subtraction result: "<< a - b - c - d << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Subtraction result rounded:"<<round(a - b - c - d)<< endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y'){
      fraction = (a - b - c - d) * 1000000;
      divisor = gcd(fraction, denominator);
      cout << "Fraction result: "<< fraction/divisor << "/"<< denominator/divisor << endl;
      }
    }
    if (operation == 'x'){
      cout << "Multiplication result: "<<a * b * c * d<< endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Multiplication result rounded: "<<round(a * b * c * d)<< endl;
      }
      cout << "Do you want to change the decimal result to fraction? (y/n): ";
      cin >> type_fraction;
      if (type_fraction == 'y'){
      fraction = (a * b * c * d) * 1000000;
      divisor = gcd(fraction, denominator);
      cout << "Fraction result: "<< fraction/divisor << "/"<< denominator/divisor << endl;
      }
    }
    if (operation == 'c'){
      cout << "Cubic root of a: " << cbrt(a) << endl;
      cout << "Cobic root of b: " << cbrt(b) << endl;
      cout << "Cubic root of c: " << cbrt(c) << endl;
      cout << "Cubic root of d: " << cbrt(d) << endl;
      cout << "Do you want to round all the results? (y/n): ";
      cin >> roundstat;
      if (roundstat == 'y'){
        cout << "Rounded cubic root of a: " << round(cbrt(a)) << endl;
        cout << "Rounded cubic root of b: " << round(cbrt(b)) << endl;
        cout << "Rounded cubic root of c: " << round(cbrt(c)) << endl;
        cout << "Rounded cubic root of d: " << round(cbrt(d)) << endl;
      }
    }
  cout << "*****Thank you for using my calculator!*****" << endl;
  cout << "Show credits? (y/n): ";
  cin >> credits;
  if(credits == 'y'){
    cout << "-CALCULATOR-© v1.1 by liquidfy_"<<endl;
  }
    else{}
  return 0;}
}