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

// Function: entry_0013e85c
// Address: 0x13e85c - 0x13e920
void entry_0013e85c_0x13e85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e85c_0x13e85c");
#endif

    ctx->pc = 0x13e85cu;

    // 0x13e85c: 0x8fa816a0  lw          $t0, 0x16A0($sp)
    ctx->pc = 0x13e85cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e860: 0x8d020034  lw          $v0, 0x34($t0)
    ctx->pc = 0x13e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x13e864: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13e864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13e868: 0x8fa416b0  lw          $a0, 0x16B0($sp)
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e86c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e870: 0x8fa216a0  lw          $v0, 0x16A0($sp)
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e874: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e878: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x13e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13e87c: 0xafa51698  sw          $a1, 0x1698($sp)
    ctx->pc = 0x13e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5784), GPR_U32(ctx, 5));
    // 0x13e880: 0x8fa216a0  lw          $v0, 0x16A0($sp)
    ctx->pc = 0x13e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e884: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13e888: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
    // 0x13e88c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e890: 0xafa41670  sw          $a0, 0x1670($sp)
    ctx->pc = 0x13e890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5744), GPR_U32(ctx, 4));
    // 0x13e894: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e898: 0x34450003  ori         $a1, $v0, 0x3
    ctx->pc = 0x13e898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13e89c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8a0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x13e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x13e8a4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8a8: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x13e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x13e8ac: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8b0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13e8b4: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13e8b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13e8bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e8c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e8c8: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8cc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x13e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x13e8d0: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x13e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x13e8d4: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8d8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x13e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x13e8dc: 0x8fa8169c  lw          $t0, 0x169C($sp)
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13e8e0: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x13e8e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x13e8e4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8e8: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x13e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x13e8ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e8f0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8f4: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x13e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x13e8f8: 0x8fa81698  lw          $t0, 0x1698($sp)
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5784)));
    // 0x13e8fc: 0xdd020010  ld          $v0, 0x10($t0)
    ctx->pc = 0x13e8fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x13e900: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e904: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x13e904u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x13e908: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13e90c: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e910: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x13e910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x13e914: 0x8fa816a8  lw          $t0, 0x16A8($sp)
    ctx->pc = 0x13e914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e918: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x13e91c: 0xafa416a8  sw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 4));
    ctx->pc = 0x13e920u;
}
