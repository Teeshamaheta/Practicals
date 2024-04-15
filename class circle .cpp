#include <iostream>
using namespace std;
class Area{
public:
double r;
double pi=3.14;
double carea();
};
double Area::carea(){
return 3.14*r*r;

}
int main ()
{
Area c1;
c1.r=5;

cout << "Area of circle" << c1.carea();
return 0;

}