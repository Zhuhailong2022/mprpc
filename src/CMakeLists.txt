#aux_source_directory(. SRC_LIST)
<<<<<<< HEAD
include_directories(/snap/protobuf/52/include/google/protobuf)
=======
>>>>>>> 1b164ee... Initial commit
set(SRC_LIST
    mprpcapplication.cc
    mprpcconfig.cc
    rpcheader.pb.cc
    rpcprovider.cc
    mprpcchannel.cc
    mprpccontroller.cc
    logger.cc
    zookeeperutil.cc)
# 由于muduo库是静态库，编译时索性就生成静态库
add_library(mprpc ${SRC_LIST})
<<<<<<< HEAD
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(/usr/include/google/protobuf)
include_directories(/usr/include/zookeeper)
target_link_libraries(mprpc muduo_net muduo_base pthread zookeeper_mt ${PROTOBUF_LIBRARIES})
=======
target_link_libraries(mprpc muduo_net muduo_base pthread zookeeper_mt)
>>>>>>> 1b164ee... Initial commit
