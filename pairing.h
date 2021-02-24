#include <stdio.h>

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

