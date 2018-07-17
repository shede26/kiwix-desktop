#include "kiwixrequestinterceptor.h"

#include <QWebEngineUrlRequestInfo>
#include <QDebug>
#include <iostream>

KiwixRequestInterceptor::KiwixRequestInterceptor()
{

}


void KiwixRequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo &info)
{
    auto url = info.requestUrl();
    auto urlString = url.toString();
    if (urlString.startsWith("http://")) {
      urlString.replace(0, 7, "zim://");
    }
    info.redirect(QUrl(urlString));
}

