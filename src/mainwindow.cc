#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_(new Ui::MainWindow)
{
    ui_->setupUi(this);
    ui_->label_result->setText("0");
    ;
    this->setFixedSize(760, 327);
    QShortcut *sc_backspace = new QShortcut(QKeySequence(Qt::Key_Backspace), this);

    connect(ui_->butt_num_0, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_1, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_2, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_3, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_4, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_5, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_6, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_7, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_8, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_num_9, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_op_sum, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_op_sub, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_op_mul, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_op_div, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_bracket_op, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_bracket_cl, SIGNAL(clicked()), this, SLOT(typeChars()));
    connect(ui_->butt_point, SIGNAL(clicked()), this, SLOT(typeChars()));

    connect(ui_->butt_fn_cos, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_fn_sin, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_fn_tan, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_fn_acos, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_fn_asin, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_fn_atan, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_sq_root, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_ln, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_log, SIGNAL(clicked()), this, SLOT(typeFunctions()));
    connect(ui_->butt_degree, SIGNAL(clicked()), this, SLOT(typeFunctions()));

    connect(ui_->butt_ac, SIGNAL(clicked()), this, SLOT(clearInput()));
    connect(sc_backspace, SIGNAL(activated()), this, SLOT(deleteLastSym()));
    connect(ui_->butt_mode_graph, SIGNAL(clicked()), this, SLOT(initGraph()));

    connect(ui_->label_activate, SIGNAL(clicked()), this, SLOT(activateLabel()));
    connect(ui_->lineedit_activate, SIGNAL(clicked()), this, SLOT(activateLineEdit()));
}

MainWindow::~MainWindow()
{
    delete ui_;
}

void MainWindow::activateLineEdit() {
    ui_->label_result->setEnabled(false);
    ui_->lineEdit_x->setEnabled(true);
    ui_->lineEdit_x->setFocus();
}

void MainWindow::activateLabel() {
    ui_->lineEdit_x->setEnabled(false);
    ui_->label_result->setEnabled(true);
    ui_->lineEdit_x->setFocus();
}

void MainWindow::initGraph() {
    this->setFixedSize(760, 700);
}

void MainWindow::typeChars() {
    QPushButton *button = (QPushButton *)sender();
    if (ui_->label_result->text() == "0") {
        ui_->label_result->setText(button->text());
    } else {
        QString new_result = ui_->label_result->text() + button->text();
        ui_->label_result->setText(new_result);
    }
    ui_->label_size->setText(QString::number(ui_->label_result->text().size()));
}


void MainWindow::typeFunctions() {
    QPushButton *button = (QPushButton *)sender();
    QString new_result = button->toolTip();
    QTextDocument doc;
    doc.setHtml(new_result);
    new_result = doc.toPlainText();
    if (ui_->label_result->text() != "0") {
        new_result = ui_->label_result->text() + new_result;
    }
    ui_->label_result->setText(new_result);
    ui_->label_size->setText(QString::number(ui_->label_result->text().size()));
}

void MainWindow::deleteLastSym() {
    if (ui_->label_result->text() == "0")
        return;
    QString new_result = ui_->label_result->text();
    new_result = new_result.left(new_result.length() - 1);
    ui_->label_result->setText(new_result);
    ui_->label_size->setText(QString::number(ui_->label_result->text().size()));
    if (ui_->label_result->text() == "")
        ui_->label_result->setText("0");
}

void MainWindow::clearInput() {
    ui_->label_result->setText("0");
    ui_->label_size->setText("0");
}
