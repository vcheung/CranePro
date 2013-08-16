#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include "BaseFile.h"
#include "ConfigureData.h"
#include <QObject>
class RecordFile: public BaseFile
{
 public:
    RecordFile(QString mFilePathName);
public:

    WRState  TrdState;//文件头，包含写位置，读位置，转头标志
    SaveData TsaveData;//存储的数据结构体

    ReadState ReadFile(pSaveData pData);
    void WriteFile(pSaveData pData);
};

#endif // CONFIGFILE_H
