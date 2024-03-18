#include<iostream>
using namespace std;
int swap (int &a,int &b){
int temp=b;
b=a;
  a=temp;
  return a;
  return b;
}
int main()
{
int a,b;
cout<<"enter a value"<<endl;
cin>>a>>b;
swap(a,b);
cout <<a<<endl;
cout <<b<<endl;
    return 0;
}