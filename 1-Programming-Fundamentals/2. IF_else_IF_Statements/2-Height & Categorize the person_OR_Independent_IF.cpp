 float height,inch,feet;
    char gender;
    cout << "Please Enter Height in Centimeter: ";
    cin>>height;
    cout<<"Please Enter Gender M for Male and F for female and C for child boy and G for child girl: ";
    cin>>gender;


if(gender=='m'|| gender=='f' || gender=='c'|| gender=='g')

{

if(gender=='m')
{
  if(height==0)

  {
    cout<<endl;
    cout<<"He does not has any length!.";
    cout<<endl;
  }


  if (height>0 && height<=165)

{
  cout<<endl;
  cout<<"He is Short Length Man.";
  cout<<endl;
}
else if(height>165)
{
    cout<<endl;
    cout<<"He is Tall Length Man.";
    cout<<endl;
}
}


if(gender=='f')
{

if(height==0)

  {
    cout<<endl;
    cout<<"She does not has any length!.";
    cout<<endl;
  }

  if (height>0 && height<=152)

{
  cout<<endl;
  cout<<"She is Short Length Woman.";
  cout<<endl;
}
else if (height>152)
{
    cout<<endl;
    cout<<"She is Tall Length Woman.";
    cout<<endl;
}
}


if(gender=='c')
{
  if(height==0)

  {
    cout<<endl;
    cout<<"He does not has any length!.";
    cout<<endl;
  }


  if (height>0 && height<=139)

{
  cout<<endl;
  cout<<"He is Short Length Child Boy.";
  cout<<endl;
}
else if(height>165)
{
    cout<<endl;
    cout<<"He is Tall Length Child Boy.";
    cout<<endl;
}
}


if(gender=='g')
{

if(height==0)

  {
    cout<<endl;
    cout<<"She does not has any length!.";
    cout<<endl;
  }

  if (height>0 && height<=125)

{
  cout<<endl;
  cout<<"She is Short Length Child Girl.";
  cout<<endl;
}
else if (height>152)
{
    cout<<endl;
    cout<<"She is Tall Length Child Girl.";
    cout<<endl;
}

}

inch=height/2.54;
cout<<endl;
cout<<"Your Height in Inch= :"<<inch<<endl;

feet=height/ 30.48;
cout<<endl;
cout<<"Your Height in Feet= :"<<feet<<endl;

}

else
{
cout<<endl;
cout<<"Error! Invalid Input"<<endl;
}
}