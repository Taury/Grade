#include "grade.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Grade w;
    w.show();

    return a.exec();
}
