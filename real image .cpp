#include<iostream>
using namespace std;

class complex{
int real;
int imag;

public:
void setvalue(int r,int im){
real =r;
imag=im;
}


void display (){
cout << "complex no. is " <<noshowpos<< real<<showpos<<imag<<"i"<<endl;
}
void addcomplex(complex o1,complex o2){
real=o1.real+o2.real;
imag=o1.imag+o2.imag;
}
};
int main (){
complex c1,c2,c3;
c1.setvalue(3,5);
c1.display();
c2.setvalue(4,8);
c2.display();
c3.addcomplex(c1,c2);
c3.display();

    return 0;
}
