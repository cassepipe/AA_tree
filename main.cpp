#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <ostream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <map>

#include "simple_aa_tree.hpp"

using std::vector;
using std::ostream;
using std::map;
using std::cout;
using std::string;

	template< typename T >
std::ostream& operator<<(ostream& os, std::vector<T> vec)
{
	for (typename vector<T>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		os << *it;
	}
	return os;
}

int main()
{
	{
		//std::string str = 0;
		//std::cout << str << "\n";
		using ft::AA_tree;

		AA_tree<int, string> tree;

		tree.insert(1, string("one"));
		tree.insert(2, string("two"));
		tree.insert(3, string("three"));
		tree.insert(4, string("four"));
		tree.insert(0, string("zero"));

		tree.print_dot();
	}

	return 0;
}
