#ifndef MUSIC_NODE
#define MUSIC_NODE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <vertex.h>
#include <vertexArrayList.h>

// represent album types
int TYPE_ALBUM = 0;
int TYPE_GENRE = 1;

typedef struct
{
    int type;             // album or genre
    int scratch;          // used for various algorithms
    char name[20];        // name
    VertexArrayList *adj; // adjacent verticies
} MusicNode;

#endif