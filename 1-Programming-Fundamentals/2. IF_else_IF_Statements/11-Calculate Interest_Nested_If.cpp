#include <iostream>

using namespace std;

int main()
{
    int age,amount;
    bool gender,choice;
    float interest(0);
    cout << "Please enter your age:";
    cin>>age;
    if (age>60)
    cout<<"Senior citizen"<<endl;

    cout<< "Please Enter gender '1' for male and '0' for female:";
    cin>>gender;

    if(gender==1)
       {
            cout<<"He is male and he get 2.5% interest";
            cout<<endl<<"Please enter amount:";
            cin>>amount;
            interest=amount+0.025;
            cout<<"After adding the interest the amount will become="<<interest<<endl;


            cout<<"If this person work somewhere then press '1' if this person is work in your office then press'0':";
            cin>>choice;

            if(choice==1)
            {
            cout<<"This person will get additional 3% interest.";
            interest=interest+0.03;
            cout<<endl<<endl<<"The Total amount will be equal ="<<interest;
            }

            else
            {
                cout<<"The Total amount will be equal ="<<interest;

            }
       }


    else


         {
            cout<<"She is female and he get 3% interest";
            cout<<endl<<"Please enter amount:";
            cin>>amount;
            interest=amount+0.03;
            cout<<"After adding the interest the amount will become="<<interest<<endl;


            cout<<"If this person work somewhere then press '1' if this person is work in your office then press'0':";
            cin>>choice;

            if(choice==1)
            {
            cout<<"This person will get additional 3% interest.";
            interest=interest+0.03;
            cout<<endl<<endl<<"The Total amount will be equal ="<<interest;
            }

            else
            {
                cout<<"The Total amount will be equal ="<<interest;
            }
       }




 return 0;
}
