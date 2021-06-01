#pragma once
class GAME_STATE
{
public:
    virtual int create(class GAME* g) = 0;
    virtual void reset(class GAME* g) = 0;
    virtual void proc(class GAME* g) = 0;
};

