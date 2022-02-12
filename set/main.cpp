#include "set.hpp"
#include <set>
#include <iostream>

#ifndef NAMESPACE
# define NAMESPACE ft
#endif

int main(void) {
	
	std::cout << "           --- Constructors / iterators && [] ---             \n";
	std::cout << std::endl;
	{
        int myints[]= {10,20,30,40,50};
        NAMESPACE::set<int> m1 (myints,myints+5); 
		NAMESPACE::set<int>::iterator it;
		
		std::cout << "m1 -------------" << std::endl;
		for(it = m1.begin(); it != m1.end(); it++) {
			std::cout << " " << *it;
		}
	}
	std::cout << std::endl << std::endl;
	std::cout << "           --- Capacity ---             \n";
	std::cout << std::endl;
	{
        int myints[]= {10,20,30,40,50};
        NAMESPACE::set<int> m2 (myints,myints+5); 
		NAMESPACE::set<int> m1;
		if (m1.empty())
			std::cout << "m1 is empty" << std::endl;
		if (!m2.empty())
			std::cout << "m2 is not empty" << std::endl;
		std::cout << "m1 size : " << m1.size() << std::endl;
		std::cout << "m2 size : " << m2.size() << std::endl << std::endl;
	}
	std::cout << "           --- Modifiers ---             \n\n";
    {
        int myints[]= {10,20,30,40,50};
        NAMESPACE::set<int> m1 (myints,myints+5); 
        NAMESPACE::set<int>::iterator it = m1.begin(); 
        m1.insert (it,25);
        m1.insert (it,24);
        m1.insert (it,26);
        std::cout << "--> m1.insert(it, 25)" << std::endl;
        std::cout << "--> m1.insert(it, 24)" << std::endl;
        std::cout << "--> m1.insert(it, 26)" << std::endl;
        std::cout << "m1 : ";
        for (it = m1.begin(); it != m1.end(); it++) {
            std::cout << " " << *it;
        }
        std::cout << std::endl;
        m1.erase (50);
        m1.erase (24);
        m1.erase (10);
        std::cout << "--> m1.erase(50)" << std::endl;
        std::cout << "--> m1.erase(24)" << std::endl;
        std::cout << "--> m1.erase(10)" << std::endl;
        std::cout << "m1 : ";
        for (it = m1.begin(); it != m1.end(); it++) {
            std::cout << " " << *it;
        }
        std::cout << std::endl << std::endl;
    }
	std::cout << "           --- Operations ---             \n\n";
    {
        int myints[]= {10,20,30,40,50};
        NAMESPACE::set<int> m1 (myints,myints+5); 
        NAMESPACE::set<int>::iterator it; 

        std::cout << "m1 : ";
        for (it = m1.begin(); it != m1.end(); it++) {
            std::cout << " " << *it;
        }
        std::cout << std::endl;
        std::cout << "--> m1.count(30)" << std::endl;
        std::cout << "--> m1.count(99)" << std::endl;
        std::cout << "--> m1.count(50)" << std::endl;
        std::cout << "reach 30 ? " << m1.count(30) << std::endl;
        std::cout << "reach 90 ? " << m1.count(99) << std::endl;
        std::cout << "reach 50 ? " << m1.count(50) << std::endl;


        std::cout << "--> m1.lower_bound(20)" << std::endl;
        std::cout << "--> m1.upper_bound(20)" << std::endl;
        std::cout << "lower : " << *m1.lower_bound(20) << std::endl;
        std::cout << "upper : " << *m1.upper_bound(20) << std::endl;
        

        NAMESPACE::pair<NAMESPACE::set<int>::const_iterator,NAMESPACE::set<int>::const_iterator> ret;
        ret = m1.equal_range(20);
        std::cout << "equal_range of 20 : ";
        std::cout << *ret.first << "-" << *ret.second << std::endl;
    }
	return 0;
}
