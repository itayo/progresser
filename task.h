#ifndef TASK_H
#define TASK_H
#include <QThread>
#include <QMutex>
#include <QDebug>
#include <deque>
#include <functional>
#include <taskhandlerinterface.h>
#include <taskhandler.h>
#include <taskbase.h>
#include <taskcountup.h>



class task : public QThread
{
    Q_OBJECT
public:
    task();

public slots:
    void startCount(int max);
signals:
    void tick(void);
protected:
    void callback();
    void addCountTask();
    void run();
    taskHandler *m_Th;
    QMutex mutex;
    std::deque<taskBase*> queue;

};
#endif // TASK_H
