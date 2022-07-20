//Brett
// CIS 1202 - 101
// July 20, 2022

#include <iostream>
using namespace std;

template <typename N>
N half(N number);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}

template <typename N>
N half(N number) {
    //Checks for integer type
    if (typeid(number) == typeid(int)) {
        double temp = (double)number / (double)2;
        int out;
        //Round up if target >= x.5
        if (temp >= floor(temp) + .5) {
            out = ceil(temp);
            return out;
        }
        //Round down/Truncate
        else {
            out = floor(temp);
            return out;
        }
    }  
    //Checks for floating point numbers
    else if (typeid(number) == typeid(float) || typeid(number) == typeid(double)) {
        return number / 2;
    }
}
