#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int array[3][4], counter = 0;

	cout << "{\n";
	for (int i = 0; i < 3; i++) {
		cout << "{ ";
		for (int j = 0; j < 4; j++) {
			array[i][j] = rand() % 2;
			if (array[i][j] == 0) {
				counter++;
			}
			cout << array[i][j] << " ";
		}
		cout << "}" << endl;
	}
	cout << "}" << endl
		<< "There are " << counter << " zeros.";
}