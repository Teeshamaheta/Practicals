#include<iostream>
using namespace std;

class student {
private:
static int scount ;
char studentname[5];
double spi;
char branch[10] ;


public:
     void setinfo();
     void getinfo();
     void count();

};
int student::scount;
void student::setinfo(){
cout << "student name :" << endl;
cin >> studentname;
cout << "student spi :" << endl;
cin >> spi;
cout <<"student branch :"<<endl;
cin >> branch;
scount++;
}


void student::getinfo(){
cout << "studentname : ";
cout << "spi: " <<spi<< endl;
cout <<"branch :"<<branch<<endl;
}

void student::count(){
cout << "Total students are :" <<scount<<endl;
}



int main()
{
    student s1;
    s1.setinfo();
    s1.getinfo();
    s1.count();
    
    return 0;
}