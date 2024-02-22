#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(61)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(153)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(160))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(429)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 20 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(400)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(175)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 26 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(355)) << std::endl;
a->printPretty();
*b=*b;
*a=*a;
std::cout << "Line no:" << 31 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(378))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 36 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(289)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->remove(205))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->remove(149))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 46 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(155))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->remove(58))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(499) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(499) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(499) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(499) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->remove(346))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(304))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(355)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << ((a->insert(188))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->insert(360))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(360)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(160)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(302))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(390)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(124))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 83 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(475)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(172)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 93 << " " << ((a->insert(345))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(172))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(39))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(39)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(157))==false) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
b->printPretty();
*a=*b;
std::cout << "Line no:" << 121 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->remove(282))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(410)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(155))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(39)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(17)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(295))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(334)) << std::endl;
*a=*a;
std::cout << "Line no:" << 144 << " " << ((b->remove(58))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(17))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (b->insert(446)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(327)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(188))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->remove(87))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(155))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 158 << " " << (a->remove(279)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(46)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << ((a->remove(209))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(193)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(464) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(464) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(464) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(464) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(308)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(17))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(49))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(109))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << ((b->insert(112))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->insert(298))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 198 << " " << (b->insert(435)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << ((a->remove(422))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 202 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(347))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(210)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(217))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(188))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(199)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(188)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(193))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(416))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(109))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(248)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(35)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(416)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
