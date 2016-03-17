/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef MAGUS_PROPERTY_WIDGET_QUATERNION_H
#define MAGUS_PROPERTY_WIDGET_QUATERNION_H

#include <QWidget>
#include <QCheckBox>
#include <QLineEdit>
#include <QQuaternion>
#include "asset_propertywidget.h"

QT_BEGIN_NAMESPACE

QT_END_NAMESPACE

namespace Magus
{
    /****************************************************************************
    Property class to fill in X, Y and Z values
    ***************************************************************************/
    class QtQuaternionProperty : public QtProperty
    {
        Q_OBJECT

        public:
            QtQuaternionProperty(const QString& title, qreal w = 0.0, qreal x = 0.0, qreal y = 0.0, qreal z = 0.0, QWidget* parent = 0);
            virtual ~QtQuaternionProperty(void) {}
            void setQuaternion (qreal w, qreal x, qreal y, qreal z);
            void setQuaternion (const QQuaternion& q);
            void setW (qreal w);
            void setX (qreal x);
            void setY (qreal y);
            void setZ (qreal z);
            const qreal getW (void) const;
            const qreal getX (void) const;
            const qreal getY (void) const;
            const qreal getZ (void) const;
            int getPrecision(void) {return mPrecision;}
            void setPrecision(int precision) {mPrecision = precision;}

        private slots:
            void propertyValueChanged(void);

        private:
            QLineEdit* mWEdit;
            QLineEdit* mXEdit;
            QLineEdit* mYEdit;
            QLineEdit* mZEdit;
            int mPrecision;
    };
}

#endif
