//Program to swap 2 numbers without using any third variable
#include<bits/stdc++.h>
using namespace std;
void swap2Num(int &a,int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    cout<<"Before swapping :"<<endl;
    cout<<"a = "<<a<<" "<<"b="<<b<<endl;
    swap2Num(a,b);
    cout<<"After swapping :"<<endl;
    cout<<"a = "<<a<<" "<<"b="<<b;
}
