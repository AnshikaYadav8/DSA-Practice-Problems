// printing power of a number using recursion
#include<iostream>
#include<cmath>
using namespace std;
int power(int base, int exponent){
    if(exponent==0){
        return 1;
    } else{
        return base*power(base, exponent-1);
    }
}
int main(){
    int base, exponent;
    cout<<"enter base: "<<endl;
    cin>>base;
    cout<<"enter exponent: "<<endl;
    cin>>exponent;
    cout<<"power of is: ";
    cout<<power(base, exponent);
    return 0;
}