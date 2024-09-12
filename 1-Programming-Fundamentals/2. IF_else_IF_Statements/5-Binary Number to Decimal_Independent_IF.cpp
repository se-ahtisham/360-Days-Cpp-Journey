cout<<endl;
    long number,new_number;
    int counter=0,decimal=0,reminder=0;
    cout<<"Please Enter Number in Binary Number System: ";
    cin>>number;
    new_number=number;
    while (number!=0)
    {
    reminder = number % 10;
    number =number/ 10;
    decimal = decimal + reminder * pow(2, counter);
    ++counter;
   
    }
    cout<<endl;
    cout<<"Decimal Number of given Binary number is: "<<decimal<<endl;	
}