#include <MacOS.h>

struct windowCoords {
    int x;
    int y;
};

struct windowCoords getActiveWindowCoords() {
    struct windowCoords coords;
    WindowPtr window;
    GetFrontWindow(&window);
    GetWindowBounds(window, kWindowGlobalPortRgn, &coords.x, &coords.y, NULL, NULL);
    return coords;
}