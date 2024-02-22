#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 7 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 8 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 9 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 10 << " " << (b->remove(59)) << std::endl;
std::cout << "Line no:" << 11 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 12 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 13 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((b->remove(362))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(316)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 19 << " " << (a->remove(306)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(459)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 25 << " " << (a->remove(375)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 28 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(21))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(369)) << std::endl;
*a=*b;
std::cout << "Line no:" << 45 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(99)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->insert(399))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(133)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(146))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(272))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->remove(34)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(322) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(322) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(322) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(322) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(22)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << ((b->insert(434))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 69 << " " << ((b->remove(75))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(256)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(284))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(92)) << std::endl;
*a=*a;
std::cout << "Line no:" << 76 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(206))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(146)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(399))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(498)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 93 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(284))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(69)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << (a->insert(51)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 103 << " " << ((a->insert(51))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(296))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->insert(391))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(272)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(289) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(289) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(289) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(289) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->remove(314))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(415)) << std::endl;
*a=*b;
std::cout << "Line no:" << 129 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(273))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << ((b->insert(498))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(272))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->insert(273))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(273))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(117))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(434))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->remove(382))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(142))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(284)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(117)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(272)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((a->insert(433))==false) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(69) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(69) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(69) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(69) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(265)) << std::endl;
*b=*a;
std::cout << "Line no:" << 185 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(277)) << std::endl;
*a=*a;
std::cout << "Line no:" << 189 << " " << ((b->remove(438))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(255)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(359)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(79)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(478)) << std::endl;
*a=*a;
std::cout << "Line no:" << 205 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(99))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(142)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(79)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->remove(479))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(193))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 216 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(4))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(477)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(112))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->insert(91)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(249)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
