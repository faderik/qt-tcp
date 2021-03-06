#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void onReadyRead();

private slots:
    void on_connectBtn_clicked();
    void on_sendBtn_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket socket;
};

#endif // MAINWINDOW_H
