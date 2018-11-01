#include <iostream>
#include <conio.h>
using namespace std;
class angle
{
private:
    int gr;
    float m;
    char nap;

public:
    void input();
    void output();
    angle(int gr1, float m1, char nap1);
    ~angle();
};

angle::angle(int gr1, float m1, char nap1)
{
    gr = gr1;
    m = m1;
    nap = nap1;
}

angle::~angle()
{

}

void angle::input()
{
    cout << "Vvedite koordinatu tochki : ";
    cin >> gr >> m >> nap;
}

void angle::output()
{
    cout << gr << "\xF8" << m << "'" << nap;
}

main()
{
  char p = 'p';
  angle t(149, 34.8, 'W');
  do
  {
      t.input();
      t.output();
      cout<<"Prodoljati? Tap p"<<endl;
      cin>>p;
  }
  while(p == 'p');
  getch();
  return 0;
}



