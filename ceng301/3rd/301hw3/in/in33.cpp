#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(2))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->remove(2)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(355)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
*a=*a;
std::cout << "Line no:" << 16 << " " << (b->insert(44)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << ((b->insert(44))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(27))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(355))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(27)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->remove(216))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->remove(44)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(352))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(332))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(102)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(352))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->insert(243))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(259))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(174)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(188)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(468)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 64 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->remove(434))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(468))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(6)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->remove(270))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(57)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << ((b->remove(122))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(237)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << (b->insert(345)) << std::endl;
*b=*b;
std::cout << "Line no:" << 98 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(382))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(273))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(389))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(67))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 104 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->remove(138))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(66)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(162)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((b->insert(13))==false) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(66) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(66) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(66) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(66) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << ((b->remove(178))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(69)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(340))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(500)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(37))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(399))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(13)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(190)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 139 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(332)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(305)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(235)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(91))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->remove(415))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(192)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(70))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << ((b->insert(118))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(66)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(314)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << ((b->insert(55))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(330)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(387)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 165 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(15)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(293)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((a->insert(466))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(162))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(426)) << std::endl;
*b=*a;
std::cout << "Line no:" << 185 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(466))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->remove(195))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(237)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(305))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(311)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(311)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 199 << " " << ((a->remove(218))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(177))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 209 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(211)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (b->remove(317)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(305))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(69))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 223 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(235))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(497)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(466) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(466) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(466) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(466) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->remove(363))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
