#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    char noneStopCharacter;
    int degrees, minutes, gridAzimuth, magneticAzimuth;

    cout.fill('0');
    do
    {
        cout << "Введите дирекционный угол (градусы, минуты):";
        cin >> degrees >> minutes;
        gridAzimuth = degrees * 60 + minutes;

        cout << "Введите угол сближения меридианов"
             << "(знак, градусы, пробел, знак, минуты):" << endl;
        cin >> degrees >> minutes;
        int convergenceAngle = degrees * 60 + minutes;

        cout << "Введите угол склонения магнитной стрелки"
             << "(знак, градусы, пробел, знак, минуты):" << endl;
        cin >> degrees >> minutes;

        int declinationAngle = degrees * 60 + minutes;

        int G_MAngle = declinationAngle - convergenceAngle;

        magneticAzimuth = gridAzimuth - G_MAngle;

        if (magneticAzimuth >= 360 * 60)
            magneticAzimuth -= 360 * 60;
        if (magneticAzimuth < 0)
            magneticAzimuth += 360 * 60;

        degrees = magneticAzimuth / 60;
        minutes = magneticAzimuth % 60;
        cout << "Магнитный азимут: " << setw(3) << degrees
             << "°" << setw(2) << minutes << "\'" << endl;

        cout << "Продолжить? Вводите (Y/y)";
        cin >> noneStopCharacter;

    } while ((noneStopCharacter == 'Y') || (noneStopCharacter == 'y'));

    return 0;
}