#pragma once
class Person
{
private:
	int age;
	bool male;
public:
	Person();
	~Person();
	Person(int a, bool isMale);

	int getAge();
	void setAge(int a);
	
	bool isMale();
	void setMale();
	void setFemale();
	
};

