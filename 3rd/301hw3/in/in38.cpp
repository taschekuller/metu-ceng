#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(437)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << ((a->remove(50))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(389)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(29)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(274))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(313)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(38)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(41)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->insert(389))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(389)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(434)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 38 << " " << (a->insert(34)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(366))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << ((b->remove(50))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(44)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->remove(163))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 53 << " " << ((a->insert(34))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(34) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(34) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(34) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(34) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((b->remove(335))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(136))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(41))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 68 << " " << (a->insert(467)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(44)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(108))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(348)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << (a->remove(281)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(480))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(28)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(23))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(350))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(500)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(401)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(480)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(488))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(455))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(70)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(470)) << std::endl;
*b=*b;
std::cout << "Line no:" << 111 << " " << (b->remove(488)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(38) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(38) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(38) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(38) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(320)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 122 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(186)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(108)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->remove(5))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(447)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(83)) << std::endl;
*b=*b;
std::cout << "Line no:" << 143 << " " << ((a->insert(311))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(295))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(146))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(320)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << (a->remove(204)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(136)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(434))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->insert(115))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(83))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(151)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 165 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(385)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((b->insert(486))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->insert(277))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(83)) << std::endl;
*b=*b;
std::cout << "Line no:" << 184 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(486))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(325)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(102)) << std::endl;
*b=*a;
std::cout << "Line no:" << 192 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(114))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(109)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(100)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 205 << " " << ((a->insert(37))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(79))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(270)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << ((b->insert(114))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(105))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(79)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->insert(410)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
