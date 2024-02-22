#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(395))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(76))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(199)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(337)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(267))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(79))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(262)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 38 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(251)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(262)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << ((a->insert(88))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(251)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(79))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << ((b->remove(376))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(55))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(209)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 63 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(344)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 66 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(421))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(209))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(88))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(1)) << std::endl;
*b=*b;
std::cout << "Line no:" << 77 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(333)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (b->remove(55)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(269)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(289))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(101))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(91)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(1)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(445)) << std::endl;
*a=*b;
std::cout << "Line no:" << 102 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(424)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(130))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(227)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(468) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*a=*a;
*a=*b;
std::cout << "Line no:" << 123 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(302)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(468)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(298))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->remove(303))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(445))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(141))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(240)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(135)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 145 << " " << ((a->remove(470))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 147 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(468)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(494)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->remove(67))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(440))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->remove(464))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(445))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(135))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(445)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(468))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(312)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(273)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 165 << " " << (a->insert(302)) << std::endl;
*b=*a;
std::cout << "Line no:" << 167 << " " << ((b->insert(445))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->remove(356))==false) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->remove(93))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 188 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(442)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 191 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(227)) << std::endl;
*a=*a;
std::cout << "Line no:" << 196 << " " << (a->remove(445)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 198 << " " << ((a->insert(449))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(159)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(445)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(135))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(239))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(179))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(39)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (b->remove(139)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 226 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(463)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(182) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(182) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(182) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(182) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->insert(485)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
