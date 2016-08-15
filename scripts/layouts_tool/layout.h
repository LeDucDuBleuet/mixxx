#ifndef LAYOUT_H
#define LAYOUT_H

#include <QString>
#include <QX11Info>
#include "defs.h"

struct KbdKeyChar {
    char16_t character;
    bool is_dead;
};

typedef const KbdKeyChar (*KeyboardLayoutPointer)[2];

class Layout {
public:
    Layout(QString varName, QString name, KeyboardLayoutPointer pData);
    Layout(QString varName, QString name);
    virtual ~Layout();

    QString varName;
    QString name;

private:
    KbdKeyChar data[LAYOUT_LEN][2];
};


#endif // LAYOUT_H