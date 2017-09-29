#pragma once



class DomainSeparation_Good
{

public:
	DomainSeparation_Good();
	~DomainSeparation_Good();

	void reset();
	int getStart();
	void setStart(int a);
	int getTotal();
	void setTotal(int b);




private:
	int start;
	int total;

	void increaseTotal(int c);
	void decreaseTotal(int c);



};

