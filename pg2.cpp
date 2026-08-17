#include <iostream>
using namespace std;
void show(int x,int y)
{
    cout<<"x: "<<x<<" y: "<<y<<endl ;
}
void swapbyval(int x,int y)
{
    int z=x;
    x=y;
    y=z;
    cout<<"value after swap"<<endl ;
    show(x,y);

}
void swapbyaddress(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;


}
void swapbyref(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
    
}
int main()
{
    int x,y;
    cout<<"Enter the val: ";
    cin>>x,y;
    cout<<"swap by value"<<endl<<endl ;
    cout<<"value before swap:"<<endl;
    show(x,y);
    cout<<"value after swap"<<endl;
    swapbyval(x,y);
    cout<<"swap by address"<<endl;
    cout<<"value before swap"<<endl;
    show(x,y);
    cout<<"value after swap"<<endl;
    swapbyaddress(&x,&y);
    cout<<"swap by ref"<<endl;
    cout<<"value before swap"<<endl;
    show(x,y);
    cout<<"value after swap"<<endl;
    swapbyref(x,y);
    return 0;
}

