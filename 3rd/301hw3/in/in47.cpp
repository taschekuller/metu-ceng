#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(200)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->remove(200)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(327)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(327))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(345)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(241)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(110)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 32 << " " << (a->insert(180)) << std::endl;
*b=*b;
std::cout << "Line no:" << 34 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(241)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(222)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << ((a->remove(318))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(71)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 50 << " " << (a->remove(426)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->remove(387))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(395)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(209)) << std::endl;
*b=*a;
std::cout << "Line no:" << 66 << " " << ((a->remove(215))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(400)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(395))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(209))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 73 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(140)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(54)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(400)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(497)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 90 << " " << (b->remove(123)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(187)) << std::endl;
*a=*a;
std::cout << "Line no:" << 97 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(77)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << ((a->insert(364))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (b->remove(496)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(77))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->insert(129))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(129)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(360)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(497)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(496)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(113)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 129 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(364))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(165)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->remove(276))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(54)) << std::endl;
*a=*a;
std::cout << "Line no:" << 153 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(315))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(169)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(458))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(187))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 164 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(362)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(486)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 169 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(258)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (a->remove(40)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(487)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(113))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(404)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(172))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(66))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(487)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(310))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(14)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(297))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(66))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(380)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 219 << " " << (b->remove(435)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->remove(397))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->remove(148)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->remove(460)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
