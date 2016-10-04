#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_


class demo
{
    public:
        demo();
        void run() const{
			std::cout << "1" << '\n';
		}
		
		const void run() const{
			std::cout << "1" << '\n';
		}
    private:
};
        
#endif
