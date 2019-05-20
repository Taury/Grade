/********************************************************************************
** Form generated from reading UI file 'gpa.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPA_H
#define UI_GPA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPA
{
public:
    QListWidget *listWidget_grade5;
    QListWidget *listWidget_GPA5;
    QListWidget *listWidget_GPA2;
    QListWidget *listWidget_grade2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_2;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *GPA)
    {
        if (GPA->objectName().isEmpty())
            GPA->setObjectName(QStringLiteral("GPA"));
        GPA->resize(642, 479);
        GPA->setMinimumSize(QSize(642, 479));
        GPA->setMaximumSize(QSize(642, 479));
        listWidget_grade5 = new QListWidget(GPA);
        QFont font;
        font.setPointSize(9);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_grade5);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_grade5);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_grade5);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_grade5);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_grade5);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        listWidget_grade5->setObjectName(QStringLiteral("listWidget_grade5"));
        listWidget_grade5->setGeometry(QRect(50, 40, 256, 150));
        listWidget_grade5->setMinimumSize(QSize(0, 0));
        listWidget_grade5->setLayoutDirection(Qt::LeftToRight);
        listWidget_grade5->setFrameShape(QFrame::NoFrame);
        listWidget_grade5->setFrameShadow(QFrame::Sunken);
        listWidget_grade5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_grade5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_grade5->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_grade5->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_grade5->setResizeMode(QListView::Fixed);
        listWidget_grade5->setLayoutMode(QListView::SinglePass);
        listWidget_grade5->setGridSize(QSize(0, 30));
        listWidget_grade5->setViewMode(QListView::ListMode);
        listWidget_grade5->setSelectionRectVisible(true);
        listWidget_GPA5 = new QListWidget(GPA);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_GPA5);
        __qlistwidgetitem5->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_GPA5);
        __qlistwidgetitem6->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_GPA5);
        __qlistwidgetitem7->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget_GPA5);
        __qlistwidgetitem8->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget_GPA5);
        __qlistwidgetitem9->setTextAlignment(Qt::AlignCenter);
        listWidget_GPA5->setObjectName(QStringLiteral("listWidget_GPA5"));
        listWidget_GPA5->setGeometry(QRect(340, 40, 256, 151));
        listWidget_GPA5->setLayoutDirection(Qt::LeftToRight);
        listWidget_GPA5->setFrameShape(QFrame::NoFrame);
        listWidget_GPA5->setFrameShadow(QFrame::Sunken);
        listWidget_GPA5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_GPA5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_GPA5->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_GPA5->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_GPA5->setGridSize(QSize(0, 30));
        listWidget_GPA2 = new QListWidget(GPA);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget_GPA2);
        __qlistwidgetitem10->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget_GPA2);
        __qlistwidgetitem11->setTextAlignment(Qt::AlignCenter);
        listWidget_GPA2->setObjectName(QStringLiteral("listWidget_GPA2"));
        listWidget_GPA2->setGeometry(QRect(50, 200, 256, 60));
        listWidget_GPA2->setLayoutDirection(Qt::LeftToRight);
        listWidget_GPA2->setFrameShape(QFrame::NoFrame);
        listWidget_GPA2->setFrameShadow(QFrame::Sunken);
        listWidget_GPA2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_GPA2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_GPA2->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_GPA2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_GPA2->setGridSize(QSize(0, 30));
        listWidget_grade2 = new QListWidget(GPA);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget_grade2);
        __qlistwidgetitem12->setTextAlignment(Qt::AlignCenter);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget_grade2);
        __qlistwidgetitem13->setTextAlignment(Qt::AlignCenter);
        listWidget_grade2->setObjectName(QStringLiteral("listWidget_grade2"));
        listWidget_grade2->setGeometry(QRect(340, 200, 256, 61));
        listWidget_grade2->setLayoutDirection(Qt::LeftToRight);
        listWidget_grade2->setFrameShape(QFrame::NoFrame);
        listWidget_grade2->setFrameShadow(QFrame::Sunken);
        listWidget_grade2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_grade2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_grade2->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_grade2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_grade2->setResizeMode(QListView::Fixed);
        listWidget_grade2->setGridSize(QSize(0, 30));
        layoutWidget = new QWidget(GPA);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 620, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(618, 87));
        textBrowser_2->setMaximumSize(QSize(618, 87));
        QFont font1;
        font1.setPointSize(11);
        textBrowser_2->setFont(font1);
        textBrowser_2->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(textBrowser_2);

        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(618, 0));
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->setAutoScroll(true);
        tableWidget->setAutoScrollMargin(1);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setProperty("showDropIndicator", QVariant(true));
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setRowCount(3);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(45);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableWidget);

        tableWidget_2 = new QTableWidget(layoutWidget);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 5, __qtablewidgetitem22);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setMaximumSize(QSize(16777215, 62));
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget_2);

        listWidget_GPA5->raise();
        listWidget_grade2->raise();
        listWidget_grade5->raise();
        listWidget_GPA2->raise();
        layoutWidget->raise();

        retranslateUi(GPA);

        QMetaObject::connectSlotsByName(GPA);
    } // setupUi

    void retranslateUi(QWidget *GPA)
    {
        GPA->setWindowTitle(QApplication::translate("GPA", "GPA", 0));

        const bool __sortingEnabled = listWidget_grade5->isSortingEnabled();
        listWidget_grade5->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_grade5->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("GPA", "\344\274\230\347\247\200", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_grade5->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("GPA", "\350\211\257\345\245\275", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_grade5->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("GPA", "\344\270\255\347\255\211", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_grade5->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("GPA", "\345\217\212\346\240\274", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_grade5->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("GPA", "\344\270\215\345\217\212\346\240\274", 0));
        listWidget_grade5->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_GPA5->isSortingEnabled();
        listWidget_GPA5->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = listWidget_GPA5->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("GPA", "4.5", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_GPA5->item(1);
        ___qlistwidgetitem6->setText(QApplication::translate("GPA", "3.5", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_GPA5->item(2);
        ___qlistwidgetitem7->setText(QApplication::translate("GPA", "2.5", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_GPA5->item(3);
        ___qlistwidgetitem8->setText(QApplication::translate("GPA", "1.5", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_GPA5->item(4);
        ___qlistwidgetitem9->setText(QApplication::translate("GPA", "0.0", 0));
        listWidget_GPA5->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = listWidget_GPA2->isSortingEnabled();
        listWidget_GPA2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem10 = listWidget_GPA2->item(0);
        ___qlistwidgetitem10->setText(QApplication::translate("GPA", "2.5", 0));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_GPA2->item(1);
        ___qlistwidgetitem11->setText(QApplication::translate("GPA", "0.0", 0));
        listWidget_GPA2->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = listWidget_grade2->isSortingEnabled();
        listWidget_grade2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem12 = listWidget_grade2->item(0);
        ___qlistwidgetitem12->setText(QApplication::translate("GPA", "\351\200\232\350\277\207", 0));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_grade2->item(1);
        ___qlistwidgetitem13->setText(QApplication::translate("GPA", "\344\270\215\351\200\232\350\277\207", 0));
        listWidget_grade2->setSortingEnabled(__sortingEnabled3);

        textBrowser_2->setHtml(QApplication::translate("GPA", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'sans-serif';\">\345\271\263\345\235\207\345\255\246\345\210\206\347\273\251\347\202\271\347\232\204\350\256\241\347\256\227\345\205\254\345\274\217\344\270\272\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'sans-serif';\">\345\271\263\345\235\207\345\255\246\345\210\206\347\273\251\347\202\271\357\274\210</span><span style=\" font-family:'monospace';\">GPA</span><span style=\" font-family:'sans-serif';\">\357\274"
                        "\211</span><span style=\" font-family:'monospace';\">=</span><span style=\" font-family:'sans-serif';\">\342\210\221\357\274\210\350\257\276\347\250\213\346\210\220\347\273\251\347\273\251\347\202\271\342\210\227\350\257\276\347\250\213\345\255\246\345\210\206\346\225\260\357\274\211/n\351\227\250\350\257\276\347\250\213\345\255\246\345\210\206\346\200\273\346\225\260n1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'sans-serif';\">\357\274\210\350\257\264\346\230\216\357\274\232\345\217\230\351\207\217</span><span style=\" font-family:'monospace';\">n</span><span style=\" font-family:'sans-serif';\">\344\270\200\350\210\254\344\273\243\350\241\250\347\273\237\350\256\241\350\256\241\347\256\227\350\214\203\345\233\264\345\206\205\347\232\204\346\214\211\350\257\276\347\250\213\347\274\226\345\217\267\347\273\237\350\256\241\347\232\204\350\257\276\347\250\213\351\227\250\346\225\260\357\274\211<"
                        "/span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GPA", "\350\200\203\346\240\270\347\261\273\345\210\253", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GPA", "\350\257\276\347\250\213\346\210\220\347\273\251", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GPA", "\346\210\220\347\273\251\347\273\251\347\202\271", 0));

        const bool __sortingEnabled4 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("GPA", "\347\231\276\345\210\206\345\210\266", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("GPA", "\344\272\224\347\272\247\345\210\266", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(2, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("GPA", "\344\272\214\347\272\247\345\210\266", 0));
        tableWidget->setSortingEnabled(__sortingEnabled4);

        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("GPA", "\345\277\205\344\277\256", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("GPA", "\351\200\211\344\277\256", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("GPA", "\351\231\220\351\200\211", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("GPA", "\351\200\232\351\200\211", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("GPA", "\345\244\215\345\220\210", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("GPA", "\347\264\240\346\213\223", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("GPA", "\345\255\246\345\210\206\350\246\201\346\261\202", 0));

        const bool __sortingEnabled5 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("GPA", "120.5\345\210\206", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("GPA", "8\345\210\206", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem15->setText(QApplication::translate("GPA", "16\345\210\206", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem16->setText(QApplication::translate("GPA", "4\345\210\206", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem17->setText(QApplication::translate("GPA", "6\345\210\206", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->item(0, 5);
        ___qtablewidgetitem18->setText(QApplication::translate("GPA", "6\345\210\206", 0));
        tableWidget_2->setSortingEnabled(__sortingEnabled5);

    } // retranslateUi

};

namespace Ui {
    class GPA: public Ui_GPA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPA_H
