#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    int addition,subtraction,multiplication,division,mod;
    char oper;

    cout <<"Please Enter the First Number:";
    cin>>number1;
    cout <<"Please Enter the Second Number:";
    cin>>number2;
    cout<<"Please Enter the operator:";
    cin>>oper;

if (oper=='+')
{
    addition=number1+number2;
cout<<endl;
cout<<"The Sum of Given number is= "<<addition<<endl;
}

else if(oper=='-')
{
subtraction=number1-number2;
cout<<endl;
cout<<"The Subtraction of Given number is= "<<subtraction<<endl;
}

else if(oper=='*')
{
multiplication=number1*number2;
cout<<endl;
cout<<"The Multiplication of Given number is= "<<multiplication<<endl;
}

else if(oper=='/')
{
division=number1/number2;
cout<<endl;
cout<<"The Division of Given number is= "<<division<<endl;
}

else if(oper=='%')
{
mod=number1%number2;
cout<<endl;
cout<<"The Modulus of Given number is= "<<mod<<endl;
}

else
{
cout<<endl;
cout<<"Invalid operator"<<endl;
}


    return 0;
}
