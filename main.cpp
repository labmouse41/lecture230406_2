#include <iostream>
#include"State.h"
#include"Transition.h"
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<FState*> States;

	States.push_back(new FState(1, "배회"));
	States.push_back(new FState(2, "추격"));
	States.push_back(new FState(3, "공격"));
	States.push_back(new FState(4, "죽음"));
	States.push_back(new FState(5, "필살기"));

	for (int i = 0; i < States.size(); i++)
	{
		cout << States[i]->name << endl;
	}



	list<FTransition*> Transitions;

	Transitions.push_back(new FTransition(1, "적발견", 2));
	Transitions.push_back(new FTransition(2, "적놓침", 1));
	Transitions.push_back(new FTransition(2, "사정거리접근", 3));
	Transitions.push_back(new FTransition(3, "사정거리이탈", 2));
	Transitions.push_back(new FTransition(3, "HP없음", 4));

	for (auto iter = Transitions.begin(); iter != Transitions.end(); iter++)
	{
		cout << (*iter)->condition << endl;
	}
	for (auto iter : Transitions)
	{
		cout << iter->condition << endl;
	}


	int MonsterCurrentState = 1;
	std::string MonsterCondition = "적발견";
	int MonsterNextState=1;
	//for (int i = 0; i < 5; i++)
	//{
	//	if (Transition[i]->currentState == MonsterCurrentState &&
	//		Transition[i]->condition == MonsterCondition)
	//	{
	//		MonsterNextState = Transition[i]->NextState;
	//	}
	//}

	cout << "현재 몬스터는 " << States[MonsterCurrentState - 1]->name << "중, ";
	cout << "몬스터는 " << MonsterCondition << "을 해서 ";
	cout << "다음에는 " << States[MonsterNextState - 1]->name<<"합니다."<<endl;


	return 0;
}