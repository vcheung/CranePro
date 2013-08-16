#ifndef BASEFILE_H
#define BASEFILE_H
#include <QObject>


class BaseFile
{
public:
    BaseFile(QString m_FilePathName);

    QString FilePathName;
    bool WriteData(char *pData, uint Length, qint64 DWpos);
    bool ReadData(char *pData, uint Length, qint64 DWpos);
};

#endif // BASEFILE_H
