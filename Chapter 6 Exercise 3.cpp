#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double fallingDistance(double time, double gravity)
{
	return 0.5 * gravity * (time * time);
}

int main()
{
	double distance;

	for (int time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time, 9.8);
		cout << "The distance fallen after " << time << " seconds is: " << distance << " meters." << endl;
	}

}

