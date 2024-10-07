#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    
private slots:
    void on_Form_destroyed();
    
private:
    Ui::Form *ui;
    bool canClose;  // Переменная для контроля возможности закрытия окна
//-------------------------------------------------------------------    
    signals:
    void windowClosed();  // Сигнал, испускаемый при закрытии окна

protected:
    void closeEvent(QCloseEvent *event) override;  // Объявление closeEvent
//-------------------------------------------------------------------
 
};

#endif // FORM_H
