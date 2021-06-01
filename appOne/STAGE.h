#pragma once
#include "GAME_STATE.h"
class STAGE : public GAME_STATE
{
public:
    STAGE();
    ~STAGE();
    int create(class GAME* game);
    void reset(class GAME* game);
    void proc(class GAME* game);
private:
    void Draw(class GAME* game);
    //�w�i�J���[
    float BackR = 0, BackG = 0, BackB = 0;
    //�L�����f�[�^(�{���͂������N���X�ɂ���)
    float Px = 0, Py = 0, Radius = 0;
    float Vx = 0, Vy = 0;
    float R = 0, G = 0, B = 0;
};

