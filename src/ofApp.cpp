#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
    
    smile.load("smile.png");
    youFormTheHead.load("youFormTheHead.png");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
    
    //adding image

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

	float time = ofGetElapsedTimef();
    ofDrawRectangle(100+cos(time)*30, 100+cos(time)*30, 200,200);
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
