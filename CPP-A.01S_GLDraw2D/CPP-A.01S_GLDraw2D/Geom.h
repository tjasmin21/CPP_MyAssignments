// CPP-A.01S_GLDraw2D.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class CPoint {
	public:
		void set(float x, float y);
		void list(void);

	private:
		float x;      // x coordinate
		float y;     // y coordinate
};

class CLine {
	public:
		void set(float x1, float y1, float x2, float y2);
		void list(void);

	private:
		CPoint c1;      // start point line
		CPoint c2;     // end point line
};

class CRectangle {
	public:
		void set(float x1, float y1, float x2, float y2);
		void list(void);

	private:
		CPoint c1;      // start point bounding box
		CPoint c2;     // end point bounding box
};

class CCircle {
	public:
		void set(float x, float y, float r);
		void list(void);

	private:
		CPoint c1;		//middle point
		float r;		//Radius
};