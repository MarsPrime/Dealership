/********************************************************************************
** Form generated from reading UI file 'neworderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWORDERWINDOW_H
#define UI_NEWORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newOrderWindow
{
public:
    QPushButton *PB_Accept;
    QLabel *LB_Client;
    QLabel *label;
    QLabel *label_3;
    QLabel *LB_Employee;
    QLabel *LB_Header;
    QPushButton *PB_Cancel;
    QComboBox *CB_ClientList;
    QComboBox *CB_Auto;
    QPushButton *PB_AddNewClient;

    void setupUi(QWidget *newOrderWindow)
    {
        if (newOrderWindow->objectName().isEmpty())
            newOrderWindow->setObjectName("newOrderWindow");
        newOrderWindow->resize(473, 221);
        PB_Accept = new QPushButton(newOrderWindow);
        PB_Accept->setObjectName("PB_Accept");
        PB_Accept->setGeometry(QRect(368, 139, 98, 69));
        LB_Client = new QLabel(newOrderWindow);
        LB_Client->setObjectName("LB_Client");
        LB_Client->setGeometry(QRect(12, 83, 57, 14));
        label = new QLabel(newOrderWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(11, 56, 67, 16));
        label_3 = new QLabel(newOrderWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(12, 111, 82, 16));
        LB_Employee = new QLabel(newOrderWindow);
        LB_Employee->setObjectName("LB_Employee");
        LB_Employee->setGeometry(QRect(81, 58, 198, 16));
        LB_Header = new QLabel(newOrderWindow);
        LB_Header->setObjectName("LB_Header");
        LB_Header->setGeometry(QRect(12, 21, 322, 16));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LB_Header->sizePolicy().hasHeightForWidth());
        LB_Header->setSizePolicy(sizePolicy);
        PB_Cancel = new QPushButton(newOrderWindow);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(262, 139, 98, 69));
        CB_ClientList = new QComboBox(newOrderWindow);
        CB_ClientList->addItem(QString());
        CB_ClientList->setObjectName("CB_ClientList");
        CB_ClientList->setGeometry(QRect(95, 80, 319, 22));
        CB_Auto = new QComboBox(newOrderWindow);
        CB_Auto->addItem(QString());
        CB_Auto->setObjectName("CB_Auto");
        CB_Auto->setGeometry(QRect(101, 107, 311, 22));
        PB_AddNewClient = new QPushButton(newOrderWindow);
        PB_AddNewClient->setObjectName("PB_AddNewClient");
        PB_AddNewClient->setGeometry(QRect(426, 82, 31, 22));

        retranslateUi(newOrderWindow);

        QMetaObject::connectSlotsByName(newOrderWindow);
    } // setupUi

    void retranslateUi(QWidget *newOrderWindow)
    {
        newOrderWindow->setWindowTitle(QCoreApplication::translate("newOrderWindow", "Form", nullptr));
        PB_Accept->setText(QCoreApplication::translate("newOrderWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        LB_Client->setText(QCoreApplication::translate("newOrderWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", nullptr));
        label->setText(QCoreApplication::translate("newOrderWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("newOrderWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
        LB_Employee->setText(QCoreApplication::translate("newOrderWindow", "\320\230. \320\230. \320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        LB_Header->setText(QCoreApplication::translate("newOrderWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\264\320\276\320\263\320\276\320\262\320\276\321\200\320\260 \320\272\321\203\320\277\320\273\320\270 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("newOrderWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        CB_ClientList->setItemText(0, QCoreApplication::translate("newOrderWindow", "\320\236. \320\222. \320\225\321\200\321\210\320\276\320\262", nullptr));

        CB_Auto->setItemText(0, QCoreApplication::translate("newOrderWindow", "Lada Granta \320\232\321\200\320\260\321\201\320\275\320\260\321\217 2019", nullptr));

        PB_AddNewClient->setText(QCoreApplication::translate("newOrderWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newOrderWindow: public Ui_newOrderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWORDERWINDOW_H
