#include "ofApp.h"
#define NUM 100
#define LOL 30

int b[LOL];
int c[LOL];

int m[LOL];
int n[LOL];

int p[LOL];
int q[LOL];

int x[NUM];
int y[NUM];
int radius[NUM];

int red[NUM];
int green[NUM];
int blue[NUM];

int r[NUM];
int g[NUM];
int u[NUM];

/*
int w = ofGetWidth();
int h = ofGetHeight();
*/

//--------------------------------------------------------------
void ofApp::setup()
   {
    
    ofBackground(255,255,255);
    ofSetCircleResolution(64);
    ofEnableAlphaBlending();
    
    for( int i = 0; i < NUM; i++)
        {
        x[i] = ofRandom(0, ofGetWidth()/2+100);
        y[i] = ofRandom(0, ofGetHeight()/2+100);
        radius[i] = ofRandom(10, 40);
    
        red[i] = ofRandom(0, 255);
        green[i] = ofRandom(0, 255);
        blue[i] = ofRandom(0, 255);
        
        r[i] = ofRandom(127, 255);
        g[i] = ofRandom(127, 255);
        u[i] = ofRandom(127, 255);
        }
   
    for(int i = 0; i < LOL; i++)
        {
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
void ofApp::draw()
   {
    
    ofSetColor(0,0,0);
    ofDrawTriangle(ofGetWidth(), 0, 0, ofGetHeight(), ofGetWidth(), ofGetHeight());
    
    for(int i = 0; i <LOL; i++)
        {
        ofSetColor(red[i], green[i], blue[i],127);
        ofDrawTriangle(b[i], c[i], m[i], n[i], p[i], q[i]);
         }

    ofSetColor(255,255,255);
    ofDrawTriangle(0, 0, ofGetWidth(), 0, 0, ofGetHeight());
    
    ofSetColor(255, 165, 0, 235);
   // ofColor::fromHsb(255, 100, 100); ←使い方間違えてる???????
    
    ofDrawCircle(ofGetWidth()/2 , ofGetHeight()/2, 150);
    
    for(int i = 0; i < NUM; i++)
         {
        ofSetColor(r[i], g[i], u[i],127);
        ofDrawCircle(x[i] , y[i], radius[i]);
         }
    
    }


//--------------------------------------------------------------
void ofApp::keyPressed(int key)
   {
    
    if(key == 'x')
        {
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
