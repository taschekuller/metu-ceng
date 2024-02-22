#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(136)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 11 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(136))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(136)) << std::endl;
*b=*a;
std::cout << "Line no:" << 15 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((b->insert(194))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << ((b->insert(362))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (b->insert(327)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (b->remove(362)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(82))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->remove(425))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(46))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(331))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(88)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(386)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(46)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(362)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(194)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->remove(107)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->remove(333))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(478))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(311)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(427))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(398))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(208))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(327)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(54)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(179)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(184)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(10))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(386)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(331))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(262))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(133)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(24))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 101 << " " << ((a->insert(194))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(290))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(290)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->insert(314))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((a->insert(38))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
std::cout << "Line no:" << 122 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(485)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(259)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 127 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->remove(243))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(314))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(208)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(485)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(265)) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(230)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->remove(324))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(38))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(408)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(176)) << std::endl;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 158 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(183))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->insert(196))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 166 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(314)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(401)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(148))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(280)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << ((b->insert(223))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(149)) << std::endl;
*b=*a;
std::cout << "Line no:" << 193 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(229))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(125)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->remove(221))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(211))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(38))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->remove(7))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->remove(225))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 214 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(396))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(230)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->remove(89))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(183)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->insert(7)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(361)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
