#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(18)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(41))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(227))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(172))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(339))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(352)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(190))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(466))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(350)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(208)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(165))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->remove(119))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(110))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(349)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(426)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(336)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << ((a->remove(475))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(292))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(86))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(326)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(336)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(94))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(256)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (a->remove(292)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(162))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(349)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 93 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->remove(52))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(102)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 101 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(299)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << ((b->insert(189))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(469)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((a->insert(10))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(26) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(26) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(26) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(26) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(467)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 123 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(433)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(432)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(356))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(299))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(445)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(126)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(108)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(450)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(295))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(105)) << std::endl;
*b=*a;
std::cout << "Line no:" << 156 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(314)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << ((a->remove(458))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(283)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(105)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->remove(29))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(61)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(463))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(26))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(161))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->insert(467))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(192)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(175))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(350)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << (b->insert(312)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->remove(124))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(49))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(407))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(148))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(364)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(444)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 227 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->insert(445))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->insert(218))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
