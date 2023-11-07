#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// opens the tables.txt document for writing
	ofstream fn;
	fn.open("tables.txt");
	if (fn.is_open() == false)
	{
		cerr << " cannot create file " << endl;
		return -1;
	}
	
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			fn << r * c << "\t";
		}
		fn << endl;
	}
	fn << endl;

	fn.close();

	return 0;
}