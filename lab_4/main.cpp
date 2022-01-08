#include <iostream>
using namespace std;
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        double delta, gamma, degrees, minutes;
        double correctionToMagneticAzimuth; // поправка П
        cout << "Введите склонение магнитной стрелки "
             << "(+/-)градусы, пробел,(+/-)минуты:";
        cin >> degrees >> minutes;
        delta = degrees + minutes / 60;
        cout << "Введите зональное сближение меридианов "
             << "(+/-)градусы, пробел,(+/-)минуты:";
        cin >> degrees >> minutes;
        gamma = degrees + minutes / 60;
        correctionToMagneticAzimuth = delta - gamma;
        degrees = (int)correctionToMagneticAzimuth;
        minutes = (correctionToMagneticAzimuth - degrees) * 60;
        cout << "Поправка для магнитного азимута направления: "
             << correctionToMagneticAzimuth << endl;
        if (correctionToMagneticAzimuth < 0)
            cout << "Поправка: "
                 << "-" << -degrees << "° " << -minutes << "'"
                 << endl;
        else
            cout << "Поправка:" << degrees << "° " << minutes << "'" << endl;
    }

    return 0;
}