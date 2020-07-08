addVertexConstraintsXYZ("pi+_1", "vtx1");
addVertexConstraintsXYZ("pi-_1", "vtx1");
addFlowConstraintsXYZ("ks-flow", "vtx0", "vtx1");
addParticleToFlow("ks-flow", "pi+_1");
addParticleToFlow("ks-flow", "pi-_1");
addMassConstraint("m-pi0-constraint",
		  TDatabasePDG::Instance()->GetParticle(111)->Mass() * 1000,
		  {"g0", "g1"});
// по умолчанию условие на инвариантную массу двух фотонов выключено
disableConstraint("m-pi0-constraint"); 
