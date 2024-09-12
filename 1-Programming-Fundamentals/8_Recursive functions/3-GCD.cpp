#include <iostream>
using namespace std;

int GCD(int number, int Second)
{
if(Second==0)
{
    return number;
}
return GCD(Second,number%Second);
}

int main()
{
    cout<<GCD(24,42);
    cout<<endl;
    return 0;
}
