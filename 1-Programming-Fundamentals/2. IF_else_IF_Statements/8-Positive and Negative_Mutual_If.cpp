#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please Enter any number:";
    cin>>number;

    if (number>0)
        cout<<"The given number is positive number.";
    else if (number<0)
     cout<<"The Given number is negative number.";
    else
        cout<<"The Given number is zero.";
    return 0;
}
