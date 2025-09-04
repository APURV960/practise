// // selection sort
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,7,4,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         int mini=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[mini]>arr[j]){
//                 mini=j;
//             }
//         }
//         int temp=arr[mini];
//         arr[mini]=arr[i];
//         arr[i]=temp;
//     }
//     cout<<"sorted array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<", ";
//     }
// }
// =====================================================================
// bubble sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}