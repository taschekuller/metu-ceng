#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << (a->insert(362)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (a->remove(362)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
a->printPretty();
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (c->remove(372)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*b);
std::cout << (c->insert(44)) << std::endl;
*d=*c;
c->printPretty();
d->printPretty();
std::cout << (d->insert(37)) << std::endl;
std::cout << (b->insert(10)) << std::endl;
d->printPretty();
std::cout << (d->insert(37)) << std::endl;
*b=*b;
a->printPretty();
a->printPretty();
*a=*b;
std::cout << (d->remove(37)) << std::endl;
std::cout << (c->remove(81)) << std::endl;
b->printPretty();
std::cout << (e->remove(460)) << std::endl;
d->printPretty();
std::cout << (d->remove(382)) << std::endl;
e->printPretty();
std::cout << (b->remove(10)) << std::endl;
std::cout << (e->insert(32)) << std::endl;
std::cout << (c->insert(337)) << std::endl;
std::cout << (e->remove(32)) << std::endl;
d->printPretty();
std::cout << (b->remove(143)) << std::endl;
std::cout << (e->insert(78)) << std::endl;
b->printPretty();
std::cout << (c->remove(337)) << std::endl;
*a=*a;
*b=*b;
std::cout << (e->insert(78)) << std::endl;
d->printPretty();
std::cout << (c->insert(44)) << std::endl;
std::cout << (e->insert(78)) << std::endl;
std::cout << (b->insert(115)) << std::endl;
*e=*d;
std::cout << (b->insert(115)) << std::endl;
*c=*d;
std::cout << (c->insert(44)) << std::endl;
std::cout << (a->remove(10)) << std::endl;
std::cout << (b->insert(484)) << std::endl;
std::cout << (e->remove(44)) << std::endl;
*e=*b;
std::cout << (d->insert(158)) << std::endl;
std::cout << (c->insert(44)) << std::endl;
std::cout << (b->insert(500)) << std::endl;
c->printPretty();
std::cout << (e->remove(484)) << std::endl;
std::cout << (a->remove(408)) << std::endl;
std::cout << (c->insert(111)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
std::cout << (d->remove(340)) << std::endl;
std::cout << (b->remove(228)) << std::endl;
*b=*d;
d->printPretty();
*a=*a;
std::cout << (d->insert(44)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
b->printPretty();
d->printPretty();
d->printPretty();
std::cout << (b->insert(44)) << std::endl;
b->printPretty();
std::cout << (c->insert(111)) << std::endl;
std::cout << (c->remove(447)) << std::endl;
*b=*d;
*a=*e;
std::cout << (c->remove(44)) << std::endl;
std::cout << (a->insert(115)) << std::endl;
std::cout << (c->remove(4)) << std::endl;
std::cout << (d->insert(377)) << std::endl;
std::cout << (b->insert(158)) << std::endl;
std::cout << (e->remove(190)) << std::endl;
*d=*d;
std::cout << (a->insert(142)) << std::endl;
*d=*d;
std::cout << (e->remove(364)) << std::endl;
std::cout << (c->remove(210)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
std::cout << (e->insert(335)) << std::endl;
std::cout << (d->insert(44)) << std::endl;
std::cout << (e->remove(113)) << std::endl;
std::cout << (c->remove(71)) << std::endl;
*d=*c;
std::cout << (d->insert(290)) << std::endl;
a->printPretty();
std::cout << (c->insert(111)) << std::endl;
std::cout << (a->remove(156)) << std::endl;
*a=*d;
std::cout << (c->insert(483)) << std::endl;
*e=*d;
std::cout << (d->remove(290)) << std::endl;
c->printPretty();
std::cout << (b->insert(213)) << std::endl;
std::cout << (e->remove(290)) << std::endl;
*a=*e;
std::cout << (b->insert(44)) << std::endl;
std::cout << (a->insert(111)) << std::endl;
std::cout << (a->insert(121)) << std::endl;
*a=*e;
e->printPretty();
a->printPretty();
b->printPretty();
std::cout << (c->insert(111)) << std::endl;
std::cout << (d->insert(111)) << std::endl;
std::cout << (b->remove(29)) << std::endl;
std::cout << (b->remove(265)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (c->remove(483)) << std::endl;
std::cout << (c->insert(111)) << std::endl;
c->printPretty();
std::cout << (e->remove(176)) << std::endl;
std::cout << (d->remove(116)) << std::endl;
*d=*e;
d->printPretty();
*d=*e;
std::cout << (e->insert(111)) << std::endl;
std::cout << (e->remove(470)) << std::endl;
std::cout << (c->insert(435)) << std::endl;
e->printPretty();
a->printPretty();
*e=*a;
std::cout << (e->remove(111)) << std::endl;
*d=*e;
std::cout << (a->remove(111)) << std::endl;
*c=*b;
*d=*a;
std::cout << (e->insert(486)) << std::endl;
std::cout << (e->remove(486)) << std::endl;
std::cout << (d->insert(452)) << std::endl;
std::cout << (d->remove(106)) << std::endl;
*e=*c;
std::cout << (b->remove(156)) << std::endl;
std::cout << (e->remove(213)) << std::endl;
std::cout << (e->remove(158)) << std::endl;
*b=*e;
std::cout << (b->insert(42)) << std::endl;
std::cout << (e->insert(44)) << std::endl;
std::cout << (d->insert(491)) << std::endl;
d->printPretty();
b->printPretty();
c->printPretty();
e->printPretty();
*e=*e;
std::cout << (c->remove(497)) << std::endl;
*e=*d;
std::cout << (e->remove(320)) << std::endl;
std::cout << (a->remove(464)) << std::endl;
std::cout << (c->remove(198)) << std::endl;
std::cout << (c->remove(196)) << std::endl;
std::cout << (b->insert(385)) << std::endl;
*e=*a;
std::cout << (c->insert(44)) << std::endl;
a->printPretty();
std::cout << (a->insert(105)) << std::endl;
d->printPretty();
std::cout << (a->insert(105)) << std::endl;
std::cout << (d->insert(491)) << std::endl;
std::cout << (d->remove(452)) << std::endl;
e->printPretty();
std::cout << (a->insert(105)) << std::endl;
e->printPretty();
std::cout << (c->remove(44)) << std::endl;
std::cout << (c->remove(158)) << std::endl;
b->printPretty();
std::cout << (a->remove(105)) << std::endl;
*a=*e;
std::cout << (c->insert(314)) << std::endl;
std::cout << (d->insert(236)) << std::endl;
std::cout << (b->insert(44)) << std::endl;
std::cout << (d->remove(491)) << std::endl;
std::cout << (b->insert(42)) << std::endl;
std::cout << (c->remove(332)) << std::endl;
std::cout << (d->insert(438)) << std::endl;
std::cout << (b->insert(385)) << std::endl;
std::cout << (b->insert(252)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (c->remove(266)) << std::endl;
b->printPretty();
std::cout << (c->remove(85)) << std::endl;
std::cout << (d->insert(438)) << std::endl;
std::cout << (c->remove(380)) << std::endl;
std::cout << (b->remove(442)) << std::endl;
b->printPretty();
std::cout << (d->remove(278)) << std::endl;
std::cout << (c->insert(138)) << std::endl;
std::cout << (b->remove(304)) << std::endl;
e->printPretty();
std::cout << (d->insert(344)) << std::endl;
std::cout << (b->remove(44)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (d->insert(236)) << std::endl;
std::cout << (e->insert(316)) << std::endl;
std::cout << (b->insert(20)) << std::endl;
std::cout << (b->remove(252)) << std::endl;
std::cout << (c->insert(488)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (e->remove(47)) << std::endl;
std::cout << (d->insert(71)) << std::endl;
std::cout << (a->insert(136)) << std::endl;
std::cout << (d->insert(209)) << std::endl;
*e=*a;
std::cout << (e->remove(59)) << std::endl;
std::cout << (e->insert(136)) << std::endl;
std::cout << (a->insert(136)) << std::endl;
std::cout << (c->insert(143)) << std::endl;
std::cout << (d->insert(266)) << std::endl;
std::cout << (d->remove(239)) << std::endl;
*b=*d;
std::cout << (d->insert(71)) << std::endl;
std::cout << (d->remove(266)) << std::endl;
std::cout << (d->remove(218)) << std::endl;
std::cout << (c->insert(213)) << std::endl;
std::cout << (b->insert(232)) << std::endl;
d->printPretty();
std::cout << (e->remove(370)) << std::endl;
std::cout << (d->insert(209)) << std::endl;
std::cout << (b->insert(344)) << std::endl;
a->printPretty();
std::cout << (e->insert(291)) << std::endl;
std::cout << (e->remove(291)) << std::endl;
std::cout << (b->remove(209)) << std::endl;
*e=*d;
std::cout << (e->remove(113)) << std::endl;
*d=*c;
e->printPretty();
std::cout << (a->insert(136)) << std::endl;
std::cout << (b->remove(71)) << std::endl;
e->printPretty();
std::cout << (a->remove(135)) << std::endl;
*b=*c;
std::cout << (a->remove(136)) << std::endl;
std::cout << (b->remove(183)) << std::endl;
*d=*c;
std::cout << (b->remove(213)) << std::endl;
b->printPretty();
std::cout << (c->remove(138)) << std::endl;
std::cout << (c->remove(143)) << std::endl;
std::cout << (e->insert(295)) << std::endl;
*d=*a;
std::cout << (b->insert(138)) << std::endl;
std::cout << (a->remove(179)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (c->insert(213)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
*d=*a;
c->printPretty();
std::cout << (e->insert(336)) << std::endl;
*e=*d;
std::cout << (c->remove(314)) << std::endl;
std::cout << (c->insert(488)) << std::endl;
d->printPretty();
*e=*a;
std::cout << (e->insert(97)) << std::endl;
std::cout << (b->remove(314)) << std::endl;
std::cout << (d->remove(41)) << std::endl;
*c=*b;
e->printPretty();
*a=*c;
std::cout << (b->insert(149)) << std::endl;
std::cout << (c->insert(71)) << std::endl;
a->printPretty();
std::cout << (a->insert(138)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (c->insert(154)) << std::endl;
*a=*a;
d->printPretty();
std::cout << (b->remove(50)) << std::endl;
*c=*b;
a->printPretty();
std::cout << (e->insert(145)) << std::endl;
std::cout << (d->remove(215)) << std::endl;
d->printPretty();
*e=*e;
std::cout << (c->insert(138)) << std::endl;
std::cout << (d->remove(244)) << std::endl;
std::cout << (a->remove(488)) << std::endl;
std::cout << (c->remove(138)) << std::endl;
std::cout << (c->remove(488)) << std::endl;
e->printPretty();
std::cout << (e->remove(145)) << std::endl;
std::cout << (b->insert(30)) << std::endl;
e->printPretty();
std::cout << (b->remove(63)) << std::endl;
std::cout << (d->insert(355)) << std::endl;
*d=*b;
std::cout << (c->remove(143)) << std::endl;
std::cout << (d->remove(30)) << std::endl;
std::cout << (d->insert(149)) << std::endl;
std::cout << (c->insert(205)) << std::endl;
d->printPretty();
std::cout << (b->insert(80)) << std::endl;
std::cout << (d->remove(406)) << std::endl;
std::cout << (b->remove(149)) << std::endl;
std::cout << (b->insert(143)) << std::endl;
std::cout << (a->insert(143)) << std::endl;
std::cout << (e->insert(330)) << std::endl;
std::cout << (b->remove(80)) << std::endl;
std::cout << (d->insert(350)) << std::endl;
std::cout << (b->remove(148)) << std::endl;
std::cout << (d->insert(149)) << std::endl;
std::cout << (c->remove(201)) << std::endl;
*c=*c;
c->printPretty();
c->printPretty();
*e=*d;
std::cout << (a->remove(143)) << std::endl;
std::cout << (c->insert(205)) << std::endl;
d->printPretty();
std::cout << (b->remove(138)) << std::endl;
*c=*a;
std::cout << (d->insert(488)) << std::endl;
std::cout << (b->insert(479)) << std::endl;
std::cout << (b->insert(143)) << std::endl;
std::cout << (b->insert(143)) << std::endl;
std::cout << (c->insert(28)) << std::endl;
*c=*e;
std::cout << (b->remove(488)) << std::endl;
std::cout << (b->remove(383)) << std::endl;
*a=*a;
a->printPretty();
std::cout << (a->insert(138)) << std::endl;
std::cout << (d->remove(350)) << std::endl;
d->printPretty();
std::cout << (d->insert(33)) << std::endl;
std::cout << (c->remove(290)) << std::endl;
std::cout << (b->remove(283)) << std::endl;
*a=*c;
*e=*d;
b->printPretty();
*d=*a;
std::cout << (a->insert(26)) << std::endl;
b->printPretty();
std::cout << (b->remove(175)) << std::endl;
std::cout << (b->insert(107)) << std::endl;
std::cout << (d->remove(467)) << std::endl;
std::cout << (e->remove(490)) << std::endl;
std::cout << (e->remove(434)) << std::endl;
std::cout << (b->insert(107)) << std::endl;
b->printPretty();
std::cout << (b->remove(143)) << std::endl;
*c=*d;
std::cout << (b->remove(160)) << std::endl;
*a=*b;
std::cout << (d->remove(449)) << std::endl;
*b=*e;
*a=*a;
std::cout << (c->remove(138)) << std::endl;
std::cout << (d->insert(268)) << std::endl;
d->printPretty();
std::cout << (e->insert(44)) << std::endl;
std::cout << (a->remove(119)) << std::endl;
std::cout << (c->remove(402)) << std::endl;
std::cout << (c->insert(350)) << std::endl;
std::cout << (d->remove(462)) << std::endl;
std::cout << (a->insert(30)) << std::endl;
std::cout << (b->insert(26)) << std::endl;
a->printPretty();
std::cout << (b->remove(477)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (e->insert(138)) << std::endl;
std::cout << (c->remove(143)) << std::endl;
a->printPretty();
std::cout << (d->insert(292)) << std::endl;
std::cout << (d->remove(138)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
e->printPretty();
std::cout << (d->remove(174)) << std::endl;
*a=*d;
a->printPretty();
std::cout << (c->remove(380)) << std::endl;
std::cout << (d->remove(236)) << std::endl;
std::cout << (b->remove(314)) << std::endl;
*b=*c;
std::cout << (e->remove(233)) << std::endl;
std::cout << (e->remove(10)) << std::endl;
std::cout << (b->remove(170)) << std::endl;
std::cout << (d->remove(149)) << std::endl;
std::cout << (d->insert(350)) << std::endl;
std::cout << (e->insert(488)) << std::endl;
std::cout << (e->insert(33)) << std::endl;
std::cout << (a->insert(350)) << std::endl;
a->printPretty();
*d=*e;
std::cout << (a->insert(292)) << std::endl;
e->printPretty();
*b=*b;
std::cout << (c->remove(149)) << std::endl;
c->printPretty();
std::cout << (c->remove(305)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (d->remove(267)) << std::endl;
std::cout << (e->remove(108)) << std::endl;
a->printPretty();
*e=*e;
c->printPretty();
std::cout << (a->remove(375)) << std::endl;
std::cout << (b->remove(361)) << std::endl;
*a=*d;
std::cout << (c->insert(204)) << std::endl;
std::cout << (e->remove(488)) << std::endl;
std::cout << (e->insert(149)) << std::endl;
std::cout << (c->remove(350)) << std::endl;
std::cout << (b->insert(222)) << std::endl;
std::cout << (e->remove(44)) << std::endl;
*e=*c;
std::cout << (c->remove(315)) << std::endl;
a->printPretty();
std::cout << (e->insert(204)) << std::endl;
std::cout << (a->insert(276)) << std::endl;
std::cout << (e->insert(197)) << std::endl;
std::cout << (c->remove(224)) << std::endl;
std::cout << (e->remove(310)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (d->insert(118)) << std::endl;
*d=*c;
std::cout << (a->insert(176)) << std::endl;
std::cout << (e->remove(197)) << std::endl;
*b=*d;
c->printPretty();
std::cout << (d->remove(488)) << std::endl;
*b=*b;
std::cout << (a->remove(224)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (a->insert(437)) << std::endl;
std::cout << (c->insert(488)) << std::endl;
std::cout << (d->insert(204)) << std::endl;
std::cout << (c->remove(488)) << std::endl;
std::cout << (c->insert(204)) << std::endl;
std::cout << (c->remove(204)) << std::endl;
std::cout << (e->remove(488)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (c->insert(112)) << std::endl;
std::cout << (c->remove(112)) << std::endl;
*e=*e;
c->printPretty();
d->printPretty();
std::cout << (b->remove(254)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
b->printPretty();
std::cout << (a->remove(138)) << std::endl;
std::cout << (e->remove(374)) << std::endl;
std::cout << (c->insert(181)) << std::endl;
std::cout << (c->remove(181)) << std::endl;
std::cout << (d->insert(280)) << std::endl;
std::cout << (d->insert(280)) << std::endl;
c->printPretty();
std::cout << (d->remove(226)) << std::endl;
*a=*a;
std::cout << (d->remove(204)) << std::endl;
std::cout << (d->insert(478)) << std::endl;
std::cout << (d->insert(280)) << std::endl;
*d=*e;
*a=*e;
a->printPretty();
*e=*b;
std::cout << (a->insert(72)) << std::endl;
std::cout << (b->remove(204)) << std::endl;
*d=*e;
c->printPretty();
b->printPretty();
std::cout << (a->remove(16)) << std::endl;
b->printPretty();
std::cout << (e->remove(204)) << std::endl;
std::cout << (d->insert(496)) << std::endl;
c->printPretty();
std::cout << (d->remove(200)) << std::endl;
a->printPretty();
std::cout << (a->insert(393)) << std::endl;
*e=*d;
std::cout << (b->remove(431)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
d->printPretty();
a->printPretty();
*b=*d;
c->printPretty();
*e=*c;
std::cout << (b->insert(218)) << std::endl;
e->printPretty();
std::cout << (a->insert(204)) << std::endl;
c->printPretty();
std::cout << (a->remove(281)) << std::endl;
std::cout << (b->insert(64)) << std::endl;
std::cout << (e->insert(78)) << std::endl;
a->printPretty();
std::cout << (d->remove(204)) << std::endl;
std::cout << (c->remove(241)) << std::endl;
*c=*a;
std::cout << (e->remove(78)) << std::endl;
*c=*e;
std::cout << (d->insert(201)) << std::endl;
*c=*b;
std::cout << (d->insert(146)) << std::endl;
std::cout << (d->insert(496)) << std::endl;
c->printPretty();
std::cout << (a->remove(496)) << std::endl;
std::cout << (b->insert(204)) << std::endl;
std::cout << (e->remove(176)) << std::endl;
c->printPretty();
std::cout << (a->insert(204)) << std::endl;
a->printPretty();
std::cout << (d->remove(496)) << std::endl;
std::cout << (c->insert(121)) << std::endl;
std::cout << (c->remove(88)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
std::cout << (b->insert(218)) << std::endl;
*c=*c;
*a=*d;
std::cout << (b->remove(314)) << std::endl;
std::cout << (c->remove(358)) << std::endl;
std::cout << (b->insert(330)) << std::endl;
std::cout << (d->remove(176)) << std::endl;
std::cout << (a->insert(240)) << std::endl;
std::cout << (b->remove(64)) << std::endl;
std::cout << (a->insert(201)) << std::endl;
*e=*d;
std::cout << (b->remove(427)) << std::endl;
std::cout << (a->remove(201)) << std::endl;
std::cout << (c->insert(218)) << std::endl;
*e=*e;
std::cout << (e->remove(201)) << std::endl;
std::cout << (e->insert(146)) << std::endl;
std::cout << (e->remove(25)) << std::endl;
std::cout << (e->insert(294)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (a->insert(146)) << std::endl;
std::cout << (a->insert(146)) << std::endl;
std::cout << (b->insert(485)) << std::endl;
std::cout << (b->remove(330)) << std::endl;
std::cout << (c->insert(496)) << std::endl;
std::cout << (b->remove(496)) << std::endl;
a->printPretty();
std::cout << (c->remove(218)) << std::endl;
*b=*c;
std::cout << (e->insert(1)) << std::endl;
*d=*c;
std::cout << (a->remove(414)) << std::endl;
*c=*b;
std::cout << (d->insert(461)) << std::endl;
e->printPretty();
d->printPretty();
std::cout << (d->insert(496)) << std::endl;
std::cout << (a->insert(340)) << std::endl;
std::cout << (d->remove(105)) << std::endl;
std::cout << (a->remove(376)) << std::endl;
std::cout << (d->insert(122)) << std::endl;
std::cout << (a->remove(278)) << std::endl;
std::cout << (e->insert(1)) << std::endl;
std::cout << (e->remove(294)) << std::endl;
std::cout << (b->insert(64)) << std::endl;
*e=*c;
*c=*a;
std::cout << (a->insert(340)) << std::endl;
std::cout << (d->remove(183)) << std::endl;
std::cout << (c->remove(240)) << std::endl;
std::cout << (b->insert(41)) << std::endl;
std::cout << (d->remove(496)) << std::endl;
c->printPretty();
*a=*e;
std::cout << (a->insert(121)) << std::endl;
*d=*a;
std::cout << (c->insert(238)) << std::endl;
std::cout << (b->insert(73)) << std::endl;
*e=*d;
std::cout << (a->remove(311)) << std::endl;
*a=*b;
std::cout << (b->insert(133)) << std::endl;
std::cout << (d->remove(430)) << std::endl;
std::cout << (d->remove(465)) << std::endl;
c->printPretty();
std::cout << (e->insert(204)) << std::endl;
std::cout << (c->remove(421)) << std::endl;
std::cout << (e->insert(121)) << std::endl;
std::cout << (e->remove(195)) << std::endl;
b->printPretty();
std::cout << (e->remove(216)) << std::endl;
*d=*e;
std::cout << (d->remove(399)) << std::endl;
c->printPretty();
std::cout << (d->remove(158)) << std::endl;
std::cout << (a->remove(73)) << std::endl;
std::cout << (a->insert(233)) << std::endl;
std::cout << (a->remove(49)) << std::endl;
std::cout << (c->remove(441)) << std::endl;
std::cout << (e->remove(46)) << std::endl;
std::cout << (e->insert(64)) << std::endl;
std::cout << (c->insert(180)) << std::endl;
std::cout << (c->insert(50)) << std::endl;
std::cout << (a->remove(180)) << std::endl;
std::cout << (b->remove(131)) << std::endl;
std::cout << (d->insert(121)) << std::endl;
std::cout << (e->remove(496)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
std::cout << (e->insert(295)) << std::endl;
a->printPretty();
std::cout << (b->remove(497)) << std::endl;
std::cout << (d->remove(496)) << std::endl;
std::cout << (a->remove(284)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
std::cout << (a->insert(496)) << std::endl;
std::cout << (c->insert(180)) << std::endl;
std::cout << (b->insert(419)) << std::endl;
std::cout << (c->remove(317)) << std::endl;
std::cout << (a->remove(382)) << std::endl;
e->printPretty();
*a=*b;
std::cout << (b->insert(308)) << std::endl;
std::cout << (b->remove(41)) << std::endl;
std::cout << (d->remove(64)) << std::endl;
*c=*b;
*c=*c;
std::cout << (c->insert(73)) << std::endl;
std::cout << (c->remove(478)) << std::endl;
std::cout << (b->remove(389)) << std::endl;
std::cout << (a->insert(204)) << std::endl;
std::cout << (d->remove(122)) << std::endl;
std::cout << (e->remove(64)) << std::endl;
b->printPretty();
std::cout << (b->remove(163)) << std::endl;
std::cout << (d->insert(198)) << std::endl;
*d=*a;
std::cout << (e->remove(204)) << std::endl;
std::cout << (c->insert(133)) << std::endl;
*b=*b;
std::cout << (c->remove(86)) << std::endl;
std::cout << (d->remove(64)) << std::endl;
b->printPretty();
*b=*a;
std::cout << (e->remove(295)) << std::endl;
std::cout << (d->insert(290)) << std::endl;
a->printPretty();
std::cout << (a->remove(204)) << std::endl;
*d=*e;
std::cout << (d->remove(227)) << std::endl;
std::cout << (c->remove(343)) << std::endl;
std::cout << (b->remove(89)) << std::endl;
*c=*a;
std::cout << (d->remove(177)) << std::endl;
a->printPretty();
std::cout << (e->insert(121)) << std::endl;
*e=*e;
std::cout << (b->insert(41)) << std::endl;
std::cout << (a->remove(243)) << std::endl;
std::cout << (d->remove(121)) << std::endl;
*e=*d;
std::cout << (e->remove(263)) << std::endl;
*d=*d;
std::cout << (e->remove(382)) << std::endl;
std::cout << (a->insert(206)) << std::endl;
*a=*b;
std::cout << (d->remove(449)) << std::endl;
std::cout << (c->remove(41)) << std::endl;
std::cout << (c->insert(496)) << std::endl;
*e=*c;
std::cout << (e->insert(303)) << std::endl;
*c=*c;
std::cout << (d->remove(459)) << std::endl;
*e=*e;
std::cout << (a->insert(419)) << std::endl;
e->printPretty();
a->printPretty();
*c=*a;
std::cout << (b->remove(41)) << std::endl;
std::cout << (e->remove(496)) << std::endl;
*e=*c;
c->printPretty();
d->printPretty();
std::cout << (b->remove(204)) << std::endl;
e->printPretty();
std::cout << (a->insert(133)) << std::endl;
std::cout << (a->remove(332)) << std::endl;
*d=*c;
std::cout << (d->insert(64)) << std::endl;
*a=*a;
std::cout << (b->insert(144)) << std::endl;
std::cout << (b->insert(64)) << std::endl;
d->printPretty();
return 0;
}
