   // 8번문제에서 대체 bmi 를 계산하라는 말이 어디에 있는지...

#include <iostream>

double bmiCalc(double height, double weight, int& category) {
    //height = height/100.0 ; //204.27 -> 2.0427 
    double bmi = weight / (height * height);
    if (bmi < 18.5) {
        category = 1;
    } else if (bmi >= 18.5 && bmi < 25) {
        category = 2;
    } else if (bmi >= 25.0 && bmi < 30 ) {
        category = 3;
    } else {
        category = 4;
    }

    return bmi;
}

