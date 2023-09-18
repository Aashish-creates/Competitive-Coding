

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
          double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    vector<double>output;
    output.push_back(kelvin);
    output.push_back(fahrenheit);
return output;
    }

};
