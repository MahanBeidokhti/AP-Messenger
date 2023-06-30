#include "message.h"

message::message(QString _body, QString _src, QString _dst, QString _date)
{
    body = _body;
    src = _src;
    dst = _dst;
    date = _date;
}
