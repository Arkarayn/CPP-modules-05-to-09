#include "Span.hpp"

Span::Span(unsigned int n) : _size(0), _maxSize(n)
{
    _container.reserve(n);
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    _container = other.getContainer();
    _size = other.getSize();
    _maxSize = other.getMaxSize();
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (_size < _maxSize)
    {
        _container.push_back(number);
        _size++;
    }
    else
    {
        throw std::runtime_error("Container is full");
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_size + std::distance(begin, end) <= _maxSize)
    {
        _container.insert(_container.end(), begin, end);
        _size += std::distance(begin, end);
    }
    else
    {
        throw std::runtime_error("Container is full");
    }
}

void Span::addMoreNumbers(unsigned int amount, int span) //adds amount of random numbers from 0 to 10000 to the container
{
    srand(time(NULL));
    if (_size + amount <= _maxSize)
    {
        std::vector<int> temp;
        temp.reserve(amount);
        for (unsigned int i = 0; i < amount; i++)
        {
            temp.push_back(rand() % span);
        }
        addNumber(temp.begin(), temp.end());
    }
    else
    {
        throw std::runtime_error("Container is full");
    }
}

int Span::shortestSpan() //uses stl algorythms other than sort and adjacent_difference
{
    if (_size < 2)
    {
        throw std::runtime_error("Not enough elements to calculate span");
    }
    std::vector<int> sortedContainer = _container;
    std::sort(sortedContainer.begin(), sortedContainer.end());
    std::adjacent_difference(sortedContainer.begin(), sortedContainer.end(), sortedContainer.begin());
    return *std::min_element(sortedContainer.begin() + 1, sortedContainer.end());
}

int Span::longestSpan()
{
    if (_size < 2)
    {
        throw std::runtime_error("Not enough elements to calculate span");
    }
    return *std::max_element(_container.begin(), _container.end()) - *std::min_element(_container.begin(), _container.end());
}

unsigned int Span::getSize() const
{
    return _size;
}

unsigned int Span::getMaxSize() const
{
    return _maxSize;
}

std::vector<int> Span::getContainer() const
{
    return _container;
}

void Span::setContainer(std::vector<int> container)
{
    _container = container;
}

void Span::setSize(unsigned int size)
{
    _size = size;
}

void Span::setMaxSize(unsigned int maxSize)
{
    _maxSize = maxSize;
}