#include"libOne.h"
#include"GAME.h"
#include "STAGE.h"
STAGE::STAGE() {
}
STAGE::~STAGE() {
}
int STAGE::create(class GAME* game) {
    //ホントはここでコンテナからグラフィックを取り出す
    //背景カラー
    BackR = 60; BackG = 120; BackB = 255;
    return 0;
}
void STAGE::reset(class GAME* game) {
    //キャラ
    Radius = random() % 180 + 20.0f;
    Px = -Radius;
    Py = height / 2;
    Vx = random() % 5 + 5.0f;
    R = 200; G = 200; B = 0;
}
void STAGE::proc(class GAME* game) {
    Px += Vx;
    if (Px > width + Radius) {
        Px = -Radius;
    }
    Draw(game);
    //next state
    if (isTrigger(KEY_SPACE)) {
        game->changeState(GAME::TITLE_ID);
    }
}
void STAGE::Draw(class GAME* game) {
    clear(BackR, BackG, BackB);
    fill(R, G, B);
    circle(Px, Py, Radius * 2);
}
