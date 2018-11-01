#include <iostream>
#include <math.h>
using namespace std;
class treug
{
private :
    float a;
    float b;
    float c;
public :
    float perimetr();
    float aria();
    float vysota(char);
    float mediana(char);
    float bis(char);
    float radius_op();
    float radius_vpis();
    void storona();
    treug(float a1, float b1, float c1);
    ~treug();
};

treug::treug(float a1, float b1, float c1)
{
    a=a1;
    b=b1;
    c=c1;
}

treug::~treug()
{

}

float treug::perimetr()
{
    return a+b+c;
}

float treug::aria()
{
    float p=perimetr()/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float treug::vysota(char st)
{
   if(st=='a') return (2*aria())/a;
   if(st=='b') return (2*aria())/b;
   if(st=='c') return (2*aria())/c;
}

float treug::mediana(char st)
{
    if(st=='a') return 0.5*sqrt(2*((b*b)+(c*c))-a*a);
    if(st=='b') return 0.5*sqrt(2*((a*a)+(c*c))-b*b);
    if(st=='c') return 0.5*sqrt(2*((a*a)+(b*b))-c*c);
}

float treug::bis(char st)
{
    if(st=='a') return sqrt((a*b)*(a+b+c)*(a+b-c))/(b+c);
    if(st=='b') return sqrt((a*b)*(a+b+c)*(a+b-c))/(a+c);
    if(st=='c') return sqrt((a*b)*(a+b+c)*(a+b-c))/(a+b);
}

float treug::radius_op()
{
    return (a*b*c)/(4*aria());
}

float treug::radius_vpis()
{
    return (2*aria())/perimetr();
}

void treug::storona()
{
    if ((a==b) and (a==c) and (b==c)) cout<<"Treugolinik ravnostoronnyi"<<endl;
    if ((a==b) || (b==c) || (a==c)) cout<<"Treugolinik ravnobedrennyi"<<endl;
    if ((a!=b) && (b!=c) && (a!=c)) cout<<"Treugolinik proizvolinyi"<<endl;
}

int main()
{
    float a2;
    cout<<"a= ";
    cin>>a2;
    float b2;
    cout<<"b= ";
    cin>>b2;
    float c2;
    cout<<"c= ";
    cin>>c2;
    treug t(a2,b2,c2);

    cout<<t.perimetr()<<" "<<t.aria()<<" "<<t.vysota('c')<<" "<<t.mediana('c')<<" ";
    cout<<t.bis('c')<<" "<<t.radius_op()<<" "<<t.radius_vpis()<<" "<<endl;
    t.storona();

}
