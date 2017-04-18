#include "ofApp.h"
#define NUM 100
#define LOL 30

float x[NUM];
float y[NUM];

float b[LOL];
float c[LOL];

float m[LOL];
float n[LOL];

float p[LOL];
float q[LOL];

float radius[NUM];

int red[NUM]; //Red成分
int green[NUM]; //Green成分
int blue[NUM];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetCircleResolution(64);
    ofEnableAlphaBlending();
    
   
    
    for( int i = 0; i < NUM; i++){
        x[i] = ofRandom(0, ofGetWidth()/2+100);
        y[i] = ofRandom(0, ofGetHeight()/2+100);
        radius[i] = ofRandom(10, 40);
    
        red[i] = ofRandom(0, 255);
        green[i] = ofRandom(0, 255);
        blue[i] = ofRandom(0, 255);
    }
   
    for(int i = 0; i < LOL; i++){
    
    b[i] = ofRandom(200, ofGetWidth());
    c[i] = ofRandom(200, ofGetHeight());
    
    m[i] = ofRandom(200, ofGetWidth());
    n[i] = ofRandom(200, ofGetHeight());
    
    p[i] = ofRandom(200, ofGetWidth());
    q[i] = ofRandom(200, ofGetHeight());
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    ofSetColor(0,0,0);
    ofDrawTriangle(ofGetWidth(), 0, 0, ofGetHeight(), ofGetWidth(), ofGetHeight());
    
    for(int i = 0; i <LOL; i++){
        ofSetColor(red[i], green[i], blue[i],127);
        ofDrawTriangle(b[i], c[i],m[i] , n[i],p[i] , q[i]);
    }

    
    ofSetColor(255,255,255);
    ofDrawTriangle(0, 0, ofGetWidth(), 0, 0, ofGetHeight());

    
    ofSetColor(255, 165, 0);
    ofDrawCircle(ofGetWidth()/2 , ofGetHeight()/2, 150);
    
    
    for(int i = 0; i < NUM; i++){
        ofSetColor(red[i], green[i], blue[i]);
        ofDrawCircle(x[i] , y[i], radius[i]);
    }
    
    

    /*
    ofSetColor(0,0,0);
    ofDrawTriangle(ofGetWidth(), 0, 0, ofGetHeight(), ofGetWidth(), ofGetHeight());
     
    ofSetColor(255,255,255);
    ofDrawTriangle(0, 0, ofGetWidth(), 0, 0, ofGetHeight());
*/
    

    
   
    
    

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'x'){
        grabbedImage.grabScreen(0,0,600,600);
        grabbedImage.saveImage("hazama.png");
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
