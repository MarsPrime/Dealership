/********************************************************************************
** Form generated from reading UI file 'createautowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEAUTOWINDOW_H
#define UI_CREATEAUTOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAutoWindow
{
public:
    QLabel *label_2;
    QLabel *label_6;
    QDoubleSpinBox *DSB_Price;
    QPushButton *PB_AddNewAuto;
    QDateEdit *DE_ProductionDate;
    QLabel *LB_Mode;
    QComboBox *CB_AutoMark;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *PB_CancelNewAuto;
    QComboBox *CB_AutoCategory;
    QLabel *label_4;
    QPushButton *PB_AddNewAutoMark;
    QLineEdit *LE_AutoName;
    QLabel *label;
    QComboBox *CB_Color;
    QPushButton *PB_AddColor;

    void setupUi(QWidget *CreateAutoWindow)
    {
        if (CreateAutoWindow->objectName().isEmpty())
            CreateAutoWindow->setObjectName("CreateAutoWindow");
        CreateAutoWindow->resize(319, 316);
        label_2 = new QLabel(CreateAutoWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 83, 64, 16));
        label_6 = new QLabel(CreateAutoWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(11, 228, 124, 16));
        DSB_Price = new QDoubleSpinBox(CreateAutoWindow);
        DSB_Price->setObjectName("DSB_Price");
        DSB_Price->setGeometry(QRect(141, 224, 159, 23));
        DSB_Price->setDecimals(2);
        DSB_Price->setMaximum(999999999.000000000000000);
        DSB_Price->setSingleStep(100000.000000000000000);
        PB_AddNewAuto = new QPushButton(CreateAutoWindow);
        PB_AddNewAuto->setObjectName("PB_AddNewAuto");
        PB_AddNewAuto->setGeometry(QRect(192, 254, 109, 54));
        DE_ProductionDate = new QDateEdit(CreateAutoWindow);
        DE_ProductionDate->setObjectName("DE_ProductionDate");
        DE_ProductionDate->setGeometry(QRect(156, 190, 144, 23));
        LB_Mode = new QLabel(CreateAutoWindow);
        LB_Mode->setObjectName("LB_Mode");
        LB_Mode->setGeometry(QRect(14, 9, 298, 16));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LB_Mode->sizePolicy().hasHeightForWidth());
        LB_Mode->setSizePolicy(sizePolicy);
        CB_AutoMark = new QComboBox(CreateAutoWindow);
        CB_AutoMark->addItem(QString());
        CB_AutoMark->addItem(QString());
        CB_AutoMark->setObjectName("CB_AutoMark");
        CB_AutoMark->setGeometry(QRect(87, 45, 169, 22));
        label_3 = new QLabel(CreateAutoWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(9, 110, 71, 16));
        label_5 = new QLabel(CreateAutoWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(19, 49, 57, 14));
        PB_CancelNewAuto = new QPushButton(CreateAutoWindow);
        PB_CancelNewAuto->setObjectName("PB_CancelNewAuto");
        PB_CancelNewAuto->setGeometry(QRect(81, 254, 109, 54));
        CB_AutoCategory = new QComboBox(CreateAutoWindow);
        CB_AutoCategory->addItem(QString());
        CB_AutoCategory->addItem(QString());
        CB_AutoCategory->setObjectName("CB_AutoCategory");
        CB_AutoCategory->setGeometry(QRect(84, 106, 209, 22));
        label_4 = new QLabel(CreateAutoWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(9, 191, 142, 16));
        PB_AddNewAutoMark = new QPushButton(CreateAutoWindow);
        PB_AddNewAutoMark->setObjectName("PB_AddNewAutoMark");
        PB_AddNewAutoMark->setGeometry(QRect(261, 47, 32, 18));
        LE_AutoName = new QLineEdit(CreateAutoWindow);
        LE_AutoName->setObjectName("LE_AutoName");
        LE_AutoName->setGeometry(QRect(89, 78, 205, 22));
        LE_AutoName->setMaxLength(64);
        label = new QLabel(CreateAutoWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 151, 57, 14));
        CB_Color = new QComboBox(CreateAutoWindow);
        CB_Color->setObjectName("CB_Color");
        CB_Color->setGeometry(QRect(74, 148, 179, 22));
        PB_AddColor = new QPushButton(CreateAutoWindow);
        PB_AddColor->setObjectName("PB_AddColor");
        PB_AddColor->setGeometry(QRect(259, 148, 37, 22));

        retranslateUi(CreateAutoWindow);

        QMetaObject::connectSlotsByName(CreateAutoWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateAutoWindow)
    {
        CreateAutoWindow->setWindowTitle(QCoreApplication::translate("CreateAutoWindow", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("CreateAutoWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("CreateAutoWindow", "\320\246\320\265\320\275\320\260", nullptr));
        PB_AddNewAuto->setText(QCoreApplication::translate("CreateAutoWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        LB_Mode->setText(QCoreApplication::translate("CreateAutoWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        CB_AutoMark->setItemText(0, QCoreApplication::translate("CreateAutoWindow", "Lada", nullptr));
        CB_AutoMark->setItemText(1, QCoreApplication::translate("CreateAutoWindow", "Ford", nullptr));

        label_3->setText(QCoreApplication::translate("CreateAutoWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("CreateAutoWindow", "\320\234\320\260\321\200\320\272\320\260", nullptr));
        PB_CancelNewAuto->setText(QCoreApplication::translate("CreateAutoWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        CB_AutoCategory->setItemText(0, QCoreApplication::translate("CreateAutoWindow", "\320\222\320\275\320\265\320\264\320\276\321\200\320\276\320\266\320\275\320\270\320\272", nullptr));
        CB_AutoCategory->setItemText(1, QCoreApplication::translate("CreateAutoWindow", "\320\241\320\265\320\264\320\260\320\275", nullptr));

        label_4->setText(QCoreApplication::translate("CreateAutoWindow", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\260", nullptr));
        PB_AddNewAutoMark->setText(QCoreApplication::translate("CreateAutoWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("CreateAutoWindow", "\320\246\320\262\320\265\321\202", nullptr));
        PB_AddColor->setText(QCoreApplication::translate("CreateAutoWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAutoWindow: public Ui_CreateAutoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEAUTOWINDOW_H
