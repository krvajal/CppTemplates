#include <iostream>
#include <list>
#include <string>
#include <utility>
#include <vector>

// The code below is currently broken and cannot compile.
// You need to make the function completely generic by using template types for its parameters.
//
// You must ONLY edit the AddValue() function.
// You MUST NOT create additional functions or include other headers.
//
// BONUS assignment: make use of move semantics for greater efficiency.

void AddValue(std::vector<int>& container, int value) {
	container.emplace_back(value);
}

//Do not edit anything below this line. You also don't need to read it to pass this test.

int main() {
	std::vector<int> v;
	AddValue(v, 5);
	AddValue(v, 2);
	
	if (v.size() != 2 || v[0] != 5 || v[1] != 2)
		std::cerr << "vector int test failed!\n";
	
	std::vector<std::string> v2;
	AddValue(v2, "first");
	AddValue(v2, "second");

	if (v2.size() != 2 || v2[0] != "first" || v2[1] != "second")
		std::cerr << "vector<string> test failed!\n";

	std::list<bool> l;
	AddValue(l, true);
	AddValue(l, false);

	if (l.size() != 2 || l.front() != true || l.back() != false)
		std::cerr << "list<bool> test failed!\n";

	std::list<std::vector<int>> l2;
	std::vector<int> e1, e2;
	AddValue(e1, 9);
	AddValue(e1, 99);
	AddValue(e2, 8);
	AddValue(e2, 888);
	AddValue(l2, std::move(e1));
	AddValue(l2, std::move(e2));
	if (l2.front().size() != 2 || l2.front()[0] != 9 || l2.front()[1] != 99 || l2.back().size() != 2 || l2.back()[0] != 8 || l2.back()[1] != 888)
		std::cerr << "list<vector<int>> test failed!\n";
	return 0;
}
