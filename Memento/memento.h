#pragma once
#include<iostream>
using namespace std;
//��ɫ״̬�洢��
class RoleStateMemento
{
private:
	int life;
public:
	RoleStateMemento(int l)
	{
		life = l;
	}
	int GetLife()
	{
		return life;
	}
	void SetLife(int i)
	{
		life = i;
	}
};
//��ɫ��
class GameRole
{
private:
	int life;
public:
	void GetInitState()
	{
		life = 100;
	}
	void StateDisplay()
	{
		cout << "����ֵ:" << life << endl;
	}
	void Fight()
	{
		life = life - 100;
	}
	RoleStateMemento * SaveState()
	{
		return (new RoleStateMemento(life));
	}
	//�ָ���ɫ״̬
	void RecoveryState(RoleStateMemento * memento)
	{
		life = memento->GetLife();
	}
};
//��ɫ״̬��������
class RoleStateCaretaker
{
private:
	RoleStateMemento * memento;
public:
	RoleStateMemento * GetMemento()
	{
		return memento;
	}
	void SetMemento(RoleStateMemento * value)
	{
		memento = value;
	}
};