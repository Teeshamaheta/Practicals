#include<iostream>
using namespace std;
class circle {
public:
double radius;
 double pi=3.14;
 double r;

double area (){
return 3.14*r*r;
}
};
int main()
{
circle c1;
double area;

    cout << "enter a value" << endl;
    cin>>c1.r;
    area=c1.area();
    cout << "area of circle" << c1.area ()<<endl;
    return 0;
}