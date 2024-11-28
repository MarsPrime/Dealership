/********************************************************************************
** Form generated from reading UI file 'adduserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERWINDOW_H
#define UI_ADDUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addUserWindow
{
public:
    QLineEdit *LE_Password;
    QLabel *LB_Password;
    QLineEdit *LE_PassportNum;
    QLineEdit *LE_Patronymic;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *LE_PassportSerial;
    QPushButton *PB_Accept;
    QLabel *LB_StatusName;
    QLabel *LB_Status;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *LB_Salary;
    QLabel *LB_Login;
    QLabel *label_16;
    QPushButton *PB_Cancel;
    QLabel *label_17;
    QLineEdit *LE_Login;
    QLabel *label_18;
    QSpinBox *SB_Age;
    QLabel *label_19;
    QLabel *LB_Header;
    QLineEdit *LE_Surname;
    QLineEdit *LE_Name;
    QLineEdit *LE_Address;
    QDoubleSpinBox *DSB_Salary;

    void setupUi(QWidget *addUserWindow)
    {
        if (addUserWindow->objectName().isEmpty())
            addUserWindow->setObjectName("addUserWindow");
        addUserWindow->resize(319, 475);
        LE_Password = new QLineEdit(addUserWindow);
        LE_Password->setObjectName("LE_Password");
        LE_Password->setGeometry(QRect(155, 387, 141, 22));
        LE_Password->setMaxLength(15);
        LB_Password = new QLabel(addUserWindow);
        LB_Password->setObjectName("LB_Password");
        LB_Password->setGeometry(QRect(161, 368, 57, 14));
        LE_PassportNum = new QLineEdit(addUserWindow);
        LE_PassportNum->setObjectName("LE_PassportNum");
        LE_PassportNum->setGeometry(QRect(66, 228, 81, 22));
        LE_PassportNum->setMaxLength(5);
        LE_Patronymic = new QLineEdit(addUserWindow);
        LE_Patronymic->setObjectName("LE_Patronymic");
        LE_Patronymic->setGeometry(QRect(87, 107, 210, 22));
        LE_Patronymic->setMaxLength(64);
        label_7 = new QLabel(addUserWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(18, 229, 61, 16));
        label_8 = new QLabel(addUserWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 54, 57, 14));
        LE_PassportSerial = new QLineEdit(addUserWindow);
        LE_PassportSerial->setObjectName("LE_PassportSerial");
        LE_PassportSerial->setGeometry(QRect(200, 228, 104, 22));
        LE_PassportSerial->setMaxLength(8);
        PB_Accept = new QPushButton(addUserWindow);
        PB_Accept->setObjectName("PB_Accept");
        PB_Accept->setGeometry(QRect(199, 431, 99, 39));
        LB_StatusName = new QLabel(addUserWindow);
        LB_StatusName->setObjectName("LB_StatusName");
        LB_StatusName->setGeometry(QRect(96, 304, 201, 16));
        LB_Status = new QLabel(addUserWindow);
        LB_Status->setObjectName("LB_Status");
        LB_Status->setGeometry(QRect(18, 304, 77, 16));
        label_10 = new QLabel(addUserWindow);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(19, 83, 57, 14));
        label_12 = new QLabel(addUserWindow);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(16, 270, 57, 14));
        LB_Salary = new QLabel(addUserWindow);
        LB_Salary->setObjectName("LB_Salary");
        LB_Salary->setGeometry(QRect(19, 340, 67, 16));
        LB_Login = new QLabel(addUserWindow);
        LB_Login->setObjectName("LB_Login");
        LB_Login->setGeometry(QRect(19, 366, 57, 14));
        label_16 = new QLabel(addUserWindow);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(150, 229, 61, 16));
        PB_Cancel = new QPushButton(addUserWindow);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(99, 430, 99, 39));
        label_17 = new QLabel(addUserWindow);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(18, 198, 136, 16));
        LE_Login = new QLineEdit(addUserWindow);
        LE_Login->setObjectName("LE_Login");
        LE_Login->setGeometry(QRect(13, 388, 113, 22));
        LE_Login->setMaxLength(15);
        label_18 = new QLabel(addUserWindow);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(18, 143, 57, 14));
        SB_Age = new QSpinBox(addUserWindow);
        SB_Age->setObjectName("SB_Age");
        SB_Age->setGeometry(QRect(88, 137, 43, 23));
        label_19 = new QLabel(addUserWindow);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(18, 110, 67, 16));
        LB_Header = new QLabel(addUserWindow);
        LB_Header->setObjectName("LB_Header");
        LB_Header->setGeometry(QRect(10, 0, 311, 37));
        QFont font;
        font.setPointSize(12);
        LB_Header->setFont(font);
        LE_Surname = new QLineEdit(addUserWindow);
        LE_Surname->setObjectName("LE_Surname");
        LE_Surname->setGeometry(QRect(89, 51, 210, 22));
        LE_Surname->setMaxLength(64);
        LE_Name = new QLineEdit(addUserWindow);
        LE_Name->setObjectName("LE_Name");
        LE_Name->setGeometry(QRect(88, 80, 210, 22));
        LE_Name->setMaxLength(64);
        LE_Address = new QLineEdit(addUserWindow);
        LE_Address->setObjectName("LE_Address");
        LE_Address->setGeometry(QRect(58, 267, 238, 22));
        LE_Address->setMaxLength(128);
        DSB_Salary = new QDoubleSpinBox(addUserWindow);
        DSB_Salary->setObjectName("DSB_Salary");
        DSB_Salary->setGeometry(QRect(84, 338, 212, 23));
        DSB_Salary->setMaximum(1000000.000000000000000);
        DSB_Salary->setSingleStep(10000.000000000000000);

        retranslateUi(addUserWindow);

        QMetaObject::connectSlotsByName(addUserWindow);
    } // setupUi

    void retranslateUi(QWidget *addUserWindow)
    {
        addUserWindow->setWindowTitle(QCoreApplication::translate("addUserWindow", "Form", nullptr));
        LB_Password->setText(QCoreApplication::translate("addUserWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        LE_PassportNum->setInputMask(QString());
        LE_PassportNum->setText(QString());
        label_7->setText(QCoreApplication::translate("addUserWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_8->setText(QCoreApplication::translate("addUserWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        LE_PassportSerial->setInputMask(QString());
        LE_PassportSerial->setText(QString());
        PB_Accept->setText(QCoreApplication::translate("addUserWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        LB_StatusName->setText(QCoreApplication::translate("addUserWindow", "\320\237\321\200\320\276\320\264\320\260\320\262\320\265\321\206", nullptr));
        LB_Status->setText(QCoreApplication::translate("addUserWindow", "\320\241\320\260\321\202\321\203\321\201", nullptr));
        label_10->setText(QCoreApplication::translate("addUserWindow", "\320\230\320\274\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("addUserWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        LB_Salary->setText(QCoreApplication::translate("addUserWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        LB_Login->setText(QCoreApplication::translate("addUserWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_16->setText(QCoreApplication::translate("addUserWindow", "\320\241\320\265\321\200\320\270\321\217", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("addUserWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_17->setText(QCoreApplication::translate("addUserWindow", "\320\237\320\260\321\201\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_18->setText(QCoreApplication::translate("addUserWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_19->setText(QCoreApplication::translate("addUserWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        LB_Header->setText(QCoreApplication::translate("addUserWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        LE_Address->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addUserWindow: public Ui_addUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERWINDOW_H
