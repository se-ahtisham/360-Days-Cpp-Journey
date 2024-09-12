#include <iostream>

using namespace std;

int main()
{
    float celcius;
    float fahrenheit;
    float kelvin;
    char basic_unit;
    char choice;

    cout<<"Please Enter the basic unit (c for celcius) and (f for fahrenheit) and (k for Kelvin):";
    cin>>basic_unit;

    if((basic_unit=='c') || (basic_unit=='f') || (basic_unit=='k'))

    {

    // for Celcius

      if(basic_unit=='c')

      {
      cout<<"Please Enter the Temperature in Celcius:";
      cin>>celcius;
      cout<<"To convert the temperature from celcius to fahrenheit press (f) and To convert the temperature from celcius to kelvin press (k):";
      cin>>choice;

      if (choice=='f')
      {
         fahrenheit=(celcius*9)/5;
         fahrenheit=fahrenheit+32;
         cout<<"The temperature in fahrenheit is ="<<fahrenheit;
       }

       else if (choice=='k')
      {
        kelvin=celcius+273.15;
        cout<<endl;
        cout<<"The temperature in Kelvin is ="<<kelvin;
        cout<<endl;
      }

       else
       {
           cout<<endl;
           cout<<"Invalid input";
           cout<<endl;
       }


}

// For fahrenheit.


else if(basic_unit=='f')

      {
      cout<<"Please Enter the Temperature in Fahrenheit:";
      cin>>fahrenheit;
      cout<<"To convert the temperature from fahrenheit to celcius press (c) and To convert the temperature from fahrenheit to kelvin press (k):";
      cin>>choice;

      if (choice=='c')
      {
         celcius=(fahrenheit-32)/1.8;
         cout<<"The temperature in celcius is = "<<celcius;
       }

       else if (choice=='k')
      {
        kelvin=((fahrenheit-32)*5)/9 + 273.15;
        cout<<endl;
        cout<<"The temperature in Kelvin is ="<<kelvin;
        cout<<endl;
      }

       else
       {
           cout<<endl;
           cout<<"Invalid input";
           cout<<endl;
       }

      }





       // For kelvin.


else if(basic_unit=='k')

      {
      cout<<"Please Enter the Temperature in Kelvin:";
      cin>>kelvin;
      cout<<"To convert the temperature from Kelvin to celcius press (c) and To convert the temperature from Kelvin to Fahrenheit press (f):";
      cin>>choice;

      if (choice=='c')
      {
         celcius=(kelvin-273.15);
         cout<<"The temperature in celcius is = "<<celcius;
       }

       else if (choice=='f')
      {
        fahrenheit=((kelvin-273.15)*1.8)+32;
        cout<<endl;
        cout<<"The temperature in Fahrenheit is ="<<fahrenheit;
        cout<<endl;
      }

       else
       {
           cout<<endl;
           cout<<"Invalid input";
           cout<<endl;
       }


}


else
    {
        cout<<"Invalid Input";
    }

    return(0);

}
}
