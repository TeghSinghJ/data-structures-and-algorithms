//Programto chech wetherthe i-th bit is set ornot
#include<bits/stdc++.h>
using namespace std;
int isPossible(int num,int i){
    int mask = 1<<i;
    return (num&i)!=0;
}
int main(){
    int num;
    int i;
    cout<<"Enter a number and ith place:";
    cin>>num>>i;
    if(isPossible(num,i))   cout<<"Set to 1";
    else cout<<"Set to 0";
    
}
