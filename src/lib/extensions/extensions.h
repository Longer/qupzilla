/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2012  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef EXTENSIONS_H
#define EXTENSIONS_H

#include <QDebug>
#include <QObject>
#include <QDir>

#include "qz_namespace.h"

class QupZilla;

class QT_QUPZILLA_EXPORT Extensions : public QObject
{
    Q_OBJECT
public:
	explicit Extensions();
	QString EXTENSIONSDIR;
	
	void loadExtensions(QupZilla* window);

	void emitMainWindowCreated(QupZilla* window);
	void emitMainWindowDeleted(QupZilla* window);

signals:
    void mainWindowCreated(QupZilla* window);
    void mainWindowDeleted(QupZilla* window);

private:
	bool checkExtensionsDir();
};
#endif // EXTENSIONS_H
