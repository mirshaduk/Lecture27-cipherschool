#include<iostream>
#include<string>
using namespace std;

int main()
{
     string a;

     string b;
    // int a;
    // int b;
    // int c;
     string c;

    // instead of using cin ,you use somthing called getline 

    getline(cin,a);

// getline is a function which is why you can see (),(cin,variable whre you want to store the variable)

    // cin>>a;

    cout<<"your full name is: "<<a<<endl;

    // cout<<"The strings which you have given as input are "<<a<<b;
    c = a+b;

    // cout<<"The compined words is :"<<c;
    // cout<<"The length of the combined name is "<<c.length();

    return 0;

}