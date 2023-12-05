#pragma once
#define N '\n'


void hello();

typedef struct node {
    char disk;
    node* right;
    node* below;

} node;