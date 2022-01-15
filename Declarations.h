enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
const int MAX_COLORPAIR_NAME_CHARS = 16;

const char* MajorColorNames[];
const char* MinorColorNames[];

int numberOfMajorColors;

int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
