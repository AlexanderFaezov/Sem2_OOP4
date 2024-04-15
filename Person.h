#pragma once
#include <string>

#include <iostream>

using namespace std;

class Person
{
protected:
	string Name;
	int Age;

public:

	Person() { cout << "Активирован пустой конструктор базового класса: " << this << endl; };

	Person(string name, int age)
	{
		cout << "Активирован конструктор с параметрами: " << this << endl;

		setName(name);
		setAge(age);
	}

	Person(Person& anotherPerson)
	{
		setName(anotherPerson.getName());
		setAge(anotherPerson.getAge());
	}

	~Person() { cout << "Активирован деструктор базового класса: " << this << endl; };

	void setName(string name) { Name = name; }

	void setAge(int age) { Age = age; }

	string getName() { return Name; }

	int getAge() { return Age; }

	Person& operator= (Person& anotherPerson);

	friend istream& operator>>(istream& stream, Person& person);

	friend ostream& operator<<(ostream& stream, Person& person);
};