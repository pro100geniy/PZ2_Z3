#include <iostream>
#include "Line.h"
using namespace std;
int main()
{

    Line lines[6]{


    Line({ 420,460 }, { 600,300 }, { 0,255,255 }, 5, PS_SOLID),
    
    Line({ 420,460 }, { 250,360 }, { 255,255,0 }, 5, PS_SOLID),
    
    Line({ 250,360 }, { 600,300 }, { 212,122,12 }, 1, PS_DOT),
  
    Line({ 250,360 }, { 420,50 }, { 255,0,255 }, 5, PS_SOLID),
  
    Line({ 420,460 }, { 420,50 }, { 128,128,128 }, 5, PS_SOLID),
   
    Line({ 600,300 }, { 420,50 }, { 255,255,255 }, 5, PS_SOLID)
 
    };

    for (int i = 0; i < 6; ++i) {
        lines[i].paint();
    }

    getchar();

    return 0;
}
