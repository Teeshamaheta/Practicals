#include<iostream>
#include<string>
using namespace std;
int max(int a,int b,int c){
if(a>b && b>a){
return a;
}else if(b>c && b>a){
return b;
} else if (c>a && c>b){
return c;
}
}
string max(string a, string b, string c){
int la=a.length();
int lb=b.length();
int lc=c.length();
if(la>lb && lb>la){
return a;
}else if(lb>lc && lb>la){
return b;
} else if (lc>la && lc>lb){
return c;
}
}
int main()
{
string maximum ;
char apple, banana, pineapple ;
string a="apple", b="banana", c="pineapple";
maximum =max(a,b,c);
cout<<maximum<<endl;
    return 0;
}