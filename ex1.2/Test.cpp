/**
 *
 * AUTHORS: <Avigael Abitbol>
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



TEST_CASE("Good snowman code") { //from all of the Organs

    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(41312222) == string("  ___ \n (_*_)\n\\(O,.)/\n (] [) \n (\" \")"));
    CHECK(snowman(11123344) == string("      \n _===_\n (.,o) \n/(   )\\\n (   )"));
    CHECK(snowman(12311111) == string("      \n _===_\n (O..) \n<( : )>\n ( : )"));
    CHECK(snowman(11421344) == string("      \n _===_\n (-,o) \n<(   )\\\n (   )"));
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(11111121) == string("      \n _===_\n (.,.) \n<(] [)>\n ( : )"));
    CHECK(snowman(11111124) == string("      \n _===_\n (.,.) \n<(] [)>\n (   )"));
    CHECK(snowman(21114441) == string("  ___ \n .....\n (.,.) \n (   ) \n ( : )"));
    CHECK(snowman(31313431) == string("   _  \n  /_\\ \n (O,.) \n/(> <) \n ( : )"));
    CHECK(snowman(11424344) == string("      \n _===_\n (-,o) \n (   )\\\n (   )"));
    CHECK(snowman(12341111) == string("      \n _===_\n (O.-) \n<( : )>\n ( : )"));
    CHECK(snowman(11423344) == string("      \n _===_\n (-,o) \n/(   )\\\n (   )"));
    CHECK(snowman(44312222) == string("  ___ \n (_*_)\n\\(O .)/\n (] [) \n (\" \")"));
    CHECK(snowman(41114411) == string("  ___ \n (_*_)\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(21114431) == string("  ___ \n .....\n (.,.) \n (> <) \n ( : )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
    CHECK(snowman(33333433) == string("   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));
    CHECK(snowman(44332211) == string(" ___\n(_*_)\n\\(O O)/\n( : )\n( : )"));
    CHECK(snowman(13114411) == string("  _===_\n(._.)\n( : )\n( : )"));

}





TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(11223388));
    CHECK_THROWS(snowman(12344103));
    CHECK_THROWS(snowman(-32343323));
}


TEST_CASE("input too short") {
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(4333));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(266));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(214321));
}


TEST_CASE("input too long") {
    CHECK_THROWS(snowman(333111113));
    CHECK_THROWS(snowman(111555551));
    CHECK_THROWS(snowman(211333331));
    CHECK_THROWS(snowman(113333331));
}



TEST_CASE("combinatiaon lllegal") {
    CHECK_THROWS(snowman(2290));
    CHECK_THROWS(snowman(-47632));
    CHECK_THROWS(snowman(1138530));
    CHECK_THROWS(snowman(-52));
    CHECK_THROWS(snowman(22792));
    CHECK_THROWS(snowman(7777));
    CHECK_THROWS(snowman(999999999));
    CHECK_THROWS(snowman(-55566655));

}








    


