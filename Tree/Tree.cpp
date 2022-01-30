// Tree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{	
	cout << "\t<set>\n";
	cout << "////////////////////\n";

	set <int> st;
	
	// добавить 5 элементов типа инт	
	for (int i = 0; i < 5; i++) {
		st.insert(i + 1);
	}

	set <int> ::iterator it = st.begin();

	cout << *it << " "; // 1
	it++;
	cout << *it << " "; // 2
	it++;
	cout << *it << " "; // 3
	it++;
	cout << *it << " "; // 4
	it++;
	cout << *it << " " << "\n"; // 5

	// удалить 2 элемента
	st.erase(it);
	st.erase(2);
	for (it = st.begin(); it != st.end(); it++)
		cout << *it << " ";
	cout << "\n"; 

	// найти то что есть
	it = st.find(3);	
	cout << *it << " " << "\n";

    //  поискать то чего нет
	it = st.find(8);
	//cout << *it <<"\n"; // ругается
	
	//  добавить 6, 7
	st.insert(6);
	st.insert(7);

	// показать всё что осталось
	for (it = st.begin(); it != st.end(); it++)
	cout << *it << " ";
	cout << "\n";

 ///////////////////////////////////////////////////////////////
	cout << "\t<map>\n";
	cout << "////////////////////\n";

	map <int, int> mp;	

	// добавить 5 элементов типа инт	
	mp.insert(pair < int, int>(5, 10));
	mp.insert(pair < int, int>(2, 15));
	mp.insert(pair < int, int>(1, 12));
	mp.insert(pair < int, int>(4, 27));
	mp.insert(pair < int, int>(3, 17));
	map <int, int> ::iterator im = mp.begin();
	// выводим их
	for (im = mp.begin(); im != mp.end(); im++)
	{  
		cout << "\n" << "key " << im->first << ", value " << im->second;
	}
	cout << "\n";

	// удалить 2 элемента
	im = mp.find(5); // найти то, что есть, если нет, то ругается
	mp.erase(im);            
	mp.erase(2);   
		
	//  показать всё что осталось
	for (im = mp.begin(); im != mp.end(); im++)
	{
		cout << "\n" << "key " << im->first << ", value " << im->second;
	}
	cout << "\n";
}