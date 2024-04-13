
#include <QApplication>

#include "../../../../include/Widgets/MainWindow.hpp"





int main(int argc, char *argv[])
{
 using namespace MediaFoundry;

    QApplication a(argc, argv);

    MediaFoundryMainWindow window;

    window.resize(1024, 1024);
    window.show();

    return a.exec();
}
