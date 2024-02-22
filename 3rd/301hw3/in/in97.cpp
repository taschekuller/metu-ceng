#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (b->insert(436)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 10 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((b->remove(458))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (b->insert(119)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(402)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 24 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(338)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 29 << " " << ((b->insert(429))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(234)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(305))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(334)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << ((b->insert(429))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->remove(6))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(368)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 42 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(126)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 48 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->insert(108))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->remove(241))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((b->insert(223))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(429)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(160)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(217))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(12)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(406))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(292))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(330))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(406))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(254)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 97 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->insert(352))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(316)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(217)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->remove(465))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 109 << " " << (a->insert(239)) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(66)) << std::endl;
*b=*b;
std::cout << "Line no:" << 121 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(106)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 126 << " " << ((b->insert(352))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(439)) << std::endl;
b->printPretty();
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(310)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(296)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(217))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(167))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 144 << " " << (b->remove(93)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(497)) << std::endl;
*b=*b;
std::cout << "Line no:" << 149 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(492))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 152 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(423)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(33)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 157 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(229)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->remove(277))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->remove(289))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(239))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(64)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->remove(66)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(212)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(453)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 182 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(358)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(242))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(33))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->remove(120))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(163)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(297)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << ((a->remove(454))==false) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 201 << " " << ((a->insert(101))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 203 << " " << (a->insert(208)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << ((b->remove(327))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->remove(93))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(453)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(291)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(422))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(434))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 219 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(190)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(456)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(1)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
