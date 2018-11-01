#include <iostream>
using namespace std;
class distance
{
private:
    int m;
    int sm;

public:
    void setdist(int,int);
    void getdist();
    void showdist();
    distance(){}
    distance(const distance &m, int sm);
    ~distance() {}
    distance operator +=(int z);
    distance operator -= (int z);
    distance operator *= (int c);
};

void distance::getdist()
{
    cout<<"Vvedite metri : "<<endl;
    cin>>m;
    cout<<"Vvedite santimetri : "<<endl;
    cin>>sm;
}

void distance::setdist(int m1, int sm1)
{
    m=m1;
    sm=sm1;
}

void distance::showdist()
{
    cout<<m<<","<<sm;
}

distance distance::operator +=(int z)
{
    sm += z;
    if (sm > 100)
    {
        m += 1;
    }
}

distance distance::operator -= (int z)
{
    sm -= z;
    if (sm > 100)
    {
        m -= 1;
    }
}

distance distance::operator *= (int c)
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
    do
    {
        distance d;
        d.setdate();
        d.getdate();
        d.showdate();
        int z;

        cout<<"Vvedite rasstoianie, kotoroe hotite pribaviti"<<endl;
        cin>>z;
        d += z;
        d.showdate();

        cout<<"Vvedite rasstoianie, kotoroe hotite otneati"<<endl;
        cin>>z;
        d -= z;
        d.showdate();

        cout<<"Vvedite cislo, kotoroe hotite umnojiti"<<endl;
        cin>>c;
        d *= c;
        d.showdate();
    }
    while(p == 'p');
    getch();
    return 0;
}
