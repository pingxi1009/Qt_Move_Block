/********************************************************************************
** Form generated from reading UI file 'MoveBlock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEBLOCK_H
#define UI_MOVEBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveBlockClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_next;
    QPushButton *pushButton_up;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_shang;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_zuo;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_you;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_xia;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *MoveBlockClass)
    {
        if (MoveBlockClass->objectName().isEmpty())
            MoveBlockClass->setObjectName(QStringLiteral("MoveBlockClass"));
        MoveBlockClass->resize(326, 526);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MoveBlockClass->sizePolicy().hasHeightForWidth());
        MoveBlockClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MoveBlockClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_next = new QPushButton(centralWidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));

        horizontalLayout->addWidget(pushButton_next);

        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));

        horizontalLayout->addWidget(pushButton_up);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pushButton_shang = new QPushButton(centralWidget);
        pushButton_shang->setObjectName(QStringLiteral("pushButton_shang"));
        pushButton_shang->setMinimumSize(QSize(50, 50));
        pushButton_shang->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton_shang, 0, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        pushButton_zuo = new QPushButton(centralWidget);
        pushButton_zuo->setObjectName(QStringLiteral("pushButton_zuo"));
        pushButton_zuo->setMinimumSize(QSize(50, 50));
        pushButton_zuo->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton_zuo, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        pushButton_you = new QPushButton(centralWidget);
        pushButton_you->setObjectName(QStringLiteral("pushButton_you"));
        pushButton_you->setMinimumSize(QSize(50, 50));
        pushButton_you->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton_you, 1, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 5, 2, 1);

        pushButton_xia = new QPushButton(centralWidget);
        pushButton_xia->setObjectName(QStringLiteral("pushButton_xia"));
        pushButton_xia->setMinimumSize(QSize(50, 50));
        pushButton_xia->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton_xia, 2, 3, 2, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 3, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MoveBlockClass->setCentralWidget(centralWidget);

        retranslateUi(MoveBlockClass);

        QMetaObject::connectSlotsByName(MoveBlockClass);
    } // setupUi

    void retranslateUi(QMainWindow *MoveBlockClass)
    {
        MoveBlockClass->setWindowTitle(QApplication::translate("MoveBlockClass", "MoveBlock", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("MoveBlockClass", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_up->setText(QApplication::translate("MoveBlockClass", "\344\270\212\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_shang->setText(QApplication::translate("MoveBlockClass", "\344\270\212", Q_NULLPTR));
        pushButton_zuo->setText(QApplication::translate("MoveBlockClass", "\345\267\246", Q_NULLPTR));
        pushButton_you->setText(QApplication::translate("MoveBlockClass", "\345\217\263", Q_NULLPTR));
        pushButton_xia->setText(QApplication::translate("MoveBlockClass", "\344\270\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoveBlockClass: public Ui_MoveBlockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEBLOCK_H
