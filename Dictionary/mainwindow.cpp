#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // ডাটাবেজ খোলা
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/Projects/Dictionary/Dictionary/dbase.db");
    db.open();
    if (db.isOpen()) qDebug("Database accessed.");
    else qDebug("Check the location of the database file");
    //qDebug() << db.isOpen();
    root = nullptr;
    builtBST();
}

MainWindow::~MainWindow()
{
    closeBST(root);
    db.close();
    delete ui;
}


Node* MainWindow::CreateNode(QString word, QString pro, QString pos, QString meaning, QString syn, QString anto, QString ex) {
  Node* node = new Node();
  node->word = word;
  node->pro = pro;
  node->pos = pos;
  node->meaning = meaning;
  node->syn = syn;
  node->anto = anto;
  node->ex = ex;
  node->left = NULL;
  node->right = NULL;
  return node;
}


Node* MainWindow::insertBST(Node *root, Node *node) {
  if (root == NULL) {
    return node;
  }
  if (node->word < root->word) {
    root->left = insertBST(root->left, node);
  }
  else if (node->word > root->word) {
    root->right = insertBST(root->right, node);
  }

  return root;
}


Node* MainWindow::searchBST(Node *root, QString word) {
  if (root == NULL) {
    return NULL;
  }
  if (word == root->word) {
    return root;
  }
  if (word < root->word) {
    return searchBST(root->left, word);
  }
  else {
    return searchBST(root->right, word);
  }
}

void MainWindow::builtBST() {
    QSqlQuery query;
    query.exec("SELECT * FROM t");
    while (query.next()) {
        word = query.value(0).toString();
        pro = query.value(1).toString();
        pos = query.value(2).toString();
        meaning = query.value(3).toString();
        syn = query.value(4).toString();
        anto = query.value(5).toString();
        ex = query.value(6).toString();

        Node* node = CreateNode(word, pro, pos, meaning, syn, anto, ex);
        // Insert the node into the binary search tree
        root = insertBST(root, node);
        qDebug() << word << " Reading " << pro << pos << meaning << syn << anto << ex;
    }
}


void MainWindow::closeBST(Node* root) {
    // Clear the database
    QSqlQuery clearQuery;
    clearQuery.exec("DELETE FROM t");

    // Insert nodes from the BST into the database
    insertNodesIntoDatabase(root);
}


void MainWindow::insertNodesIntoDatabase(Node* root) {
    if (root) {
        // Insert nodes in the left subtree
        insertNodesIntoDatabase(root->left);

        // Check if the word field is not empty
        if (!root->word.isEmpty()) {

            word = root->word;
            pro = root->pro;
            pos = root->pos;
            meaning = root->meaning;
            syn = root->syn;
            anto = root->anto;
            ex = root->ex;

            QSqlQuery query;
            query.prepare("INSERT INTO t (wor, pr, po, mea, sy, ant, e) VALUES ('"+word+"', '"+pro+"', '"+pos+"', '"+meaning+"', '"+syn+"', '"+anto+"', '"+ex+"')");

            // Execute the insert query
            if (query.exec()) {
                qDebug() << "Inserted node into database for word: " << root->word;
            } else {
                qDebug() << "Failed to insert node into database for word: " << root->word;
            }
        }

        // Insert nodes in the right subtree
        insertNodesIntoDatabase(root->right);
    }
}


void MainWindow::on_Choice2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->word_in->clear();
    ui->pro_in->clear();
    ui->pos_in->clear();
    ui->mean_in->clear();
    ui->syn_in->clear();
    ui->anto_in->clear();
    ui->ex_in->clear();
}


void MainWindow::on_Choice1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_searchButton_clicked()
{
    searchWord = ui->search_in->text();
    res = searchBST(root, searchWord);
    if (res != NULL) { // remember to handle if not found
        ui->stackedWidget->setCurrentIndex(4);
        ui->show_word->setText(res->word);
        ui->show_pro->setText(res->pro);
        ui->show_pos->setText(res->pos);
        ui->show_meaning->setText(res->meaning);
        ui->show_syn->setText(res->syn);
        ui->show_anto->setText(res->anto);
        ui->show_ex->setText(res->ex);
    }
    else {
        QMessageBox::StandardButton reply = QMessageBox::question(this, "oops!", "Word not found. Would you like to define the word yourself?", QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes) {
            ui->stackedWidget->setCurrentIndex(3);
        }
    }
    ui->search_in->clear();
}


void MainWindow::on_AddButton_clicked()
{
    word = ui->word_in->text();
    pro = ui->pro_in->text();
    pos = ui->pos_in->text();
    meaning = ui->mean_in->text();
    syn = ui->syn_in->text();
    anto = ui->anto_in->text();
    ex = ui->ex_in->text();

    Node* node = CreateNode(word, pro, pos, meaning, syn, anto, ex);
    root = insertBST(root, node);

    qDebug() << word << " Writing " << pro << pos << meaning << syn << anto << ex;
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_startButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

