// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int largestarea(int arr[],int n){
//     int maxarea=0;
//     for(int i=0;i<=n;i++){
//         int h = INT_MAX;
//         for(int j=i;j<n;j++){
//             h=min(h,arr[j]);
//             maxarea=max(maxarea,h*(j-i+1));
//         }
//     }
//     return maxarea;
// }
// int main(){
//     int arr[]={1,3,5,6,7};
//     int n=5;
//     cout<<"largest area:"<<largestarea(arr,5);
// }

// ===================================================================

// nth root of a number
// #include<iostream>
// #include <math.h>
// using namespace std;

// double nthRoot(int n, double m) {
//     double low = 0, high = m;
//     if (m < 1) high = 1;  
//     double eps = 1e-6;

//     while ((high - low) > eps) {
//         double mid = (low + high) / 2.0;
//         double power = pow(mid, n);  
//         if (power < m)
//             low = mid;
//         else
//             high = mid;
//     }

//     return low;
// }

// int main() {
//     int n = 3;
//     double m = 27;

//     double root = nthRoot(n, m);  // Call the function and store result
//     cout << "The " << n << "-th root of " << m << " is: " << root << endl;

//     return 0;
// }

// =================================================================================================

//find row with max no of 1
// #include<iostream>
// #include<vector>
// using namespace std;

// int findmax1index(int n,int m,vector<vector<int>> &mat){
//     int cntmax=0,index=-1;
//     for(int i=0;i<n;i++){
//         int cntones = m - (lower_bound(mat[i].begin(), mat[i].end(), 1) - mat[i].begin());
//         if(cntones>cntmax){
//             cntmax=cntones;
//             index=i;        
//         }
//     }
//     return index;
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
//     int n = 3, m = 3;
//     cout << "The row with maximum no. of 1's is: " <<
//          findmax1index(n, m, matrix) << '\n';
// }

// ===================================================================================

// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> g={1,5,3,3,4};
//     int m=g.size();
//     vector<int> s={4,2,1,2,1,3};
//     int n=s.size();
//     sort(g.begin(),g.end());
//     sort(s.begin(),s.end());
//     int a=0,b=0;
//     while(a<=m-1 &&b<=n-1){
//         if(g[a]<=s[b]){
//             a++;
//         }
//         b++;
//     }

//     cout<<a<<endl;
//     return 0;
// }
// ===================================================================

//fractional knapsack
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// struct item{
//     int value;
//     int weight;
// };
// class fractional{
//     public:
//     bool static comp(item a,item b){
//         double r1=(double)a.value /(double)a.weight;
//         double r2=(double)b.value /(double)b.weight;
//         return r1>r2;
//     }
//     double fracknapsack(int w, item arr[], int n){
//         sort(arr,arr+n,comp);
//         int currw=0;
//         double finalval=0.0;
//         for(int i=0;i<n;i++){
//             if(currw+arr[i].weight<=w){
//                 currw+=arr[i].weight;
//                 finalval+=arr[i].value;
//             }
//             else{
//                 int remain=w-currw;
//                 finalval+=(arr[i].value/(double)(arr[i].weight)*(double)remain);
//                 break;
//             }
//         }
//         return finalval;
//     }
// };
//     int main(){
//         int n=3,w=50;
//         item arr[n]={{100,20},{60,10},{120,30}};
//         fractional obj;
//         double finalcost=obj.fracknapsack(w,arr,n);
//         cout<<finalcost<<endl;
//         return 0;
//     }
// =======================================================================================

//lemonade change
// #include<iostream>
// #include<vector>

// using namespace std;

// bool changeposs(vector<int>&bill){
//     int cnt5=0,cnt10=0,cnt20=0;
//     for(int i=0;i<bill.size()-1;i++){
//         if(bill[i]==5) cnt5++;
//         else if(bill[i]==10){
//             if(cnt5){
//                 cnt10++;
//                 cnt5--;
//             }else{
//                 return false;
//             }
//         }
//         else{
//             if(cnt5!=0 && cnt10!=0){
//                 cnt10--;cnt5--;
//             }
//             else if(cnt5>=3){
//                 cnt5=cnt5-3;
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main() {
//     vector<int> bills = {5, 5, 5, 10, 20};
//     cout << "Queues of customers: ";
//     for(int bill : bills){
//         cout << bill << " ";
//     }
//     cout << endl;
//     bool ans = changeposs(bills);
//     if(ans)
//         cout << "It is possible to provide change for all customers." << endl;
//     else
//         cout << "It is not possible to provide change for all customers." << endl;
//     return 0;
// }

// =====================================================================================================
// count no of notes to finish the amount
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int amount=67;
//     vector<int> ans;
//     vector<int> note={1,2,5,10,20,50,100,500,1000};
//     int n=9;
//     for(int i=n-1;i>=0;i--){
//         if(amount>=note[i]){
//             amount-=note[i];
//             ans.push_back(note[i]);
//         }
//     }
//     cout<<"maximum aount of note req:"<<ans.size()<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// ============================================================================/
// meeting hall starting and ending time given -->> no of meeting possible 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// struct meet{
//     int start;
//     int end;
//     int item;
// };
// class meeting{
//     public:
//     bool static comp(struct meet m1,meet m2){
//         if(m1.end<m2.end) return true;
//         else if(m1.end>m2.end) return false;
//         else if (m1.item<m2.item) return true;
//         return false;
//     }
//     void scheduling(int n, int s[], int e[]){
//         vector<int> ans;
//         struct meet meets[n];
//         for(int i=0;i<n;i++){
//             meets[i].start=s[i],meets[i].end=e[i], meets[i].item=i+1;
//         }
//         sort(meets,meets+n,comp);

//         int limit=meets[0].end;
//         ans.push_back(meets[0].item);

//         for(int i=1;i<n;i++){
//             if(meets[i].start>limit){
//                 ans.push_back(meets[i].item);
//                 limit=meets[i].end;
//             }
//         }
//         cout<<"meet no of meeting are:"<<ans.size()<<endl;
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<", ";
//         }
//     }
// };
// int main() {
//     meeting obj;
//     int n = 6;
//     int start[] = {1,3,0,5,8,5};
//     int end[] = {2,4,5,7,9,9};
//     obj.scheduling(n,start,end);
//     return 0;
// }
// =========================================================================

// Distribute Candies Among Children II
// You are given two positive integers n and limit.
// Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.

                                    // m1
                                    //O(N^2)
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     long long distributeCandies(int n, int limit) {
//         int ways=0;
//         for(int i=0;i<=limit;i++){
//             for(int j=0;j<=limit;j++){
//                 int k=n-i-j;
//                 if(k>=0 && k<=limit) ways++;
//             }
//         }
//         return ways;
//     }
// };
// ========================================================

                                    //M2
                                    //O(N)
// #include<iostream>
// #include<algorithm>
// using namespace std;

//     long long distributeCandies(int n, int limit) {
//         long long ans=0;
//         for(int i=0;i<=min(n,limit);i++){
//             int rem=n-i;
//             if(rem>2*limit) continue;
//             int lower=max(rem-limit,0);
//             int upper=min(limit,rem);
//             ans+=upper-lower+1;
//         }
//         return ans;
//     }
// ================================================================================

                                            //M3
                                            //O(1)
// #include<iostream>
// using namespace std;

// int main(){
    
// }