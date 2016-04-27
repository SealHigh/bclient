//
// Created by Timothy Friberg Holmsten on 19/04/16.
//

#ifndef CLIENT_RENDEROBJECT_H
#define CLIENT_RENDEROBJECT_H

#include <SDL_render.h>
#include "../../game.h"
#include "../../../object/objects/wall/wall.h"
#include "../../../image/image.h"

void render_walls(SDL_Window *window, Game * game);

#endif //CLIENT_RENDEROBJECT_H
