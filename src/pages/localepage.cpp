#include <KLocalizedString>

#include "localepage.h"

LocalePage::LocalePage(QObject* parent)
{

}

LocalePage::~LocalePage()
{

}


QString LocalePage::title() const
{
    return i18n("Welcome");
}

QString LocalePage::subtitle() const
{
    return i18n("Let's get started...");
}

QQuickItem* LocalePage::createItem(QQmlEngine* engine)
{
    return createItemFromURL("qrc:/LocalePage.qml", engine, this);
}

Croutons::FutureResult<> LocalePage::apply()
{
    auto ret = Croutons::FutureResult<>();
    ret.succeed(Croutons::Nil{});
    return ret;
}

bool LocalePage::canGoNext() const
{
    return true;
}
