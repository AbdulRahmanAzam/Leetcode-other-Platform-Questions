class Solution {
public:
    vector<double> convertTemperature(double C) {
        return {(C + 273.15), ((C * 1.80) + 32.00)};
    }
};