#include "../map/map.hpp"
//#include "../set/set.hpp"
#include "../stack/stack.hpp"
#include <vector>
#include <map>
#include <set>
#include <stack>


#ifndef NAME //Namespace Type to be tested
# define NAME ft
#endif

template<class T>
void fill_map(T &a, int b){
    for(int i=0; i < b; i++){
        a.insert(NAME::make_pair(i,i));
    }
}