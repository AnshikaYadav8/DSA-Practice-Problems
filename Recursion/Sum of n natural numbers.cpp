//Sum of first n natural numbers using recursion
#include<iostream>
using namespace std;
int sumOfNo(int n){
        if(n==0){
             return 0;
        }
        else{
          return n+ sumOfNo(n-1);
        }
    }

int main(){
    int num;
    cin>>num;
    cout<<"sum of "<<num<<" natural numbers is: ";
    cout<<sumOfNo(num);
    return 0;
}
