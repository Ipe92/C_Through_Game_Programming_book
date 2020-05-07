#include <iostream>
#include <string>
#include <vector>

using namespace std;

string& refToElement(vector<string>& inventory, int i);

int main() {
	vector<string> inventory;
	vector<string>::const_iterator iter;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "Sending the returned reference to cout: " << endl;
	cout << refToElement(inventory, 0) << endl;

	cout << "Assigning the returned refence to another reference." << endl;
	string& rStr = refToElement(inventory, 1);
	cout << "Sending the new reference to cout:" << endl;
	cout << rStr << endl;

	cout << "Assigning the returned reference to a string object." << endl;
	string str = refToElement(inventory, 2);
	cout << "Sending the new string object to cout" << endl;
	cout << str << endl;

	cout << "Altering an object through a returned reference." << endl;
	rStr = "Healing Potion";
	cout << "Sending the altered object to cout:" << endl;
	cout << inventory[1] << endl;

	cout << "Printing inventory" << endl;
	for (iter = inventory.begin();
		iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}
	return 0;
}

string& refToElement(vector<string>& vec, int i) {
	return vec[i];
}