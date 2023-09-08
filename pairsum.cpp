
// this is a pairsum problem
#include <iostream>
using namespace std;

int main()
{
    
    int arr[6]={2,5,4,8,3,7};
    int min_index=arr[0];
    int sum=0;
    int max;
    for(int i=0 ;i<6;i++){
        int start=i;
        for(int j=i ;j<6;j++){
            int end=j;
            for(int k=start; k<=end; k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            if(sum>min_index){
                max=sum;
                min_index=max;
            }
            // cout<<endl;
            cout<<"="<<sum<<endl;
            sum=0;
        }
        
         cout<<endl;
    }
 cout<<max;
    return 0;
}