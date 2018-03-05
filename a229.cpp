#include <iostream>
#include <deque>
using namespace std;
int num = 0;

void process(int, int, int);
deque<int> qu;

int main() {
	while (cin >> num) {
		qu.clear();
		process(0, 0, 0);

	}


}

void process(int length, int left, int right) {
	if (length == num * 2) {
		for (int a = 0; a < num * 2; a++) {
			if (qu[a] == 1)
				cout << "(";
			else
				cout << ")";
		}
		cout << "\n";
		return;


	}
	if (left < num) {
		qu.push_back(1);
		process(length + 1, left + 1, right);
		qu.pop_back();

	}
	if (right < left) {
		qu.push_back(-1);
		process(length + 1, left, right + 1);
		qu.pop_back();

	}
}
