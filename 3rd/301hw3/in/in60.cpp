#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(90))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(493)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(276)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 15 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(472)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(276)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(380)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(30))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(413))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 29 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(78)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(326))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(233))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(16)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 39 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(149)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << ((a->remove(195))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->remove(338))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->remove(164)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(195)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->insert(495))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 55 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 56 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 58 << " " << (b->remove(495)) << std::endl;
*a=*b;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 62 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(432))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(214))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(457)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 71 << " " << ((a->remove(145))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(356))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(138)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(380)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(16))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(500)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 85 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(202)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(192)) << std::endl;
*b=*a;
std::cout << "Line no:" << 91 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(112)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(233)) << std::endl;
try{std::cout <<"Line no:" << 100 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getFloor(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getCeiling(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getNext(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->get(108) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 108 << " " << ((a->remove(20))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(441))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((a->insert(214))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << ((b->remove(96))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << ((b->remove(316))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << ((b->insert(16))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(187))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(427)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(300))==false) << std::endl;
a->printPretty();
*a=*a;
a->printPretty();
std::cout << "Line no:" << 129 << " " << ((b->remove(63))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->remove(181))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->insert(22))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(194))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(22))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << ((b->insert(258))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(328)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 143 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(248)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(214)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 154 << " " << ((b->remove(344))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(479)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 158 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getFloor(479) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getCeiling(479) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getNext(479) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->get(479) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 168 << " " << ((b->remove(418))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(112)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->remove(212))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 172 << " " << ((a->remove(360))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 176 << " " << ((b->remove(285))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->remove(497))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(394))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(283)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(252)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(271)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(109)) << std::endl;
*b=*a;
std::cout << "Line no:" << 192 << " " << (b->remove(199)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(215)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(112)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(184))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(199)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->remove(46))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(479)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(303)) << std::endl;
try{std::cout <<"Line no:" << 216 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getFloor(149) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getCeiling(149) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getNext(149) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->get(149) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 224 << " " << (b->insert(388)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
