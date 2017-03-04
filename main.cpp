#include <iostream>
#include "fileIO.h"

using namespace std;

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		cout << "Usage: objInfo.exe <file>.obj" << endl;
	}
	else
	{
		File f(argv[1]);
		//cout << argv[1] << endl;
		
	}
	//cout << "Hello OBJ!" << endl;
	
		
	return 0;
}