#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(436))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->remove(428))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(436)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(500))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(42)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 22 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(155))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->insert(401))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(401))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(476))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(401))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->remove(278))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(313))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->insert(125))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 38 << " " << (b->remove(108)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(125)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(367)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(282)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(388))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(457))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(462))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(457)) << std::endl;
*b=*b;
std::cout << "Line no:" << 53 << " " << (b->insert(106)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(257)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(320)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 69 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(69))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(493))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(430))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(300)) << std::endl;
*b=*a;
std::cout << "Line no:" << 82 << " " << ((b->remove(327))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(463))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(9)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->remove(40))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->remove(14))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(161)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 93 << " " << ((b->insert(30))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(463))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << ((a->remove(51))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(300)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(356))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(158))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(134))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(463)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(96))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << ((b->insert(175))==false) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(430)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(9)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->remove(248))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(356))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(139)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(471))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(78))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(30)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(430)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(356)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(134)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 156 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->remove(228))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(161)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (b->insert(297)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 163 << " " << ((a->insert(269))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(158))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(297)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(158))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(441)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(42)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(233))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(30))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(158))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(38)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(361))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(30)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->insert(274))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(30)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(401)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 201 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(244)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(361))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(73)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(274))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(419)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 214 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(361)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->remove(402))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << ((a->remove(44))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
