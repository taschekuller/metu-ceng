#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(169))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(303))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(92))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(205))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(338))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(390))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(308)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(105)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(201)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(56))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << ((a->insert(397))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(451))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(121)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(56))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(296)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << ((a->remove(474))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(153))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(259)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(410)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 79 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(112))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(315))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(44)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->insert(148))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(245)) << std::endl;
*b=*a;
std::cout << "Line no:" << 92 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(193)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << ((a->remove(346))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->remove(181))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(292)) << std::endl;
*b=*b;
std::cout << "Line no:" << 102 << " " << ((b->insert(193))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 105 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->remove(495))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(163)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*a;
std::cout << "Line no:" << 122 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(56))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(223)) << std::endl;
*a=*a;
std::cout << "Line no:" << 127 << " " << ((a->insert(276))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 129 << " " << (b->insert(39)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 132 << " " << ((b->insert(267))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(160)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->remove(416))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(12))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->remove(238))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(227)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(105))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(217))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(276))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(223))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->remove(453))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(444)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(245) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(245) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(245) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(245) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(216))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << (a->remove(105)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(235)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 192 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(451)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 198 << " " << (a->insert(455)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 200 << " " << ((b->insert(410))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(455))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 203 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(489)) << std::endl;
*a=*a;
std::cout << "Line no:" << 207 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(47)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(239))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(56)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << ((a->insert(338))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(246)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((a->remove(496))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(292)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(260))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(47)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(137)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 229 << " " << (a->insert(450)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
