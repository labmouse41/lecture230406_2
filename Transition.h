#pragma once
#include <string>

class FTransition
{
public:
	FTransition(int NewCurrentState, std::string NewCondition,int NewNextState);

	int currentState;
	std::string condition;
	int NextState;

};

