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

// Function: entry_0011dc7c
// Address: 0x11dc7c - 0x11dc94
void entry_0011dc7c_0x11dc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc7c_0x11dc7c");
#endif

    ctx->pc = 0x11dc7cu;

    // 0x11dc7c: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x11dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11dc80: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x11dc80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11dc84: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x11dc84u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x11dc88: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11dc8c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DC8Cu;
    {
        const bool branch_taken_0x11dc8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc8c) {
            ctx->pc = 0x11DC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DC8Cu;
            // 0x11dc90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DC94u;
            return;
        }
    }
    ctx->pc = 0x11DC94u;
}
