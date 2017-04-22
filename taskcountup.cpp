#include "taskcountup.h"
#include <thread>
#include <iostream>

taskCountUp::taskCountUp(CallbackFunction f)
{

    m_Cb=f;
}

void taskCountUp::run()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "TOCK";
    m_Cb();
}

