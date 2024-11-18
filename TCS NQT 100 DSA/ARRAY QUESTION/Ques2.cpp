// Find the Largest element in an array
// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5

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


    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    cout<<maxi<<endl;
    return 0;
}