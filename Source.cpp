#include "Student.h"

#include <iostream>

Student& Student::operator=(Student& anotherStudent)
{
	Name = anotherStudent.Name;
	Age = anotherStudent.Age;
	SubjectName = anotherStudent.SubjectName;
	Grade = anotherStudent.Grade;

	return *this;
}

istream& operator>>(istream& stream, Student& student)
{
	cout << "Введите имя: "; getline(stream, student.Name);
	cout << "Введите возраст: "; stream >> student.Age;

	stream.ignore();

	cout << "Введите предмет ученика: "; getline(stream, student.SubjectName);
	cout << "Введите оценку ученика: "; stream >> student.Grade;

	return stream;
}

ostream& operator<<(ostream& stream, Student& student)
{
	return { stream << "Имя: " << student.Name << "Возраст: " << student.Age << "Предмет: " << student.SubjectName << "Оценка: " << student.Grade };
}