#pragma once

#include <iostream>
using namespace std;

#include "Ship.hpp"

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