#include <iostream>
using namespace std;
 int main()
 {
     int a;
     cout<<"Vvedite a"<<endl;
     cin>>a;

     int b;
     cout<<"Vvedite b"<<endl;
     cin>>b;

     int c=180-(a+b);
     cout<<"c="<<c<<endl;

     if ((a>90) || (b>90) || (c>90)) cout<<"Treugolinic tupougolinii"<<endl;
      else if ((a==90) || (b==90)|| (c==90)) cout<<"Treugolinic priamougolinii"<<endl;
       else if ((a<90) && (b<90) && (c<90)) cout<<"Treugolinic ostrougolinii"<<endl;

 }
