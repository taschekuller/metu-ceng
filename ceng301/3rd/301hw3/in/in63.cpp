#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(54))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(12)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(63))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(201)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 13 << " " << ((a->remove(50))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(412))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(201)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(183))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->remove(79))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(412)) << std::endl;
*a=*a;
std::cout << "Line no:" << 25 << " " << (b->insert(226)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(331))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((b->remove(338))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(68))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(26))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(236)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(226)) << std::endl;
*a=*a;
std::cout << "Line no:" << 46 << " " << ((a->remove(224))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(122)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(122)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << ((b->remove(24))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(396)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((a->insert(283))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->remove(309))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(270))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(169)) << std::endl;
*b=*a;
std::cout << "Line no:" << 70 << " " << ((a->remove(456))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(169)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(444)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 74 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->remove(229))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(228))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(415))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(440))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(169))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(482)) << std::endl;
*b=*b;
std::cout << "Line no:" << 91 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(283)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(348))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(236)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(438))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(254))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 105 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->insert(169))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->remove(275))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 109 << " " << ((a->insert(283))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << (b->insert(318)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(228) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(208))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(228))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(498))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->remove(473))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->remove(331))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(318)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(101)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(282))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(382)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(327)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(438)) << std::endl;
*b=*b;
std::cout << "Line no:" << 149 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(381)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 158 << " " << ((b->insert(327))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(208))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(228)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 164 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(306))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(129))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(385)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(236)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(221))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(247)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << ((a->insert(100))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(338))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(104)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(226)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->remove(297))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 201 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(440))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(254)) << std::endl;
*a=*a;
std::cout << "Line no:" << 210 << " " << (a->insert(240)) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 213 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(405))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->insert(169))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(100)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->remove(282)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(282) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(282) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(282) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(282) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << ((b->remove(125))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
