#pragma once

/// <summary>
/// Структура для хранения данных о людях для размещения в очереди
/// </summary>
struct q_elem
{
	/// <summary>
	/// Имя (информационное поле)
	/// </summary>
	char* name;
	/// <summary>
	/// Возраст (информационное поле)
	/// </summary>
	int age;
	/// <summary>
	/// Указатель на следующий элемент очереди (ссылочное поле)
	/// </summary>
	q_elem* next = nullptr;
	/// <summary>
	/// Указатель на предыдущий элемент очереди (ссылочное поле)
	/// </summary>
	q_elem* prev = nullptr;
};

/// <summary>
/// Структура для работы с очередью в целом
/// </summary>
struct queue
{
	/// <summary>
	/// Указатель на голову очереди (первый элемент)
	/// </summary>
	q_elem* head = nullptr;
	/// <summary>
	/// Указатель на хвост очереди (последний элемент)
	/// </summary>
	q_elem* tail = nullptr;
};

/// <summary>
/// Добавление элемента в очередь
/// </summary>
/// <param name="q">Очередь, куда нужно поместить новое значение</param>
/// <param name="name">Имя человека</param>
/// <param name="age">Возраст человека</param>
void enqueue(queue& q, const char* name, int age);

/// <summary>
/// Получение элемента из очереди и удаление его оттуда
/// </summary>
/// <param name="q">Очередь, из которой необходимо получить значение</param>
/// <param name="name">Получаемое имя</param>
/// <param name="age">Получаемый возраст</param>
/// <returns>
/// true, если очередь была не пустая и удалось получить значение и
/// false - в противном случае
/// </returns>
bool dequeue(queue& q, char*& name, int& age);

/// <summary>
/// Очистка очереди. Удаляет из памяти все элементы, расположенные в очереди
/// </summary>
/// <param name="q">Очередь, которую нужно удалить из памяти</param>
void clear(queue& q);
