/*
 *  Manjaro Settings Manager
 *  Ramon Buldó <ramon@manjaro.org>
 *
 *  Copyright (C) 2007 Free Software Foundation, Inc.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KERNELINFODIALOG_H
#define KERNELINFODIALOG_H

#include <QtCore/QObject>
#include <QtWidgets/QDialog>

namespace Ui {
class KernelInfoDialog;
}

class KernelInfoDialog : public QDialog
{
    Q_OBJECT

public slots:
    int exec();

public:
    explicit KernelInfoDialog(QWidget *parent = 0);
    ~KernelInfoDialog();
    void setPackage(const QString &package);

private:
    Ui::KernelInfoDialog *ui;
    QString package_;
};

#endif // KERNELINFODIALOG_H
