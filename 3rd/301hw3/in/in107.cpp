#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(32)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << ((a->remove(362))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(455)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(37)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->remove(455)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(83))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(285)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(412))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(347))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(491))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(68))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(202)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(184)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(220)) << std::endl;
*b=*a;
std::cout << "Line no:" << 54 << " " << (b->insert(205)) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->remove(220)) << std::endl;
std::cout << "Line no:" << 56 << " " << ((a->remove(333))==false) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((b->remove(412))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(1)) << std::endl;
*b=*a;
std::cout << "Line no:" << 65 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(445))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(95)) << std::endl;
*a=*b;
std::cout << "Line no:" << 69 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(157)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 73 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(262))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(21))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(456)) << std::endl;
*a=*b;
std::cout << "Line no:" << 81 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->remove(168))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(95)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(95))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(262)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(92)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 98 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(110)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(477)) << std::endl;
try{std::cout <<"Line no:" << 103 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getFloor(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getCeiling(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getNext(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->get(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 111 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((a->remove(171))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 116 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->remove(41)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(153))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(38)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(147))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(157)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(307))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(140)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(140))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(492)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(447))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(142)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(87)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(385))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(11)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(188))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(55))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->remove(370))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(401)) << std::endl;
try{std::cout <<"Line no:" << 161 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getFloor(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getCeiling(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getNext(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->get(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 169 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((b->insert(413))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(151)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 173 << " " << ((b->insert(438))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(262)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 177 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(293)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(15)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(55)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(140))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(386)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(35)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(103))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(399)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << ((a->insert(140))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(184))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 216 << " " << ((b->insert(137))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->insert(438))==false) << std::endl;
try{std::cout <<"Line no:" << 219 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getFloor(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getCeiling(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getNext(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->get(401) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 227 << " " << (a->insert(348)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
