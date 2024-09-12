#include <iostream>
using namespace std;


int friendPairs(int number)
{
    if(number==0 || number==1 || number==2)
    {
        return number;
    }

    return friendPairs(number-1)+ friendPairs(number-2)+(number+1) ;
}

int main()
{
    int people=0;
    cout<<"Please Enter People: ";
    cin>>people;
   cout<< friendPairs(people);

    return 0;
}
