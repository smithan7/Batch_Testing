//============================================================================
// Name        : Batch_testing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {

	int coms[11] = {5, 10,20,30,40,50,60,70,80,90,100};
	int num[7] = {2,3,4,5,6,7,8};

	int nTrials = 50;
	for(int c=0; c<7; c++){
		for(int i=0; i<nTrials; i++){
			char buffer[50];
		  	sprintf (buffer, "./../inference_coordination/Debug/inference_coordination %d", num[c]);
			int r = system( buffer );
			cerr << "r: " << r << endl;
			if( r == -1 ){
				i--;
			}
			//system("./../inference_coordination/Debug/inference_coordination");
		}
	}
	return 0;
}
