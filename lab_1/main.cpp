#include <iostream>
using namespace std;

int main (void)
{
    float latitude;
    float longitude;

    cout <<"Введите географическую широту точки в градусах\n "
    <<"(северная со знаком \"+\", южная со знаком \"-\"):";

    cin >> latitude;

    cout <<"Введите географическую долготу точки в градусах\n "
    <<"(западная со знаком \"-\", восточная со знаком \"+\"):";

    cin >> longitude;

    cout <<"\nГеографическая широта точки: " << latitude <<"°"
    << endl;

    cout <<"Географическая долгота точки: " << longitude <<"°"
    << endl;
    
    return 0;
}