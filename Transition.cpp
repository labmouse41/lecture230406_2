#include "Transition.h"

FTransition::FTransition(int NewCurrentState, std::string NewCondition, int NewNextState)
{
	currentState = NewCurrentState;
	condition = NewCondition;
	NextState = NewNextState;
}
