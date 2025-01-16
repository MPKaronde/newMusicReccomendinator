#ifndef VERTEX_ARRAY_LIST
#define VERTEX_ARRAY_LIST

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <vertex.h>

typedef struct
{
    int size;     // how many items stored
    int capacity; // how much can it store
    Vertex *data; // array of verticies

} VertexArrayList;

#endif