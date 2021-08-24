#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    MainView(QWidget *parent = nullptr);
    ~MainView();

private:
    void PopulateTable();

    Ui::MainView *ui;

    QSqlDatabase DataBase;
};
#endif // MAINVIEW_H
