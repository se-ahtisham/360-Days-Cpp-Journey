#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Please Enter Grade: ";
    cin>>grade;

switch(grade)
{
   case'A':
   cout<<endl;
   cout<<"Excellent";
   cout<<endl;
   break;


   case'B':
   case'C':
   cout<<endl;
   cout<<"Weldone";
   cout<<endl;
   break;



   case'D':
   cout<<endl;
   cout<<"You passed";
   cout<<endl;
   break;


   case'F':
   cout<<endl;
   cout<<"Better try again";
   cout<<endl;
   break;


   default:

   cout<<endl;
   cout<<"Invalid Grade";
   cout<<endl;

}

    return 0;
}
