#ifndef VERTEX_ARRAY_LIST
#define VERTEX_ARRAY_LIST

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <vertex.h>

int STANDARD_START_CAPACITY = 20; // capacity to begin with
int REFACTOR_RATIO = 2;           // What factor size is increased by when resizing

typedef struct
{
    int size;     // how many items stored
    int capacity; // how much can it store
    Vertex *data; // array of verticies

} VertexArrayList;

int makeArrayList(VertexArrayList *current);         // initializes arrayList
int addItem(VertexArrayList *current, Vertex *item); // adds item to arraylist
int resize(VertexArrayList *current);                // handles resize when size gets too big

#endif