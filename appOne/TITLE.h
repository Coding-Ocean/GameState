#pragma once
#include "GAME_STATE.h"
class TITLE : public GAME_STATE
{
public:
    TITLE();
    ~TITLE();
    int create(class GAME* game);
    void reset(class GAME* game);
    void proc(class GAME* game);
private:
    void Draw(class GAME* game);
};

