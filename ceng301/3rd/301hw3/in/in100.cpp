#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(271))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(34))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(380)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(431)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(195))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(78))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(78)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(206)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(6)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << ((a->remove(293))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(58)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(143)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(234))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(199)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 49 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(362))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(490)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(498)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(458))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 67 << " " << ((a->insert(485))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(458))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(487)) << std::endl;
*b=*b;
std::cout << "Line no:" << 77 << " " << ((a->remove(162))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(363))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(234)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(211))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(458)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(455))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(14)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 106 << " " << ((b->insert(86))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(394))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(295)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(150)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(487) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(487) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(487) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(487) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(394))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(6))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->remove(59))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(114)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(273)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 139 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(347))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(23))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(45)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 147 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->remove(286))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(383))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->remove(272))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->insert(15))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(465))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(11)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->remove(358))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->remove(14)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 181 << " " << ((a->remove(331))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(394))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(93)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->remove(18))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(151))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(6)) << std::endl;
b->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 208 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(335)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(201)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(198)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->insert(498))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(201)) << std::endl;
*a=*a;
std::cout << "Line no:" << 226 << " " << (b->insert(281)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->remove(316))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 229 << " " << (a->remove(45)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(467)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
