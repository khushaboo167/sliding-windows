#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<n-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            sum=sum+arr[j];
        }
        if(maxSum<sum){
            maxSum=sum;
            maxIdx=i;
        }
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
}







// Q..find first negative number in each window of size k
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,4,-7,-1,4,-2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int k=4;
//     int p=-1;
//     int ans[n-k+1];
//     for(int i=0;i<k;i++){
//         if(arr[i]<0){
//             p=i;
//             break;
//         }
//     }
//     if(p==-1) ans[0]=1;
//     else ans[0]=arr[p];
//     int i=1;
//     int j=k;
//     while(j<n){
//         if(p>=i) ans[i]=arr[p];
//         else{
//             p=-1;
//             for(int x=i;x<=j;x++){
//                 if(arr[x]<0){
//                     p=x;
//                     break;
//                 }
//             }
//             if(p!=-1) ans[i]=arr[p];
//             else ans[i]=1;
//         }
//         i++;
//         j++;
//     }
//     for(int l=0;l<n-k+1;l++){
//         cout<<ans[l]<<" ";
//     }
// }





// using sliding window
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=4;
//     int maxSum=INT_MIN;
//     int maxIdx=0;
//     int sum=0;
//     for(int i=0;i<k;i++){
//         sum += arr[i];
//     }
//     maxSum=sum;
//     int i=1;
//     int j=k;
//     while(j<n){
//         sum=sum+arr[j]-arr[i-1];
//         if(maxSum<sum){
//             maxSum=sum;
//             maxIdx=i;
//         }
//         i++;
//         j++;
//     }
//     cout<<maxSum<<endl;
//     cout<<maxIdx;
// }