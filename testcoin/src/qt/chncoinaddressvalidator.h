// Copyright (c) 2011-2014 The Chncoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CHNCOIN_QT_CHNCOINADDRESSVALIDATOR_H
#define CHNCOIN_QT_CHNCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ChncoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ChncoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Chncoin address widget validator, checks for a valid chncoin address.
 */
class ChncoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ChncoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // CHNCOIN_QT_CHNCOINADDRESSVALIDATOR_H
