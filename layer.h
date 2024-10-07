#ifndef LAYER_H
#define LAYER_H

#include "ui_layerview.h"
#include <QWidget>
#include <QDebug>
#include <QtMath>
#include "RoundedDouble.h"

class Layer: public QWidget
{
    Q_OBJECT
private:
    const Layer* prev;
    const int nodesNumber;
    int inputLength;
    RoundedDouble** weights;
    RoundedDouble* values;
    RoundedDouble* input;
    RoundedDouble* z; // linear combination // линейная комбинация

    RoundedDouble* error;
    RoundedDouble **derivative;

    Ui::layerView ui;

public:
    explicit Layer(int numberOfNodes, Layer* previousLayer, QWidget *parent = 0);
    ~Layer();
    void setInput(RoundedDouble* , int);
    RoundedDouble getInput(int index);

    void eval();
    RoundedDouble const * getValues() const;
    RoundedDouble **getWeights() const;
    int getNodesNumber() const;
    int getInputLength() const;
    RoundedDouble getLinearCombination(int i) const;

    RoundedDouble getWeight(unsigned int row, unsigned int col) const;
    void setWeight(unsigned int row, unsigned int col, RoundedDouble value);

    RoundedDouble getDerivative(unsigned int row, unsigned int col) const;
    void setDerivative(unsigned int row, unsigned int col, RoundedDouble value);

    void uiRefreshTables();
    void uiInitLabels();
    void uiInitTables();

    RoundedDouble getError(int index);
    void setError(int index, RoundedDouble value);

    static RoundedDouble sigmoid(RoundedDouble);
    static RoundedDouble sigmoidGradient(RoundedDouble z);
    RoundedDouble getValue(int i);
};

#endif // LAYER_H
