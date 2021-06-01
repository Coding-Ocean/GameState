#include"libOne.h"
#include"GAME.h"
#include "TITLE.h"
TITLE::TITLE() {
}
TITLE::~TITLE() {
}
int TITLE::create(class GAME* game) {
    //ホントはここでコンテナからグラフィックを取り出す

    return 0;
}
void TITLE::reset(class GAME* game) {
}
void TITLE::proc(class GAME* game) {
    Draw(game);
    //next state
    if (isTrigger(KEY_SPACE)) {
        game->changeState(GAME::STAGE_ID);
    }
}
void TITLE::Draw(class GAME* game) {
    clear();
    //（仮）
    fill(255);
    textMode(TOP);
    textSize(200);
    text("TITLE", 0, 0);
}
