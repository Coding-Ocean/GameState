#pragma once
class GAME
{
public:
    GAME();
    ~GAME();
    int create();
    void proc();
    enum STATE_ID { TITLE_ID, STAGE_ID, NUM_STATES };
    void changeState(STATE_ID stateId);
private:
    class GAME_STATE* CurrentState = 0;
    //ポインタ配列
    class GAME_STATE** GameStates = 0;
    //各ステートで共有するクラスはここで用意する
    //class CONTAINER* Container=0;

};
