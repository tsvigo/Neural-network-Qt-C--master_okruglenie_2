#include "form.h"
#include "mainview.h"
#include "ui_form.h"
#include <QCloseEvent>     // Добавляем включение QCloseEvent
#include <QMessageBox>

//-------------------------------------------------------------------
Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form),
     canClose(
     //false
     true
     )
{
    ui->setupUi(this);
  //  MainView 
//    Form *form = new Form(this);

 //  connect(Form, &Form::windowClosed, this, &MainView::unlockButton);
}

Form::~Form()
{

    delete ui;
}

void Form::on_Form_destroyed()
{
    
}

void Form::closeEvent(QCloseEvent *event) {
    emit windowClosed();  // Испускаем сигнал при закрытии окна
    event->accept();  // Подтверждаем закрытие
     if (!canClose) {  // Если закрытие не разрешено
        // Показать предупреждение или просто игнорировать запрос на закрытие
        QMessageBox::warning(this, "Закрытие заблокировано", "Вы не можете закрыть окно!");

        event->ignore();  // Игнорируем событие закрытия
    } else {
        event->accept();  // Разрешаем закрытие, если canClose == true
    }
}


   
