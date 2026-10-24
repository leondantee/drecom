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

// Function: entry_001db770
// Address: 0x1db770 - 0x1db898
void entry_001db770_0x1db770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db770_0x1db770");
#endif

    ctx->pc = 0x1db770u;

    // 0x1db770: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db774: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x1db774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x1db778: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db77c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db780: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db788: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1db788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x1db78c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db790: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1db794: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db798: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db79c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db7a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db7a8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1db7ac: 0x4113c  dsll32      $v0, $a0, 4
    ctx->pc = 0x1db7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x1db7b0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db7b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db7b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db7bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db7c0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1db7c4: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x1db7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1db7c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db7cc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db7d4: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1db7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1db7d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1db7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1db7e0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1db7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1db7e4: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x1db7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1db7e8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7ec: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1db7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1db7f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db7f4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db7f8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db7fc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db800: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db804: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db808: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db80c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db810: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1db810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1db814: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1db814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1db818: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db81c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1db81cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1db820: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db824: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1db824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1db828: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x1db828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x1db82c: 0x346203fe  ori         $v0, $v1, 0x3FE
    ctx->pc = 0x1db82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1022);
    // 0x1db830: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db834: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1db834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x1db838: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db83c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x1db83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1db840: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1db840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1db844: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1db844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1db848: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB848u;
    {
        const bool branch_taken_0x1db848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db848) {
            ctx->pc = 0x1DB898u;
            return;
        }
    }
    ctx->pc = 0x1DB850u;
    // 0x1db850: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1db850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1db854: 0x2442bd20  addiu       $v0, $v0, -0x42E0
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950176));
    // 0x1db858: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db85c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db860: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db864: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1db864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1db868: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1db868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1db86c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db870: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x1db870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1db874: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1db874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db878: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db87c: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1db87cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1db880: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db884: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1db884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1db888: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db88c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1db88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1db890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB890u;
    {
        const bool branch_taken_0x1db890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db890) {
            ctx->pc = 0x1DB8B8u;
            return;
        }
    }
    ctx->pc = 0x1DB898u;
}
