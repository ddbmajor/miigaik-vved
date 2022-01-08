#include <iostream>
using namespace std;

#define M_PI 3.1415

double ConvertDegreesToRadian(double degrees, double minutes, double seconds)
{
    double totalDegrees, radian;

    totalDegrees = degrees + minutes / 60 + seconds / 3600;
    radian = totalDegrees * M_PI / 180;

    return radian;
}

int main(void)
{
    double degrees, minutes, seconds, radian;
    cout << "Введите значения угла в градусах, минутах и "
         << "секундах через пробел: " << endl;
    cin >> degrees >> minutes >> seconds;
    
    radian = ConvertDegreesToRadian(degrees, minutes, seconds);
    cout << "Значения угла в радианах: " << radian << endl;
    return 0;
}