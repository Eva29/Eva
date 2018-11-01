#include <iostream>
#include <string.h>
#include <stdio.h>
#define x 3
using namespace std;
class employee
{
private:
    char name[20];
    char fam[20];
    int n;
    float d;

public:
    void input();
    void output();
    employee(int n1, float d1, char name1[20], char fam1[20]);
    employee() {}
    ~employee() {}
};

employee::employee(int n1, float d1, char name1[20], char fam1[20])
{
    n = n1;
    d = d1;
    strcpy(name,name1);
    strcpy(fam,fam1);
}

void employee::input()
{
    cout<<"Vvedite imea sotrudnika: "<<endl;
    cin>>name;
    cout<<"Vvedite familiu sotrudnika: "<<endl;
    cin>>fam;
    cout<<"Vvedite nomer sotrudnika: "<<endl;
    cin>>n;
    cout<<"Vvedite velicinu oklada sotrudnika v dollarah"<<endl;
    cin>>d;
    cout<<"******************************************"<<endl;
}

void employee::output()
{
    cout<<name<<" "<<fam<<" "<<n<<" "<<d<<endl;
}

main()
{
    int n;
    float d;
    char name[20];
    char fam[20];

    employee e(n, d, name, fam);

    employee emp[10];
    for(int i=0; i<x; i++)
    {
        emp[i].input();
    }
    for(int i=0; i<x; i++)
    {
        emp[i].output();
    }
}


