# include <iostream>
using namespace std;

int main() {

  char oper;
  float number1,number2;
  float addition,subtraction,multiplication,division;

  cout << "Please enter First number: ";
  cin >> number1;
  cout << "Please enter Second number: ";
  cin >> number2;
  cout << "Enter operator: +, -, *, / ,: ";
  cin >> oper;

  switch(oper)

   {

    case '+':
    addition=number1+number2;
    cout <<"The Addition of given number is= "<<addition;
    break;


    case '-':
    subtraction=number1-number2;
    cout <<"The Subtraction of given number is= "<<subtraction;
    break;


    case '*':
    multiplication=number1*number2;
    cout <<"The Multiplication of given number is= "<<multiplication;
    break;


    case '/':
    division=number1/number2;
    cout <<"The Division of given number is= "<<division;
    break;



    default:
    cout << "Invalid operator!";
    break;
  }

  return 0;
}
