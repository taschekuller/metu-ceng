#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(448))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(11))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(296))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(61)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(141))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(46))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(371))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(374)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(468))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(207))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(161))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(6)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 44 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(47))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(472))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->insert(76))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->remove(76)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(419)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(419))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(419)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(8))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->insert(412))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(444))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(172))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(6)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 81 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->insert(219))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(172))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(231)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << ((b->remove(222))==false) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 92 << " " << (b->insert(226)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(462)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (b->remove(462)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(198)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(118))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->remove(428))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(347)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(118))==false) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(287) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(287) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(287) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(287) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 121 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(473))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(484)) << std::endl;
*a=*b;
std::cout << "Line no:" << 125 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(354))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(495)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(231)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 138 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(150))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(8)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(458))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(121))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(96)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 159 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->remove(27))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(52))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->remove(391))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->insert(446))==false) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->remove(324)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(64)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->remove(125))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(96))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(186)) << std::endl;
*a=*a;
*b=*a;
std::cout << "Line no:" << 185 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(368)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(198)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(353)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(64)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->remove(392))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(426)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(349)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 211 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(62)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(219)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(353)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
