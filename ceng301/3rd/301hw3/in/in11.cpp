#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(31)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(276)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(371)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(480)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 22 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(365))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((b->remove(356))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(497)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(213))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(256))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(196)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->insert(365))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(100)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 50 << " " << ((a->insert(365))==false) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 60 << " " << ((a->remove(410))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 62 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(427))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(374)) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 68 << " " << ((a->insert(365))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(454)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 72 << " " << (b->remove(413)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 74 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(172)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(128))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 87 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(342)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 91 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->remove(428))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(454)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(36))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(45)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 103 << " " << (b->remove(31)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->remove(198))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(393)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->remove(149)) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(200)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(242)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(154))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(18)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 136 << " " << (a->remove(387)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 138 << " " << (a->insert(499)) << std::endl;
*b=*b;
std::cout << "Line no:" << 140 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(242)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(347))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(298)) << std::endl;
*a=*a;
std::cout << "Line no:" << 149 << " " << (a->remove(81)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->insert(483))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << ((b->remove(440))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(116))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(474))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(173)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(267)) << std::endl;
*b=*a;
std::cout << "Line no:" << 179 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->remove(301))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(130)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 183 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(215)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(390))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((a->insert(267))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(106))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(292)) << std::endl;
*a=*b;
std::cout << "Line no:" << 209 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(472))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (a->insert(304)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 216 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(472))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->remove(321))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(417)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(298)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (b->remove(45)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
