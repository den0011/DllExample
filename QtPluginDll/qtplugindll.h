#ifndef QTPLUGINDLL_H
#define QTPLUGINDLL_H

#include "plugininterface.h"
#include <QObject>

// Реализация плагина
class TextProcessorPlugin : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID PluginInterface_iid)
    Q_INTERFACES(PluginInterface)

public:
    TextProcessorPlugin();
    
    QString getName() const override;
    QString processText(const QString &input) override;
};

#endif // QTPLUGINDLL_H
