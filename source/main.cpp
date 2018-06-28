#include "State.hpp"

int main()
{
    auto state = State();

    while (true)
    {
        state.ReadNewState();
        state.WriteAssignedAction();
    }
}