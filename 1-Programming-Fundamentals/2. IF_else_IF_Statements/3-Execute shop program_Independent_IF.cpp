
    float price,cos,jam,discount;
    cout <<"Please Enter the Price: ";
    cin>>price;


if(price<=1000)
{
cout<<endl;
cout<<"You will not get any Discount."<<endl;
cout<<"Your price is:"<<price<<endl;
}

if(price>1000)
{

cout<<"Please Press 1 if he/she bought cosmetics product and 0 if not: ";
cin>>cos;
cout<<"Please Press 1 if if he/she bought jam-e-shirein 0 if not: ";
cin>>jam;

if(cos==1)

{
cout<<endl;
cout<<"You will get 2% more Discount."<<endl;
cout<<"Your total discount is 12%"<<endl;
discount=(price/100)*12;
cout<<"After 12% Discount your Price is: "<<discount<<endl;
}

else
{
cout<<endl;
cout<<"You will get 10% Discount."<<endl;
discount=price*0.1;
cout<<"After 10% Discount your Price is: "<<discount<<endl;

}


if(jam==1)
{

cout<<endl;
cout<<"You will get 3% more Discount."<<endl;
cout<<"Your total discount is 13%"<<endl;
discount=(price/100)*13;
cout<<"After 13% Discount your Price is: "<<discount<<endl;
cout<<endl;

}

}