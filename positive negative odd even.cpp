#include <iostream>
 using namespace std ;

int main()
{ 
int a [20];
int positive = 0;
int negative = 0;
int odd = 0;
int even = 0;
int zero = 0;

cout << "enter 20 integer value :";
for (int i=0; i<20; i++) 
{
cin >> a[i];
}


for (int i=0; i<20; ++i) {
if(a[i] > 0) {
positive = positive + 1;
}
else{
negative = negative + 1;
}
if(a[i]%2==0) {
even = even + 1;
} else {
odd = odd + 1;
}
if (a[i] == 0) {
zero =zero +1;
}
}
negative=negative-zero;
even = even - zero;

cout << "No of positive entry :" << positive << endl;
cout << "No of negative entry :" << negative << endl;
cout << "No of odd entry :" << odd << endl;
cout << "No of even entry :" << even << endl;
cout << "No of zero's entry" << zero;

       
  
    return 0;
}