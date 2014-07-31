#pragma once

#include "ofMain.h"
#include "ofxDrawnetic.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();
    
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        ofxMarking* marking;
        ofxSuperPath* path;
        ofxImagePaint* paint;
        ofxRibbonBrush* brush;
        ofImage *img;
        vector<ofxMarking *> markings;        
};
