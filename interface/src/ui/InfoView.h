//
//  InfoView.h
//  interface/src/ui
//
//  Created by Stojce Slavkovski on 9/7/13.
//  Copyright 2013 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_InfoView_h
#define hifi_InfoView_h

#include <QtWebKitWidgets/QWebView>

class InfoView : public QWebView {
    Q_OBJECT
public:
    static void showFirstTime();
    static void forcedShow();
    
private:
    InfoView(bool forced);
    bool _forced;
    bool shouldShow();
    
private slots:
    void loaded(bool ok);
};

#endif // hifi_InfoView_h
