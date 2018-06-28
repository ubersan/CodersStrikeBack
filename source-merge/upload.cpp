/*-- File: main.cpp start --*/
/*-- #include "State.hpp" start --*/

#include <iostream>
using namespace std;

/*-- #include "Ship.hpp" start --*/

/*-- #include "Velocity.hpp" start --*/

class Velocity
{
public:
    double x;
    double y;
};
/*-- #include "Velocity.hpp" end --*/
/*-- #include "Point.hpp" start --*/

class Point
{
public:
    int x;
    int y;
};
/*-- #include "Point.hpp" end --*/

class Ship
{
public:
    Point pos;
    Velocity v;
};
/*-- #include "Ship.hpp" end --*/

class State
{
public:
    Ship me;
    Ship op;
    Point ncp;

    int nextCheckpointDist;

    // angle between your pod orientation and the direction of the next checkpoint
    int nextCheckpointAngle;

    void ReadNewState()
    {
        cin >> me.pos.x >> me.pos.y
            >> ncp.x >> ncp.y
            >> nextCheckpointDist
            >> nextCheckpointAngle;
        cin.ignore();

        cin >> op.pos.x >> op.pos.y;
        cin.ignore();
    }

    void ExecuteAssignedAction()
    {
        cout << ncp.x << " " << ncp.y << " 100" << endl;
    }
};
/*-- #include "State.hpp" end --*/

int main()
{
    auto state = State();

    while (true)
    {
        state.ReadNewState();
        state.WriteAssignedAction();
    }
}
/*-- File: main.cpp end --*/
