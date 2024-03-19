#include<bits/stdc++.h>
using namespace std;

string dec2bin(int n){
    string res="";
    while(n){
        if(n%2==1)  res+='1';
        else    res+='0';
        n/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int num;
    cout<<"Enter the decimal number:";
    cin>>num;
    cout<<dec2bin(num)<<endl;
}
