#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

int main( int argc, char **argv )
{
    if ( argc < 2 ){
        std::cout << argv[ 0 ] << " number" << std::endl;

    }else{
        mp::cpp_int number( argv[ 1 ] );

        mp::cpp_int prev_00(1);
        mp::cpp_int prev_01(0);
        mp::cpp_int current(1);
        mp::cpp_int result(0);
        mp::cpp_int i(0);

        while( i < number )
        {
            result = current;
            current = prev_00 + prev_01;
            prev_01 = prev_00;
            prev_00 = current;
            i += 1;
        }
        std::cout << result << std::endl;
    }
}
