// Код ошибки.
int errorCode = hypo.getErrorCode(); // 0, если к.ф. сошелся
// Суммарный по всем частицам хи-квадрат.
double chi2 = hypo.getChiSquare();
// Хи-квадрат частицы с именем "pi+_1".
double chi2PiPlus = hypo.getChiSquare("pi+_1");
// Суммарный хи квдрат двух частиц с именами "pi+_1" и "pi-_1".
std::set<std::string> ks_group = {"pi+_1", "pi-_1"};
double chi2Charged = hypo.getChiSquare(ks_group);
