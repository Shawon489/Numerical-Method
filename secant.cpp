#include<bits/stdc++.h>
using namespace std;
class Secant
{
    private:
    double root,a,b;
    

    private:
    double func(double x)
    {
    return x*x*x-2*x-5;
    }
    void generateX()
    {
        srand(int(time(0)));
        while(1)
        {
            a=-9+rand()%10;
            b=rand()%10;
            if(func(a)*func(b)<0)
            break;
        }

    }
    void rootN(double x,double y)
    {
        root=(b*func(x)-a*func(y))/(func(x)-func(y));
    }

    public:
    void solve()
    {
        
        double i=1;
        generateX();
        while(10)
        {
            cout<<"Itteration:"<<i;
            cout<<" b="<<b;
            cout<<"      a="<<a;
           
            rootN(a,b);
            double y = func(root);
            cout <<"X+1="<<root;
            cout<<"      f(x)= "<<y<<endl;


            if(abs(y)<=0.0001)
            {
                cout<<"So the root is :"<<root<<endl;
                break;
            }
            else
            {
                b=a;
                a=root;
                rootN(a,b);
                i++;

            }  
        }
    }

};
int main()
{
    Secant NR = Secant();
    NR.solve();

}
