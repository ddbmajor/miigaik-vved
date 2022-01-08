#include <iostream>
using namespace std;

float AverageAngle(float, float);


float CalculateAngle(float firstReading, float secondReading)
{
    float angle;
    angle = secondReading - firstReading;
    if (angle < 0)
        angle += 360;
    return angle;
}


int main(void)
{
    char noneStopCharacter;
    float firstReadingCL, secondReadingCL;
    float firstReadingCR, secondReadingCR;
    float angleCL, angleCR;
    for (;;)
    {
        cout << "Введите первый отсчет при КЛ, "
             << " затем второй отсчет при КЛ: ";
        cin >> firstReadingCL >> secondReadingCL;
        cout << "Введите первый отсчет при КП, "
             << " затем второй отсчет при КП: ";
        cin >> firstReadingCR >> secondReadingCR;
        angleCL = CalculateAngle(firstReadingCL, secondReadingCL);
        angleCR = CalculateAngle(firstReadingCR, secondReadingCR);
        cout << "Среднее значение угла из двух приемов: "
             << AverageAngle(angleCL, angleCR) << endl;
    }
    return 0;
}


float AverageAngle(float angleCL, float angleCR)
{
    return (angleCL + angleCR) / 2;
}