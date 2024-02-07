#include <iostream>
#include <string>
#include "data.h"
using namespace std;
float get_data(const string& message) {
    float value;
    cout << message << endl;
    cin >> value;
    return value;
}