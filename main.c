#include <stdio.h>
#include "Test_cases.h"
#include "ColorPairs.h"

numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    
numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
