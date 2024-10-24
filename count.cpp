#include<iostream>
using namespace std;
int countoccurences(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count=count+1;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int res=countoccurences(arr,n,x);
    cout<<res;
}
//here the tc is o(n)