//Given an array that contains both
// positive and negative integers, 
//find the product of the maximum 
//product subarray. Expected Time 
//complexity is O(n) and only O(1) 
//extra space can be used.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 



long long int maxProductSubarray(int n, vector<int> nums){
    long long int max_overall = nums[0];
        long long int max_ending_here = nums[0], min_ending_here = nums[0];
        
        for(int i = 1; i < nums.size(); ++i){
            long long int tmp = max_ending_here;
            max_ending_here = max<long long int>({nums[i], nums[i]*max_ending_here, nums[i]*min_ending_here});
            min_ending_here = min<long long int>({nums[i], nums[i]*tmp, nums[i]*min_ending_here});
            max_overall = max<long long int>(max_overall, max_ending_here);
        }
        return max_overall;
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }

    int n = in.size();
    cout<<maxProductSubarray(n, in);
}