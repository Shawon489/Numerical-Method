#include<bits/stdc++.h>
using namespace std;

class Bisection
{
    //decleared variables
    private:
    double a,b,root;

    //create function 
    private:
    double func(double x)
    {
        return x*x-9;
    }
    //generate random number a,b
    private:
    void random()
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

    //main solve function
    public:
    void solve()
    {
        double tollerance = 0.0001;
        //i to count number of iterations
        int i=1;
        //called function to generate random number
        random();
        //run while loop find root
        while(i<100)
        {
            cout<<"iteration"<<i<<endl;
            cout << "a: " << a << "  b: " << b <<endl;

            root = (a+b)/2;
            cout<< "Assum root: " << root <<endl;

            double x = func(root);
            if(abs(x) <= tollerance)
                {
                    cout<<endl<<endl<<"MY ANS is"<<endl<<setprecision(6)<<root<<endl;
                    break;
                }
            else 
                {
                    cout<<"x: "<<x<<endl;
                    //a and root oposite sign
                    if(func(a)*func(root)<0)
                        {
                            b=root;
                            i++;
                        }
                    //b and root oposite sign
                    else
                        {
                            a=root;
                            i++;
                        }
                }
        }
    }
};

int main(){
    Bisection bisection = Bisection();
    bisection.solve();

}