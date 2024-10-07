#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QWidget>
#include "perceptron.h"
#include "datasource.h"

namespace Ui {
class MainView;
}

class MainView : public QWidget
{
    Q_OBJECT

    DataSource* dataSrc;
public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();

private:
    Ui::MainView *ui;
    bool canClose;  // Переменная для управления возможностью закрытия окна
public slots:
    void setInput();
    void checkAccuracy();
    //void eval();
private slots:
    void on_pushButton_2_clicked();

    void unlockButton();  // Объявление метода unlockButton как слота
    void onUnlockCloseButtonClicked();
};

#endif // MAINVIEW_H
