#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(468)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(54))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(54)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->insert(170))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(273)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 25 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(318))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(242))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(318))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(155))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->remove(321))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->remove(175))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(32)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 42 << " " << ((b->remove(204))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(290)) << std::endl;
*a=*a;
std::cout << "Line no:" << 45 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(361)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(147)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(285) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(285) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(285) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(285) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << ((a->remove(445))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->insert(290))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->remove(390))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->insert(425))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(28)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(473)) << std::endl;
*b=*b;
std::cout << "Line no:" << 74 << " " << (b->remove(290)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->remove(415))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(251))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(425)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << ((a->remove(162))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(368))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(56)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(57))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(394)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 90 << " " << (a->insert(331)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 92 << " " << ((b->remove(254))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(473)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 95 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(31)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(186)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(14))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(301)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 106 << " " << ((a->insert(253))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(133)) << std::endl;
*a=*b;
std::cout << "Line no:" << 110 << " " << (a->insert(81)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(301) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(301) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(301) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(301) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 121 << " " << ((a->remove(151))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(50))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(122))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->insert(356))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->remove(348))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(356))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(336))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(321)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 134 << " " << (a->remove(28)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(208)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 137 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(356)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 145 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(194))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->remove(352))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(194)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << ((a->remove(118))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(3)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(234)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(132)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->remove(405))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((b->insert(28))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(411)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->remove(189))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(362))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(375))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(200))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(317)) << std::endl;
*b=*a;
std::cout << "Line no:" << 189 << " " << (b->insert(18)) << std::endl;
*b=*b;
std::cout << "Line no:" << 191 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(32))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(32)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(81)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(433)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 200 << " " << (b->remove(124)) << std::endl;
*a=*b;
std::cout << "Line no:" << 202 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(200))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->remove(485))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(324)) << std::endl;
*b=*b;
std::cout << "Line no:" << 213 << " " << (b->remove(99)) << std::endl;
*a=*a;
std::cout << "Line no:" << 215 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(205)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 218 << " " << ((b->insert(208))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(213)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << ((b->insert(375))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
