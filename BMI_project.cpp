
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (cm): ";
    cin >> height;

    height = height / 100;   // convert cm to meter
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "You are underweight";
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Your weight is normal";
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "You are overweight";
    }
    else {
        cout << "You are obese";
    }

    return 0;
}
