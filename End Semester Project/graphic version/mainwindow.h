#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

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
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};


struct leaf						//a single node of the tree
{
    int data;
    leaf* left = NULL;
    leaf* right = NULL;
};

struct Nodemath
{				//a single node of the math linked list
    QString qt;
    QString ans;
    Nodemath* next = NULL;
};

class list
{										//the linked list itself
    public:
    Nodemath* head = new Nodemath;
    Nodemath* point;
    void createEasy();
    void createMed();
    void createHard();
    void createEasy1();
    void createMed1();
    void createHard1();
    void displayList();
};

class Tree	                 //the tree itself
{         public:
          leaf* root = NULL;
          leaf* Pl = NULL;
          Tree();
          void filler(leaf* fill);
          void insert(int d);
          void displayT();
          void displayTree(leaf *ptr);



};


#endif // MAINWINDOW_H
