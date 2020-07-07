addChargedParticle(new KFCmd::PiPlusMeson("pi+_0"));
addChargedParticle(new KFCmd::PiPlusMeson("pi+_1"));
addChargedParticle(new KFCmd::PiMinusMeson("pi-_0"));
addChargedParticle(new KFCmd::PiMinusMeson("pi-_1"));
addPhoton(new KFCmd::Photon("g0"), "vtx0");
addPhoton(new KFCmd::Photon("g1"), "vtx0");
addVertexConstraintsXYZ("pi+_0", "vtx0");
addVertexConstraintsXYZ("pi+_1", "vtx0");
addVertexConstraintsXYZ("pi-_0", "vtx0");
addVertexConstraintsXYZ("pi-_1", "vtx0");
addMassConstraint("m-pi0-constraint", // добавление условия на массу двух фотонов
		  // масса в МЭВах = массе $\pi^0$-мезона
		  TDatabasePDG::Instance()->GetParticle(111)->Mass() * 1000, 
		  {"g0", "g1"}); // имена фотонов
disableConstraint("m-pi0-constraint"); // выключение констрейна на массу
