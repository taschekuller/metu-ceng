#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(126))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(461)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(461))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(454)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(228))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(430)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (a->insert(110)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(241)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 39 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(298)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(67))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (a->insert(163)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(129)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(430)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(443))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(158)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 69 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(110))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(67)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 86 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(163)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 90 << " " << (b->insert(128)) << std::endl;
*a=*a;
std::cout << "Line no:" << 92 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(128)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(87))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(241))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->remove(176))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(73))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(87)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(140)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 106 << " " << ((b->insert(330))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(418)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(425)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(273)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(469) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(415)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 128 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(110))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(8)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->remove(259))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(110))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (a->insert(16)) << std::endl;
*a=*b;
std::cout << "Line no:" << 142 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(400)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(400)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(39))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << ((b->insert(314))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(260))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(401))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 158 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(314)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(10))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(328)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 166 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(205)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(314)) << std::endl;
*b=*a;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(39) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(39) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(39) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(39) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(425)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(418)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(398)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 190 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(459)) << std::endl;
*b=*b;
std::cout << "Line no:" << 195 << " " << (b->remove(429)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(401))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(4)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(278))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(489)) << std::endl;
*a=*b;
std::cout << "Line no:" << 211 << " " << (b->remove(133)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(330))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(167)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 224 << " " << (b->remove(39)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 226 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->insert(169)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(9) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(9) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(9) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(9) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->remove(122)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
