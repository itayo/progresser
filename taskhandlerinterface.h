#ifndef TASKHANDLERINTERFACE_H
#define TASKHANDLERINTERFACE_H


class taskHandlerInterface
{
public:
    taskHandlerInterface();
    virtual void run()=0;
    virtual void runOne()=0;
    virtual void addTask()=0;

};

#endif // TASKHANDLERINTERFACE_H
