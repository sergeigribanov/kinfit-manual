/* Получение значения  натурального 
параметра трека заряженной частицы 
с имнем "pi+_1" после кинематической 
реконструкции. Размерность --- см ($ct$). */
double ctPiPlus = hypo.getFinalChargedParticleTime("pi+_1");
// Получение вектора начальных параметров частицы с именем "pi+_1".
Eigen::VectorXd parInitial = hypo.getInitialParameters("pi+_1");
// Получение вектора конечных параметров частицы с именем "pi+_1".
Eigen::VectorXd parFinal = hypo.getFinalParameters("pi+_1");
// Получение обратной матрицы ошибок частицы с именем "pi+_1".
Eigen::MatrixXd invErrMatrix = hypo.getInverseErrorMatrix("pi+_1");
