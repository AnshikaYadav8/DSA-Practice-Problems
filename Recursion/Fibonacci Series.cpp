//finding fibonnaci series using recursion
#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int m;
    cin>>m;
    cout<<"fibonacci series: ";
    for(int i=0;i<m;i++){
    cout<<fib(i)<<endl;
    }
    return 0;
}
