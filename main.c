#include <stdio.h>
#include <assert.h>
#include "Test_cases.h"
#include "Declarations.h"

MAX_COLORPAIR_NAME_CHARS = 16;
MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    
numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
