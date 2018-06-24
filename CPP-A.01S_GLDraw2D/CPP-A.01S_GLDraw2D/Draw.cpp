// Draw.cpp : Defines the entry point for the application.
//
#include <iostream>
using namespace std;

#include "Geom.h"

int main()
{
	/************** static instantiated objects********************************************/

	// static instantiation of objects
	CPoint		P1;
	CLine		L1;
	CRectangle  R1;
	CCircle		C1;

	// set coordinates of objects
	P1.set(1, 2);
	L1.set(10, 10, 20, 20);
	R1.set(100, 100, 200, 200);
	C1.set(1000, 1000, 200);

	// list coordinates of objects
	cout << "point object, defined with" << endl;
	cout << "   P at ";  P1.list(); cout << endl << endl;

	cout << "line object, defined with" << endl;
	cout << "   P1, P2 at "; L1.list(); cout << endl << endl;
	
	cout << "rectangle object, defined with" << endl;
	cout << "   P1, P2 at "; R1.list(); cout << endl << endl;
	
	cout << "circle object, defined with" << endl;
	cout << "   P1 at "; C1.list(); cout << endl << endl;

	/************** dynamic instantiated objects********************************************/
		
	// definition of pointer to dynamic instantiated objects
	CPoint*		pP2;
	CLine*		pL2;
	CRectangle* pR2;
	CCircle*	pC2;

	// dynamic instantiation of objects
	pP2 = new CPoint;
	pL2 = new CLine;
	pR2 = new CRectangle;
	pC2 = new CCircle;

	// set coordinates of objects
	pP2->set(3, 4);
	pL2->set(30, 30, 40, 40);
	pR2->set(300, 300, 400, 400);
	pC2->set(3000, 3000, 400);

	// list coordinates of objects
	cout << "point object, defined with" << endl;
	cout << "   P at ";  pP2->list(); cout << endl << endl;
	
	cout << "line object, defined with" << endl;
	cout << "   P1, P2 at "; pL2->list(); cout << endl << endl;

	cout << "rectangle object, defined with" << endl;
	cout << "   P1, P2 at "; pR2->list(); cout << endl << endl;

	cout << "circle object, defined with" << endl;
	cout << "   P1 at "; pC2->list(); cout << endl << endl;

	// explicit destroy of dynamic objects
	cout << "Deleting dynamic objects ..." << endl << endl;
	delete pP2;
	delete pL2;
	delete pR2;
	delete pC2;

	return 0;
}
