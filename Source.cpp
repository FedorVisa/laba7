#include "longtohex.h"
#include <string>
#include <cmath>
using namespace std;

double strtodo(string b) {
	int dot = 0;
	double num = 1;
	int cinum=0;
	bool minus = false;
	double end=0;
	for (int i = 0; i < b.size(); ++i) {
		if (b[i] == '.')  dot++; 
		if (dot>1 || b[0] == '.')return 0;
	}

	int str_ln = 0;
	for (int i = b.size() - 1; i >= 0 && b[i] != '.'; --i)str_ln++;

	if (dot>0) {
		for (int i = 0; i < str_ln; i++)num /= 10;
	}
	 for (int i = b.size() - 1; i >= 0; --i,num*=10) {	
		if (b[0] == '-') {
			minus = true;
			break;
		}
		else if (b[i] == '.') {
			num /= 10;
			continue;
		}
		else if ((b[i] >= '1') && (b[i] <= '9')) cinum = b[i] - '0';
		else return 0;

	end += (cinum * num);
	}
	if (minus == true)return -end;
	else return end;

}



