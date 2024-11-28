/********************************************************************************
** Form generated from reading UI file 'addorderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDERWINDOW_H
#define UI_ADDORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addOrderWindow
{
public:
    QPushButton *PB_Accept;
    QLabel *LB_Header;
    QLabel *LB_Client;
    QComboBox *CB_ClientList;
    QPushButton *PB_AddNewClient;
    QComboBox *CB_Auto;
    QLabel *label;
    QLabel *LB_Employee;
    QPushButton *PB_Cancel;
    QLabel *label_3;

    void setupUi(QWidget *addOrderWindow)
    {
        if (addOrderWindow->objectName().isEmpty())
            addOrderWindow->setObjectName("addOrderWindow");
        addOrderWindow->resize(520, 353);
        PB_Accept = new QPushButton(addOrderWindow);
        PB_Accept->setObjectName("PB_Accept");
        PB_Accept->setGeometry(QRect(388, 184, 98, 69));
        LB_Header = new QLabel(addOrderWindow);
        LB_Header->setObjectName("LB_Header");
        LB_Header->setGeometry(QRect(32, 22, 274, 16));
        LB_Client = new QLabel(addOrderWindow);
        LB_Client->setObjectName("LB_Client");
        LB_Client->setGeometry(QRect(32, 84, 57, 14));
        CB_ClientList = new QComboBox(addOrderWindow);
        CB_ClientList->addItem(QString());
        CB_ClientList->setObjectName("CB_ClientList");
        CB_ClientList->setGeometry(QRect(115, 81, 319, 60));
        PB_AddNewClient = new QPushButton(addOrderWindow);
        PB_AddNewClient->setObjectName("PB_AddNewClient");
        PB_AddNewClient->setGeometry(QRect(446, 82, 31, 22));
        CB_Auto = new QComboBox(addOrderWindow);
        CB_Auto->addItem(QString());
        CB_Auto->setObjectName("CB_Auto");
        CB_Auto->setGeometry(QRect(112, 152, 320, 22));
        label = new QLabel(addOrderWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(31, 57, 67, 16));
        LB_Employee = new QLabel(addOrderWindow);
        LB_Employee->setObjectName("LB_Employee");
        LB_Employee->setGeometry(QRect(101, 59, 198, 16));
        PB_Cancel = new QPushButton(addOrderWindow);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(282, 184, 98, 69));
        label_3 = new QLabel(addOrderWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(32, 156, 82, 16));

        retranslateUi(addOrderWindow);

        QMetaObject::connectSlotsByName(addOrderWindow);
    } // setupUi

    void retranslateUi(QWidget *addOrderWindow)
    {
        addOrderWindow->setWindowTitle(QCoreApplication::translate("addOrderWindow", "Form", nullptr));
        PB_Accept->setText(QCoreApplication::translate("addOrderWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        LB_Header->setText(QCoreApplication::translate("addOrderWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\264\320\276\320\263\320\276\320\262\320\276\321\200\320\260 \320\272\321\203\320\277\320\273\320\270 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        LB_Client->setText(QCoreApplication::translate("addOrderWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", nullptr));
        CB_ClientList->setItemText(0, QCoreApplication::translate("addOrderWindow", "\320\236. \320\222. \320\225\321\200\321\210\320\276\320\262", nullptr));

        PB_AddNewClient->setText(QCoreApplication::translate("addOrderWindow", "+", nullptr));
        CB_Auto->setItemText(0, QCoreApplication::translate("addOrderWindow", "Lada Granta \320\232\321\200\320\260\321\201\320\275\320\260\321\217 2019", nullptr));

        label->setText(QCoreApplication::translate("addOrderWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\320\273", nullptr));
        LB_Employee->setText(QCoreApplication::translate("addOrderWindow", "\320\230. \320\230. \320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("addOrderWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("addOrderWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addOrderWindow: public Ui_addOrderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDERWINDOW_H
