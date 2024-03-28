/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Tahmeed;
    QPushButton *startButton;
    QLabel *label_2;
    QWidget *Home;
    QPushButton *Choice2;
    QPushButton *Choice1;
    QLabel *label;
    QWidget *SearchPage;
    QLineEdit *search_in;
    QPushButton *searchButton;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *AddPage;
    QLineEdit *word_in;
    QLineEdit *pro_in;
    QLineEdit *pos_in;
    QLineEdit *mean_in;
    QLineEdit *syn_in;
    QLineEdit *anto_in;
    QLineEdit *ex_in;
    QPushButton *AddButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QWidget *ResultPage;
    QLabel *show_word;
    QLabel *show_pro;
    QLabel *show_pos;
    QLabel *show_meaning;
    QLabel *show_syn;
    QLabel *show_anto;
    QLabel *show_ex;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 800, 600));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Tahmeed = new QWidget();
        Tahmeed->setObjectName(QString::fromUtf8("Tahmeed"));
        startButton = new QPushButton(Tahmeed);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(300, 120, 210, 260));
        startButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/Tahmeed_recommend.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon);
        startButton->setIconSize(QSize(210, 260));
        label_2 = new QLabel(Tahmeed);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/page1_back.jpg")));
        stackedWidget->addWidget(Tahmeed);
        label_2->raise();
        startButton->raise();
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        Choice2 = new QPushButton(Home);
        Choice2->setObjectName(QString::fromUtf8("Choice2"));
        Choice2->setGeometry(QRect(330, 250, 140, 40));
        Choice2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Choice1 = new QPushButton(Home);
        Choice1->setObjectName(QString::fromUtf8("Choice1"));
        Choice1->setGeometry(QRect(330, 199, 140, 40));
        Choice1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(167, 255, 255);"));
        label = new QLabel(Home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Jahur_recommend.jpg")));
        stackedWidget->addWidget(Home);
        label->raise();
        Choice2->raise();
        Choice1->raise();
        SearchPage = new QWidget();
        SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);"));
        search_in = new QLineEdit(SearchPage);
        search_in->setObjectName(QString::fromUtf8("search_in"));
        search_in->setGeometry(QRect(210, 220, 341, 51));
        search_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        searchButton = new QPushButton(SearchPage);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(330, 290, 101, 31));
        searchButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(SearchPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 800, 600));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bg.jpg")));
        pushButton = new QPushButton(SearchPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 440, 80, 90));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 0, 77);"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(80, 80));
        stackedWidget->addWidget(SearchPage);
        label_3->raise();
        search_in->raise();
        searchButton->raise();
        pushButton->raise();
        AddPage = new QWidget();
        AddPage->setObjectName(QString::fromUtf8("AddPage"));
        AddPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        word_in = new QLineEdit(AddPage);
        word_in->setObjectName(QString::fromUtf8("word_in"));
        word_in->setGeometry(QRect(100, 40, 170, 40));
        word_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        pro_in = new QLineEdit(AddPage);
        pro_in->setObjectName(QString::fromUtf8("pro_in"));
        pro_in->setGeometry(QRect(310, 40, 170, 40));
        pro_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        pos_in = new QLineEdit(AddPage);
        pos_in->setObjectName(QString::fromUtf8("pos_in"));
        pos_in->setGeometry(QRect(520, 40, 170, 40));
        pos_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        mean_in = new QLineEdit(AddPage);
        mean_in->setObjectName(QString::fromUtf8("mean_in"));
        mean_in->setGeometry(QRect(100, 100, 591, 40));
        mean_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        syn_in = new QLineEdit(AddPage);
        syn_in->setObjectName(QString::fromUtf8("syn_in"));
        syn_in->setGeometry(QRect(100, 160, 591, 40));
        syn_in->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;"));
        anto_in = new QLineEdit(AddPage);
        anto_in->setObjectName(QString::fromUtf8("anto_in"));
        anto_in->setGeometry(QRect(100, 220, 591, 40));
        anto_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        ex_in = new QLineEdit(AddPage);
        ex_in->setObjectName(QString::fromUtf8("ex_in"));
        ex_in->setGeometry(QRect(100, 280, 591, 40));
        ex_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 10px;"));
        AddButton = new QPushButton(AddPage);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(340, 370, 80, 25));
        AddButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 127, 127);"));
        label_4 = new QLabel(AddPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 800, 600));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bg2.jpg")));
        label_4->setScaledContents(true);
        pushButton_2 = new QPushButton(AddPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 440, 80, 90));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(80, 80));
        stackedWidget->addWidget(AddPage);
        label_4->raise();
        word_in->raise();
        pro_in->raise();
        pos_in->raise();
        mean_in->raise();
        syn_in->raise();
        anto_in->raise();
        ex_in->raise();
        AddButton->raise();
        pushButton_2->raise();
        ResultPage = new QWidget();
        ResultPage->setObjectName(QString::fromUtf8("ResultPage"));
        show_word = new QLabel(ResultPage);
        show_word->setObjectName(QString::fromUtf8("show_word"));
        show_word->setGeometry(QRect(280, 10, 231, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setItalic(true);
        show_word->setFont(font);
        show_word->setStyleSheet(QString::fromUtf8("padding-left: 10px;"));
        show_word->setAlignment(Qt::AlignCenter);
        show_word->setWordWrap(true);
        show_pro = new QLabel(ResultPage);
        show_pro->setObjectName(QString::fromUtf8("show_pro"));
        show_pro->setGeometry(QRect(530, 50, 240, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        font1.setItalic(true);
        show_pro->setFont(font1);
        show_pro->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 80, 129);\n"
"padding-left: 10px;"));
        show_pro->setWordWrap(true);
        show_pos = new QLabel(ResultPage);
        show_pos->setObjectName(QString::fromUtf8("show_pos"));
        show_pos->setGeometry(QRect(20, 50, 240, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        show_pos->setFont(font2);
        show_pos->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 80, 129);\n"
"padding-left: 10px;"));
        show_pos->setWordWrap(true);
        show_meaning = new QLabel(ResultPage);
        show_meaning->setObjectName(QString::fromUtf8("show_meaning"));
        show_meaning->setGeometry(QRect(20, 110, 750, 50));
        show_meaning->setFont(font2);
        show_meaning->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 172, 136);\n"
"background-color: rgb(215, 255, 178);\n"
"padding-left: 10px;"));
        show_meaning->setWordWrap(true);
        show_syn = new QLabel(ResultPage);
        show_syn->setObjectName(QString::fromUtf8("show_syn"));
        show_syn->setGeometry(QRect(20, 200, 750, 50));
        show_syn->setFont(font2);
        show_syn->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"padding-left: 10px;"));
        show_syn->setWordWrap(true);
        show_anto = new QLabel(ResultPage);
        show_anto->setObjectName(QString::fromUtf8("show_anto"));
        show_anto->setGeometry(QRect(20, 290, 750, 50));
        show_anto->setFont(font2);
        show_anto->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"padding-left: 10px;"));
        show_anto->setWordWrap(true);
        show_ex = new QLabel(ResultPage);
        show_ex->setObjectName(QString::fromUtf8("show_ex"));
        show_ex->setGeometry(QRect(20, 380, 750, 50));
        show_ex->setFont(font2);
        show_ex->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 248, 165);\n"
"padding-left: 10px;"));
        show_ex->setWordWrap(true);
        label_5 = new QLabel(ResultPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 800, 600));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/final_bg.jpg")));
        label_6 = new QLabel(ResultPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 221, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri Light"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("background-color : transparent; color : white;"));
        label_7 = new QLabel(ResultPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 240, 221, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri Light"));
        font4.setPointSize(14);
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("background-color : transparent; color : white;"));
        label_8 = new QLabel(ResultPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 340, 221, 41));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color : transparent; color : white;"));
        pushButton_3 = new QPushButton(ResultPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 440, 80, 90));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(80, 80));
        stackedWidget->addWidget(ResultPage);
        label_5->raise();
        show_word->raise();
        show_pro->raise();
        show_pos->raise();
        show_meaning->raise();
        show_syn->raise();
        show_anto->raise();
        show_ex->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        pushButton_3->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QString());
        label_2->setText(QString());
        Choice2->setText(QApplication::translate("MainWindow", "Add", nullptr));
        Choice1->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QString());
        search_in->setText(QString());
        search_in->setPlaceholderText(QApplication::translate("MainWindow", "Type a word", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "Look it up", nullptr));
        label_3->setText(QString());
        pushButton->setText(QString());
        word_in->setPlaceholderText(QApplication::translate("MainWindow", "Word", nullptr));
        pro_in->setPlaceholderText(QApplication::translate("MainWindow", "Pronounciation", nullptr));
        pos_in->setPlaceholderText(QApplication::translate("MainWindow", "Parts of Speech", nullptr));
        mean_in->setPlaceholderText(QApplication::translate("MainWindow", "Meaning", nullptr));
        syn_in->setPlaceholderText(QApplication::translate("MainWindow", "Similar Words", nullptr));
        anto_in->setPlaceholderText(QApplication::translate("MainWindow", "Opposite Words", nullptr));
        ex_in->setPlaceholderText(QApplication::translate("MainWindow", "Example", nullptr));
        AddButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QString());
        show_word->setText(QApplication::translate("MainWindow", "Word", nullptr));
        show_pro->setText(QApplication::translate("MainWindow", "Pronounciation", nullptr));
        show_pos->setText(QApplication::translate("MainWindow", "Parts of Speech", nullptr));
        show_meaning->setText(QApplication::translate("MainWindow", "Meaning", nullptr));
        show_syn->setText(QApplication::translate("MainWindow", "Synonym", nullptr));
        show_anto->setText(QApplication::translate("MainWindow", "Antomyn", nullptr));
        show_ex->setText(QApplication::translate("MainWindow", "Example", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Synonym", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Antonym", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Example", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
