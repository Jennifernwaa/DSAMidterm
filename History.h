#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include <string>

using namespace std; // Add this line

class History {
private:
    vector<string> calculations;

public:
    void addToHistory(double num1, char operation, double num2, double result);
    void displayHistory();
    void clearHistory();
};

#endif // HISTORY_H
