#pragma once
class Human
{
	char* name;
	char* surname;
	int age;

	Human();
	Human(const char* n, const char* s, const char* a);
	~Human();
	void Init();
	void Print();
	char* GetName();
	char* GetS();
	int GetA();

	void SetName(const char* n);
	void SetS(const char* s);
	void SetA(int a);
};

