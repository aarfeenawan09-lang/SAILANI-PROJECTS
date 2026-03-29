#include<iostream>
#define MAX 100
using namespace std;
class array{
    int a[MAX],size;
    public:
    void setter();
    void getter();
    void minmax();
    void insert();
};
void array::insert(){
    int value,pos;
    cout<<"enter value";
    cin>>value;
    cout<<"enter the position where you want ot";
    cin>>pos;
    for(int i=size;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    size++;
}
void array::setter(){
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element # "<<i+1<<endl;
        cin>>a[i];
    }
}
void array::minmax()
{
    int max=a[0],min=a[0],posmax=a[0],posmin=a[0];
    for(int i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            posmax++;
        }
        
        if(min>a[i])
        {
            min=a[i];
            posmin++;
        }
    }
    cout<<"Max is"<<max<<"pos is"<<posmax<<endl;
    cout<<"min is"<<min<<"pos is"<<posmin<<endl;
}
void array::getter(){
for(int i=0;i<size;i++)
{
    cout<<a[i]<<endl;
}
}
int main(){
    array a1;
    int choice;
    do{
     cout<<"Main Menu\n"
         <<"1.enter\n"
         <<"2.Display\n"
         <<"3.minmax\n"
         <<"insert\n";
         cin>>choice;
         switch(choice)
         {
            case 1:
            a1.setter();
            break;
            case 2:
            a1.getter();
            break;
            case 3:
            a1.minmax();
            break;
            case 4:
            a1.insert();
            break;
            

         }
    }while(true);
}
