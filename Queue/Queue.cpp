#include "Queue.h"

#include <string.h>

void enqueue(queue& q, const char* name, int age)
{
	//Создание нового элемента
	auto new_el = new q_elem;
	new_el->age = age;
	auto sz = strlen(name) + 1;
	//Не забыть выделить память под строку
	new_el->name = new char[sz];
	strcpy_s(new_el->name, sz, name);
	//Размещение нового элемента в очереди
	if (q.tail) q.tail->next = new_el;
	else q.head = new_el;
	new_el->prev = q.tail;
	q.tail = new_el;
}

bool dequeue(queue& q, char*& name, int& age)
{
	if (!q.head) return false;
	age = q.head->age;
	auto sz = strlen(q.head->name) + 1;
	delete[] name;
	name = new char[sz];
	strcpy_s(name, sz, q.head->name);

	auto old_el = q.head;
	q.head = q.head->next;
	delete[] old_el->name;
	delete old_el;
	if (!q.head) q.tail = nullptr;
	else q.head->prev = nullptr;
	return true;
}

void clear(queue& q)
{
	while (q.head)
	{
		auto old_el = q.head;
		q.head = q.head->next;
		delete[] old_el->name;
		delete old_el;
	}
	q.tail = nullptr;
}

