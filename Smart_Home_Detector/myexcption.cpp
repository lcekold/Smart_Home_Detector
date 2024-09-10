#include "myexcption.h"
//自定义异常处理
MyExcption::MyExcption(const char* err)
{
    this->error = err;
}
