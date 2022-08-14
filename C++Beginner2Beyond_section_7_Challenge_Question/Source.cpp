#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << vector1.at(0) << " ";
	cout << vector1.at(1) << endl;
	cout << endl;

	for (int i = 0; i < vector1.size();i++)
		cout << vector1[i] << " ";

	cout << endl;
	cout << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << vector2.at(0) << " ";
	cout << vector2.at(1) << endl;

	cout << endl;

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";

	cout << endl;
	cout << endl;

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

	cout << endl;
	vector1.at(0) = 1000;

	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

	cout << endl;
	cout << vector1.at(0) << " ";
	cout << vector1.at(1) << endl;
	return 0;
}