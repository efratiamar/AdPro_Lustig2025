#include "Rect.h"

Rect::Rect()
    : length(5), width(5)
{
    //length = 5;
    //width = 5;
};

Rect::Rect(int l, int w)
    : length(l), width(w)
{
    if (length < 0)
        length = 10;
    //if ...
    
    //width = w;
};