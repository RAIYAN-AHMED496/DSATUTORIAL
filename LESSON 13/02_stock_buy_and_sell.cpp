#include <iostream>
#include <vector>
using namespace std;

int Maxprofit(vector<int>&prices){
    int max_profit = 0, best_buy = prices[0];

    for(int i=1; i<prices.size(); i++){
        if(prices[i] > best_buy){
            max_profit = max(max_profit, prices[i] - best_buy);
        }
        best_buy = min(best_buy, prices[i]);
    }
    return max_profit;
}

int main(){
    vector<int>prices = {7, 1, 5, 3, 6, 4};
    int answer = Maxprofit(prices);
    cout <<"Max profit is: "<<answer << endl;

    return 0;
}
// nothing