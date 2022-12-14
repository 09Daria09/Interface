#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

class Animal: public IAnimal // ?????????? ?????????
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	virtual void Input()
	{
		cout << "Enter name -> ";
		cin >> name;
		cout << "Enter KG -> ";
		cin >> kg;
		cout << "Enter continent -> ";
		cin >> continent;
	}
	string GetName()
	{
		return name;
	}
	static int count;
};
int Animal::count = 0;
class Elephant: public Animal // ???????????? 
{
public:
	Elephant() = default;
	Elephant(string n, double k, string cont):Animal(n,k,cont){}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Elephant Eat\n";
	}
	virtual void Move()
	{
		cout << "Elephant Move\n";
	}
};
class Parrot : public Animal,public IFly // ???????????? 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Parrot Eat\n";
	}
	virtual void Move()
	{
		cout << "Parrot Move\n";
	}
	// ----- ?????????? ?????????? IFLY !!!
	virtual void Fly()
	{
		cout << "Parrot Fly\n";
	}
};
class Cat : public Animal // ???????????? 
{
public:
	Cat() = default;
	Cat(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Cat Eat\n";
	}
	virtual void Move()
	{
		cout << "Cat Move\n";
	}
};
class Dog : public Animal // ???????????? 
{
public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Dog Eat\n";
	}
	virtual void Move()
	{
		cout << "Dog Move\n";
	}
};
class Pinguin : public Animal, public ISwim // ???????????? 
{
public:
	Pinguin() = default;
	Pinguin(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Pinguin Eat\n";
	}
	virtual void Move()
	{
		cout << "Pinguin Move\n";
	}
	// ----- ?????????? ?????????? IFLY !!!
	virtual void Swim()
	{
		cout << "Pinguin Swim\n";
	}
};
class Dolphin : public Animal, public ISwim // ???????????? 
{
public:
	Dolphin() = default;
	Dolphin(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ?????????? ?????????? IANIMAL !!!

	virtual void Eat()
	{
		cout << "Dolphin Eat\n";
	}
	virtual void Move()
	{
		cout << "Dolphin Move\n";
	}
	// ----- ?????????? ?????????? IFLY !!!
	virtual void Swim()
	{
		cout << "Dolphin Swim\n";
	}
};