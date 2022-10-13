#include"Animal.h"
using namespace std;

int main()
{
	//Animal* ptr = new Parrot("Ara",2,"Africa");
	//ptr->Eat();
	//ptr->Move();
	//ptr->Print();
	//delete ptr;

	IAnimal* ptr = nullptr;

	ptr = new Parrot("Ara", 2, "Africa");
	// ptr - интерфейсная ссылка
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();
	delete ptr;

	//ptr = new Human();
	//ptr->Eat();
	//ptr->Move();
	//delete ptr;
	cout << endl;

	ptr = new Cat("Varya", 4,"My home ^)");
	ptr->Eat();
	ptr->Move();
	Cat* cat = static_cast<Cat*>(ptr);
	cat->Print();
	delete ptr;
	cout << endl;

	ptr = new Dog("Vasya", 3, "My home ^)");
	ptr->Eat();
	ptr->Move();
	Dog* dog = static_cast<Dog*>(ptr);
	dog->Print();
	delete ptr;
	cout << endl;

	ptr = new Pinguin("Natacha", 4, "Antarctica");
	ptr->Eat();
	ptr->Move();
	Pinguin* pinguin = static_cast<Pinguin*>(ptr);
	pinguin->Swim();
	pinguin->Print();
	delete ptr;
	cout << endl;

	ptr = new Dolphin("Sergei", 10, "Black sea");
	ptr->Eat();
	ptr->Move();
	Dolphin* dolphin = static_cast<Dolphin*>(ptr);
	dolphin->Swim();
	dolphin->Print();
	delete ptr;

}