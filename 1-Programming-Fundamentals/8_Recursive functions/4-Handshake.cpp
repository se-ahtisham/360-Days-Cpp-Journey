#include <iostream>
using namespace std;


int handshake(int number)
{
    if(number==0)
    {
        return 0;
    }

    return (number-1)+ handshake(number-1);
}

int main()
{
    int people=0;
    cout<<"Please Enter People: ";
    cin>>people;
   cout<< handshake(people);

    return 0;
}
