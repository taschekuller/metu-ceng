#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(172)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(47))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(426)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(30)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(150)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << ((a->remove(383))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(283)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(36))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(489))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(344)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->remove(123))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(284)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(302))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 51 << " " << ((a->remove(43))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 53 << " " << ((a->remove(323))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(473))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(224))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(475)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(182)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(284))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(109))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(41)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(408))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(30))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(386)) << std::endl;
*b=*a;
std::cout << "Line no:" << 102 << " " << ((a->insert(478))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(408)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->insert(326))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(296)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << ((a->insert(225))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(41))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(478)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(186)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->remove(125))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->remove(498))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(302))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(302)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(344)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(199)) << std::endl;
*a=*a;
std::cout << "Line no:" << 140 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(225)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 145 << " " << (b->remove(41)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 148 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(99))==false) << std::endl;
b->printPretty();
*a=*b;
b->printPretty();
std::cout << "Line no:" << 153 << " " << ((a->remove(455))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->remove(406))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(317))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(25))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(99)) << std::endl;
*a=*b;
std::cout << "Line no:" << 162 << " " << (a->remove(302)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << ((b->remove(492))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(30))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(305)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(221)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (b->remove(408)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(118))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->remove(23))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(355)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(88)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 198 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(441))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(221)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(367))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(408)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(356)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(277)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(305))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(261))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 225 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(118)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->remove(484))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(88) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(88) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(88) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(88) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->insert(472)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
