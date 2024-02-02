#include "Span.hpp"

int		main()
{
	try {
		std::srand(std::time(NULL));

		int		n = 10000;
		Span sp = Span(n);

		for (int i = 0; i < (n - 1000); ++i)
		{
			sp.addNumber(rand() % (n - 1000));
		}

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;

		std::vector<int> rangeToAdd;
		for (int i = 0; i < 1000; ++i)
		{
			rangeToAdd.push_back(rand() % n + 1);
		}
		sp.addRange(rangeToAdd.begin(), rangeToAdd.end());

		std::cout << "Shortest span after addRange: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span after addRange: " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }
