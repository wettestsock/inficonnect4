#pragma once
#define N '\n'


void hello();

typedef struct node {
    char disk;
    node* right;
    node* left;
    node* down;            
} node;

class board{
    node* topLeft;
    public:
    board();
    board(const int& rowN, const int& columnN);
    void print();
    ~board();

};