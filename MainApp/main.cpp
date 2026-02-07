#include <QCoreApplication>
#include <QPluginLoader>
#include <QDebug>
#include <QDir>

#include "simpledll.h"
#include "externcdll.h"
#include "plugininterface.h"

void testSimpleDll()
{
    qDebug() << "\n=== Testing SimpleDll (dllexport/dllimport) ===";

    Calculator calc;
    qDebug() << "Version:" << calc.getVersion();
    qDebug() << "5 + 3 =" << calc.add(5, 3);
    qDebug() << "4 * 7 =" << calc.multiply(4, 7);
}

void testExternCDll()
{
    qDebug() << "\n=== Testing ExternCDll (extern C) ===";
    qDebug() << "Library info:" << getLibraryInfo();

    int numbers[] = {1, 2, 3, 4, 5};
    int sum = sumArray(numbers, 5);
    qDebug() << "Sum of array [1,2,3,4,5]:" << sum;

    double values[] = {10.5, 20.3, 30.7};
    double avg = calculateAverage(values, 3);
    qDebug() << "Average of [10.5, 20.3, 30.7]:" << avg;
}

void testQtPlugin()
{
    qDebug() << "\n=== Testing QtPluginDll (Qt Plugin) ===";

    QString pluginPath = QCoreApplication::applicationDirPath() + "/QtPluginDll.dll";

    QPluginLoader loader(pluginPath);
    QObject *plugin = loader.instance();

    if (plugin) {
        PluginInterface *interface = qobject_cast<PluginInterface*>(plugin);

        if (interface) {
            qDebug() << "Plugin loaded:" << interface->getName();

            QString result = interface->processText("hello world");
            qDebug() << "Processing result:" << result;
        } else {
            qDebug() << "Error: Failed to get interface";
        }
    } else {
        qDebug() << "Error loading plugin:" << loader.errorString();
        qDebug() << "Plugin path:" << pluginPath;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    qDebug() << "=== Qt DLL Demo ===";

    testSimpleDll();
    testExternCDll();
    testQtPlugin();

    qDebug() << "\n=== Testing completed ===";

    return 0;
}
