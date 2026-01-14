/********************************************************************************
** Form generated from reading UI file 'metadatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATADIALOG_H
#define UI_METADATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MetadataDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *version;
    QLabel *label;
    QLabel *architecture;
    QLabel *arguments;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *program;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *bbl_count;
    QFrame *line;
    QLabel *ins_count;
    QLabel *mem_count;

    void setupUi(QDialog *MetadataDialog)
    {
        if (MetadataDialog->objectName().isEmpty())
            MetadataDialog->setObjectName(QString::fromUtf8("MetadataDialog"));
        MetadataDialog->setWindowModality(Qt::ApplicationModal);
        MetadataDialog->resize(400, 250);
        MetadataDialog->setModal(true);
        gridLayout = new QGridLayout(MetadataDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        version = new QLabel(MetadataDialog);
        version->setObjectName(QString::fromUtf8("version"));

        gridLayout->addWidget(version, 0, 1, 1, 1);

        label = new QLabel(MetadataDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        architecture = new QLabel(MetadataDialog);
        architecture->setObjectName(QString::fromUtf8("architecture"));

        gridLayout->addWidget(architecture, 1, 1, 1, 1);

        arguments = new QLabel(MetadataDialog);
        arguments->setObjectName(QString::fromUtf8("arguments"));

        gridLayout->addWidget(arguments, 3, 1, 1, 1);

        label_3 = new QLabel(MetadataDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(MetadataDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        program = new QLabel(MetadataDialog);
        program->setObjectName(QString::fromUtf8("program"));

        gridLayout->addWidget(program, 2, 1, 1, 1);

        label_4 = new QLabel(MetadataDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_6 = new QLabel(MetadataDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(MetadataDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(MetadataDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        bbl_count = new QLabel(MetadataDialog);
        bbl_count->setObjectName(QString::fromUtf8("bbl_count"));

        gridLayout->addWidget(bbl_count, 5, 1, 1, 1);

        line = new QFrame(MetadataDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        ins_count = new QLabel(MetadataDialog);
        ins_count->setObjectName(QString::fromUtf8("ins_count"));

        gridLayout->addWidget(ins_count, 6, 1, 1, 1);

        mem_count = new QLabel(MetadataDialog);
        mem_count->setObjectName(QString::fromUtf8("mem_count"));

        gridLayout->addWidget(mem_count, 7, 1, 1, 1);


        retranslateUi(MetadataDialog);

        QMetaObject::connectSlotsByName(MetadataDialog);
    } // setupUi

    void retranslateUi(QDialog *MetadataDialog)
    {
        MetadataDialog->setWindowTitle(QCoreApplication::translate("MetadataDialog", "Metadata", nullptr));
        version->setText(QString());
        label->setText(QCoreApplication::translate("MetadataDialog", "TracerGrind version: ", nullptr));
        architecture->setText(QString());
        arguments->setText(QString());
        label_3->setText(QCoreApplication::translate("MetadataDialog", "Architecture: ", nullptr));
        label_7->setText(QCoreApplication::translate("MetadataDialog", "Arguments: ", nullptr));
        program->setText(QString());
        label_4->setText(QCoreApplication::translate("MetadataDialog", "Memory operation count:", nullptr));
        label_6->setText(QCoreApplication::translate("MetadataDialog", "Instruction count:", nullptr));
        label_5->setText(QCoreApplication::translate("MetadataDialog", "Program: ", nullptr));
        label_8->setText(QCoreApplication::translate("MetadataDialog", "Basic block count:", nullptr));
        bbl_count->setText(QString());
        ins_count->setText(QString());
        mem_count->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MetadataDialog: public Ui_MetadataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATADIALOG_H
