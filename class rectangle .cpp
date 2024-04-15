#include <iostream>
using namespace std;

class volume{
private:
double length;
double height;
double width;
public:
double calculateVolume();
void setlength(double l){
length=l;
}
void setheight(double h){
height=h;
}
void setwidth(double w){
width=w;
}
};
double volume:: calculateVolume(){
 return length*height*width;
}
int main() {
     volume c1;
     c1.setlength(4.0);
     c1.setheight(4.0);
     c1.setwidth(5.0);
     cout << "Volume is: " << c1.calculateVolume() << endl;
     return 0;
}