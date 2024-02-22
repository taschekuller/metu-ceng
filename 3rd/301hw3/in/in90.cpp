#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(485))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(362)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(190)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(190))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(211)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 23 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((b->insert(63))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(341))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(307)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((b->insert(63))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(303)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(190)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->remove(30))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(299))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->insert(97))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(369)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->insert(230)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(1)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(35)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(375)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 68 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(32)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(396))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(192))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(320)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(264))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 84 << " " << ((a->insert(211))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(211))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(264)) << std::endl;
*a=*b;
std::cout << "Line no:" << 91 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(2))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(375))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(219)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << ((b->insert(211))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(320)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->remove(136))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(266)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(54)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(44)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(264) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(445))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(490)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << ((b->insert(375))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(219))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(323)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(376))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(471)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(376)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(375)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(276))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->remove(398))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(292)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(424))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->remove(324))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(211))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(405))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->remove(351))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (a->insert(125)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 168 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->remove(115))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->insert(245))==false) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(49))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(262)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(200)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->remove(289))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << ((b->remove(426))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(490))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(264))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(287)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << (b->remove(422)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(170)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(280)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(221))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(138)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(211)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(242)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 226 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->remove(499)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->insert(211))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
