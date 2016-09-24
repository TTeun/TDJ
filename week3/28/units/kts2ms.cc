#include "units.ih"

double units::kts2m_s(double knots)
{
  return knots * 1852 / 3600;
}
