#pragma once

#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

// RPC框架的基础类
// singleton
class MprpcApplication
{
public:
    static void Init(int argc, char **argv);
    static MprpcApplication& getInstance();
    static MprpcConfig& getConfig();
private:
    static MprpcConfig m_config;//单例模式

    MprpcApplication(){}
    MprpcApplication(const MprpcApplication&) = delete;//删除拷贝构造函数
    MprpcApplication(MprpcApplication&&) = delete;//删除移动构造函数
};