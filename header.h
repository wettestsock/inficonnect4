#pragma once
#define N '\n'
#define NORIGHT false
#define GORIGHT true

void hello();

typedef struct node {
    char disk;
    node* down;
    bool right;
} node;

class board{
    node* topLeft;
    public:
    board();
    board(const int& rowN, const int& columnN);
    void print();
    ~board();
    
};