#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
int counter=1;
cout<<"enter number of rows:";
cin>>n;
for ( int i = 1; i<= n; ++i){
 for ( int j = 1; j<=n; ++j){
     if ( j<=n-i) {
        cout<<"  ";
        }else{
             cout<<counter<<"  ";
              counter=counter+1;
        }
    }cout<<endl;
   }
}