#include <iostream>
#include <conio.h>
using namespace std;
class dist
{
private:
    int m;
    int sm;

public:
    void setdist(int,int);
    void getdist();
    void showdist();
    dist(){}
    dist(const dist &m, int sm);
    ~dist() {}
    dist operator +=(int z);
    dist operator -= (int z);
    dist operator *= (int c);
};

void dist::getdist()
{
    cout<<"Vvedite metri : "<<endl;
    cin>>m;
    cout<<"Vvedite santimetri : "<<endl;
    cin>>sm;
}

void dist::setdist(int m1, int sm1)
{
    m=m1;
    sm=sm1;
}

void dist::showdist()
{
    cout<<m<<","<<sm;
}

dist dist::operator +=(int z)
{
    sm += z;
    if (sm > 100)
    {
        m += sm/100;
        sm%=100;
    }
}

dist dist::operator -= (int z)
{
    sm -= z;
    if (sm > 100)
    {
        m -= 1;
    }
}

dist dist::operator *= (int c)
{
    sm *= c;
    m *= c;
    if (sm > 100)
    {
        m += 1;
    }
}

main()
{
    char p = 'p';
    int c;
    do
    {
        dist d;
        d.setdist(50,36);
        d.getdist();
        d.showdist();
        int z;

        cout<<"Vvedite rasstoianie, kotoroe hotite pribaviti"<<endl;
        cin>>z;
        d += z;
        d.showdist();

        cout<<"Vvedite rasstoianie, kotoroe hotite otneati"<<endl;
        cin>>z;
        d -= z;
        d.showdist();

        cout<<"Vvedite cislo, kotoroe hotite umnojiti"<<endl;
        cin>>c;
        d *= c;
        d.showdist();
        cout<<"Continue? [y/n]";
        cin>>p;
        p=toupper(p);
    }
    while(p == 'y');
    getch();
    return 0;
}
