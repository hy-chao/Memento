#include "memento.h"
void main()
{
	//大战BOSS之前
	GameRole * lixiaoyao = new GameRole();
	lixiaoyao->GetInitState();
	lixiaoyao->StateDisplay();
	//保存进度
	RoleStateCaretaker * stateAdmin = new RoleStateCaretaker();
	stateAdmin->SetMemento(lixiaoyao->SaveState());
	//大战Boss之时，损耗严重
	lixiaoyao->Fight();
	lixiaoyao->StateDisplay();
	//恢复之前的状态
	lixiaoyao->RecoveryState(stateAdmin->GetMemento());
	lixiaoyao->StateDisplay();
}