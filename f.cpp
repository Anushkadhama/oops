#include <iostream>
#include <string>
using namespace std;
class xyz {
    private:
    int Rno;
    string Name;
    double tariff;
    int nod;
    int CALC(int nod,double tariff){
        double a=nod*tariff;
        if(a>10000){
            a*=1.05;
        }
        return a;
    }
    public:
        void Checkin(){
            cout<<"Room no: ";
            cin>>Rno;
            cin.ignore();
            cout<<"Name: ";
            getline(cin,Name);
            cout<<"tariff: ";
            cin>>tariff;
            cout<<"no of days: ";
            cin>>nod;
        }
        void Checkout(){
            cout<<"Rom no: "<<Rno<<endl;
            cout<<"Name: "<<Name<<endl;
            cout<<"Tariff: "<<tariff<<endl;
            cout<<"No of days: "<<nod<<endl;
            double amount = CALC(nod,tariff);
            cout<<"amount: "<<amount<<endl;
        }
};
int main() {
    xyz  a;
    a.Checkin();
    a.Checkout();
}