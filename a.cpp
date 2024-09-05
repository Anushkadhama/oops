#include <iostream>
using namespace std;
int main() {
    string name;
    int unit;
    float cost;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout << "Enter number of units consumed : ";
    cin >> unit;
    if(unit<=100)  cost = unit * 0.60;
    else if(unit <=300) cost = 100 * 0.60 + (unit - 100) * 0.80;
    else{
        cost = 100 * 0.60 + 200 * 0.80 + (unit - 300) * 0.90 + 50;
        cost += 0.15*cost;
    }
    cout<<"Name : "<<name<<endl<<"Cost : "<<cost;
    return 0;
}