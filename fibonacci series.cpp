//finding fibonacci series using loop with base condition a=0 and b-1
#include <iostream>
using namespace std;
int main(){
   int a=0, b=1 , n, c;
   cin>>n;
   cout<<a<<endl;
   cout<<b<<endl;
    for(int i=0;i<n;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}
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
    int n=1;
    for(int i=0;i<5;i++){
    cout<<fib(i)<<endl;
    }
    return 0;
}
