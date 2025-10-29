#pragma once

#include <stdexcept>
#include <iostream>

class Span {
    private:
        unsigned int N;
        unsigned int index;
        int *data;
    public:
        Span(unsigned int N);
        ~Span();
        
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();

        const int* getData() const;
        unsigned int getSize() const;

        template <typename Iterator>
        void fillSpan(Iterator begin, Iterator end) {
            for (Iterator it = begin; it != end; it++)
                addNumber(*it);
        }
};

std::ostream& operator<<(std::ostream& o, const Span& span);
