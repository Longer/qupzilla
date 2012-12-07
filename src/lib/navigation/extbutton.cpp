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
#include "extbutton.h"

#include <QHBoxLayout>

ExtButton::ExtButton(QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* lay = new QHBoxLayout(this);
    setLayout(lay);

    m_button = new ToolButton(this);
    m_button->setObjectName("navigation-button-reload");
    m_button->setToolTip(ToolButton::tr("Reload"));
    m_button->setToolButtonStyle(Qt::ToolButtonIconOnly);
    m_button->setAutoRaise(true);
    m_button->setFocusPolicy(Qt::NoFocus);

    lay->addWidget(m_button);
    lay->setContentsMargins(0, 0, 0, 0);
    lay->setSpacing(0);

	connect(m_button, SIGNAL(clicked()), this, SLOT(Test()));
}

void ExtButton::Test(){
	qDebug() << "Test";
}

ExtButton::~ExtButton()
{
}
