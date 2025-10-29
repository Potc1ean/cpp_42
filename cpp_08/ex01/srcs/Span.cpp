#include "Span.hpp"

Span::Span(unsigned int N) : N(N), index(0), data(new int[N]) {

}

Span::~Span() {
    delete [] data;
}

void Span::addNumber(int nb) {
    if (index >= N)
        throw std::runtime_error("Span is full.");
    if (index == 0)
        data[index] = nb;
    else {
        int i = index;
        data[i] = nb;
        while (i >= 1 && data[i - 1] > data[i]) {
            int tmp = data[i - 1];
            data[i - 1] = data[i];
            data[i] = tmp;
            i--;
        }
    }
    index++;
}

int Span::shortestSpan() {
    if (index < 2)
        throw std::runtime_error("Not enough elements to find a span");

    int shortestSpan = data[1] - data[0];

    for (unsigned int i = 0; i < index - 1; i++) {
        int currentSpan = data[i + 1] - data[i];
        if (shortestSpan > currentSpan)
            shortestSpan = currentSpan;
    }
    return shortestSpan;
}

int Span::longestSpan() {
    if (index < 2)
        throw std::runtime_error("Not enough elements to find a span");
    return data[index - 1] - data[0];
}

const int* Span::getData() const {
    return data;
}

unsigned int Span::getSize() const {
    return N;
}

std::ostream& operator<<(std::ostream& o, const Span& span) {
    const int *data = span.getData();
    unsigned int size = span.getSize();

    o << "///////////////////////" << std::endl;
    o << "The Span data contain :" << std::endl;
    for (unsigned int i = 0; i < size; i++) {
        o << "Index " << i << " : " << data[i] << std::endl;
    }
    o << "///////////////////////" << std::endl;
    return o;
}
