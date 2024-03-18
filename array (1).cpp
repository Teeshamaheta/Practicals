#include<iostream>
using namespace std;
int main()
{
int a[7] ={3,1,5,4,9,2,8};
int n=7;
int temp;
for (int i=0;i<n-1;++i){
for (int j=0;j<n-1;++j ){
if (a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
   }
  }
 }
 for(int i=0;i<n;i++)  {
 cout <<a[i]<<endl;
 }
    return 0;
}