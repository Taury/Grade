#ifndef GPA_H
#define GPA_H

#include <QWidget>

namespace Ui {
class GPA;
}

class GPA : public QWidget
{
    Q_OBJECT

public:
    explicit GPA(QWidget *parent = 0);

    ~GPA();

private:
    Ui::GPA *ui;
};

#endif // GPA_H
