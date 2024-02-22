#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(282)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(89)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(89))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 21 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(7)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(7))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(470))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(339)) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 42 << " " << ((a->insert(121))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->insert(458))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->remove(304))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->remove(404))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(107)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(20) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(20) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(20) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(20) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((b->insert(107))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(107)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(417))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->remove(215))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(378))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(90))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(100)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 77 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(132))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(137)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(327)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 86 << " " << (a->remove(385)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(7))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(121))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(399)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(37)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(147))==false) << std::endl;
b->printPretty();
b->printPretty();
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->remove(422))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(208)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(319)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 136 << " " << (a->remove(423)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(121))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->remove(282)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << (b->remove(240)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 144 << " " << ((b->insert(20))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(208))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(208)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(424)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(407))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->remove(153))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(463)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(378))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(386))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->remove(20))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(39)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(303)) << std::endl;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 165 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->remove(45))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(172)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(404) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(399))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(285))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(89))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->remove(305))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(7)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(262))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(230)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(44)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(37))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(399)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 200 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(424))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(361)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->remove(442))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(370))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(363)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(464)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->remove(85))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(32)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(154) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(154) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(154) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(154) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
