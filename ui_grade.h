/********************************************************************************
** Form generated from reading UI file 'grade.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADE_H
#define UI_GRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Grade
{
public:
    QAction *action_GPA;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_showAll;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search;
    QComboBox *comboBox_attr;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_sum;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_gpa;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Grade)
    {
        if (Grade->objectName().isEmpty())
            Grade->setObjectName(QStringLiteral("Grade"));
        Grade->resize(746, 509);
        Grade->setLayoutDirection(Qt::LeftToRight);
        action_GPA = new QAction(Grade);
        action_GPA->setObjectName(QStringLiteral("action_GPA"));
        centralWidget = new QWidget(Grade);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_showAll = new QPushButton(centralWidget);
        pushButton_showAll->setObjectName(QStringLiteral("pushButton_showAll"));
        QFont font;
        font.setPointSize(11);
        pushButton_showAll->setFont(font);

        horizontalLayout_3->addWidget(pushButton_showAll);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(150, 30));
        lineEdit->setMaximumSize(QSize(150, 30));
        lineEdit->setFont(font);

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_search = new QPushButton(centralWidget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setMinimumSize(QSize(80, 30));
        pushButton_search->setMaximumSize(QSize(80, 30));
        pushButton_search->setFont(font);

        horizontalLayout_3->addWidget(pushButton_search);

        comboBox_attr = new QComboBox(centralWidget);
        comboBox_attr->setObjectName(QStringLiteral("comboBox_attr"));
        comboBox_attr->setMinimumSize(QSize(0, 30));
        comboBox_attr->setMaximumSize(QSize(16777215, 30));
        comboBox_attr->setFont(font);

        horizontalLayout_3->addWidget(comboBox_attr);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 30));
        label_3->setMaximumSize(QSize(60, 30));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        label_sum = new QLabel(centralWidget);
        label_sum->setObjectName(QStringLiteral("label_sum"));
        label_sum->setMinimumSize(QSize(80, 30));
        label_sum->setMaximumSize(QSize(80, 30));
        label_sum->setFont(font);

        horizontalLayout_2->addWidget(label_sum);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 30));
        label->setMaximumSize(QSize(50, 30));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_gpa = new QLabel(centralWidget);
        label_gpa->setObjectName(QStringLiteral("label_gpa"));
        label_gpa->setMinimumSize(QSize(60, 30));
        label_gpa->setMaximumSize(QSize(60, 30));
        label_gpa->setFont(font);

        horizontalLayout->addWidget(label_gpa);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Grade->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Grade);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        Grade->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Grade);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Grade->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Grade);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Grade->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_GPA);

        retranslateUi(Grade);

        QMetaObject::connectSlotsByName(Grade);
    } // setupUi

    void retranslateUi(QMainWindow *Grade)
    {
        Grade->setWindowTitle(QApplication::translate("Grade", "\346\210\220\347\273\251\345\215\225", 0));
        action_GPA->setText(QApplication::translate("Grade", "GPA", 0));
        pushButton_showAll->setText(QApplication::translate("Grade", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        lineEdit->setText(QString());
        pushButton_search->setText(QApplication::translate("Grade", "\346\237\245\346\211\276", 0));
        comboBox_attr->clear();
        comboBox_attr->insertItems(0, QStringList()
         << QApplication::translate("Grade", "\345\277\205\344\277\256", 0)
         << QApplication::translate("Grade", "\351\200\211\344\277\256", 0)
         << QApplication::translate("Grade", "\351\231\220\351\200\211", 0)
         << QApplication::translate("Grade", "\351\200\232\351\200\211", 0)
         << QApplication::translate("Grade", "\345\244\215\345\220\210", 0)
         << QApplication::translate("Grade", "\347\264\240\346\213\223", 0)
        );
        label_3->setText(QApplication::translate("Grade", "\346\200\273\345\255\246\345\210\206\357\274\232", 0));
        label_sum->setText(QString());
        label->setText(QApplication::translate("Grade", "\347\273\251\347\202\271\357\274\232", 0));
        label_gpa->setText(QString());
        menu->setTitle(QApplication::translate("Grade", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class Grade: public Ui_Grade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADE_H
