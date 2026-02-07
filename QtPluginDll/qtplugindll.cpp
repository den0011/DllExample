#include "qtplugindll.h"

TextProcessorPlugin::TextProcessorPlugin()
{
}

QString TextProcessorPlugin::getName() const
{
    return "Text Processor Plugin";
}

QString TextProcessorPlugin::processText(const QString &input)
{
    // Преобразуем текст в верхний регистр и добавляем префикс
    return "[PROCESSED] " + input.toUpper();
}
