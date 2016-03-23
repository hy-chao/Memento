#pragma once
#include<iostream>
using namespace std;
//角色状态存储箱
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
//角色类
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
		cout << "生命值:" << life << endl;
	}
	void Fight()
	{
		life = life - 100;
	}
	RoleStateMemento * SaveState()
	{
		return (new RoleStateMemento(life));
	}
	//恢复角色状态
	void RecoveryState(RoleStateMemento * memento)
	{
		life = memento->GetLife();
	}
};
//角色状态管理者类
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