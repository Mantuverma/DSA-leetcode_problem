#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cout<<"enter the size of array";
    // cin>>n;
    int arr[5]={10,5,6,-1,-10};
    int prefix[5];
    prefix[0]=arr[0];
    for(int i=1;i<5;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int currsum=0;
    int presum=arr[0];
    for(int i=0 ;i<5;i++){
        int start=i;
        for(int j=i ;j<5;j++){
            int end=j;
           currsum=start==0?prefix[end]:prefix[end]-prefix[start-1];
           if(currsum>presum){
            presum=currsum;
           }
        }        
        
    }
    cout<<presum<<" ";

    return 0;
}