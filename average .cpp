#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    double a,b,c;
    double avg;
    double total;

    cout<<" Enter any three number of your choice:";
    cin>>a>>b>>c;

    total=(a+b+c);
    avg=(total/3);

    cout<<"average of given numbes is:"<<avg;

    return 0;

}