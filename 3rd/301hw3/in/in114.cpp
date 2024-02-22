#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(133))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(133))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(363))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 18 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((b->remove(302))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(127))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->remove(335))==false) << std::endl;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 32 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->insert(427))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 35 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(288)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(429))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(340)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(340)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << ((a->remove(68))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(212))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(57))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << ((a->remove(469))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(223) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(223) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(223) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(223) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(315)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(493)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(315)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(298)) << std::endl;
*b=*a;
std::cout << "Line no:" << 71 << " " << (a->remove(298)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(36))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 74 << " " << ((a->insert(36))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(223))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(36))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(298))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(7))==false) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 82 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(130))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(348)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(290)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(129))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(176)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(129) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(129) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(129) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(129) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((b->insert(176))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((a->insert(291))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << ((b->insert(114))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(176))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(114))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(211)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << ((a->remove(489))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 129 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->remove(98))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(90))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(404))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(155))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(78)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(277)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(39)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << ((b->insert(262))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(204))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(400)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << (a->insert(113)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 158 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(400)) << std::endl;
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(334) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 171 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->insert(414)) << std::endl;
*a=*b;
std::cout << "Line no:" << 174 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(163)) << std::endl;
a->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 180 << " " << (b->remove(237)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(20))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(117))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(344))==false) << std::endl;
*b=*a;
*a=*b;
std::cout << "Line no:" << 190 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(380))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(140)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(416)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << ((a->insert(39))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(107)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(31)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(114))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->remove(449))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(39)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(4)) << std::endl;
*a=*a;
std::cout << "Line no:" << 217 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(477)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(243)) << std::endl;
try{std::cout <<"Line no:" << 221 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 229 << " " << (a->remove(243)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
