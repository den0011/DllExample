TEMPLATE = subdirs

SUBDIRS += \
    SimpleDll \
    QtPluginDll \
    ExternCDll \
    MainApp

# Определяем порядок сборки
MainApp.depends = SimpleDll QtPluginDll ExternCDll
