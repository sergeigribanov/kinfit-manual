/* Получение начального значения четырех-импульса 
   частицы по ее имени (значение до кинематической реконструкции). 
   Возвращается TLorentzVector. */
TLorentzVector pInitial = hypo.getInitialMomentum("pi+_1");
/* Получение конечного значения четырех-импульса
   частицы по ее имени (значение после кинематической реконструкции). 
   Возвращается TLorentzVector. */
TLorentzVector pFinal = hypo.getFinalMomentum("pi+_1");
// Получение четырех-импульса группы частиц
std::set<std::string> ks_group = {"pi+_1", "pi-_1"}; // продукты распада $K_S$
TLorentzVector pKsInitial = hypo.getInitialMomentum(ks_group);
TLorentzVector pKsFinal = hypo.getFinalMomentum(ks_group);
/* Если не нужен четырех-импульс, а нужна только инвариантная масса после
   кинематической реконструкции, то нужно вызвать комманду */
double mKsFinal = hypo.getFinalMomentum(ks_group).M();
// Получение массы отдачи.
double mKsRecoilFinal = hyp.getFinalRecoilMomentum(ks_group).M(); // после к.ф.

