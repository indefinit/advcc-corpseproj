#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
    
    smile.load("smile.png");
    youFormTheHead.load("youFormTheHead.png");
    runForest.load("runforest.png");
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
    
    //adding image
    
    runForest.draw(ofGetWidth()/2-55, ofGetHeight()/2+60, 350,350);
    youFormTheHead.draw(ofGetWidth()/2-65, ofGetHeight()/2-110);
    smile.draw(ofGetWidth() * 0.5f, ofGetHeight() * 0.40f, 70.0f, 70.0f);


	ofPushStyle();
	ofSetColor(ofColor::darkRed);
	ofFill();
	ofDrawEllipse(ofGetWidth() * 0.5f, ofGetHeight() * 0.25f, 20.0f, 20.0f);
	ofPopStyle();
	ofDrawRectangle(50.6f, 35.0f, 26.0f, 26.0f);
    
    ofDrawEllipse(ofGetWidth() * 0.4f, ofGetHeight() * 0.2f, 20.0f, 20.0f);
    ofSetColor(255, 0, 0);
    ofDrawRectangle(100, 100, 200,200);
    
    
    //for the changing star
    float xPct = (float)(mouseX) / (float)(ofGetWidth());
    float yPct = (float)(mouseY) / (float)(ofGetHeight());
    int nTips = 5 + xPct * 20;
    int nStarPts = nTips ;
    float angleChangePerPt = TWO_PI / (float)nStarPts;
    float innerRadius = 0 + yPct*80;
    float outerRadius = 150;
    float origx = ofGetWidth()/2;
    float origy = ofGetHeight()/2;
    float angle = 0;
    
    ofSetColor(0,255,255);
    ofBeginShape();
    for (int i = 0; i < nStarPts; i++){
        if (i % 2 == 0) {
            // inside point:
            float x = origx + innerRadius * cos(angle);
            float y = origy + innerRadius * sin(angle);
            ofVertex(x,y);
        } else {
            // outside point
            float x = origx + outerRadius * cos(angle);
            float y = origy + outerRadius * sin(angle);
            ofVertex(x,y);
        }
        angle += angleChangePerPt;
    }
    ofEndShape();
    

	float time = ofGetElapsedTimef();
    ofDrawRectangle(100+cos(time)*30, 100+cos(time)*30, 200,200);
	ofDrawRectangle(100 + sin(time) * 30, 100 + sin(time) * 30, 200, 200);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
