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

// Function: entry_0011cf7c
// Address: 0x11cf7c - 0x11cfb0
void entry_0011cf7c_0x11cf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf7c_0x11cf7c");
#endif

    ctx->pc = 0x11cf7cu;

    // 0x11cf7c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x11cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x11cf80: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x11cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11cf84: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x11cf84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x11cf88: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x11cf88u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x11cf8c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11cf90: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11cf90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11cf94: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x11cf94u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11cf98: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x11cf98u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11cf9c: 0x310bffff  andi        $t3, $t0, 0xFFFF
    ctx->pc = 0x11cf9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11cfa0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x11cfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfa4: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11cfa8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CFA8u;
    {
        const bool branch_taken_0x11cfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cfa8) {
            ctx->pc = 0x11CFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CFA8u;
            // 0x11cfac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CFB0u;
            return;
        }
    }
    ctx->pc = 0x11CFB0u;
}
