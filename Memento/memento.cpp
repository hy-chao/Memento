#include "memento.h"
void main()
{
	//��սBOSS֮ǰ
	GameRole * lixiaoyao = new GameRole();
	lixiaoyao->GetInitState();
	lixiaoyao->StateDisplay();
	//�������
	RoleStateCaretaker * stateAdmin = new RoleStateCaretaker();
	stateAdmin->SetMemento(lixiaoyao->SaveState());
	//��սBoss֮ʱ���������
	lixiaoyao->Fight();
	lixiaoyao->StateDisplay();
	//�ָ�֮ǰ��״̬
	lixiaoyao->RecoveryState(stateAdmin->GetMemento());
	lixiaoyao->StateDisplay();
}