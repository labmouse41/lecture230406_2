#include <iostream>
#include"State.h"
#include"Transition.h"
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<FState*> States;

	States.push_back(new FState(1, "��ȸ"));
	States.push_back(new FState(2, "�߰�"));
	States.push_back(new FState(3, "����"));
	States.push_back(new FState(4, "����"));
	States.push_back(new FState(5, "�ʻ��"));

	for (int i = 0; i < States.size(); i++)
	{
		cout << States[i]->name << endl;
	}



	list<FTransition*> Transitions;

	Transitions.push_back(new FTransition(1, "���߰�", 2));
	Transitions.push_back(new FTransition(2, "����ħ", 1));
	Transitions.push_back(new FTransition(2, "�����Ÿ�����", 3));
	Transitions.push_back(new FTransition(3, "�����Ÿ���Ż", 2));
	Transitions.push_back(new FTransition(3, "HP����", 4));

	for (auto iter = Transitions.begin(); iter != Transitions.end(); iter++)
	{
		cout << (*iter)->condition << endl;
	}
	for (auto iter : Transitions)
	{
		cout << iter->condition << endl;
	}


	int MonsterCurrentState = 1;
	std::string MonsterCondition = "���߰�";
	int MonsterNextState=1;
	//for (int i = 0; i < 5; i++)
	//{
	//	if (Transition[i]->currentState == MonsterCurrentState &&
	//		Transition[i]->condition == MonsterCondition)
	//	{
	//		MonsterNextState = Transition[i]->NextState;
	//	}
	//}

	cout << "���� ���ʹ� " << States[MonsterCurrentState - 1]->name << "��, ";
	cout << "���ʹ� " << MonsterCondition << "�� �ؼ� ";
	cout << "�������� " << States[MonsterNextState - 1]->name<<"�մϴ�."<<endl;


	return 0;
}