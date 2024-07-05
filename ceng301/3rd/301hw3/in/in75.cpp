#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->remove(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(145))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(258))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(339)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(104)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(469)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(445))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(66))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(275))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(239))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(303))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(40))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(82))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(58))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(336))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->remove(40))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->remove(272))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(319))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(418)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 74 << " " << ((a->remove(119))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 76 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(243))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 86 << " " << (b->remove(410)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->remove(474))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(482)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 96 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(82))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(379)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(494)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 107 << " " << ((b->remove(318))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->insert(158))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 110 << " " << (b->remove(166)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 112 << " " << (a->insert(404)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(409))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(494)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(409)) << std::endl;
*a=*b;
std::cout << "Line no:" << 128 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(49)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 136 << " " << (b->remove(453)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(267))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->insert(277)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 142 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(309))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->remove(490))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->remove(57))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(361)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(331)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << ((a->insert(36))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(36))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(404))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(297)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(342))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(330)) << std::endl;
*a=*b;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(104))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(281)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 185 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(287))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(391))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(482))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->remove(112))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 191 << " " << ((a->insert(342))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(331)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(196)) << std::endl;
*a=*a;
std::cout << "Line no:" << 200 << " " << (b->remove(58)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 202 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->remove(474))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(404))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(321))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(12))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->remove(126))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(103))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(441)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((b->remove(483))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
