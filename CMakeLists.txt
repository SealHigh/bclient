cmake_minimum_required(VERSION 3.5)
project(client)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${client_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_net REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
                    ${SDL2_IMAGE_INCLUDE_DIR}
                    ${SDL2_TTF_INCLUDE_DIR}
                    ${SDL2_NET_INCLUDE_DIR})
link_libraries(${SDL2_LIBRARY}
               ${SDL2_IMAGE_LIBRARIES}
               ${SDL2_TTF_LIBRARIES}
                ${SDL2_NET_LIBRARIES})

set(CMAKE_C_FLAGS "-std=c99")

file(GLOB BOMBERMAN_SRC

        bomberman/main.c

        bomberman/tempServer.c
        bomberman/tempServer.h

        bomberman/client/*.c
        bomberman/client/*.h

        bomberman/game/*.c
        bomberman/game/*.h

        bomberman/map/*.c
        bomberman/map/*.h

        bomberman/map/maps/*

        bomberman/object/objects/wall/*.c
        bomberman/object/objects/wall/*.h

        bomberman/game/renderer/object/*.c
        bomberman/game/renderer/object/*.h

        bomberman/game/renderer/player/*.c
        bomberman/game/renderer/player/*.h

        bomberman/player/*.c
        bomberman/player/*.h

        bomberman/image/*.c
        bomberman/image/*.h
     )

set(SOURCE_FILES ${BOMBERMAN_SRC})

add_executable(client ${SOURCE_FILES})