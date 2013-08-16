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

    WRState  TrdState;//�ļ�ͷ������дλ�ã���λ�ã�תͷ��־
    SaveData TsaveData;//�洢�����ݽṹ��

    ReadState ReadFile(pSaveData pData);
    void WriteFile(pSaveData pData);
};

#endif // CONFIGFILE_H
