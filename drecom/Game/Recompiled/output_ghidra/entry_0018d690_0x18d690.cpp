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

// Function: entry_0018d690
// Address: 0x18d690 - 0x18d8f4
void entry_0018d690_0x18d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d690_0x18d690");
#endif

    switch (ctx->pc) {
        case 0x18d85cu: goto label_18d85c;
        case 0x18d868u: goto label_18d868;
        case 0x18d874u: goto label_18d874;
        case 0x18d880u: goto label_18d880;
        case 0x18d8ecu: goto label_18d8ec;
        default: break;
    }

    ctx->pc = 0x18d690u;

    // 0x18d690: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18d694: 0xae020b18  sw          $v0, 0xB18($s0)
    ctx->pc = 0x18d694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 2));
    // 0x18d698: 0xae150350  sw          $s5, 0x350($s0)
    ctx->pc = 0x18d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 21));
    // 0x18d69c: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d69cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6a0: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x18d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x18d6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d6ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d6acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d6b0: 0xae020354  sw          $v0, 0x354($s0)
    ctx->pc = 0x18d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
    // 0x18d6b4: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6b8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x18d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x18d6bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18d6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6c4: 0xa202036a  sb          $v0, 0x36A($s0)
    ctx->pc = 0x18d6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 874), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6c8: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6cc: 0x2153a  dsrl        $v0, $v0, 20
    ctx->pc = 0x18d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 20);
    // 0x18d6d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18d6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18d6d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6d8: 0xa2020342  sb          $v0, 0x342($s0)
    ctx->pc = 0x18d6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 834), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6dc: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6e0: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x18d6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x18d6e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x18d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x18d6e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6ec: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6f0: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6f4: 0x216ba  dsrl        $v0, $v0, 26
    ctx->pc = 0x18d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 26);
    // 0x18d6f8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x18d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x18d6fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d700: 0xa2020347  sb          $v0, 0x347($s0)
    ctx->pc = 0x18d700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d704: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d708: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d70c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d710: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d714: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d71c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d720: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18d720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d724: 0xae110ac0  sw          $s1, 0xAC0($s0)
    ctx->pc = 0x18d724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 17));
    // 0x18d728: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18d728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18d72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18d734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d738: 0xa2020349  sb          $v0, 0x349($s0)
    ctx->pc = 0x18d738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 841), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d73c: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18d73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18d740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d744: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d748: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18d74c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d750: 0xa202034a  sb          $v0, 0x34A($s0)
    ctx->pc = 0x18d750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 842), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d754: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d758: 0xa202034b  sb          $v0, 0x34B($s0)
    ctx->pc = 0x18d758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d75c: 0xa2000345  sb          $zero, 0x345($s0)
    ctx->pc = 0x18d75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d764: 0xa2020348  sb          $v0, 0x348($s0)
    ctx->pc = 0x18d764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d768: 0xa200034f  sb          $zero, 0x34F($s0)
    ctx->pc = 0x18d768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d76c: 0xa200034e  sb          $zero, 0x34E($s0)
    ctx->pc = 0x18d76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d770: 0xa2000abc  sb          $zero, 0xABC($s0)
    ctx->pc = 0x18d770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2748), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d774: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x18d778: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d780: 0x0  nop
    ctx->pc = 0x18d780u;
    // NOP
    // 0x18d784: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x18d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x18d788: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d78c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d790: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d794: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d79c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7a8: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x18d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x18d7ac: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x18d7acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d7b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d7b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d7b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d7bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7c8: 0xae020324  sw          $v0, 0x324($s0)
    ctx->pc = 0x18d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 2));
    // 0x18d7cc: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x18d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x18d7d0: 0xa2020344  sb          $v0, 0x344($s0)
    ctx->pc = 0x18d7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d7d4: 0xdfa20098  ld          $v0, 0x98($sp)
    ctx->pc = 0x18d7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18d7d8: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d7dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d7e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d7e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d7e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18d7f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d7f8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x18d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x18d7fc: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x18d800: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d804: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x18d804u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18d808: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d80c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d81c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d820: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18d820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d824: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d82c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d830: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d834: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d838: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x18d83c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d840: 0xae000358  sw          $zero, 0x358($s0)
    ctx->pc = 0x18d840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 0));
    // 0x18d844: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x18d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x18d848: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x18d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x18d84c: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x18d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x18d850: 0x26040a70  addiu       $a0, $s0, 0xA70
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
    // 0x18d854: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D854u;
    SET_GPR_U32(ctx, 31, 0x18D85Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D854u, 0x18D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D85Cu;
label_18d85c:
    // 0x18d85c: 0x26040a80  addiu       $a0, $s0, 0xA80
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
    // 0x18d860: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D860u;
    SET_GPR_U32(ctx, 31, 0x18D868u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D860u, 0x18D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D868u;
label_18d868:
    // 0x18d868: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x18d868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x18d86c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D86Cu;
    SET_GPR_U32(ctx, 31, 0x18D874u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D86Cu, 0x18D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D874u;
label_18d874:
    // 0x18d874: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x18d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x18d878: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D878u;
    SET_GPR_U32(ctx, 31, 0x18D880u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D878u, 0x18D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D880u;
label_18d880:
    // 0x18d880: 0xa2000b1c  sb          $zero, 0xB1C($s0)
    ctx->pc = 0x18d880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2844), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d884: 0xa2000368  sb          $zero, 0x368($s0)
    ctx->pc = 0x18d884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d888: 0xa2000369  sb          $zero, 0x369($s0)
    ctx->pc = 0x18d888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 873), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d88c: 0xa2000b1e  sb          $zero, 0xB1E($s0)
    ctx->pc = 0x18d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d890: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x18d890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x18d894: 0x9202036a  lbu         $v0, 0x36A($s0)
    ctx->pc = 0x18d894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 874)));
    // 0x18d898: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d89c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d8a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18d8ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18d8b0: 0xae020ac4  sw          $v0, 0xAC4($s0)
    ctx->pc = 0x18d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2756), GPR_U32(ctx, 2));
    // 0x18d8b4: 0x8e020ac4  lw          $v0, 0xAC4($s0)
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2756)));
    // 0x18d8b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18d8bc: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x18d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x18d8c0: 0xa2020b1d  sb          $v0, 0xB1D($s0)
    ctx->pc = 0x18d8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d8c4: 0xa200034c  sb          $zero, 0x34C($s0)
    ctx->pc = 0x18d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 844), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d8c8: 0x8e020ac0  lw          $v0, 0xAC0($s0)
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2752)));
    // 0x18d8cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d8d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18d8d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D8D8u;
    {
        const bool branch_taken_0x18d8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8d8) {
            ctx->pc = 0x18D8F4u;
            return;
        }
    }
    ctx->pc = 0x18D8E0u;
    // 0x18d8e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18d8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d8e4: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x18D8E4u;
    SET_GPR_U32(ctx, 31, 0x18D8ECu);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18D8E4u, 0x18D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8ECu;
label_18d8ec:
    // 0x18d8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D8ECu;
    {
        const bool branch_taken_0x18d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8ec) {
            ctx->pc = 0x18D900u;
            return;
        }
    }
    ctx->pc = 0x18D8F4u;
}
