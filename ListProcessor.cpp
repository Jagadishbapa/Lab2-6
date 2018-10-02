// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	//cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	//cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	//cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	//cout << "cows list  :  " << cows << endl;
	//cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(0.54);
	horses.insertAsLast(2.51);
	cows.insertAsFirst(6.78);
	cout << endl << "horses list:  " << horses << endl;
	cout << "horses list size:  " << horses.size() << endl;
	cout << "horses list sum:  " << horses.sum() << endl;
	cout << "cows list  :  " << cows << endl << endl;
	horses.removeFirst();
	cout << endl << "horses: first removed" << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size:  " << horses.size() << endl << endl;
	horses.removeFirst();
	horses.removeFirst();
	cout << endl << "horses should now be empty" << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size:  " << horses.size() << endl << endl; // size of empty list ( = 0)

	List pigs;
	pigs.insertAsFirst(43);
	pigs.insertAsLast(-5);
	cout << endl << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list sum:  " << pigs.sum() << endl; // sum with negatives ( = 38)
	cout << "pigs list size:  " << pigs.size() << endl << endl;

	pigs = cows;
	cout << endl << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << endl << "cows list  :  " << cows << endl << endl;
	horses.insertAsLast(1); //insert last to empty list
	horses.insertAsLast(0);
	horses.insertAsLast(0); // insert the same last value twice
	horses.insertAsLast(99);
	cout << endl << "horses list:  " << horses << endl;
	cout << "horses list sum:  " << horses.sum() << endl;
	cout << "pigs list :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	system("pause");
	return 0;
}

