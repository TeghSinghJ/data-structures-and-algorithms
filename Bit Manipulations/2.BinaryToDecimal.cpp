#include<bits/stdc++.h>
using namespace std;

int bin2dec(string num){
   int res = 0;
   int pow2 = 1;
   for(int i=num.size()-1;i>=0;i--){
        if(num[i]=='1')  res = res + pow2 * 1;
        pow2 *= 2 ;
   }
   return res;
}
int main(){
    string num;
    cout<<"Enter the binary number:";
    cin>>num;
    cout<<bin2dec(num)<<endl;
}
