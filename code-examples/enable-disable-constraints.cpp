/* Включение / выключение одного условия по имени.
 Условие с именем constraint_name заведомо должно присутствовать
в гипотезе. */
hypo.disableConstraint(constraint_name); // выкл. условие
hypo.enableConstraint(constraint_name); // вкл. условие
/* Включение / выключение группы условий на вершину по имени
   заряженной частицы, на вершину которой наложены условия. */
hypo.disableVertexConstraintXYZ("pi+_1");
hypo.enableVertexConstraintXYZ("pi+_1");
/* Включение / выключение группы условий на направление импульса
   распадной промежуточной частицы. "ks-flow" --- имя условия,
   использованное в гипотезе (может быть другим). */
hypo.disableFlowConstraintXYZ("ks-flow");
hypo.enableFlowConstraintXYZ("ks-flow");

