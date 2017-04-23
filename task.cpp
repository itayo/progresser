#include "task.h"

task::task()
{
    m_Th  = new taskHandler(std::bind(&task::callback,this));
    qDebug() << "created";
}

void task::run()
{
    //.arg( QString::number( (quint64)QThread::currentThreadId(), 16 ), 12 );
    while(true)
    {
        m_Th->runOne();
        qApp->processEvents();
    }

}
void task::callback()
{
    emit tick();
}

void task::addCountTask()
{


}

void task::startCount(int max)
{
    int ne=max*9;
    ne/=10;
    for(int idx=0;idx <ne;idx++)
    {
        m_Th->addTask();
        addCountTask();
    }
    exec();
}

