#ifndef TASKHANDLER_H
#define TASKHANDLER_H
#include <taskhandlerinterface.h>
#include <functional>
#include <deque>
#include <taskbase.h>
#include <taskcountup.h>


class taskHandler :  public taskHandlerInterface
{
public:
    taskHandler(std::function<void()> cb);
    virtual void run();
    virtual void addTask();
    virtual void runOne();
private:
    std::function<void()> m_Cb;
    std::deque<taskBase*> m_Queue;

};

#endif // TASKHANDLER_H
