#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_


class demo
{
    public:
        demo();
        void run(demo& var) const;
        void run(demo const &var) const;
        void run(demo &&var) const;
    private:
};
        
#endif
