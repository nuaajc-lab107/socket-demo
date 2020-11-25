#include "QtWidgetsApplication1.h"
#include "ui_QtWidgetsApplication1.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.label->setText("主机号：");
    ui.label_2->setText("端口号：");
    ui.label_3->setText("未打开文件");
    ui.openButton->setText("打开文件");
    ui.sendButton->setText("发送文件");
}

void QtWidgetsApplication1::openFile()
{

}

void QtWidgetsApplication1::send()
{

}

