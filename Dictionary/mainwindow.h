#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

//Definition of Node
struct Node {
  QString word;
  QString pro;
  QString pos;
  QString meaning;
  QString syn;
  QString anto;
  QString ex;
  Node* left; // Pointer to the left child
  Node* right; // Pointer to the right child
};


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Choice2_clicked();

    void on_Choice1_clicked();

    void on_searchButton_clicked();

    void on_AddButton_clicked();

    void on_startButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QString word, pro, pos, meaning, syn, anto, ex, searchWord;
    QSqlDatabase db;

    Node* root;
    Node* res;

    Node* CreateNode(QString word, QString pro, QString pos, QString meaning, QString syn, QString anto, QString ex);
    Node* insertBST(Node* root, Node* node);
    void builtBST();
    Node* searchBST(Node* root, QString word);
    void closeBST(Node* root);
    void insertNodesIntoDatabase(Node* root);
};
#endif // MAINWINDOW_H
