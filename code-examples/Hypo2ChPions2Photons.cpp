addVertex("vtx0"); // добавление вершины с именем "vtx0"
// добавление $\pi^+$-мезона с именем "pi+"
addChargedParticle(new KFCmd::PiPlusMeson("pi+"));
// добавление $\pi^-$-мезона с именем "pi-"
addChargedParticle(new KFCmd::PiMinusMeson("pi-"));
// добавление фотона с именем "g0", вылетающего из вершины "vtx0"
addPhoton(new KFCmd::Photon("g0"), "vtx0");
// добавление фотона с именем "g1", вылетающего из вершины "vtx0"
addPhoton(new KFCmd::Photon("g1"), "vtx0");
addVertexConstraintsXYZ("pi+", "vtx0"); // условие: "pi+" вылетает из "vtx0"
addVertexConstraintsXYZ("pi-", "vtx0"); // условие: "pi-" вылетает из "vtx1"
