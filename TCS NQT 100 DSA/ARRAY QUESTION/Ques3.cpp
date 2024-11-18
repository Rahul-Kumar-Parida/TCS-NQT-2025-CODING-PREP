// Find Second Smallest and Second Largest Element in an array
/*
Example 1:
Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
	Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
*/



#include<iostream>
#include<climits>
using namespace std;





int secondLargest(int arr[],int n){
    int first=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;
}

int secondSmallest(int arr[],int n){
    int first=INT_MAX;
    int second=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int secLargest=secondLargest(arr,n);
    int secSmallest=secondSmallest(arr,n);
    cout<<secLargest<<" "<<secSmallest<<endl;
    return 0;
}
