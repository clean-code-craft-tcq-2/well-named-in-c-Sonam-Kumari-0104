#include "Print_colorCodes.h"

Void ColorCodingManual()
{
	printf("Color Coding Manual");
	int pairNumber;
  int totalPairs = 25;
  for (pairNumber = 1; pairNumber <= totalPairs; pairNumber++)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairNumber);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%s PairNo: %d\n", colorPairNames, pairNumber);
	}
}
