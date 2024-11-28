/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWIndow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *LE_Login;
    QLineEdit *LE_Password;
    QPushButton *PB_Cancel;
    QPushButton *PB_Confrim;

    void setupUi(QWidget *LoginWIndow)
    {
        if (LoginWIndow->objectName().isEmpty())
            LoginWIndow->setObjectName("LoginWIndow");
        LoginWIndow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginWIndow->setWindowIcon(icon);
        label = new QLabel(LoginWIndow);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 15, 374, 54));
        label_2 = new QLabel(LoginWIndow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(8, 122, 57, 14));
        label_3 = new QLabel(LoginWIndow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(7, 179, 57, 14));
        LE_Login = new QLineEdit(LoginWIndow);
        LE_Login->setObjectName("LE_Login");
        LE_Login->setGeometry(QRect(72, 119, 322, 22));
        LE_Login->setMaxLength(15);
        LE_Password = new QLineEdit(LoginWIndow);
        LE_Password->setObjectName("LE_Password");
        LE_Password->setGeometry(QRect(66, 174, 332, 22));
        LE_Password->setMaxLength(15);
        LE_Password->setEchoMode(QLineEdit::Password);
        PB_Cancel = new QPushButton(LoginWIndow);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(172, 222, 102, 53));
        PB_Confrim = new QPushButton(LoginWIndow);
        PB_Confrim->setObjectName("PB_Confrim");
        PB_Confrim->setGeometry(QRect(278, 223, 109, 53));

        retranslateUi(LoginWIndow);

        QMetaObject::connectSlotsByName(LoginWIndow);
    } // setupUi

    void retranslateUi(QWidget *LoginWIndow)
    {
        LoginWIndow->setWindowTitle(QCoreApplication::translate("LoginWIndow", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginWIndow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWIndow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWIndow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("LoginWIndow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        PB_Confrim->setText(QCoreApplication::translate("LoginWIndow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWIndow: public Ui_LoginWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
