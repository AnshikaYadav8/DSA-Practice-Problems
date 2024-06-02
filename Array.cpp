//insertion
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of array: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
}

//deletion
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n;
    cout<<"enter size of array";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements are: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    cout<<"enter index you want to delete: ";
    cin>>m;
    if(m>=0 && m<n){
    for(int i=m;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    }
    cout<<"array after deletion: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    return 0;
}

//finding an element
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n, f;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of array: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    cout<<"enter the element you want to find: ";
    cin>>f;
    bool found=false;
    for(int i=0; i<n; i++){
        if(arr[i]==f){
            found=true;
            cout<<"element is found at ";
            cout<<i;
            cout<<"position";
        } 
    }
    if(!found){
        cout<<"element not found!";
    }
}

//printing subarray
#include <iostream>
#include <vector>
using namespace std;
void subarray(const vector<int>&arr, int start, int end){
    if(end==arr.size()){
        return;
    }else if(start>end){
        subarray(arr,0,end+1);
    }else{
        cout<<"[";
        for(int i=start;i<end;i++){
            cout<<arr[i]<<",";
        }
        cout<<arr[end]<<"]"<<endl;
        subarray(arr, start+1, end);
    }
}
int main() {
    int m, n, f;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of array: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    cout<<"subarrays are: ";
    subarray(arr, 0, 0);
}
