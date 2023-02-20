//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1 
#include <iostream>
using namespace std;


 
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long tsum=0;
         for(int i=0;i<n;i++){
             tsum+=a[i];
         }
          
         long long lsum=0,rsum;
         for(int i=0;i<n;i++){
             rsum=tsum-lsum-a[i];
             if(rsum==lsum)
             return i+1;
             lsum+=a[i];
         }
         return -1;
            
        
    }

};

 


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
 
