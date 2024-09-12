#include <iostream>
using namespace std;

int powerd(int number, int power)
{
if(power==0)
{return 1;}
if(power==1)
{return number;}
return number*powerd(number,power-1);



}

int main()
{
    cout<<powerd(2,2);
    cout<<endl;
    return 0;
}
