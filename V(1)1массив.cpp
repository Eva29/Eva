#include <iostream>
using namespace std;
int main()
{
    //Ввод массива и вычисление произведения четных элементов массива
    cout<<"Vvedite k-vo elementov"<<endl;
    int x[1000],i,n;
    cin>>n;
    cout<<"Vvedite elementi massiva"<<endl;
    for(i=0; i<n; i++)
        cin>>x[i];
    int p=1;

    for(i=0; i<n; i++)
        if(x[i]%2==0) p*=x[i];
    cout<<"Proizvedenie necetnih elementov massiva = "<<p<<endl;

    //Нахождение первого и последнего нулевого элемента массива и суммы элементов, расположенных между ними
    int a=-1;
    int z=-1;
    for(i=0; i<n; i++)
    {
        if(x[i]==0)
            z=i;
    }
     for(i=0; i<n; i++)
    {
        if(x[i]==0)
            {
                a=i;
                break;
            }
    }

    if(a==-1 and z==-1) {
            cout<<"Net nulevih elementov"<<endl;
     return 0;
    }
    else
    {
        cout<<"Pervii nulevoi element = "<<a<<endl;
        cout<<"Poslednii nulevoi element = "<<z<<endl;
    }

int   s=0;
        for(i=a+1; i<z; i++)
        {
            s+=x[i];
        }
        cout<<"Summa elementov mejdu "<<a<<" i "<<z<<" = "<<s<<endl;


    //Обнуление значениия каждого третьего элемента массива начиная с первого
    for(i=0; i<n; i++)
        if((i+1)%3==0) x[i]=0;
    cout<<"elementi massiva : "<<endl;
    for(i=0; i<n; i++)
        cout<<x[i]<<endl;
    return 0;
}



