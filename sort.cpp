#include<iostream>
using namespace std;
int sort(int &a,int &b){
if(a<=b){
return a;
return b;
}else{
int temp = b;
b = a;
a = temp;
return a;
return b;
 }
}
int main()
{
int x,y;
cout<<"enter value"<<endl;
cin>>x>>y;
 sort(x,y);
 cout << x << endl;
 cout << y << endl;
    
    return 0;
}