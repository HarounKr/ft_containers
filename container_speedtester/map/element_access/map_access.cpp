
#include "../../tester_utils_map.hpp"
#include "../../../map/map.hpp"

#ifndef NAME //Namespace Type to be tested
# define NAME ft
#endif

#ifndef TYPE //type of variable to be tested
# define TYPE int
#endif

int main ( void ){
    NAME::map<TYPE, TYPE> array_42000__;
    fill_map< NAME::map<TYPE, TYPE> >(array_42000__, 42000);
    for (int i = 0; i < 10000; i++){
        array_42000__[i];
    }
}