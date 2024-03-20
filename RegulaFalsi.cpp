#include<bits/stdc++.h>
using namespace std;

class Falsi
{
    private:
    double a,b,root;
    double tolerance = 0.0001;

    public:
    double function(double x)
    {
        
        return x*x*x-2*x-5;
    }
    private:
    void random()
    {
        srand(int(time(0)));
        while(1)
        {
            a=-9 + rand()%10;
            b=rand()%10;
            if(function(a)*function(b)<0)
            break;
        }
    }
    
    private:
    double falsi(double a, double b)
    {
        return (a*function(b)-b*function(a))/(function(b)-function(a));
    }
    public:
    void solve()
    {
        double x,i=1;
        random();
        while(i)
            {
                cout<<"iteration"<<i<<endl;
                cout<<"a: "<< a <<" b: "<<b<<endl;
                root = falsi(a,b);
                cout<<"Assume root: "<<root<<endl;
                x=function(root);
                if(abs(x)<=tolerance)
                {
                    cout<<"Root is "<<root<<endl;
                    break;
                }
                else
                {
                    cout<<" But X is "<<x<<"!=0"<<endl;
                    if(function(root)*function(a)<0 )
                    {
                        b=root;
                        i++;
                    }
                    else
                    {
                        a=root;
                        i++;
                    }

                }
            }
    }
};

int main()
{
    Falsi falsi = Falsi();
    falsi.solve();
}