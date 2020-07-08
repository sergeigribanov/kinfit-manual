// Начало метода Loop.
void TrPh::Loop(const std::string& outpath, double magneticField) {
  
...

// Получаем первое событие для того, чтобы узнать энергию в пучке.
fChain->GetEntry(0);
/* Создаем гипотезу. Первый аргумент --- энергия в с.ц.м., второй аргумент --- 
величина магнитного поля в Тл (пользователь узнает и задает 
магнитное поле самостоятельно). */
KFCmd::HypoKsKlPi0 hypo(2 * emeas, magneticField); 

...

Long64_t nentries = fChain->GetEntriesFast();
// Цикл по событиям.
for (Long64_t entry = 0; entry < nentries; entry++) {
