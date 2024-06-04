// printing reverse counting using recursion
#include<iostream>
using namespace std;
void reverseNum(int n){
    if(n==0){
        return;
    } else{
        cout<<n<<endl;
        reverseNum(n-1);
    }
}
int main(){
    int num;
    cin>>num;
    cout<<"numbers in reverse are: ";
    reverseNum(num);
    return 0;
}
