#ifndef INCLUDED_UNITS_
#define INCLUDED_UNITS_



class units
{
    public:
        double kts2m_s(double knots);
        double ft2m(double feet);
        double ft_min2m_s(int ftmin);
        int nm2m(double nm);
        int km2m(double km);
    private:
};
        
#endif
