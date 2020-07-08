addVertex("vtx0");
addVertex("vtx1");
addChargedParticle(new KFCmd::PiPlusMeson("pi+_1"));
addChargedParticle(new KFCmd::PiMinusMeson("pi-_1"));
addPhoton(new KFCmd::Photon("g0"), "vtx0");
addPhoton(new KFCmd::Photon("g1"), "vtx0");
/* Добавление массивной частицы с параметризацией четырех-импульса:
 $\mathcal{P}=(\sqrt{p^2_x + p^2_y + p^2_z + m^2}, p_x, p_y, p_z)$.
 Всего 3 параметра: $p_x, p_y, p_z$. $m^2$ --- константа, квадрат инвариантной массы частицы.
 По умолчанию обратная матрица ошибок нулевая (при желании ее можно задать).
 Это означает, что добавленная таким образом частица, является потерянной частицей. 
 Первым аргументом метода addParticlePxPyPzE является имя частицы (задается пользователем).
 Вторым аргументом этого метода является масса частицы в МэВах. */
addParticlePxPyPzE("kl", TDatabasePDG::Instance()->GetParticle(130)->Mass() * 1000);
