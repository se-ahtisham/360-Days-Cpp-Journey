int year,century;
    cout<<endl;
    cout << "Please Enter Year: ";
    cin>>year;
    cout << "Please Enter The Century: ";
    cin>>century;

if(year%4==0)
{
cout<<endl;
cout<<"Its Leap Year"<<endl;
}

else
{
cout<<endl;
cout<<"Its not Leap year"<<endl;
}

if(century%400==0)
{
cout<<endl;
cout<<"Its Leap Century"<<endl;
}

else
{
cout<<endl;
cout<<"Its not Leap Century"<<endl;
}

}	