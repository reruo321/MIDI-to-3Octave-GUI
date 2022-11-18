#include "midito3octave.h"
#include "./ui_midito3octave.h"

MIDIto3Octave::MIDIto3Octave(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MIDIto3Octave)
{
    ui->setupUi(this);
}

MIDIto3Octave::~MIDIto3Octave()
{
    delete ui;
}
