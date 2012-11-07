#pragma once

//OF
#include "ofMain.h"

#include "ofxMtlMapping2DPolygon.h"
#include "ofxMtlMapping2DSettings.h"
#include "mtlUtils.h"
#include "ofxMtlMapping2DInput.h"
#include "ofxMtlMapping2DVertex.h"

//--------------------------------------------------------------
//--------------------------------------------------------------
class ofxMtlMapping2DShape : public ofxMtlMapping2DPolygon {
	
    public:
        // ----
        static ofxMtlMapping2DShape* activeShape;
        static ofxMtlMapping2DShape* previousActiveShape;
        static int activeShapeCurrVertexId;
        static void resetActiveShapeVars();
    
        // ----
        ofxMtlMapping2DShape();
        ~ofxMtlMapping2DShape();
    
        map<string,string> shapeSettings;
        ofxMtlMapping2DInput* inputPolygon;
    
        void init(int sId, bool defaultShape = false);

        void update();
        void draw();
        void drawID();
        virtual void render() {};
    

    protected:
//        virtual void destroy();
        void setAsActiveShape();

        virtual void calcHomography() {};
        virtual void createDefaultShape() {};
    
    private:
        typedef ofxMtlMapping2DPolygon _super;

};
