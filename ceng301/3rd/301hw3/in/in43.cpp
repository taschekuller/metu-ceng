#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(430))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(266)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(385))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(266)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(74)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << ((a->insert(430))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(287)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 20 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(411)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(399)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 24 << " " << ((a->remove(161))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(446)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(343)) << std::endl;
*a=*b;
std::cout << "Line no:" << 30 << " " << ((b->remove(101))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(411)) << std::endl;
*b=*b;
std::cout << "Line no:" << 33 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(446))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(340))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(446)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->remove(312))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 55 << " " << (a->remove(199)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << (b->remove(355)) << std::endl;
*b=*b;
std::cout << "Line no:" << 66 << " " << (b->insert(280)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(120))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(271)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(280))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(46))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(99)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((a->remove(310))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(268))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->insert(120))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(381))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(40))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(80))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(120)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(166)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 101 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->remove(47))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((b->remove(223))==false) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(32) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(32) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(32) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(32) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 123 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(486))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(205)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(268)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(280))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(272))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(462)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(461)) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 151 << " " << ((b->insert(337))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->remove(477))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(337))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(98))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(354)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 167 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->insert(432))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->remove(500)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(354) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(354) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(354) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(354) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 181 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(19)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(286))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << ((b->insert(476))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(354)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(113)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(73)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(461))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(118)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(355)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(420))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(176))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(76)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 219 << " " << (b->remove(355)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(46))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(324))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->insert(187))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->remove(206)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(301)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
