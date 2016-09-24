#include "units.ih"

double kts2m_s(double knots)
{
  return knots * 1852 / 3600;
}
