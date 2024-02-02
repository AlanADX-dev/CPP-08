#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
void	easyfind(T &container, int value)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
		std::cout << "Value found at index:" <<  std::distance(container.begin(), it) << std::endl;
	else
		std::cout << "Value not found in container" << std::endl;
}
