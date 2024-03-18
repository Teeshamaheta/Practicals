#include<iomanip>
#include<iostream>
using namespace std;
int main() {
    double kmtom=1000.0 ;
    double kmtocm=100000;
    
    double km;
    cout<<"enter km";
    cin>>km;
    double meter = km *kmtom;
    double cm=km * kmtocm;
    
    
    cout<<fixed<<setprecision(2) ;
    cout<<"km to meter="<<meter<<endl;
    cout<<"km to cm="<<cm<<endl;
    
    return 0;
}