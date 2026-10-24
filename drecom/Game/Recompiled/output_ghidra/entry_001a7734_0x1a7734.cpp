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

// Function: entry_001a7734
// Address: 0x1a7734 - 0x1a77e8
void entry_001a7734_0x1a7734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7734_0x1a7734");
#endif

    ctx->pc = 0x1a7734u;

    // 0x1a7734: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a7734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7738: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a7738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a773c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7744: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a774c: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a7750: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7754: 0x9042001e  lbu         $v0, 0x1E($v0)
    ctx->pc = 0x1a7754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a7758: 0x2367c  dsll32      $a2, $v0, 25
    ctx->pc = 0x1a7758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a775c: 0x6173e  dsrl32      $v0, $a2, 28
    ctx->pc = 0x1a775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> (32 + 28));
    // 0x1a7760: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1a7760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a7764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a776c: 0x820502b0  lb          $a1, 0x2B0($s0)
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a7770: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x1a7770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a7774: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a7774u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a7778: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a7778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a777c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a777cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7780: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a7780u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a7784: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a7784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7788: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a7788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a778c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7790: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7794: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7798: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a779c: 0x2448cca0  addiu       $t0, $v0, -0x3360
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a77a0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a77a4: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x1a77a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a77a8: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x1a77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x1a77ac: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a77b0: 0x44382d  daddu       $a3, $v0, $a0
    ctx->pc = 0x1a77b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a77b4: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x1a77b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a77b8: 0x26260003  addiu       $a2, $s1, 0x3
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a77bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a77c0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a77c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a77c8: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a77cc: 0x94a300b0  lhu         $v1, 0xB0($a1)
    ctx->pc = 0x1a77ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1a77d0: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x1a77d4: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a77d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a77dc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a77e0: 0xa4a200b0  sh          $v0, 0xB0($a1)
    ctx->pc = 0x1a77e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a77e4: 0x0  nop
    ctx->pc = 0x1a77e4u;
    // NOP
    ctx->pc = 0x1a77e8u;
}
