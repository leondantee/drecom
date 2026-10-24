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

// Function: entry_0013cd18
// Address: 0x13cd18 - 0x13cf90
void entry_0013cd18_0x13cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cd18_0x13cd18");
#endif

    ctx->pc = 0x13cd18u;

    // 0x13cd18: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x13cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x13cd1c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13cd1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13cd20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cd24: 0x118882  srl         $s1, $s1, 2
    ctx->pc = 0x13cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x13cd28: 0x15113c  dsll32      $v0, $s5, 4
    ctx->pc = 0x13cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 4));
    // 0x13cd2c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cd30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cd38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd3c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13cd40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cd44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13cd4c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cd50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cd54: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x13cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cd58: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x13cd58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x13cd5c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13cd60: 0x34620104  ori         $v0, $v1, 0x104
    ctx->pc = 0x13cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x13cd64: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x13cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x13cd68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13cd6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13cd70: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x13cd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x13cd74: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x13cd78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cd7c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x13cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x13cd80: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x13cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x13cd84: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cd88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cd90: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd94: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13cd98: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cd9c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x13cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13cda0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cda4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13cda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cdac: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x13cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cdb0: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x13cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x13cdb4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x13cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x13cdb8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13cdbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13cdc0: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x13cdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x13cdc4: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x13cdc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cdcc: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x13cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x13cdd0: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x13cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x13cdd4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cdd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cddc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cde0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cde4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x13cde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13cde8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13cdec: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cdf0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cdf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13cdf8: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x13cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x13cdfc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x13cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x13ce00: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x13ce00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13ce04: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x13ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x13ce08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ce0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13ce10: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x13ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x13ce14: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x13ce18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ce1c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x13ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x13ce20: 0x1e213c  dsll32      $a0, $fp, 4
    ctx->pc = 0x13ce20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 4));
    // 0x13ce24: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13ce24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13ce28: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x13ce28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13ce2c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x13ce2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x13ce30: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13ce30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13ce34: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x13ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13ce38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13ce3c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13ce40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ce44: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x13ce44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13ce48: 0xfe040080  sd          $a0, 0x80($s0)
    ctx->pc = 0x13ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 4));
    // 0x13ce4c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x13ce50: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x13ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x13ce54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ce58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13ce5c: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x13ce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x13ce60: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x13ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x13ce64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ce68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13ce6c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x13ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x13ce70: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x13ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13ce74: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13ce78: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13ce7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ce80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13ce84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ce88: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x13ce8c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x13ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13ce90: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13ce94: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13ce98: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x13ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x13ce9c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x13ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x13cea0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13cea4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x13cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13cea8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x13cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x13ceac: 0x26b50330  addiu       $s5, $s5, 0x330
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
    // 0x13ceb0: 0x26d60330  addiu       $s6, $s6, 0x330
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 816));
    // 0x13ceb4: 0x26f70110  addiu       $s7, $s7, 0x110
    ctx->pc = 0x13ceb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 272));
    // 0x13ceb8: 0x27de0110  addiu       $fp, $fp, 0x110
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 272));
    // 0x13cebc: 0x2652ffbc  addiu       $s2, $s2, -0x44
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967228));
    // 0x13cec0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x13cec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13cec4: 0x1e40ff30  bgtz        $s2, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x13CEC4u;
    {
        const bool branch_taken_0x13cec4 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x13cec4) {
            ctx->pc = 0x13CB88u;
            return;
        }
    }
    ctx->pc = 0x13CECCu;
    // 0x13cecc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13ced0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13ced4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x13ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x13ced8: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x13ced8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x13cedc: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x13cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x13cee0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cee4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x13cee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x13cee8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ceec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cef0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cef4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cef8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x13cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x13cefc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13cf00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf04: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x13cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x13cf08: 0x441fecb  bgez        $v0, . + 4 + (-0x135 << 2)
    ctx->pc = 0x13CF08u;
    {
        const bool branch_taken_0x13cf08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13cf08) {
            ctx->pc = 0x13CA38u;
            return;
        }
    }
    ctx->pc = 0x13CF10u;
    // 0x13cf10: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13cf14: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13cf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13cf18: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13cf18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13cf1c: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cf24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cf28: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cf30: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x13cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x13cf34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf38: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x13cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x13cf3c: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x13cf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cf40: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x13cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x13cf44: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13cf48: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf4c: 0xfe930000  sd          $s3, 0x0($s4)
    ctx->pc = 0x13cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 19));
    // 0x13cf50: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x13cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x13cf54: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x13cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x13cf58: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf5c: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x13cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x13cf60: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x13cf64: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13cf68: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x13cf6c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x13cf70: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13cf74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf78: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13cf7c: 0x1440fe5e  bnez        $v0, . + 4 + (-0x1A2 << 2)
    ctx->pc = 0x13CF7Cu;
    {
        const bool branch_taken_0x13cf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf7c) {
            ctx->pc = 0x13C8F8u;
            return;
        }
    }
    ctx->pc = 0x13CF84u;
    // 0x13cf84: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cf8c: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x13cf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13cf90u;
}
