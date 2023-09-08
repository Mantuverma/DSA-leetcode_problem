#include<iostream>
using namespace std;
int main(){
    int price[6]={7,1,5,3,6,4};
    int buyPrice=99999;
    int maxprofit=0;
    for(int i=0 ;i<6;i++){

        if(buyPrice<price[i]){
            int profit=price[i]-buyPrice;
            maxprofit=max(profit,maxprofit);
        }
        else{
            buyPrice=price[i];
        }
    }
    cout<<maxprofit;

    
}