/***************************************************************************
 *   Copyright (C) 2008 by Malakhov Alexey                                 *
 *   brezerk@gmail.com                                                     *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 *   In addition, as a special exception, the copyright holders give       *
 *   permission to link the code of this program with any edition of       *
 *   the Qt library by Trolltech AS, Norway (or with modified versions     *
 *   of Qt that use the same license as Qt), and distribute linked         *
 *   combinations including the two.  You must obey the GNU General        *
 *   Public License in all respects for all of the code used other than    *
 *   Qt.  If you modify this file, you may extend this exception to        *
 *   your version of the file, but you are not obligated to do so.  If     *
 *   you do not wish to do so, delete this exception statement from        *
 *   your version.                                                         *
 ***************************************************************************/

#ifndef APPDBSTRUCTS_H
#define APPDBSTRUCTS_H

#include <QString>
#include <QList>

struct WineAppDBVersionInfo {
	int id;
	QString appver;
	QString winever;
	short int rating;
	QString url;
};

struct WineAppDBInfo {
	QString name;
	QString desc;
	QString category;
	int id;
	QString url;
	QList<WineAppDBVersionInfo> versions;
};

struct WineAppDBTestResult {
	int id;
	bool current;
	QString distrib;
	QString date;
	QString winever;
	bool run;
	bool install;
	short int rating;
};

struct WineAppDBComment {
	int id;
	QString topic;
	QString date;
	QString autor;
	int padent_id;
	QString message;
};

struct WineAppDBBug {
	int id;
	QString desc;
	short int status;
	short int resolution;
};

struct WineAppDBCategory {
	int id;
	QString desc;
};

struct WineAppDBTestInfo {
	int id;
	QString name;
	QString desc;
	QString url;
	QString appver;
	QString winever;
	QString rating;
	QString works;
	QString notworks;
	QString nottested;
	QString comment;
	QString license;
	QList<WineAppDBTestResult> tests;
	QList<WineAppDBBug> bugs;
	QList<WineAppDBCategory> category;
	QList<WineAppDBComment> comments;
};


#endif // APPDBSTRUCTS_H
