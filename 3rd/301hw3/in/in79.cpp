#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(200)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(207)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(424)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << ((a->insert(211))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(424)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(184)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(142)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 39 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(265))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(59))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(146))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(89)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(202)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(2)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 65 << " " << ((b->remove(381))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(492)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 68 << " " << ((b->remove(245))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->remove(24))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(492))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(492))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(200))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(202))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(69))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(69))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(172))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(69))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->remove(93))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(487)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 93 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(266)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->remove(158))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(271))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->remove(463))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(166)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 109 << " " << (b->remove(69)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(467)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(271) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(271) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(271) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(271) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(180)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 121 << " " << ((a->remove(449))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(329)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 126 << " " << ((a->remove(90))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 128 << " " << ((b->insert(300))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(97)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(286)) << std::endl;
*a=*a;
std::cout << "Line no:" << 133 << " " << ((b->insert(383))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(437))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(300)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(348))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(280)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(25)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(123)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 147 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(304))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(271))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(266))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 152 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(266)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(166))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 158 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(123)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(197))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(271)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->remove(138))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(261)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(213) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(213) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(213) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(213) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(392)) << std::endl;
*a=*a;
std::cout << "Line no:" << 181 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(166))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->remove(268))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(88))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 191 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(374))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->remove(289))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(487))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(342)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(127))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(131)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << ((a->insert(24))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(497)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(422))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(419)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << ((b->remove(446))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(440))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(443))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->remove(25))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(286)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(359))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->remove(408))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(180) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(180) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(180) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(180) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->remove(356)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
