#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(270))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(447))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(73)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(122)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 15 << " " << (b->insert(407)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->remove(407)) << std::endl;
*a=*a;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(491)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 24 << " " << (b->remove(491)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(235))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((b->remove(234))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(299)) << std::endl;
*a=*a;
std::cout << "Line no:" << 36 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(30))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(68)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(341))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(299))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(248))==false) << std::endl;
try{std::cout <<"Line no:" << 47 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getFloor(258) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getCeiling(258) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getNext(258) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->get(258) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 55 << " " << ((b->remove(3))==false) << std::endl;
std::cout << "Line no:" << 56 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->remove(458)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((b->insert(248))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->remove(383))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 64 << " " << (b->remove(248)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(215)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(295)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(441)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << ((b->remove(383))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(258)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(30))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(312)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(109))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(295)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->remove(410))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(30)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->remove(219))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(77))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(200))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 95 << " " << ((a->remove(169))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(312)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 100 << " " << ((b->remove(275))==false) << std::endl;
try{std::cout <<"Line no:" << 101 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getFloor(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getCeiling(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getNext(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->get(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 109 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(257)) << std::endl;
*a=*b;
std::cout << "Line no:" << 114 << " " << (b->remove(118)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(389)) << std::endl;
*b=*b;
std::cout << "Line no:" << 122 << " " << (b->remove(389)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(8)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(56)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(486)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (a->insert(283)) << std::endl;
*a=*b;
std::cout << "Line no:" << 134 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(8)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(237))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 140 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(35))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (b->remove(237)) << std::endl;
*a=*a;
std::cout << "Line no:" << 148 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(218)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << ((b->insert(120))==false) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 155 << " " << (b->insert(285)) << std::endl;
try{std::cout <<"Line no:" << 156 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 157 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 158 << " " << a->getFloor(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getCeiling(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getNext(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->get(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 164 << " " << (a->remove(120)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(314))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(238))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->remove(409))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(286)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->insert(47))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 173 << " " << (a->remove(314)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(359)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->remove(315))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 179 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(139)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(47))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(340))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->remove(133))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(47)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->remove(43))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->remove(195))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(285))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->remove(358))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(21))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->remove(484))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(406)) << std::endl;
*b=*b;
std::cout << "Line no:" << 207 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(462)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << (b->insert(200)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(197)) << std::endl;
try{std::cout <<"Line no:" << 213 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 214 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 215 << " " << a->getFloor(493) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 216 << " " << a->getCeiling(493) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getNext(493) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->get(493) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 221 << " " << (a->insert(284)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
