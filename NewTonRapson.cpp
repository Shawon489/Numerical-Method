#include<bits/stdc++.h>
using namespace std;
class NewTonRapson
{
    private:
    double root;
    

    private:
    double func(double x)
    {
    return x*x*x-2*x-5;
    }

    private:
    double derivative(double x)
    {
        return 3*x*x-2;
    }
    void generateX()
    {
        srand(int(time(0)));
        while(1)
        {
            root=-9+rand()%20;
            if(derivative(root)!=0)
            break;
        }

    }

    public:
    void solve()
    {
        
        double fx,dfx,i=0;
        generateX();
        
        
        while(1)
        {
            double y = func(root);
            cout<<"Itteration:"<<i;
            cout<<"      x= "<<root;
            cout<<"      f(x)= "<<y<<endl;

            if(abs(y)<=0.0001)
            {
                cout<<"So the root is :"<<root<<endl;
                break;
            }
            else
            {   
                fx=func(root);
                dfx=derivative(root);
                root=root-(fx/dfx);
                i++;
            }
        }
    }

};
int main()
{
    NewTonRapson NR=NewTonRapson();
    NR.solve();

}
