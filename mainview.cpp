#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainView)
{
    ui->setupUi(this);

    //Add the database:
    MainView::DataBase = QSqlDatabase::addDatabase("QSQLITE");
    MainView::DataBase.setDatabaseName("./DataBase.db");
    MainView::PopulateTable();

}

void MainView::PopulateTable()
{
    MainView::DataBase.open();
    QSqlQueryModel * QueryModel = new QSqlQueryModel;
    QueryModel->setQuery(QSqlQuery("SELECT * FROM GAMES", MainView::DataBase));
    ui->MainTableView->setModel(QueryModel);
}

MainView::~MainView()
{
    delete ui;
}

