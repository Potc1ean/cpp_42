#include "MutanStack.hpp"

int main() 
{
	std::cout << "==== Test MutantStack ====" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(42);
	mstack.push(0);

	std::cout << "Iterating through MutantStack:" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << std::endl;

	std::cout << "Reverse iteration:" << std::endl;
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
		std::cout << *rit << std::endl;

	std::cout << "==== Comparison with std::list ====" << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	lst.pop_back();
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(42);
	lst.push_back(0);

	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << std::endl;
	return 0;
}
