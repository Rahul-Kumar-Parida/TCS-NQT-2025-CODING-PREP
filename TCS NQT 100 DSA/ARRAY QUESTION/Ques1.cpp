// Find the smallest element in an array
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 0
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }

    cout<<mini<<endl;
    return 0;
}