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
    //�|�C���^�z��
    class GAME_STATE** GameStates = 0;
    //�e�X�e�[�g�ŋ��L����N���X�͂����ŗp�ӂ���
    //class CONTAINER* Container=0;

};
