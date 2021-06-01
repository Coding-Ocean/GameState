#include"libOne.h"
#include"GAME_STATE.h"
#include"TITLE.h"
#include"STAGE.h"
#include "GAME.h"
GAME::GAME() {
}
GAME::~GAME() {
    for (int i = 0; i < NUM_STATES; i++) {
        SAFE_DELETE(GameStates[i]);
    }
    SAFE_DELETE_ARRAY(GameStates);
    CurrentState = 0;
}
int GAME::create() {
    window(1920, 1080, full);
    //ホントはここでコンテナにグラフィックスの読み込みをおこなう

    //各ステートを生成
    GameStates = new GAME_STATE*[NUM_STATES];
    GameStates[TITLE_ID] = new TITLE;
    if (GameStates[TITLE_ID]->create(this))return 1;
    GameStates[STAGE_ID] = new STAGE;
    if (GameStates[STAGE_ID]->create(this))return 1;
    //最初のステート
    changeState(TITLE_ID);
    hideCursor();
    return 0;
}
void GAME::changeState(STATE_ID stateId) {
    CurrentState = GameStates[stateId];
    CurrentState->reset(this);
}
void GAME::proc() {
    CurrentState->proc(this);
}
