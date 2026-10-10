# 嵌入式学习记录

从零开始的嵌入式学习历程，记录每天的练习代码。

## 学习路线

- Linux 常用命令（7 天）
- C 语言核心：指针 / 内存 / 关键字 / 位运算 / 结构体（14 天）
- 操作系统原理（7 天）
- 计算机网络（7 天）
- FreeRTOS（14 天）
- STM32 外设：I2C / SPI / ADC / DMA / PWM

## 环境

- Ubuntu 22.04.5 LTS
- gcc 11.4.0
- VS Code + Remote-SSH

## 目录结构

    c_practice/
    ├── bin/            编译产物（不提交）
    ├── hello.c         第一个 C 程序
    └── README.md

## 编译方式

    mkdir -p bin
    gcc -Wall hello.c -o bin/hello
    ./bin/hello
