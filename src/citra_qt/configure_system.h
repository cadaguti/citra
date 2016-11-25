// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include <QWidget>
#include <vector>

namespace Ui {
class ConfigureSystem;
}

class ConfigureSystem : public QWidget {
    Q_OBJECT

public:
    explicit ConfigureSystem(QWidget* parent = nullptr);
    ~ConfigureSystem();

    void applyConfiguration();
    void setConfiguration();

    public slots:
    void updateBirthdayComboBox(int birthmonth_index);

private:
    const std::vector<char*> country_names = {{
    "", "Japan", "", "",
    "", "", "", "", "Anguilla", "Antigua and Barbuda", "Argentina", "Aruba",
    "Bahamas", "Barbados", "Belize", "Bolivia",
    "Brazil", "British Virgin Islands", "Canada", "Cayman Islands",
    "Chile", "Colombia", "Costa Rica", "Dominica",
    "Dominican Republic", "Ecuador", "El Salvador", "French Guiana",
    "Grenada", "Guadeloupe", "Guatemala", "Guyana",
    "Haiti", "Honduras", "Jamaica", "Martinique",
    "Mexico", "Montserrat", "Netherlands Antilles", "Nicaragua",
    "Panama", "Paraguay", "Peru", "St. Kitts and Nevis",
    "St. Lucia", "St. Vincent and the Grenadines", "Suriname", "Trinidad and Tobago",
    "Turks and Caicos Islands", "United States", "Uruguay", "US Virgin Islands",
    "Venezuela", "", "", "",
    "", "", "", "",
    "", "", "", "",
    "Albania", "Australia", "Austria", "Belgium",
    "Bosnia and Herzegovina", "Botswana", "Bulgaria", "Croatia",
    "Cyprus", "Czech Republic", "Denmark (Kingdom of)", "Estonia",
    "Finland", "France", "Germany", "Greece",
    "Hungary", "Iceland", "Ireland", "Italy",
    "Latvia", "Lesotho", "Liechtenstein", "Lithuania",
    "Luxembourg", "Macedonia (Republic of)", "Malta", "Montenegro",
    "Mozambique", "Namibia", "Netherlands", "New Zealand",
    "Norway", "Poland", "Portugal", "Romania",
    "Russia", "Serbia and Kosovo", "Slovakia", "Slovenia",
    "South Africa", "Spain", "Swaziland", "Sweden",
    "Switzerland", "Turkey", "United Kingdom", "Zambia",
    "Zimbabwe", "Azerbaijan", "Mauritania", "Mali",
    "Niger", "Chad", "Sudan", "Eritrea",
    "Djibouti", "Somalia", "Andorra", "Gibraltar",
    "Guernsey", "Isle of Man", "Jersey", "Monaco",
    "Taiwan", "", "", "",
    "", "", "", "",
    "South Korea", "", "", "",
    "", "", "", "",
    "Hong Kong", "145", "", "",
    "", "", "", "",
    "152", "Singapore", "154", "155",
    "Malaysia", "", "", "",
    "China", "", "", "",
    "", "", "", "",
    "U.A.E.", "India", "170", "171",
    "172", "173", "Saudi Arabia", "175",
    "176", "177", "", "",
    "", "", "", "",
    "San Marino", "Vatican City", "Bermuda"
    }
};

    void ReadSystemSettings();
    void initCountryComboBox();
    int vectorIndexOf(std::vector<char*> source, QString text);

    std::unique_ptr<Ui::ConfigureSystem> ui;
    bool enabled;

    std::u16string username;
    int birthmonth, birthday;
    int language_index;
    unsigned char* unknown;
    int country_index;
    int sound_index;
};
