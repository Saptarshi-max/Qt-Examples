#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(on_raidBtn2_clicked(int)));
    setWindowTitle(QObject::tr("QDial_lcd"));
    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(onSetClolor(int)));

}

void MainWindow::on_raidBtn2_clicked(int val)
{
    ui->lcdNumber->display(val);
}

void MainWindow::onSetClolor(int val)
{
    Q_UNUSED(val)

    ui->dial->setRange(0,255);

    int nRed = ui->dial->value();             //获取红绿蓝(RGB)的Slider的数值


    QColor color;
    color.setRgb(nRed,0,0);
    QPalette palette = ui->textEdit_2->palette();   //获取textColour控件的所有颜色值(调色板)
    palette.setColor(QPalette::Base, color);        //设置textColou的某一角色(即控件)的颜色
    ui->textEdit_2->setPalette(palette);

   // ui->labRgbVal->setText(QString("RGB(%1, %2, %3, %4)").arg(nRed).arg(nGreen).arg(nBlue).arg(nAlpha));   //时刻显示RGBa的具体值
}

MainWindow::~MainWindow()
{
    delete ui;
}

