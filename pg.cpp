#include<iostream>

using namespace std;

class point
{
    int x,y;

    public:
    //point() : x{0},y{0} {
      //  cout<<"default constructor";
    //}
    point(int p=0,int q=0):x{p},y{q} {
        cout<<"parametarized constructor"<<endl;
    }
    point add(point p,point q)
    {
        cout<<"after add"<<endl;
        point r;
        r.x=p.x+q.x;
        r.y=p.y+q.y;
        return r;

        
    }
    point add(point q)
    {
       // point r;
        //r.x=x+q.x;
        //r.y=y+q.y;
        //return r;
        return point(x+q.x,y+q.y);


    }    
    void show()
    {
        cout<<x<<","<<y<<endl;
    }
};


int main()
{
    point r;
    point p(10,20),q(20,50);
    //p.show();
    //q.show();
    //r=p.add(q);
    //r.show();
    //r.add(p,q);
    //r.show();
    

    return 0;
}