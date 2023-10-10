#include "History.h"
#include <iostream>
#include <sstream>

using namespace std; // Add this line

void History::addToHistory(double num1, char operation, double num2, double result) {
    stringstream ss;
    ss << num1 << " " << operation << " " << num2 << " = " << result;
    calculations.push_back(ss.str());
}

void History::displayHistory() {
    cout << "Calculation History:" << endl;
    for (const string& calculation : calculations) {
        cout << calculation << endl;
    }
}

void History::clearHistory() {
    calculations.clear();
}
