#include <iostream>
using namespace std;

int main(void)
{
    double alpha, delta, gamma, degrees, minutes;
    double magneticAzimuth;

    cout << "Введите дирекционный угол "
         << "(+/-)градусы, пробел,(+/-)минуты:";
    cin >> degrees >> minutes;
    alpha = degrees + minutes / 60;

    cout << "Введите склонение магнитной стрелки "
         << "(+/-)градусы, пробел,(+/-)минуты:";
    cin >> degrees >> minutes;
    delta = degrees + minutes / 60;

    cout << "Введите зональное сближение меридианов "
         << "(+/-)градусы, пробел,(+/-)минуты:";
    cin >> degrees >> minutes;
    gamma = degrees + minutes / 60;

    magneticAzimuth = alpha - delta + gamma;
    degrees = (int)magneticAzimuth;
    minutes = (magneticAzimuth - degrees) * 60;
    cout << "Магнитный азимут направления: "
         << magneticAzimuth << endl;

    return 0;
}