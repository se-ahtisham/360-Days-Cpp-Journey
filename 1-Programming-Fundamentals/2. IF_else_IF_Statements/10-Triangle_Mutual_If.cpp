#include <iostream>

using namespace std;

int main()
{
    float hypotenuse,prependicular,base;
    cout << "Please Enter the Hypotenuse of triangle:";
    cin>>hypotenuse;
    cout << "Please Enter the Prependicular of triangle:";
    cin>>prependicular;
    cout << "Please Enter the Base of triangle:";
    cin>>base;

if(hypotenuse*hypotenuse==(base*base)+(prependicular*prependicular))

{
    cout<<endl;
    cout<<"The Triangle is Right angle triangle"<<endl;
}

else if(hypotenuse==base && base==prependicular && prependicular==hypotenuse )
{
    cout<<endl;
    cout<<"This is Equilateral triangle"<<endl;
}

else if(hypotenuse!=base && base!=prependicular && prependicular!=hypotenuse )
{
    cout<<endl;
    cout<<"This is Scalene triangle"<<endl;
}


else
{
cout<<endl;
cout<<"This is Isosceles triangle"<<endl;

}
    return 0;

}
