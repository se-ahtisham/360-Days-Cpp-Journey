#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please Enter the number: ";
    cin>>number;


// For Positive Number:

    switch(number>0)
    {
    case 1:
    cout<<endl;
    cout<<"The Given number "<<number<<" is Positive";
    cout<<endl;
    break;
    }

// For Negative Number:

    switch(number<0)
    {
    case 1:
    cout<<endl;
    cout<<"The Given number "<<number<<" is Negative";
    cout<<endl;
    break;
    }

// For Zero Number:

    switch(number==0)
    {
    case 1:
    cout<<endl;
    cout<<"The Given number "<<number<<" is Zero";
    cout<<endl;
    break;
    }

return 0;

}
