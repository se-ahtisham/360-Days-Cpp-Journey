#include <iostream>

using namespace std;

int main()
{
    int age=0;
    float balance=0;
    float extra=0;
    float interest=0;
    bool gender=0;
    bool work;
    float initial;

    cout<<"Please enter age:";
    cin>>age;
    cout<<"Please enter balance:";
    cin>>balance;
    if(balance>=0)
    {
        if (age>60)
        {
            if(balance>10000)
            {
                extra=(balance/1000)*50;
            }
        }

        cout<<"Kindly enter your gender:";
        cin>>gender;

        if(gender==1)
        {

            interest=initial+0.03;
            cout<<"If it work somewhere enter 1 other wise 0 if not working:";
            cin>>work;
            if (work==1)
            {
                interest=interest+0.03;
                cout<<"interest="<<interest;
            }
            else
            {
                interest=interest+0.025;
                cout<<"interest="<<interest;
            }

            balance=balance+extra+(interest+1)*balance;
        }


    }

    else
        cout<<"There is no deposite";

    return 0;
}
