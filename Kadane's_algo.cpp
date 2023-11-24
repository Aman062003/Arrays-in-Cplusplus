
BEST APPROACH TO FIND THE SUM OF SUBARRAY WITH LEAST TIME COMPLEXSITY AND FAR BETTER THAN BRUTE FORCE APPROACH........................................................................ 


#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
