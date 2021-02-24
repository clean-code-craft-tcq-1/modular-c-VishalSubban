#include <stdio.h>
#include <assert.h>

const char* MajorColorNames[] = {"White",
                                 "Red",
                                 "Black",
                                 "Yellow",
                                 "Violet"
};

    
const char* MinorColorNames[] = {"Blue",
                                 "Orange",
                                 "Green",
                                 "Brown",
                                 "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

enum MajorColor {
    WHITE = 0, 
    RED, 
    BLACK, 
    YELLOW, 
    VIOLET
};
enum MinorColor {
    BLUE = 0, 
    ORANGE, 
    GREEN, 
    BROWN, 
    SLATE
};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

void testNumberToPair(int pairNumber,
                      enum MajorColor expectedMajor,
                      enum MinorColor expectedMinor);

void testPairToNumber(enum MajorColor major,
                      enum MinorColor minor,
                      int expectedPairNumber);


