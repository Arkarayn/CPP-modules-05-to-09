#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    //more and different tests
    MutantStack<int> mstack2;
    mstack2.push(5);
    mstack2.push(20);
    mstack2.push(30);
    mstack2.push(42);
    mstack2.push(50);
    std::cout << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << mstack2.size() << std::endl;
    mstack2.push(23);
    mstack2.push(7);
    MutantStack<int>::iterator it2 = mstack2.begin();
    MutantStack<int>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    return 0;
}