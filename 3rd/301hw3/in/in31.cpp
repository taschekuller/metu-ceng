#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(192))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(269))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(269))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(399))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(110)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(184))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(337)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(104)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(99)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 32 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(293))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->remove(498)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(489)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(208)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(21)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(215))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(9))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(9)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(111)) << std::endl;
*a=*a;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << ((b->remove(178))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(111)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(76))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(76))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(119)) << std::endl;
*b=*b;
std::cout << "Line no:" << 70 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(265)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(496)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(476))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(335))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(128)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(335))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->insert(476))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(476)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(65)) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 96 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(25))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 99 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->insert(65))==false) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(333) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(333) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(333) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(333) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->insert(341))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 118 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(428)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 121 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(428)) << std::endl;
*a=*b;
std::cout << "Line no:" << 124 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(242)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(275)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(31))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(408)) << std::endl;
*b=*b;
std::cout << "Line no:" << 138 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(110)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(275))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(254)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(408))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(234))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(496)) << std::endl;
*b=*b;
std::cout << "Line no:" << 157 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(392)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(408)) << std::endl;
try{std::cout <<"Line no:" << 166 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getFloor(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getCeiling(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getNext(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->get(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 174 << " " << ((b->insert(25))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 176 << " " << ((b->insert(5))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 178 << " " << (a->remove(392)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((b->remove(418))==false) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 183 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(410))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(159)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(242)) << std::endl;
*a=*b;
std::cout << "Line no:" << 195 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(117)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(142)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (a->remove(341)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(94)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(114))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(242))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->insert(202))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(28)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 218 << " " << (b->remove(114)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(94)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(13)) << std::endl;
try{std::cout <<"Line no:" << 224 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getFloor(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getCeiling(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getNext(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->get(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 232 << " " << (b->insert(305)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
