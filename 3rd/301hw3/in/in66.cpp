#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(265))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(95))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(147))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(411))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(95))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(95))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->insert(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(258)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << ((a->remove(315))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(289)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 39 << " " << (a->remove(229)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(353)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(319)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(258)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(266)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(263)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->remove(223))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(312)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(477)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(360))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(281))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(289)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(266)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(382))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(430))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(329)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 90 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(240)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(344)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(165)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 103 << " " << (a->remove(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(338))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(95))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(79)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(285)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(319))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 127 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(76))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->remove(114))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(53))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(443))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(354))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(343)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(132)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->remove(190))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(50))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(378))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(484)) << std::endl;
*b=*b;
std::cout << "Line no:" << 160 << " " << (a->insert(194)) << std::endl;
*b=*a;
std::cout << "Line no:" << 162 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->remove(116))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(443))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->remove(266))==false) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 176 << " " << ((b->remove(107))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(354))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (b->remove(76)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(354)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->remove(404)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(219))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(50)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(489))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 205 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(443))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(219))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(258)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (a->insert(163)) << std::endl;
*a=*a;
std::cout << "Line no:" << 215 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(41)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 221 << " " << ((b->remove(278))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->remove(60))==false) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(236) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(236) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(236) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(236) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
