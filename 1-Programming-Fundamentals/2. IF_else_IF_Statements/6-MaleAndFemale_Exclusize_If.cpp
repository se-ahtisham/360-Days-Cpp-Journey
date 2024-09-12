#include <iostream>

using namespace std;

int main()
{
    bool gender;
    cout << "Please Enter gender '1' for male and '0' for female:";
    cin>>gender;

    if (gender==1)
        cout<<"Gender is Male";
    else
        cout<<"Gender is female";
    return 0;
}
