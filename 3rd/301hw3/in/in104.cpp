#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(163))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(302))==false) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(249))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(265)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(89))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(89))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(421))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(157)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << ((a->insert(157))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(425))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(157))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(495))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(181)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(147)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(84))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 66 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(432))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(294))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(11)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 80 << " " << (a->remove(308)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->remove(322))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(431)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(224))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 86 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(224)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(134))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(148)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << ((b->insert(84))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->remove(495))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(181)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(196)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->remove(323))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 110 << " " << (b->insert(252)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(183)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->remove(67))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(84))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->remove(112))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(294)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(383))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(293))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(178)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 138 << " " << (a->insert(489)) << std::endl;
*b=*b;
std::cout << "Line no:" << 140 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(28))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(164))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(129))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 147 << " " << (b->remove(41)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(421))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << (b->remove(202)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(421))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(28)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(148)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 158 << " " << ((b->insert(431))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(69)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(61)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(280))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(167))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->remove(294))==false) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 182 << " " << (a->remove(124)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(16))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->remove(478))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(11)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(248))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(181)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(83)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 200 << " " << ((b->remove(446))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(316))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(356)) << std::endl;
*b=*a;
std::cout << "Line no:" << 206 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->remove(230))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(248))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(11))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(25)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(202))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(178)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(202))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->insert(85)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
