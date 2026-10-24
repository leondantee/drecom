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

// Function: entry_0011ce0c
// Address: 0x11ce0c - 0x11ce24
void entry_0011ce0c_0x11ce0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ce0c_0x11ce0c");
#endif

    ctx->pc = 0x11ce0cu;

    // 0x11ce0c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11ce10: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x11ce10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11ce14: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x11ce14u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x11ce18: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11ce1c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CE1Cu;
    {
        const bool branch_taken_0x11ce1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce1c) {
            ctx->pc = 0x11CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE1Cu;
            // 0x11ce20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CE24u;
            return;
        }
    }
    ctx->pc = 0x11CE24u;
}
