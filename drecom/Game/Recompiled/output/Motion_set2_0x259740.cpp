#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Motion_set2
// Address: 0x259740 - 0x259ee4
void Motion_set2_0x259740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_set2_0x259740");
#endif

    switch (ctx->pc) {
        case 0x2598c8u: goto label_2598c8;
        case 0x259908u: goto label_259908;
        case 0x259bb0u: goto label_259bb0;
        case 0x259becu: goto label_259bec;
        case 0x259e6cu: goto label_259e6c;
        case 0x259eb0u: goto label_259eb0;
        default: break;
    }

    ctx->pc = 0x259740u;

    // 0x259740: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x259740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x259744: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x259744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x259748: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x259748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25974c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x259750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x259750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x259754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x259754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x259758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25975c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25976c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x25976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x259770: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x259770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x259774: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x259774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x259778: 0xa7a70100  sh          $a3, 0x100($sp)
    ctx->pc = 0x259778u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 7));
    // 0x25977c: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x25977cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x259780: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x259784: 0x2443b880  addiu       $v1, $v0, -0x4780
    ctx->pc = 0x259784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x259788: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x259788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x25978c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25978cu;
    { uint32_t bits = FAST_READ32(0x38B880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259790: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x259790u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x38B884u));
    // 0x259794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259798: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x259798u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25979c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2597a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2597a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2597a4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2597a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2597a8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2597a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2597ac: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2597acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2597b0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2597b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2597b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2597b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2597b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2597b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2597bc: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2597bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2597c0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2597c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2597c4: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2597c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2597c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2597cc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2597ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2597d0: 0xa7a200de  sh          $v0, 0xDE($sp)
    ctx->pc = 0x2597d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x2597d4: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x2597d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2597d8: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x2597d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2597dc: 0xa68209ea  sh          $v0, 0x9EA($s4)
    ctx->pc = 0x2597dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2538), (uint16_t)GPR_U32(ctx, 2));
    // 0x2597e0: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x2597e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2597e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2597e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2597e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2597e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2597ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2597ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2597f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2597f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2597f4: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x2597f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2597f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2597f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2597fc: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x2597fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259800: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259804: 0xac43036c  sw          $v1, 0x36C($v0)
    ctx->pc = 0x259804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 876), GPR_U32(ctx, 3));
    // 0x259808: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x259808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x25980c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259810: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x259810u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259814: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x259814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x259818: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x259818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25981c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x25981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x259820: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x259820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x259824: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x259824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259828: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x259828u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25982c: 0xa6800a00  sh          $zero, 0xA00($s4)
    ctx->pc = 0x25982cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2560), (uint16_t)GPR_U32(ctx, 0));
    // 0x259830: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x259830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x259834: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259838: 0xa4430a02  sh          $v1, 0xA02($v0)
    ctx->pc = 0x259838u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2562), (uint16_t)GPR_U32(ctx, 3));
    // 0x25983c: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x25983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x259840: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259844: 0xae8205f8  sw          $v0, 0x5F8($s4)
    ctx->pc = 0x259844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1528), GPR_U32(ctx, 2));
    // 0x259848: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x259848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25984c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x25984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x259850: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x259850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259854: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259858: 0xa44309ec  sh          $v1, 0x9EC($v0)
    ctx->pc = 0x259858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2540), (uint16_t)GPR_U32(ctx, 3));
    // 0x25985c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259860: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x259860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x259864: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x259864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x259868: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25986c: 0xa04309e4  sb          $v1, 0x9E4($v0)
    ctx->pc = 0x25986cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2532), (uint8_t)GPR_U32(ctx, 3));
    // 0x259870: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259874: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x259874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259878: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x259878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25987c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259880: 0xac430350  sw          $v1, 0x350($v0)
    ctx->pc = 0x259880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 848), GPR_U32(ctx, 3));
    // 0x259884: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259888: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25988c: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x25988cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x259890: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x259890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259894: 0x8c820350  lw          $v0, 0x350($a0)
    ctx->pc = 0x259894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x259898: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x259898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25989c: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x25989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x2598a0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2598a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2598a4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x2598a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2598a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2598a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2598ac: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2598acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598b0: 0xac8005f0  sw          $zero, 0x5F0($a0)
    ctx->pc = 0x2598b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 0));
    // 0x2598b4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2598b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598b8: 0xaca005f4  sw          $zero, 0x5F4($a1)
    ctx->pc = 0x2598b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 0));
    // 0x2598bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2598bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2598c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2598C0u;
    {
        const bool branch_taken_0x2598c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2598c0) {
            ctx->pc = 0x2598F0u;
            goto label_2598f0;
        }
    }
    ctx->pc = 0x2598C8u;
label_2598c8:
    // 0x2598c8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2598c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2598cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2598ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2598d4: 0xac400370  sw          $zero, 0x370($v0)
    ctx->pc = 0x2598d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 0));
    // 0x2598d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2598d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2598dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2598e4: 0xac4004b0  sw          $zero, 0x4B0($v0)
    ctx->pc = 0x2598e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 0));
    // 0x2598e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2598ec: 0x0  nop
    ctx->pc = 0x2598ecu;
    // NOP
label_2598f0:
    // 0x2598f0: 0x2a020050  slti        $v0, $s0, 0x50
    ctx->pc = 0x2598f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2598f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2598F4u;
    {
        const bool branch_taken_0x2598f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2598f4) {
            ctx->pc = 0x2598C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2598c8;
        }
    }
    ctx->pc = 0x2598FCu;
    // 0x2598fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2598fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x259900: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x259900u;
    {
        const bool branch_taken_0x259900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259900) {
            ctx->pc = 0x259B30u;
            goto label_259b30;
        }
    }
    ctx->pc = 0x259908u;
label_259908:
    // 0x259908: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25990c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259910: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259914: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x259914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259918: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x259918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25991c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x25991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x259920: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259924: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x259924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259928: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25992c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259934: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x259934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259938: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25993c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x259940: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x259940u;
    {
        const bool branch_taken_0x259940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259940) {
            ctx->pc = 0x259A9Cu;
            goto label_259a9c;
        }
    }
    ctx->pc = 0x259948u;
    // 0x259948: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25994c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259950: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x259950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259954: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x259954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259958: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x259958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25995c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259960: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x259960u;
    {
        const bool branch_taken_0x259960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x259960) {
            ctx->pc = 0x2599C4u;
            goto label_2599c4;
        }
    }
    ctx->pc = 0x259968u;
    // 0x259968: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25996c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25996Cu;
    {
        const bool branch_taken_0x25996c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25996c) {
            ctx->pc = 0x25997Cu;
            goto label_25997c;
        }
    }
    ctx->pc = 0x259974u;
    // 0x259974: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x259974u;
    {
        const bool branch_taken_0x259974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259974) {
            ctx->pc = 0x259A0Cu;
            goto label_259a0c;
        }
    }
    ctx->pc = 0x25997Cu;
label_25997c:
    // 0x25997c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259980: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259984: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259988: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25998c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259994: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259998: 0xac4305f0  sw          $v1, 0x5F0($v0)
    ctx->pc = 0x259998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1520), GPR_U32(ctx, 3));
    // 0x25999c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599a0: 0xa4400600  sh          $zero, 0x600($v0)
    ctx->pc = 0x2599a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1536), (uint16_t)GPR_U32(ctx, 0));
    // 0x2599a4: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x2599a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599ac: 0xa44305fe  sh          $v1, 0x5FE($v0)
    ctx->pc = 0x2599acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1534), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2599b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2599b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599b8: 0xa44305fc  sh          $v1, 0x5FC($v0)
    ctx->pc = 0x2599b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1532), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2599BCu;
    {
        const bool branch_taken_0x2599bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2599bc) {
            ctx->pc = 0x259B28u;
            goto label_259b28;
        }
    }
    ctx->pc = 0x2599C4u;
label_2599c4:
    // 0x2599c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599c8: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x2599c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x2599cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2599ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2599d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2599d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2599d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2599dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599e0: 0xac4305f4  sw          $v1, 0x5F4($v0)
    ctx->pc = 0x2599e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 3));
    // 0x2599e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599e8: 0xa4400606  sh          $zero, 0x606($v0)
    ctx->pc = 0x2599e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x2599ec: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x2599ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x2599f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599f4: 0xa4430604  sh          $v1, 0x604($v0)
    ctx->pc = 0x2599f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2599f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2599fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a00: 0xa4430602  sh          $v1, 0x602($v0)
    ctx->pc = 0x259a00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1538), (uint16_t)GPR_U32(ctx, 3));
    // 0x259a04: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x259A04u;
    {
        const bool branch_taken_0x259a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a04) {
            ctx->pc = 0x259B28u;
            goto label_259b28;
        }
    }
    ctx->pc = 0x259A0Cu;
label_259a0c:
    // 0x259a0c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a10: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259a14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259a18: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259a20: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x259a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259a24: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x259a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259a2c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a34: 0xac4404b0  sw          $a0, 0x4B0($v0)
    ctx->pc = 0x259a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 4));
    // 0x259a38: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a44: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a50: 0xa44007ec  sh          $zero, 0x7EC($v0)
    ctx->pc = 0x259a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x259a54: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x259a58: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a64: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a68: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a70: 0xa44407ea  sh          $a0, 0x7EA($v0)
    ctx->pc = 0x259a70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2026), (uint16_t)GPR_U32(ctx, 4));
    // 0x259a74: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x259a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x259a78: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259a7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a84: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259a88: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259a90: 0xa44407e8  sh          $a0, 0x7E8($v0)
    ctx->pc = 0x259a90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2024), (uint16_t)GPR_U32(ctx, 4));
    // 0x259a94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x259A94u;
    {
        const bool branch_taken_0x259a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a94) {
            ctx->pc = 0x259B28u;
            goto label_259b28;
        }
    }
    ctx->pc = 0x259A9Cu;
label_259a9c:
    // 0x259a9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259aa0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259aa4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259aa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259aac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259ab0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259ab4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x259ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259ab8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259abc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ac4: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x259ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x259ac8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259acc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ad4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259ad8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ae0: 0xa440060c  sh          $zero, 0x60C($v0)
    ctx->pc = 0x259ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1548), (uint16_t)GPR_U32(ctx, 0));
    // 0x259ae4: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x259ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x259ae8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259aec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259af4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259af8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b00: 0xa444060a  sh          $a0, 0x60A($v0)
    ctx->pc = 0x259b00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1546), (uint16_t)GPR_U32(ctx, 4));
    // 0x259b04: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x259b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x259b08: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259b0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b14: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259b18: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b20: 0xa4440608  sh          $a0, 0x608($v0)
    ctx->pc = 0x259b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1544), (uint16_t)GPR_U32(ctx, 4));
    // 0x259b24: 0x0  nop
    ctx->pc = 0x259b24u;
    // NOP
label_259b28:
    // 0x259b28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x259b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x259b2c: 0x0  nop
    ctx->pc = 0x259b2cu;
    // NOP
label_259b30:
    // 0x259b30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b34: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x259b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x259b38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259b3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x259b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x259b40: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x259B40u;
    {
        const bool branch_taken_0x259b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b40) {
            ctx->pc = 0x259908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259908;
        }
    }
    ctx->pc = 0x259B48u;
    // 0x259b48: 0x13c00031  beqz        $fp, . + 4 + (0x31 << 2)
    ctx->pc = 0x259B48u;
    {
        const bool branch_taken_0x259b48 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b48) {
            ctx->pc = 0x259C10u;
            goto label_259c10;
        }
    }
    ctx->pc = 0x259B50u;
    // 0x259b50: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x259b50u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x259b54: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b58: 0xa05e09e5  sb          $fp, 0x9E5($v0)
    ctx->pc = 0x259b58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 30));
    // 0x259b5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b60: 0xa05e09e6  sb          $fp, 0x9E6($v0)
    ctx->pc = 0x259b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 30));
    // 0x259b64: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x259b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x259b68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259b6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x259b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x259b70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x259B70u;
    {
        const bool branch_taken_0x259b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b70) {
            ctx->pc = 0x259BA0u;
            goto label_259ba0;
        }
    }
    ctx->pc = 0x259B78u;
    // 0x259b78: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b7c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x259b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x259b80: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x259b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259b84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x259b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259b8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x259b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x259b90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b94: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x259b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
    // 0x259b98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x259B98u;
    {
        const bool branch_taken_0x259b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b98) {
            ctx->pc = 0x259BB0u;
            goto label_259bb0;
        }
    }
    ctx->pc = 0x259BA0u;
label_259ba0:
    // 0x259ba0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ba4: 0xc44009cc  lwc1        $f0, 0x9CC($v0)
    ctx->pc = 0x259ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259ba8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bac: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x259bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
label_259bb0:
    // 0x259bb0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x259bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x259bb4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x259bb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259bb8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x259bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bbc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x259bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x259bc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x259bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259bc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x259bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259bc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259bcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259bd0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259bd4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x259bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x259bd8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259bdc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x259bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x259be0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x259be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x259be4: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x259BE4u;
    SET_GPR_U32(ctx, 31, 0x259BECu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x259BE4u, 0x259BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BECu;
label_259bec:
    // 0x259bec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x259becu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x259bf0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bf4: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x259bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x259bf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259bfc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x259bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x259c00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x259C00u;
    {
        const bool branch_taken_0x259c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259c00) {
            ctx->pc = 0x259BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259bb0;
        }
    }
    ctx->pc = 0x259C08u;
    // 0x259c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259C10u;
label_259c10:
    // 0x259c10: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c14: 0xa04009e5  sb          $zero, 0x9E5($v0)
    ctx->pc = 0x259c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 0));
    // 0x259c18: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x259c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x259c1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c20: 0xa04309e6  sb          $v1, 0x9E6($v0)
    ctx->pc = 0x259c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 3));
label_259c24:
    // 0x259c24: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c28: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x259c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x259c2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x259c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c34: 0x8c6305f8  lw          $v1, 0x5F8($v1)
    ctx->pc = 0x259c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1528)));
    // 0x259c38: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x259c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x259c3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259c40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259c44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x259c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c4c: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x259c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x259c50: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x259c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x259c54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259c58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259c5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c60: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x259c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x259c64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259c68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259c6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c70: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x259c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x259c74: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c78: 0x944309ec  lhu         $v1, 0x9EC($v0)
    ctx->pc = 0x259c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x259c7c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x259c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259c80: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x259c84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c88: 0xac4309fc  sw          $v1, 0x9FC($v0)
    ctx->pc = 0x259c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2556), GPR_U32(ctx, 3));
    // 0x259c8c: 0x97a300de  lhu         $v1, 0xDE($sp)
    ctx->pc = 0x259c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x259c90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c94: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x259c94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
    // 0x259c98: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c9c: 0xa6e009f0  sh          $zero, 0x9F0($s7)
    ctx->pc = 0x259c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 2544), (uint16_t)GPR_U32(ctx, 0));
    // 0x259ca0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ca4: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x259ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x259ca8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x259cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259cb4: 0x0  nop
    ctx->pc = 0x259cb4u;
    // NOP
    // 0x259cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259cbc: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259cc0: 0xe7c009d4  swc1        $f0, 0x9D4($fp)
    ctx->pc = 0x259cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2516), bits); }
    // 0x259cc4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x259cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259cc8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ccc: 0xac4309f4  sw          $v1, 0x9F4($v0)
    ctx->pc = 0x259cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2548), GPR_U32(ctx, 3));
    // 0x259cd0: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x259cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x259cd4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259cd8: 0xa44309e0  sh          $v1, 0x9E0($v0)
    ctx->pc = 0x259cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x259cdc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ce0: 0x8c5409f8  lw          $s4, 0x9F8($v0)
    ctx->pc = 0x259ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x259ce4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ce8: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x259ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x259cec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x259cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259cf0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x259cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x259cf4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259CF4u;
    {
        const bool branch_taken_0x259cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cf4) {
            ctx->pc = 0x259D38u;
            goto label_259d38;
        }
    }
    ctx->pc = 0x259CFCu;
    // 0x259cfc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x259cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d00: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259d04: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d08: 0x8c4309fc  lw          $v1, 0x9FC($v0)
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d0c: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x259d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259d10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x259D10u;
    {
        const bool branch_taken_0x259d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259d10) {
            ctx->pc = 0x259D68u;
            goto label_259d68;
        }
    }
    ctx->pc = 0x259D18u;
    // 0x259d18: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d1c: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x259d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d20: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x259d20u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259d28: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d2c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x259d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    // 0x259d30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x259D30u;
    {
        const bool branch_taken_0x259d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d30) {
            ctx->pc = 0x259D68u;
            goto label_259d68;
        }
    }
    ctx->pc = 0x259D38u;
label_259d38:
    // 0x259d38: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x259d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d3c: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x259d3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259d40: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x259D40u;
    {
        const bool branch_taken_0x259d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d40) {
            ctx->pc = 0x259D60u;
            goto label_259d60;
        }
    }
    ctx->pc = 0x259D48u;
    // 0x259d48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d4c: 0x8c5209fc  lw          $s2, 0x9FC($v0)
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d50: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x259d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x259d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259d58: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d5c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x259d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_259d60:
    // 0x259d60: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x259d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d64: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x259d64u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_259d68:
    // 0x259d68: 0x141a02  srl         $v1, $s4, 8
    ctx->pc = 0x259d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x259d6c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x259D6Cu;
    {
        const bool branch_taken_0x259d6c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x259d6c) {
            ctx->pc = 0x259D88u;
            goto label_259d88;
        }
    }
    ctx->pc = 0x259D74u;
    // 0x259d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259d78: 0x0  nop
    ctx->pc = 0x259d78u;
    // NOP
    // 0x259d7c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x259d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x259d80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259D80u;
    {
        const bool branch_taken_0x259d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d80) {
            ctx->pc = 0x259DA4u;
            goto label_259da4;
        }
    }
    ctx->pc = 0x259D88u;
label_259d88:
    // 0x259d88: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x259d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x259d8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x259d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x259d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x259d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x259d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259d98: 0x0  nop
    ctx->pc = 0x259d98u;
    // NOP
    // 0x259d9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x259d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x259da0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x259da0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_259da4:
    // 0x259da4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x259da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x259da8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259DA8u;
    {
        const bool branch_taken_0x259da8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x259da8) {
            ctx->pc = 0x259DC4u;
            goto label_259dc4;
        }
    }
    ctx->pc = 0x259DB0u;
    // 0x259db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259db4: 0x0  nop
    ctx->pc = 0x259db4u;
    // NOP
    // 0x259db8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x259db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259DBCu;
    {
        const bool branch_taken_0x259dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dbc) {
            ctx->pc = 0x259DE0u;
            goto label_259de0;
        }
    }
    ctx->pc = 0x259DC4u;
label_259dc4:
    // 0x259dc4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x259dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x259dc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x259dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x259dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259dd4: 0x0  nop
    ctx->pc = 0x259dd4u;
    // NOP
    // 0x259dd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x259dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259ddc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x259ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_259de0:
    // 0x259de0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x259de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259de8: 0x0  nop
    ctx->pc = 0x259de8u;
    // NOP
    // 0x259dec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x259decu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x259df0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x259df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x259df4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259df8: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x259df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x259dfc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e00: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x259e04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x259e04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259e08: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x259e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x259e0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x259e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x259e10: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x259e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e14: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x259e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e18: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x259e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259e1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e20: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x259e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e24: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x259e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x259e28: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e2c: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x259e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x259e30: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x259e30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x259e34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259e38: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x259e38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x259e3c: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x259e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e40: 0x8e4305f0  lw          $v1, 0x5F0($s2)
    ctx->pc = 0x259e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x259e44: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x259e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x259e48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e4c: 0x90520012  lbu         $s2, 0x12($v0)
    ctx->pc = 0x259e4cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x259e50: 0xa3b200c0  sb          $s2, 0xC0($sp)
    ctx->pc = 0x259e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 18));
    // 0x259e54: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x259e54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x259e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x259e5c: 0x264502e0  addiu       $a1, $s2, 0x2E0
    ctx->pc = 0x259e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x259e60: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x259e64: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x259E64u;
    SET_GPR_U32(ctx, 31, 0x259E6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x259E64u, 0x259E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E6Cu;
label_259e6c:
    // 0x259e6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e70: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x259e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x259e74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x259e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259e78: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e7c: 0x245002f0  addiu       $s0, $v0, 0x2F0
    ctx->pc = 0x259e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x259e80: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x259e80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x259e84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e88: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x259e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259e8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x259e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259e90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259e94: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x259e94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x259e98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259e9c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x259ea0: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x259ea4: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x259ea8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x259EA8u;
    SET_GPR_U32(ctx, 31, 0x259EB0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x259EA8u, 0x259EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EB0u;
label_259eb0:
    // 0x259eb0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x259eb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259eb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x259eb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259eb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x259eb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259ebc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x259ebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259ec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259ec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259ec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ed8: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x259ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x259edc: 0x3e00008  jr          $ra
    ctx->pc = 0x259EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259EE4u;
}
