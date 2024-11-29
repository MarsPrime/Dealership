/********************************************************************************
** Form generated from reading UI file 'operatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATORWINDOW_H
#define UI_OPERATORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperatorWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *TAB_Tables;
    QWidget *tab;
    QComboBox *CB_Color;
    QLineEdit *LE_SearchAuto;
    QComboBox *CB_AutoSearchFilter;
    QDateEdit *DE_ProductionDate;
    QTableWidget *TW_AutoList;
    QLabel *label;
    QLabel *label_2;
    QComboBox *CB_Category;
    QLabel *label_3;
    QCheckBox *CHKB_DateFilter;
    QLabel *label_4;
    QComboBox *CB_SortParameter;
    QRadioButton *RB_SortASC;
    QRadioButton *RB_SortDESC;
    QWidget *tab_2;
    QComboBox *CB_EmployeeSearchFilter;
    QLineEdit *LE_SearchEmployee;
    QTableWidget *TW_EmployeeList;
    QComboBox *CB_EmployeeSort;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *CB_PostFilter;
    QRadioButton *RB_SortEmployeeASC;
    QRadioButton *RB_SortEmployeeDESC;
    QWidget *tab_3;
    QTableWidget *TW_OrderList;
    QMenuBar *menubar;
    QMenu *MENU_Add;
    QMenu *MENU_Edit;
    QMenu *MENU_Delete;

    void setupUi(QMainWindow *OperatorWindow)
    {
        if (OperatorWindow->objectName().isEmpty())
            OperatorWindow->setObjectName("OperatorWindow");
        OperatorWindow->resize(952, 600);
        centralwidget = new QWidget(OperatorWindow);
        centralwidget->setObjectName("centralwidget");
        TAB_Tables = new QTabWidget(centralwidget);
        TAB_Tables->setObjectName("TAB_Tables");
        TAB_Tables->setGeometry(QRect(0, 0, 943, 574));
        tab = new QWidget();
        tab->setObjectName("tab");
        CB_Color = new QComboBox(tab);
        CB_Color->setObjectName("CB_Color");
        CB_Color->setGeometry(QRect(152, 41, 192, 22));
        LE_SearchAuto = new QLineEdit(tab);
        LE_SearchAuto->setObjectName("LE_SearchAuto");
        LE_SearchAuto->setGeometry(QRect(138, 11, 408, 22));
        CB_AutoSearchFilter = new QComboBox(tab);
        CB_AutoSearchFilter->addItem(QString());
        CB_AutoSearchFilter->addItem(QString());
        CB_AutoSearchFilter->setObjectName("CB_AutoSearchFilter");
        CB_AutoSearchFilter->setGeometry(QRect(4, 11, 125, 22));
        DE_ProductionDate = new QDateEdit(tab);
        DE_ProductionDate->setObjectName("DE_ProductionDate");
        DE_ProductionDate->setGeometry(QRect(688, 40, 100, 23));
        TW_AutoList = new QTableWidget(tab);
        if (TW_AutoList->columnCount() < 6)
            TW_AutoList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TW_AutoList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (TW_AutoList->rowCount() < 2)
            TW_AutoList->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TW_AutoList->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TW_AutoList->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TW_AutoList->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TW_AutoList->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        TW_AutoList->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        TW_AutoList->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TW_AutoList->setItem(0, 5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        TW_AutoList->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        TW_AutoList->setItem(1, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        TW_AutoList->setItem(1, 2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        TW_AutoList->setItem(1, 3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        TW_AutoList->setItem(1, 5, __qtablewidgetitem17);
        TW_AutoList->setObjectName("TW_AutoList");
        TW_AutoList->setGeometry(QRect(8, 72, 926, 464));
        TW_AutoList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TW_AutoList->setSelectionMode(QAbstractItemView::SingleSelection);
        TW_AutoList->setSelectionBehavior(QAbstractItemView::SelectRows);
        TW_AutoList->horizontalHeader()->setStretchLastSection(true);
        TW_AutoList->verticalHeader()->setVisible(false);
        TW_AutoList->verticalHeader()->setHighlightSections(false);
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(118, 45, 57, 14));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, 44, 104, 16));
        CB_Category = new QComboBox(tab);
        CB_Category->setObjectName("CB_Category");
        CB_Category->setGeometry(QRect(424, 40, 187, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 44, 75, 16));
        CHKB_DateFilter = new QCheckBox(tab);
        CHKB_DateFilter->setObjectName("CHKB_DateFilter");
        CHKB_DateFilter->setGeometry(QRect(628, 41, 99, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(552, 14, 102, 16));
        CB_SortParameter = new QComboBox(tab);
        CB_SortParameter->addItem(QString());
        CB_SortParameter->addItem(QString());
        CB_SortParameter->addItem(QString());
        CB_SortParameter->addItem(QString());
        CB_SortParameter->addItem(QString());
        CB_SortParameter->setObjectName("CB_SortParameter");
        CB_SortParameter->setGeometry(QRect(660, 11, 125, 22));
        RB_SortASC = new QRadioButton(tab);
        RB_SortASC->setObjectName("RB_SortASC");
        RB_SortASC->setGeometry(QRect(792, 12, 126, 20));
        RB_SortASC->setChecked(true);
        RB_SortDESC = new QRadioButton(tab);
        RB_SortDESC->setObjectName("RB_SortDESC");
        RB_SortDESC->setGeometry(QRect(793, 39, 121, 20));
        TAB_Tables->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        CB_EmployeeSearchFilter = new QComboBox(tab_2);
        CB_EmployeeSearchFilter->addItem(QString());
        CB_EmployeeSearchFilter->addItem(QString());
        CB_EmployeeSearchFilter->setObjectName("CB_EmployeeSearchFilter");
        CB_EmployeeSearchFilter->setGeometry(QRect(5, 9, 128, 22));
        LE_SearchEmployee = new QLineEdit(tab_2);
        LE_SearchEmployee->setObjectName("LE_SearchEmployee");
        LE_SearchEmployee->setGeometry(QRect(140, 10, 455, 22));
        TW_EmployeeList = new QTableWidget(tab_2);
        if (TW_EmployeeList->columnCount() < 5)
            TW_EmployeeList->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        TW_EmployeeList->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        TW_EmployeeList->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        TW_EmployeeList->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        TW_EmployeeList->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        TW_EmployeeList->setHorizontalHeaderItem(4, __qtablewidgetitem22);
        if (TW_EmployeeList->rowCount() < 2)
            TW_EmployeeList->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        TW_EmployeeList->setVerticalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        TW_EmployeeList->setVerticalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        TW_EmployeeList->setItem(0, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        TW_EmployeeList->setItem(0, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        TW_EmployeeList->setItem(0, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        TW_EmployeeList->setItem(0, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        TW_EmployeeList->setItem(0, 4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        TW_EmployeeList->setItem(1, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        TW_EmployeeList->setItem(1, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        TW_EmployeeList->setItem(1, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        TW_EmployeeList->setItem(1, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        TW_EmployeeList->setItem(1, 4, __qtablewidgetitem34);
        TW_EmployeeList->setObjectName("TW_EmployeeList");
        TW_EmployeeList->setGeometry(QRect(5, 77, 928, 459));
        TW_EmployeeList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TW_EmployeeList->setSelectionMode(QAbstractItemView::SingleSelection);
        TW_EmployeeList->setSelectionBehavior(QAbstractItemView::SelectRows);
        TW_EmployeeList->horizontalHeader()->setStretchLastSection(true);
        TW_EmployeeList->verticalHeader()->setVisible(false);
        TW_EmployeeList->verticalHeader()->setHighlightSections(true);
        TW_EmployeeList->verticalHeader()->setStretchLastSection(false);
        CB_EmployeeSort = new QComboBox(tab_2);
        CB_EmployeeSort->addItem(QString());
        CB_EmployeeSort->addItem(QString());
        CB_EmployeeSort->setObjectName("CB_EmployeeSort");
        CB_EmployeeSort->setGeometry(QRect(724, 8, 208, 22));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(609, 12, 130, 16));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(9, 46, 188, 16));
        CB_PostFilter = new QComboBox(tab_2);
        CB_PostFilter->setObjectName("CB_PostFilter");
        CB_PostFilter->setGeometry(QRect(201, 42, 223, 22));
        RB_SortEmployeeASC = new QRadioButton(tab_2);
        RB_SortEmployeeASC->setObjectName("RB_SortEmployeeASC");
        RB_SortEmployeeASC->setGeometry(QRect(662, 41, 130, 20));
        RB_SortEmployeeASC->setChecked(true);
        RB_SortEmployeeDESC = new QRadioButton(tab_2);
        RB_SortEmployeeDESC->setObjectName("RB_SortEmployeeDESC");
        RB_SortEmployeeDESC->setGeometry(QRect(796, 41, 130, 20));
        TAB_Tables->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        TW_OrderList = new QTableWidget(tab_3);
        if (TW_OrderList->columnCount() < 5)
            TW_OrderList->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        TW_OrderList->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        TW_OrderList->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        TW_OrderList->setHorizontalHeaderItem(2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        TW_OrderList->setHorizontalHeaderItem(3, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        TW_OrderList->setHorizontalHeaderItem(4, __qtablewidgetitem39);
        if (TW_OrderList->rowCount() < 1)
            TW_OrderList->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        TW_OrderList->setVerticalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        TW_OrderList->setItem(0, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        TW_OrderList->setItem(0, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        TW_OrderList->setItem(0, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        TW_OrderList->setItem(0, 3, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        TW_OrderList->setItem(0, 4, __qtablewidgetitem45);
        TW_OrderList->setObjectName("TW_OrderList");
        TW_OrderList->setGeometry(QRect(4, 5, 929, 516));
        TW_OrderList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TW_OrderList->setSelectionMode(QAbstractItemView::SingleSelection);
        TW_OrderList->setSelectionBehavior(QAbstractItemView::SelectRows);
        TW_OrderList->horizontalHeader()->setStretchLastSection(true);
        TW_OrderList->verticalHeader()->setVisible(false);
        TAB_Tables->addTab(tab_3, QString());
        OperatorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OperatorWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 952, 21));
        MENU_Add = new QMenu(menubar);
        MENU_Add->setObjectName("MENU_Add");
        MENU_Edit = new QMenu(menubar);
        MENU_Edit->setObjectName("MENU_Edit");
        MENU_Delete = new QMenu(menubar);
        MENU_Delete->setObjectName("MENU_Delete");
        OperatorWindow->setMenuBar(menubar);

        menubar->addAction(MENU_Add->menuAction());
        menubar->addAction(MENU_Edit->menuAction());
        menubar->addAction(MENU_Delete->menuAction());

        retranslateUi(OperatorWindow);

        TAB_Tables->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OperatorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OperatorWindow)
    {
        OperatorWindow->setWindowTitle(QCoreApplication::translate("OperatorWindow", "OperatorWindow", nullptr));
        CB_AutoSearchFilter->setItemText(0, QCoreApplication::translate("OperatorWindow", "\320\234\320\260\321\200\320\272\320\260", nullptr));
        CB_AutoSearchFilter->setItemText(1, QCoreApplication::translate("OperatorWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));

        QTableWidgetItem *___qtablewidgetitem = TW_AutoList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OperatorWindow", "\320\234\320\260\321\200\320\272\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TW_AutoList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OperatorWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TW_AutoList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OperatorWindow", "\320\246\320\262\320\265\321\202 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TW_AutoList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OperatorWindow", "\320\223\320\276\320\264 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TW_AutoList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OperatorWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TW_AutoList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("OperatorWindow", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TW_AutoList->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("OperatorWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TW_AutoList->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("OperatorWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));

        const bool __sortingEnabled = TW_AutoList->isSortingEnabled();
        TW_AutoList->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = TW_AutoList->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("OperatorWindow", "Lada", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TW_AutoList->item(0, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("OperatorWindow", "Vesta", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TW_AutoList->item(0, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("OperatorWindow", "\320\221\320\265\320\273\321\213\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TW_AutoList->item(0, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("OperatorWindow", "2020", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = TW_AutoList->item(0, 5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("OperatorWindow", "2 400 000", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = TW_AutoList->item(1, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("OperatorWindow", "Land Rover", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = TW_AutoList->item(1, 1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("OperatorWindow", "Evoqe", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = TW_AutoList->item(1, 2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("OperatorWindow", "\320\227\320\265\320\273\320\265\320\275\321\213\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = TW_AutoList->item(1, 3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("OperatorWindow", "2019", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = TW_AutoList->item(1, 5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("OperatorWindow", "12 000 000", nullptr));
        TW_AutoList->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("OperatorWindow", "\320\246\320\262\320\265\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("OperatorWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217 \320\277\320\276:", nullptr));
        label_3->setText(QCoreApplication::translate("OperatorWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        CHKB_DateFilter->setText(QCoreApplication::translate("OperatorWindow", "\320\224\320\260\321\202\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("OperatorWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\277\320\276:", nullptr));
        CB_SortParameter->setItemText(0, QCoreApplication::translate("OperatorWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\321\216", nullptr));
        CB_SortParameter->setItemText(1, QCoreApplication::translate("OperatorWindow", "\320\234\320\260\321\200\320\272\320\265", nullptr));
        CB_SortParameter->setItemText(2, QCoreApplication::translate("OperatorWindow", "\320\246\320\262\320\265\321\202\321\203", nullptr));
        CB_SortParameter->setItemText(3, QCoreApplication::translate("OperatorWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
        CB_SortParameter->setItemText(4, QCoreApplication::translate("OperatorWindow", "\320\246\320\265\320\275\320\265", nullptr));

        RB_SortASC->setText(QCoreApplication::translate("OperatorWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        RB_SortDESC->setText(QCoreApplication::translate("OperatorWindow", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));
        TAB_Tables->setTabText(TAB_Tables->indexOf(tab), QCoreApplication::translate("OperatorWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\270", nullptr));
        CB_EmployeeSearchFilter->setItemText(0, QCoreApplication::translate("OperatorWindow", "\320\244\320\230\320\236", nullptr));
        CB_EmployeeSearchFilter->setItemText(1, QCoreApplication::translate("OperatorWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));

        QTableWidgetItem *___qtablewidgetitem18 = TW_EmployeeList->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("OperatorWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = TW_EmployeeList->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("OperatorWindow", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = TW_EmployeeList->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("OperatorWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = TW_EmployeeList->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("OperatorWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = TW_EmployeeList->horizontalHeaderItem(4);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("OperatorWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));

        const bool __sortingEnabled1 = TW_EmployeeList->isSortingEnabled();
        TW_EmployeeList->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem23 = TW_EmployeeList->item(0, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("OperatorWindow", "\320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = TW_EmployeeList->item(0, 1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("OperatorWindow", "\320\230\320\262\320\260\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = TW_EmployeeList->item(0, 2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("OperatorWindow", "\320\230\320\262\320\260\320\275\320\276\320\262\320\270\321\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = TW_EmployeeList->item(0, 3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("OperatorWindow", "\320\237\321\200\320\276\320\264\320\260\320\262\320\265\321\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = TW_EmployeeList->item(0, 4);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("OperatorWindow", "35 000", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = TW_EmployeeList->item(1, 0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("OperatorWindow", "\320\224\320\274\320\270\321\202\321\200\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = TW_EmployeeList->item(1, 1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("OperatorWindow", "\320\224\320\274\320\270\321\202\321\200\320\270\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = TW_EmployeeList->item(1, 2);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("OperatorWindow", "\320\224\320\274\320\270\321\202\321\200\320\270\320\265\320\262\320\270\321\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = TW_EmployeeList->item(1, 3);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("OperatorWindow", "\320\237\321\200\320\276\320\264\320\260\320\262\320\265\321\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = TW_EmployeeList->item(1, 4);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("OperatorWindow", "40 000", nullptr));
        TW_EmployeeList->setSortingEnabled(__sortingEnabled1);

        CB_EmployeeSort->setItemText(0, QCoreApplication::translate("OperatorWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        CB_EmployeeSort->setItemText(1, QCoreApplication::translate("OperatorWindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\265", nullptr));

        label_5->setText(QCoreApplication::translate("OperatorWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\277\320\276:", nullptr));
        label_6->setText(QCoreApplication::translate("OperatorWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217 \320\277\320\276 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        RB_SortEmployeeASC->setText(QCoreApplication::translate("OperatorWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        RB_SortEmployeeDESC->setText(QCoreApplication::translate("OperatorWindow", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));
        TAB_Tables->setTabText(TAB_Tables->indexOf(tab_2), QCoreApplication::translate("OperatorWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = TW_OrderList->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("OperatorWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = TW_OrderList->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("OperatorWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = TW_OrderList->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("OperatorWindow", "\320\234\320\260\321\200\320\272\320\260 \320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = TW_OrderList->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("OperatorWindow", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = TW_OrderList->horizontalHeaderItem(4);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("OperatorWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", nullptr));

        const bool __sortingEnabled2 = TW_OrderList->isSortingEnabled();
        TW_OrderList->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem38 = TW_OrderList->item(0, 0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("OperatorWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = TW_OrderList->item(0, 1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("OperatorWindow", "\320\230. \320\230. \320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = TW_OrderList->item(0, 2);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("OperatorWindow", "Lada", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = TW_OrderList->item(0, 3);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("OperatorWindow", "Vesta \320\232\321\200\320\260\321\201\320\275\320\260\321\217 2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = TW_OrderList->item(0, 4);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("OperatorWindow", "\320\220. \320\222. \320\220\320\275\320\264\321\200\320\265\320\265\320\262", nullptr));
        TW_OrderList->setSortingEnabled(__sortingEnabled2);

        TAB_Tables->setTabText(TAB_Tables->indexOf(tab_3), QCoreApplication::translate("OperatorWindow", "\320\224\320\276\320\262\320\276\320\263\320\276\321\200\321\213", nullptr));
        MENU_Add->setTitle(QCoreApplication::translate("OperatorWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        MENU_Edit->setTitle(QCoreApplication::translate("OperatorWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        MENU_Delete->setTitle(QCoreApplication::translate("OperatorWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OperatorWindow: public Ui_OperatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATORWINDOW_H
