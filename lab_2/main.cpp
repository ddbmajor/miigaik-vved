#include <iostream>
using namespace std;


#define M_PI 3.1415

int main(void)
{
    int degrees, minutes;
    long double rest, angleInRadianTerms;

    cout << "Введите угол в радианах: ";
    cin >> angleInRadianTerms;

    long double degreesWithFractionalPart =
        angleInRadianTerms * 180 / M_PI;
    degrees = degreesWithFractionalPart;
    rest = (degreesWithFractionalPart - degrees) * 60;
    minutes = rest;

    long double minutesWithFractionalPart = rest;

    cout << "Угол равен: " << degrees << "°" << minutesWithFractionalPart
         << "\'" << endl;

    ((minutesWithFractionalPart - minutes) >= 0.5) ? minutes++ : minutes;
    (minutes == 60) ? degrees++, minutes = 0 : degrees;

    cout << "Округленное до 0.5\" значение угла равно: "
         << degrees << "°" << minutes << "\'" << endl;

    return 0;
}