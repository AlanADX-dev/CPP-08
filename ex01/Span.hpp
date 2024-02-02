#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

class Span {

	private:
		unsigned int N;
		std::vector<int> numbers;

	protected:

	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

		template <typename Iterator>
		void addRange(Iterator begin, Iterator end) {
			if (std::distance(begin, end) + numbers.size() > N)
			{
				throw std::runtime_error("Adding this range exceeds the capacity of the Span.");
			}
			numbers.insert(numbers.end(), begin, end);
		}
};

#endif
