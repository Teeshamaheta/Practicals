#include <iostream>
#include <cmath>
using namespace std ;
int  main() {
double principle,time,rate, compoundinterest ;
cout<<"enter principle";
cin>> principle ;
cout<<"enter rate";
cin>>rate;
cout <<"time";
cin>>time;
compoundinterest =principle*(1+rate*time)-principle;
cout<<"compound interest"<<compoundinterest ;
}