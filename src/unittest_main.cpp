// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-05-27T23:22:41Z as a part of c3pm_test_libmath
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

/*
 *  This is a dummy unit test program, created not to really test something, but to represent the
 *  idea of project structure and how it interacts with other project while using c3pm
 *  Link: https://github.com/c3pm/c3pm
 */

#include <iostream>
#include "exports/libmath.h"

int main() {
    if (square(2) != 4) {
        std::cerr << "test failed: square(2) = " << square(2) << std::endl;
        return 0;
    }
    if (square(-3) != 9) {
        std::cerr << "test failed: square(-3) = " << square(9) << std::endl;
        return 0;
    }
    if (square(10) != 100) {
        std::cerr << "test failed: square(10) = " << square(100) << std::endl;
        return 0;
    }
    if (square(-5) != 25) {
        std::cerr << "test failed: square(-5) = " << square(25) << std::endl;
        return 0;
    }
    std::cout << "Tests passed, all ok!" << std::endl;
    return 0;
}