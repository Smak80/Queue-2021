#pragma once

/// <summary>
/// ��������� ��� �������� ������ � ����� ��� ���������� � �������
/// </summary>
struct q_elem
{
	/// <summary>
	/// ��� (�������������� ����)
	/// </summary>
	char* name;
	/// <summary>
	/// ������� (�������������� ����)
	/// </summary>
	int age;
	/// <summary>
	/// ��������� �� ��������� ������� ������� (��������� ����)
	/// </summary>
	q_elem* next = nullptr;
	/// <summary>
	/// ��������� �� ���������� ������� ������� (��������� ����)
	/// </summary>
	q_elem* prev = nullptr;
};

/// <summary>
/// ��������� ��� ������ � �������� � �����
/// </summary>
struct queue
{
	/// <summary>
	/// ��������� �� ������ ������� (������ �������)
	/// </summary>
	q_elem* head = nullptr;
	/// <summary>
	/// ��������� �� ����� ������� (��������� �������)
	/// </summary>
	q_elem* tail = nullptr;
};

/// <summary>
/// ���������� �������� � �������
/// </summary>
/// <param name="q">�������, ���� ����� ��������� ����� ��������</param>
/// <param name="name">��� ��������</param>
/// <param name="age">������� ��������</param>
void enqueue(queue& q, const char* name, int age);

/// <summary>
/// ��������� �������� �� ������� � �������� ��� ������
/// </summary>
/// <param name="q">�������, �� ������� ���������� �������� ��������</param>
/// <param name="name">���������� ���</param>
/// <param name="age">���������� �������</param>
/// <returns>
/// true, ���� ������� ���� �� ������ � ������� �������� �������� �
/// false - � ��������� ������
/// </returns>
bool dequeue(queue& q, char*& name, int& age);

/// <summary>
/// ������� �������. ������� �� ������ ��� ��������, ������������� � �������
/// </summary>
/// <param name="q">�������, ������� ����� ������� �� ������</param>
void clear(queue& q);
