#ifndef MUSIC_NODE_H
#define MUSIC_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <vertexArrayList.h>
#include <musicNode.h>

typedef struct
{
    double weight;    // correlation of album and genre (1 = strong, 0 = weak)
    int scratch;      // used for certain algorithms
    MusicNode *genre; // adjacent album node
    MusicNode *album; // adjacent genre node
} Vertex;

#endif