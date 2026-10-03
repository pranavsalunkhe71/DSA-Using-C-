#include<iostream>
using namespace std;


void BuySellStockMaxProfit(int *prices , int n ){

    int BestBuy[100000];
    BestBuy[0] = INT_MAX;
    int maxprofit = 0;

    for(int i = 1 ; i < n ; i++){

        BestBuy[i] = min(BestBuy[i-1],prices[i-1]);
        
    }

    for(int i = 0 ; i < n ; i++){

        int profit = prices[i] - BestBuy[i];

        if (profit > maxprofit){
            maxprofit = profit;
        }

    }

    cout<<"Max Profit is : "<<maxprofit;

   
}

int main() {
    int prices[6]={7,1,5,3,24,4};
    int n = sizeof(prices)/sizeof(int);
    BuySellStockMaxProfit(prices,n);
    return 0;
}

    