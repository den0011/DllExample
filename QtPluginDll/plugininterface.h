#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>
#include <QtPlugin>

// Абстрактный интерфейс для плагина
class PluginInterface
{
public:
    virtual ~PluginInterface() {}
    
    virtual QString getName() const = 0;
    virtual QString processText(const QString &input) = 0;
};

#define PluginInterface_iid "com.example.PluginInterface/1.0"
Q_DECLARE_INTERFACE(PluginInterface, PluginInterface_iid)

#endif // PLUGININTERFACE_H
