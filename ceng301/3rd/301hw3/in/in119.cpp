#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(59))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(25))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(67))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->remove(256))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(366))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(366))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(209))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(469))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(374)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(166)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->remove(323))==false) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(396)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 62 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(333))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 69 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(303)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->insert(203))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(309)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 78 << " " << (a->insert(478)) << std::endl;
*a=*b;
std::cout << "Line no:" << 80 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(352)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(222)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 87 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(309)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(415)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << ((b->insert(469))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(14)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(172)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 106 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(469)) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(490)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 123 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(472))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(172))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(160)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 134 << " " << (b->remove(365)) << std::endl;
*b=*a;
std::cout << "Line no:" << 136 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(168)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 140 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(158)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(310)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(289))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(226)) << std::endl;
*a=*b;
std::cout << "Line no:" << 153 << " " << (b->insert(360)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(360)) << std::endl;
*b=*a;
std::cout << "Line no:" << 158 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(219)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(237)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(200)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(222))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(226))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(177)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(348))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(219)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(310)) << std::endl;
*a=*b;
std::cout << "Line no:" << 194 << " " << (a->remove(104)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << ((b->insert(450))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(299)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(119))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(200))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(171)) << std::endl;
*a=*b;
std::cout << "Line no:" << 209 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << ((b->remove(27))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(310)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(420))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(95)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(282))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(177)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(104) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(104) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(104) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(104) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << ((a->remove(443))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
