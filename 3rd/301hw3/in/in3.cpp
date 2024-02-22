#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(59))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(35))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(424)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(78)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(318))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(488)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(281)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(424))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(220)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 33 << " " << (a->remove(408)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(345)) << std::endl;
*a=*a;
std::cout << "Line no:" << 36 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(120)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 39 << " " << (b->insert(27)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << (a->remove(424)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 43 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(93)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(160)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(95)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->insert(27))==false) << std::endl;
b->printPretty();
b->printPretty();
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(27)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(169))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(104)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(226))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(485))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(129))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(417)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 85 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(19)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->remove(113)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(129))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->remove(154))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 96 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(268))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(169))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(339)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 109 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(370)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 120 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(476)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(472)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(319))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(79)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(79)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(468))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (a->insert(185)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->remove(443))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(422)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (b->remove(19)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(72))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 160 << " " << (b->insert(257)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(319))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(143)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 166 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(212)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(436) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(436) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(436) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(436) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(472)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(472)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->remove(145))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(311)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(251)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 193 << " " << ((a->insert(51))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(436)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->remove(11))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(89))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(458))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(319))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(382)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(494)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->insert(89)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
