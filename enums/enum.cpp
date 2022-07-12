#include <iostream>

enum PCState
{
    ON,
    OFF, 
    SLEEP
};

class PC
{

public:
    PCState GetState() {return State;}

    void SetState(PCState State)
    {
        this->State = State;
    }


private:
    PCState State;
};

int main() {

    PC pc;
    pc.SetState(PCState::ON);
    
    return 0;
}
