#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	wstring name;	// Имя человека
	wstring bdate;	// Дата рождения
	wstring ddate;	// Дата смерти
public:
	Person(wstring name, wstring bdate, wstring ddate); // Конструктор с датой смерти
	Person(wstring name, wstring bdate);	// Конструктор без даты смерти
	wstring description(); // Возвращает строку-описание человка, содержащую его имя, дату рождения и, если есть, смерти
	wstring short_description(); // Возвращает строку-краткое описание, содержащую только имя и даты человека.
};