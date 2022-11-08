#pragma once
#include <vector>
#include <map>
#include <iostream>
#include "Person.h"
using namespace std;

class Tree
{
private:
    vector <vector<pair<Person, pair<Person, Person>>>> tree;
    /*Дерево является вектором
     *Элементами вектора являются другие вектора, представляющие различные поколения.
     *Для деревма мама-папа-я = мама с папой будут находится в векторе с индексом 0
     *я буду находится в векторе с индексом 1.
     *Элементами вектора-поколения является пара-человек (родители).
     *Родители представлены парой человек (человек).
     */
public:
    Tree();
    void add_person(Person p, Person father, Person mother); //Добавить человека с двумя родителями
    void add_person (Person p, Person parent); //Добавить человека с одним родителем
    void add_person (Person p); //Добавление человека без указания родителей - при выводе в самом верху
    void print_description(); //Вывод в консоль текстовое описание состояния дерева
    //void show(int width, int height); //Вывод граф. отображение дерева
};