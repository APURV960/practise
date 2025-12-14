// You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated following the rules:
// 1. nums[0]=0
// 2. nums[1]=1
// 3. nums[2*i] = nums[i], when 2<= 2*i <= n
// 4. nums[2*i+1] = nums[i] + nums[i+1], when 2<=2^ * i + 1 <= n
// Return the maximum integer in the array nums.

// #include<bits/stdc++.h>
// using namespace std;

// int getmax(int n){
//     if(n==0) return n;
//     vector<int> nums(n+1);

//     nums[0]=0;nums[1]=1;
//     int ans=1;
//     for(int i=0;2*i<=n;i++){
//         nums[2*i]=nums[i];
//         ans=max(ans,nums[2*i]);

//         if(nums[2*i+1]<=n){
//             nums[2*i+1]=nums[i]+nums[i+1];
//             ans=max(ans,nums[2*i+1]);
//         }
//     }
//     return ans;

// }

// =====================================================

// You are given a string “number” representing a positive integer and a character digit. Return the resulting string after
// removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is
// maximized. The test cases are generated such that digit occurs at least once in the number.
// I/P : number = “1321
// FE a |
// 0/P: 321

// #include<bits/stdc++.h>
// using namespace std;

// string getmax(string num,char digit){

//     int n=num.length();
//     for(int i=0;i<n-1;i++){
//         if(num[i]==digit && num[i]<num[i+1]){
//             num.erase(i,1);
//             return num;
//         }
//     }
//     for(int i=n-1;i>=0;i--){
//         if(num[i]==digit){
//             num.erase(i,1);
//             break;
//         }
//     }
//     return num;
// }

// ===================================================
// You have a array you need to perform the given task:
// 1. If the array length is greater than 1 then take any two
// numbers which are X != Y and remove X and Y
// 2. Else take X and remove X
// Count the minimum number of step to remove all element
// from list.
// P:12
// o/P:1
// i/p: 22
// o/P:2
// i/P:22331
// o/P: 3 (23)(23)(1)

// #include<bits/stdc++.h>
// using namespace std;

// int count(vector<int>& nums){
//     int n=nums.size();
//     unordered_map<int,int> freq;
//     int maxfreq=0;
//     for(int x:nums){
//         freq[x]++;
//         maxfreq=max(maxfreq,freq[x]);
//     }
//     return max(maxfreq,(n+1)/2);
// }

// ==============================================================
