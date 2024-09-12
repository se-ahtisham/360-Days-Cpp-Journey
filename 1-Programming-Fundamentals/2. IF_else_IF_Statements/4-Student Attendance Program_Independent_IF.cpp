int total,attend;
    float persentage;
    cout <<"Please Enter the Total number of classes held: ";
    cin>>total;
    cout <<"Please Enter the Number of classes you attend: ";
    cin>>attend;

    persentage=(attend*100)/total;

    cout<<endl;
    cout<<"Your Persentage is: "<<persentage<<endl;

    if(persentage<=75)
    {
    cout<<endl;
    cout<<"Your are not allowed to sit in exam"<<endl;
    }

    if(persentage>75)
    {
    cout<<endl;
    cout<<"Your are allowed to sit in exam"<<endl;
    }   	