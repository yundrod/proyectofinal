#include "punto.h"
punto::punto(int x,int y){
        a=x;b=y;
    }
punto::punto(){
        a=0;b=0;
    }
punto::punto(punto &o){
        a=o.a;b=o.b;
    }

