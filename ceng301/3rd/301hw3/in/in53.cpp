#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(288)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(98))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(82)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->remove(60)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(240))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(272)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 33 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(474)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(7)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(298)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(334))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << ((a->remove(439))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(284)) << std::endl;
*a=*a;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(462))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(178)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(459)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(309))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(461)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(275))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(9)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(59))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(72)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(189)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(163))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(404))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(337)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->remove(462)) << std::endl;
b->printPretty();
b->printPretty();
*b=*b;
std::cout << "Line no:" << 93 << " " << (b->remove(189)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(10))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(425)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(189)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(173))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->remove(408))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << (a->remove(284)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->remove(260))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->remove(162))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(174)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 110 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(9)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(271)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 123 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(174)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(414)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 128 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(199))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 131 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(118))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(302)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(407))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->remove(98))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 148 << " " << (b->remove(19)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(440)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << ((b->insert(189))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(123)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 157 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(357))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(407))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 165 << " " << (a->insert(360)) << std::endl;
b->printPretty();
*b=*b;
std::cout << "Line no:" << 168 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(296)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(72) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(72) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(72) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(72) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((a->insert(350))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (a->remove(302)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(471))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(488))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(26))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(26)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << ((b->insert(414))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(257))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(144)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(350)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 210 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(462))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(350))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(453)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(144))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(132)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->remove(470))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((b->insert(350))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->remove(473))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
