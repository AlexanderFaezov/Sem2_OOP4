#include "Person.h"

#include <iostream>

Person& Person::operator=(Person& anotherPerson)
{
	Name = anotherPerson.Name;
	Age = anotherPerson.Age;

	return *this;
}

istream& operator>>(istream& stream, Person& person)
{
	cout << "Введите имя: "; getline(stream, person.Name);
	cout << "Введите возраст: "; stream >> person.Age;

	return stream;
}

ostream& operator<<(ostream& stream, Person& person)
{
	return { stream << "Имя: " << person.Name << "Возраст: " << person.Age };
}