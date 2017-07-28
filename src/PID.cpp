#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double p, double i, double d) {
	Kp = p;
	Ki = i;
	Kd = d;
	prev_cte = 0;
	curr_cte = 0;
	total_cte = 0;
}

void PID::UpdateError(double cte) {
	prev_cte = curr_cte;
	curr_cte = cte;
	total_cte += cte;
}

double PID::TotalError() {
	
}

