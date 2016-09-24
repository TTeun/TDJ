#include <iostream>
#include "units/units.ih"


int main() {
    double knots = 1;
    double feet = 1;
    int ftmin = 1;
    double nm = 1;
    double km = 1; 
    cout << kts2m_s(knots) << "\n";
    cout << ft2m(feet) << "\n";
    cout << ft_min2m_s(ftmin) << "\n";
    cout << nm2m(nm) << "\n";
    cout << km2m(km) << "\n";
    return 0;
}
