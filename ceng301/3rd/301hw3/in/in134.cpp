#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(484)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(484))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(398))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(61))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(182))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(115)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(82))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(33)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 30 << " " << (b->insert(389)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 33 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->remove(327))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(139)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(457)) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(94) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(94) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(94) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(94) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(457)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->remove(270))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(477)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(407))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << (a->remove(148)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 73 << " " << ((b->remove(360))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(255))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(407)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (b->remove(300)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->insert(422))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(422))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 86 << " " << (b->remove(422)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(256)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->insert(494))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(494)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(107))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(107)) << std::endl;
*a=*a;
std::cout << "Line no:" << 100 << " " << (b->insert(418)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->remove(361))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->remove(465))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(279)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (b->insert(429)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 110 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((a->remove(141))==false) << std::endl;
std::cout << "Line no:" << 114 << " " << ((b->remove(293))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->remove(285)) << std::endl;
*b=*b;
std::cout << "Line no:" << 117 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->remove(382))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(120))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->remove(247))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(429))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(429)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(245)) << std::endl;
*a=*b;
std::cout << "Line no:" << 129 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(418)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << ((b->insert(228))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(56))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->insert(120))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(364))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(107))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(395))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(56))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(479))==false) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 152 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 153 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 154 << " " << a->getFloor(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 155 << " " << a->getCeiling(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 156 << " " << a->getNext(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 157 << " " << a->get(336) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 158 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 160 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(56)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(418)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(422))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(422)) << std::endl;
*a=*b;
std::cout << "Line no:" << 168 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->remove(117))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 172 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((a->remove(13))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(40)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 180 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(107))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 185 << " " << (b->insert(252)) << std::endl;
*b=*a;
std::cout << "Line no:" << 187 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(412)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->remove(463))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(265))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(107)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 198 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(412)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(455))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(107)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(55)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->insert(440))==false) << std::endl;
try{std::cout <<"Line no:" << 210 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 211 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 212 << " " << a->getFloor(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 213 << " " << a->getCeiling(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 214 << " " << a->getNext(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 215 << " " << a->get(120) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 216 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 218 << " " << (b->insert(242)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
