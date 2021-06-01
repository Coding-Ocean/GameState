#include"libOne.h"
#include"GAME.h"
void gmain() {
    GAME* game = new GAME;
    if (game->create() == 0) {
        while (notQuit) {
            game->proc();
        }
    }
    delete game;
}

