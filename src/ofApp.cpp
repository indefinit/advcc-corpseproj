#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    smile.load("smile.png");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
    
    //adding image

    smile.draw(ofGetWidth() * 0.5f, ofGetHeight() * 0.40f, 70.0f, 70.0f);

	
	ofSetColor(ofColor::darkRed);
	ofFill();
	ofDrawEllipse(ofGetWidth() * 0.5f, ofGetHeight() * 0.25f, 20.0f, 20.0f);
    ofDrawRectangle(50.6f, 35.0f, 26.0f, 26.0f);
    
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
