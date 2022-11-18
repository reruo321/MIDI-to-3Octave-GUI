#include "midito3octave.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MIDIto3Octave w;
    w.show();
    return a.exec();
}
