#include"Animal.h"
#include<vector>
#include<list>
using namespace std;
Animal* temp = nullptr;
//создать список животных, использовать коллекцию list(stl).функциональность: 
//добавление 
//удаление 
//поиск 
//добавление в определенную позицию 
//вывод 
//редактирование 
//предусмотреть меню!
Animal* Addition(list<Animal*> &animal)
{
	int num;
	cout << "Which animal would you like to add?"<<endl;
	cout << " 1.Elephant \n 2.Parrot \n 3.Cat \n 4.Dog \n 5.Pinguin \n 6.Dolphin \n" << endl;
	cin >> num;
	switch (num)
	{
	case 1:
		temp = new Elephant();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	case 2:
		temp = new Parrot();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	case 3:
		temp = new Cat();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	case 4:
		temp = new Dog();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	case 5:
		temp = new Pinguin();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	case 6:
		temp = new Dolphin();
		temp->Input();
		animal.push_back(temp);
		return temp;
		break;
	default:
		cout << "Input error, please re-enter" << endl;
		Addition(animal);
		return temp;
		break;
	}
}
void Print_mas(const list<Animal*> animal)
{
	for (auto i = animal.cbegin(); i != animal.cend(); i++)
	{
		(*i)->Print();
	}
}
void Delete(list<Animal*>& animal)
{
	animal.clear();
}
Animal* Search(list<Animal*>& animal)
{
	bool Search = false;
	string search_name;
	cout << "Enter the name of the animal -> ";
	cin >> search_name;
	for (auto i = animal.cbegin(); i != animal.cend(); i++)
	{
		if ((*i)->GetName() == search_name)
		{
			(*i)->Print();
			Search = true;
			return (*i);
		}
	}
	if (Search == false)
	{
		cout << "There is no such animal" << endl;
		return nullptr;
	}
}
void Add_pos(list<Animal*>& animal)
{
	int num;
	cout << "Enter at which position you want to add the element -> ";
	cin >> num;
	if (num > animal.size() || num < 0)
	{
		cout << "Input error, please re-enter" << endl;
		Add_pos(animal);
	}
	int fount_element = 0;
	for (auto i = animal.cbegin(); i != animal.cend(); i++)
	{
		fount_element++;
		if (fount_element == num)
		{
			temp = Addition(animal);
			animal.emplace(i, temp);
			return;
		}
	}

}
void Edit(list<Animal*>& animal)
{
	temp = Search(animal);
	if (temp == nullptr)
	{
		return;
	}
	temp->Input();
}
void Menu(list< Animal*>& animal)
{
	int num;
	cout << " 1.Addition \n 2.Delete \n 3.Search \n 4.Adding to a specific position  \n 5.Print \n 6.Search \n 7.Editing \n 8.Exit" << endl;
	cout << "Enter value -> ";
	cin >> num;
	switch (num)
	{
	case 1:
		Addition(animal);
		Menu(animal);
		cout << endl;
		break;
	case 2:
		Delete(animal);
		Menu(animal);
		cout << endl;
		break;
	case 3:
		Search(animal);
		Menu(animal);
		cout << endl;
		break;
	case 4:
		Add_pos(animal);
		Menu(animal);
		cout << endl;
		break;
	case 5:
		Print_mas(animal);
		Menu(animal);
		cout << endl;
		break;
	case 6:
		Search(animal);
		Menu(animal);
		cout << endl;
		break;
	case 7:
		Edit(animal);
		Menu(animal);
		cout << endl;
		break;
	case 8:
		exit;
		break;
	default:
		cout << "Input error, please re-enter" << endl;
		Menu(animal);
		cout << endl;
		break;
	}
}
int main()
{
	list<Animal*>animal;
	Menu(animal);

}