#include "../enums/enums.h"

class Memory
{
	public:
		Memory()
		: mem_array(new int [RAM::SIZE])
		{
			mem_size = RAM::SIZE;
		}		
		Memory(int size)
		: mem_array(new int [size])
		{
			mem_size = size;
		}

	void store(std::string&& address, int value){
		long idx = index(address);
		if (inRange(idx))
			mem_array[idx] = value;
	}
	
	int load(std::string&& address){
		long idx = index(address);
		return inRange(idx) ? mem_array[idx] : 0;
	}
	

	private: 
		int * const mem_array;
		int mem_size;
		
		long index(std::string& address){
			return std::stoi(address.erase(0,1));
		}
		
		bool inRange(int value){
			return (0 <= value && value < mem_size);
		}
	
};
