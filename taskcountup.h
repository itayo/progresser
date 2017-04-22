#ifndef TASKCOUNTUP_H
#define TASKCOUNTUP_H
#include <taskbase.h>
#include <functional>
typedef std::function<void()> CallbackFunction;

class taskCountUp : public taskBase
{
public:
    taskCountUp(CallbackFunction f);
    virtual void run();
private:
   CallbackFunction m_Cb;
};

#endif // TASKCOUNTUP_H
