#include <iostream>
using namespace std;
 int main ()
 {
    int x;
    cout<<"Vvedite 4etiriohznacinoe cislo"<<endl;
    cin>>x;
    int y = x%10 && x/10%10 && x/100%10 && x/1000;
    cout<<y;
 }
