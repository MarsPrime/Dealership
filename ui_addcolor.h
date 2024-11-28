/********************************************************************************
** Form generated from reading UI file 'addcolor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOLOR_H
#define UI_ADDCOLOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addColor
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LE_ColorName;
    QPushButton *PB_Cancel;
    QPushButton *PB_addColor;

    void setupUi(QWidget *addColor)
    {
        if (addColor->objectName().isEmpty())
            addColor->setObjectName("addColor");
        addColor->resize(400, 189);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        addColor->setWindowIcon(icon);
        label = new QLabel(addColor);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 21, 222, 16));
        label_2 = new QLabel(addColor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(13, 71, 108, 16));
        LE_ColorName = new QLineEdit(addColor);
        LE_ColorName->setObjectName("LE_ColorName");
        LE_ColorName->setGeometry(QRect(124, 68, 254, 22));
        LE_ColorName->setMaxLength(64);
        PB_Cancel = new QPushButton(addColor);
        PB_Cancel->setObjectName("PB_Cancel");
        PB_Cancel->setGeometry(QRect(149, 130, 110, 52));
        PB_addColor = new QPushButton(addColor);
        PB_addColor->setObjectName("PB_addColor");
        PB_addColor->setGeometry(QRect(272, 132, 110, 52));

        retranslateUi(addColor);

        QMetaObject::connectSlotsByName(addColor);
    } // setupUi

    void retranslateUi(QWidget *addColor)
    {
        addColor->setWindowTitle(QCoreApplication::translate("addColor", "Form", nullptr));
        label->setText(QCoreApplication::translate("addColor", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\206\320\262\320\265\321\202\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("addColor", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\206\320\262\320\265\321\202\320\260", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("addColor", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        PB_addColor->setText(QCoreApplication::translate("addColor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addColor: public Ui_addColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOLOR_H
