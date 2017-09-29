#pragma once
class ProcessIsolation_Good
{

private:
	int memoryStart;
	int memoryTotal;
	int memory[2];

public:
	ProcessIsolation_Good();
	~ProcessIsolation_Good();


	void reset();
	int* getMemory();
	void setStart(int value);
	int getStart();
	void setTotal(int value);
	int getTotal();


};

