#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <task.h>

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
    void setNewValue100(void);
    void setNewValue1000(void);
    void start(void);
    void tick(void);
signals:
    void startRun(int max);
private:
    Ui::MainWindow *ui;
    task *worker;
};

#endif // MAINWINDOW_H
