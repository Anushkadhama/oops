#include <iostream>
using namespace std;
class complex {
    private:
    int real;
    int img;
    public:
    complex(){}
    complex(int r, int i)
    {
        real=r;
        img=i;
     }
     complex operator+(complex c1)
     {
        complex c2;
        c2.real=real+c1.real;
        c2.img=img+c1.img;
        return c2;
     }
      complex operator-(complex c3)
     {
        complex c4;
        c4.real=real-c3.real;
        c4.img=img-c3.img;
        return c4;
     }
      bool operator==(complex c5)
     {
        return ((real=c5.real) && (img=c5.img));
     }
     void display()
     {
        cout<<real<<" "<<img<<" "<<endl;
     }
};

int main()
{
    complex c1(5,6);
    complex c2(7,8);
    complex c3=c1+c2;
    cout<<"Addition of two complex numbers: "<<endl;
    c3.display();
    complex c4=c1-c2;
    cout<<"subtraction of two complex numbers: "<<endl;
    c4.display();
    {
        if (c1==c2)
        {
            cout<<"Equal"<<" ";
        }
        else
        {
            cout<<"Not Equal";
        }
    }
    return 0;
}
