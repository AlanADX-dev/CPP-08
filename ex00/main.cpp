#include "easyfind.hpp"

int		main()
{
	std::vector<int> container;
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);
	container.push_back(4);
	container.push_back(5);

	std::vector<char> container2;
	container2.push_back('a');
	container2.push_back('b');
	container2.push_back('c');
	container2.push_back('d');
	container2.push_back('e');

	easyfind(container, 3);
	easyfind(container, 8);

	easyfind(container2, 'd');
	easyfind(container2, 'z');

	return 0;
}
