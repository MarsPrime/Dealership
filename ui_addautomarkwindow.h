/********************************************************************************
** Form generated from reading UI file 'addautomarkwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTOMARKWINDOW_H
#define UI_ADDAUTOMARKWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addAutoMarkWindow
{
public:
    QLineEdit *LE_FacilityAddress;
    QLabel *label;
    QLineEdit *LE_Facility;
    QLineEdit *LE_Name;
    QLabel *label_2;
    QPushButton *PB_Cancel;
    QLabel *label_4;
    QPushButton *PB_AddAutoMark;
    QLabel *label_3;

    void setupUi(QWidget *addAutoMarkWindow)
    {
        if (addAutoMarkWindow->objectName().isEmpty())
            addAutoMarkWindow->setObjectName("addAutoMarkWindow");
        addAutoMarkWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAutoMarkWindow->setWindowIcon(icon);
        LE_FacilityAddress = new QLineEdit(addAutoMarkWindow);
        LE_FacilityAddress->setObjectName("LE_FacilityAddress");
        LE_FacilityAddress->setGeometry(QRect(16, 133, 361, 22));
        LE_FacilityAddress->setMaxLength(64);
        label = new QLabel(addAutoMarkWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(13, 27, 194, 16));
        LE_Facility = new QLineEdit(addAutoMarkWindow);
        LE_Facility->setObjectName("LE_Facility");
        LE_Facility->setGeometry(QRect(115, 81, 262, 22));
        LE_Facility->setMaxLength(64);
        LE_Name = new QLineEdit(addAutoMarkWindow);
        LE_Name->setObjectName("LE_Name");
        LE_Name->setGeometry(QRect(115, 54, 260, 22));
        LE_Name->setMaxLength(64);
        label_2 = new QLabel(addAutoMarkWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(14, 57, 66, 16));
        PB_Cancel = new QPushButton(addAutoMarkWindow);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(177, 185, 101, 62));
        label_4 = new QLabel(addAutoMarkWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(15, 112, 134, 16));
        PB_AddAutoMark = new QPushButton(addAutoMarkWindow);
        PB_AddAutoMark->setObjectName("PB_AddAutoMark");
        PB_AddAutoMark->setGeometry(QRect(285, 187, 101, 62));
        label_3 = new QLabel(addAutoMarkWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(15, 84, 96, 16));

        retranslateUi(addAutoMarkWindow);

        QMetaObject::connectSlotsByName(addAutoMarkWindow);
    } // setupUi

    void retranslateUi(QWidget *addAutoMarkWindow)
    {
        addAutoMarkWindow->setWindowTitle(QCoreApplication::translate("addAutoMarkWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\260\321\200\320\272\321\203 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\235\320\260\320\267\320\260\320\262\320\275\320\270\320\265", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\220\320\264\321\200\320\265\321\201 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\202\321\201\320\262\320\260", nullptr));
        PB_AddAutoMark->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("addAutoMarkWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addAutoMarkWindow: public Ui_addAutoMarkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTOMARKWINDOW_H
