#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of"<<a<<"and"<<b<<"is: "<<add(a,b)<<endl;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of"<<a<<"and"<<b<<"is: "<<add(a,b,c);


    return 0;
}

int add(int x,int y,int z)
{
    return (x+y+z);
}