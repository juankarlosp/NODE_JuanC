#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// define Jordi's color
	colorJordi = ofColor(0,255,255);

    // define Alvaro's color
	colorAlvaro = ofColor(0,255,100);

    // define Fernando's color
    colorFernando = ofColor(0,0,0);

    // define JuanCarlos color
    colorJuanCarlos = ofColor(35,96,145);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    r.dibujaRecuadro(colorJuanCarlos, 0,0, 100, 100, "Color de Juan Carlos");
    r.dibujaRecuadro(colorJordi, 150,0, 100, 100, "Color de Jordi");
    r.dibujaRecuadro(colorAlvaro, 0,200, 100, 100, "Color de Alvaro");
    r.dibujaRecuadro(colorFernando, 150,200, 100, 100, "Color de Fernando");
    r.dibujaRecuadro(ofColor(15,84,156), 300,0, 100, 100, "Color de Extra");
    r.dibujaRecuadro(ofColor(159,99,6), 300,200, 100, 100, "Color de Extra");
}


