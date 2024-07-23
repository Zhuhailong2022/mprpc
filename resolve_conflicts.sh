#!/bin/bash

# 将所有冲突文件使用本地版本解决
git checkout --ours .

# 添加解决冲突的文件到暂存区
git add .

# 继续合并过程
git merge --continue
