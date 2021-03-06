//
// Created by Timothy Friberg Holmsten on 19/04/16.
//
#include <SDL_events.h>
#include "player.h"

Player create_player(int x, int y, int id)
{
    Player ply;
    ply.x = x;
    ply.y = y;
    ply.id = id;

    return ply;
}

void update_players(Player *players) {

}

void update_local_player(Player *player, Map map) {

    SDL_PumpEvents();
    const Uint8 *state = SDL_GetKeyboardState(NULL);

    int x = 0;
    int y = 0;

    if (state[SDL_SCANCODE_A])
        x = -1;
    if (state[SDL_SCANCODE_D])
        x =  1;
    if (state[SDL_SCANCODE_S])
        y =  1;
    if (state[SDL_SCANCODE_W])
        y = -1;

    if(!map_is_blocked(map, player->x + x, player->y) && x != 0)
    {
        player->x += x;
    }

    if (!map_is_blocked(map, player->x, player->y + y) && y != 0)
    {
        player->y += y;
    }
    if (x != 0 || y != 0)
        SDL_Delay(100);

    //SDL_Delay(200);
}





