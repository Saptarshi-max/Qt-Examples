#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
   // void onDisplayLCD(int val);

    void on_raidBtn2_clicked(int val);
    void onSetClolor(int val);



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
