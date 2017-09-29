#pragma once
class ProcessIsolation_Bad
{
private:
	int memoryStart;
	int memoryTotal;
	int* memory;
public:
	ProcessIsolation_Bad(int* mem, int start, int total);
	~ProcessIsolation_Bad();



	void reset();
	int* getMemory();
	void setStart(int value);
	int getStart();
	void setTotal(int value);
	int getTotal();


};

