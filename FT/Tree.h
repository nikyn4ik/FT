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
	void add_person(Person p, Person father, Person mother); // ???????? ???????? ? ????? ??????????
	void add_person(Person p, Person parent);	// ???????? ???????? ? ????? ?????? ?????????
	void add_person(Person p);	// ?????????? ???????? ??? ???????? ????????? ???????? ? ????, ??? ?? ????? ??????? ? ????? ?????
	void print_description();	// ??????? ? ??????? ????????? ???????? ????????? ??????
	void show(int width, int height);	// ??????? ??????????? ??????????? ??????
};