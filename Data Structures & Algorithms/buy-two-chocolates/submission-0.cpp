class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int leftmoney = money - (prices[1]+prices[0]);
        if(leftmoney < 0){
            return money;
        }
        else return leftmoney;
    }
};