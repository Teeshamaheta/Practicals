#include<iostream>
using namespace std;
float area(float r ,float PI =3.14){
return PI *r*r;
}
int main(){
float r;
cout<<"enter radius";
cin>>r;
float total;
total=area(r);
cout<<total;
return 0;
}