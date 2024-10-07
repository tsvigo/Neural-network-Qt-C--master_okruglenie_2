/********************************************************************************
** Form generated from reading UI file 'layerview.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERVIEW_H
#define UI_LAYERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_layerView
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTableWidget *inputTable;
    QLabel *inputDimensionLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTableWidget *weightsTable;
    QLabel *weightsDimensionLabel;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *valuesTable;
    QLabel *nodesDimensionLabel;

    void setupUi(QWidget *layerView)
    {
        if (layerView->objectName().isEmpty())
            layerView->setObjectName("layerView");
        layerView->resize(570, 203);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layerView->sizePolicy().hasHeightForWidth());
        layerView->setSizePolicy(sizePolicy);
        layerView->setMinimumSize(QSize(544, 195));
        horizontalLayout_2 = new QHBoxLayout(layerView);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layerView);
        label_4->setObjectName("label_4");
        label_4->setMargin(5);

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        inputTable = new QTableWidget(layerView);
        if (inputTable->columnCount() < 1)
            inputTable->setColumnCount(1);
        if (inputTable->rowCount() < 1)
            inputTable->setRowCount(1);
        inputTable->setObjectName("inputTable");
        inputTable->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputTable->sizePolicy().hasHeightForWidth());
        inputTable->setSizePolicy(sizePolicy1);
        inputTable->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(7);
        inputTable->setFont(font);
        inputTable->setSelectionMode(QAbstractItemView::NoSelection);
        inputTable->setGridStyle(Qt::SolidLine);
        inputTable->setRowCount(1);
        inputTable->setColumnCount(1);
        inputTable->horizontalHeader()->setVisible(true);
        inputTable->horizontalHeader()->setMinimumSectionSize(47);
        inputTable->horizontalHeader()->setDefaultSectionSize(60);
        inputTable->horizontalHeader()->setHighlightSections(false);
        inputTable->verticalHeader()->setVisible(true);
        inputTable->verticalHeader()->setMinimumSectionSize(15);
        inputTable->verticalHeader()->setDefaultSectionSize(15);
        inputTable->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(inputTable, 0, Qt::AlignHCenter);

        inputDimensionLabel = new QLabel(layerView);
        inputDimensionLabel->setObjectName("inputDimensionLabel");
        QFont font1;
        font1.setPointSize(8);
        inputDimensionLabel->setFont(font1);
        inputDimensionLabel->setMargin(4);

        verticalLayout_2->addWidget(inputDimensionLabel, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(layerView);
        label_6->setObjectName("label_6");
        label_6->setMargin(5);

        verticalLayout_3->addWidget(label_6, 0, Qt::AlignHCenter);

        weightsTable = new QTableWidget(layerView);
        if (weightsTable->columnCount() < 1)
            weightsTable->setColumnCount(1);
        if (weightsTable->rowCount() < 1)
            weightsTable->setRowCount(1);
        weightsTable->setObjectName("weightsTable");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(weightsTable->sizePolicy().hasHeightForWidth());
        weightsTable->setSizePolicy(sizePolicy2);
        weightsTable->setFont(font);
        weightsTable->setSelectionMode(QAbstractItemView::NoSelection);
        weightsTable->setRowCount(1);
        weightsTable->setColumnCount(1);
        weightsTable->horizontalHeader()->setVisible(true);
        weightsTable->horizontalHeader()->setCascadingSectionResizes(true);
        weightsTable->horizontalHeader()->setMinimumSectionSize(30);
        weightsTable->horizontalHeader()->setDefaultSectionSize(50);
        weightsTable->horizontalHeader()->setHighlightSections(false);
        weightsTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        weightsTable->verticalHeader()->setVisible(true);
        weightsTable->verticalHeader()->setMinimumSectionSize(18);
        weightsTable->verticalHeader()->setDefaultSectionSize(18);
        weightsTable->verticalHeader()->setHighlightSections(false);

        verticalLayout_3->addWidget(weightsTable, 0, Qt::AlignHCenter);

        weightsDimensionLabel = new QLabel(layerView);
        weightsDimensionLabel->setObjectName("weightsDimensionLabel");
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        weightsDimensionLabel->setFont(font2);
        weightsDimensionLabel->setMargin(4);

        verticalLayout_3->addWidget(weightsDimensionLabel, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layerView);
        label_2->setObjectName("label_2");
        label_2->setMargin(5);

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        valuesTable = new QTableWidget(layerView);
        if (valuesTable->columnCount() < 1)
            valuesTable->setColumnCount(1);
        if (valuesTable->rowCount() < 1)
            valuesTable->setRowCount(1);
        valuesTable->setObjectName("valuesTable");
        sizePolicy1.setHeightForWidth(valuesTable->sizePolicy().hasHeightForWidth());
        valuesTable->setSizePolicy(sizePolicy1);
        valuesTable->setFont(font);
        valuesTable->setSelectionMode(QAbstractItemView::NoSelection);
        valuesTable->setRowCount(1);
        valuesTable->setColumnCount(1);
        valuesTable->horizontalHeader()->setVisible(true);
        valuesTable->horizontalHeader()->setCascadingSectionResizes(true);
        valuesTable->horizontalHeader()->setMinimumSectionSize(70);
        valuesTable->horizontalHeader()->setDefaultSectionSize(70);
        valuesTable->horizontalHeader()->setHighlightSections(false);
        valuesTable->verticalHeader()->setVisible(true);
        valuesTable->verticalHeader()->setCascadingSectionResizes(true);
        valuesTable->verticalHeader()->setDefaultSectionSize(15);
        valuesTable->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(valuesTable, 0, Qt::AlignHCenter);

        nodesDimensionLabel = new QLabel(layerView);
        nodesDimensionLabel->setObjectName("nodesDimensionLabel");
        nodesDimensionLabel->setFont(font1);
        nodesDimensionLabel->setMargin(4);

        verticalLayout->addWidget(nodesDimensionLabel, 0, Qt::AlignHCenter|Qt::AlignBottom);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(layerView);

        QMetaObject::connectSlotsByName(layerView);
    } // setupUi

    void retranslateUi(QWidget *layerView)
    {
        layerView->setWindowTitle(QCoreApplication::translate("layerView", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("layerView", "input", nullptr));
        inputDimensionLabel->setText(QCoreApplication::translate("layerView", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("layerView", "weights", nullptr));
        weightsDimensionLabel->setText(QCoreApplication::translate("layerView", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("layerView", "node values", nullptr));
        nodesDimensionLabel->setText(QCoreApplication::translate("layerView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class layerView: public Ui_layerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERVIEW_H
