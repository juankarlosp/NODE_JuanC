//
//  recuadro.cpp
//  emptyExample
//
//  Created by Juan CarlosPulido on 9/24/15.
//
//

#include "recuadro.h"
void recuadro::dibujaRecuadro(ofColor myColor, int x, int y, int w, int h, string texto){
    ofSetColor(myColor);
    ofRect(x,y,w,h);
    ofDrawBitmapStringHighlight(texto, x,y+h);
}