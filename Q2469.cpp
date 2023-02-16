// 2469. Convert the Temperature

class Solution {
public:
    vector<double> convertTemperature(double C) {
        vector<double> ans;
        
        double K = C + 273.15;
        double F = C *1.80 +32.00;
        ans.push_back(K);
        ans.push_back(F);
        return ans;
    }
};