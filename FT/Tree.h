#pragma once
#include <map>
#include <vector>
#include <iostream>
#include "Person.h"
using namespace std;

class Tree {
private:
	vector<vector<pair<Person, pair<Person, Person>>>> tree;
public:
	Tree();
	void add_person(Person p, Person father, Person mother); // Добавить человека с двумя родителями
	void add_person(Person p, Person parent);	// Добавить человека с одним только родителем
	void add_person(Person p);	// Добавление человека без указания родителей приведёт к тому, что он будет выведен в самом верху
	void print_description();	// Выводит в консоль текстовое описание состояния дерева
	void show(int width, int height);	// Выводит графическое отображение дерева
};