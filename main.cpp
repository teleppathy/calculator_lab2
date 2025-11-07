#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    cout << "3 + 4 = " << calc.Add(3, 4) << endl;
    cout << "7 - 2 = " << calc.Sub(7, 2) << endl;
    return 0;
}
