#ifndef MIDITO3OCTAVE_H
#define MIDITO3OCTAVE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MIDIto3Octave; }
QT_END_NAMESPACE

class MIDIto3Octave : public QMainWindow
{
    Q_OBJECT

public:
    MIDIto3Octave(QWidget *parent = nullptr);
    ~MIDIto3Octave();

private slots:


private:
    Ui::MIDIto3Octave *ui;
};
#endif // MIDITO3OCTAVE_H
