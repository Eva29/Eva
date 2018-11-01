/*Создание списка, вывод на экран, вставка элемента, удаление, вывод*/
#include <iostream>
using namespace std;
struct List
{
    int Info;
    List *next;
}*p;

void Create()
{
    List *r, *v;
    if (p!=NULL) cout<<"Spisok uje sozdan"<<endl;
    else
    {
        cout<<"Vvedite spisok cisel zaversaia 0"<<endl;
        do
        {
            r=new List;
            cin>>r->Info;
            r->next=NULL;
            if (p==NULL)
                {p=r;
            v=r;
        }
        else
        {
            v->next=r;
            v=r;
        }
        }
        while (r->Info!=0);

}
}
void Show() //вывод на экран
{
    List *r;
    if (p==NULL) cout<<"Spiska net";
    else
    {
        r=p;
        while(r!=NULL)
        {
            cout<<r->Info<<" ";
            r=r->next;
        }
    }
}

void include() //Добавление
{
    int poz, i=0;
    List *q, *r;
    q=new List;
    cout<<"Dobaviti novii element"<<endl;
    cin>>q->Info;
    cout<<"Dobavlenie ego pozotii"<<endl;
    cin>>poz;
    r=p;
    if (poz==1)
    {
        q->next=p;
        p=q;
    }
    while(r!=NULL)
    {
        i++;
        if (i==poz-1) break;
        else
            r=r->next;
    }
    cout<<i;
    if (r==NULL) cout<<"V nashem spiske toliko"<<" "<<i-1<<"elementov";
    else
    {
        q->next=r->next;
        r->next=q;
    }
}

void exclude() //Удаление
{
    int x;
    List *q, *r;
    cout<<"Vveditee udaleaemii element"<<endl;
    cin>>x;
    r=p;
    while ((r!=NULL) and (r->Info!=x))
    {
        q->next=r->next;
        delete r;
    }
}

int main()
{
    p=NULL;
    int n;
    do
    {
        cout<<"1 - sozdati"<<endl;
        cout<<"2 - vyvesti na ekran"<<endl;
        cout<<"3 - dobaviti element"<<endl;
        cout<<"4 - udaliti element"<<endl;
        cout<<"0 - vyhod"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
        {
            Create();
            break;
        };
        case 2:
        {
            Show();
            break;
        };
        case 3:
        {
            include();
            break;
        };
        case 4:
        {
            exclude();
            break;
        };
        }

    }
    while(n!=0);
}

