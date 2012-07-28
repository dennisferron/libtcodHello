#include "libtcod.hpp"

int main() {
    TCODConsole::initRoot(80, 50, "Libtcod Hello World");
    TCODConsole::root->printCenter(40, 25, TCOD_BKGND_NONE, "Libtcod says: Hello, World!");
    TCODConsole::flush();
    TCODConsole::waitForKeypress(true);
}
