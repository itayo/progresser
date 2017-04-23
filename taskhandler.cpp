#include "taskhandler.h"
#include <iostream>

taskHandler::taskHandler(std::function<void()> cb)
{
    m_Cb=cb;
}

void taskHandler::run()
{
    while(true)
    {
        while(m_Queue.size()==0);
        while(m_Queue.size() >0)
        {
            m_Queue.front()->run();
            m_Queue.pop_front();
        }

    }
}
void taskHandler::addTask()
{
    std::cout << "adding";
    taskCountUp *task=new taskCountUp(m_Cb);
    m_Queue.push_back(task);
}

void taskHandler::runOne()
{
    while(m_Queue.size() >0)
    {
        m_Queue.front()->run();
        m_Queue.pop_front();
    }
}
