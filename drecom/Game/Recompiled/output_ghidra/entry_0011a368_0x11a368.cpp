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

// Function: entry_0011a368
// Address: 0x11a368 - 0x11a388
void entry_0011a368_0x11a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a368_0x11a368");
#endif

    ctx->pc = 0x11a368u;

    // 0x11a368: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a36c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A36Cu;
    {
        const bool branch_taken_0x11a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A36Cu;
        // 0x11a370: 0xdfa30020  ld          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a36c) {
            ctx->pc = 0x11A3B0u;
            return;
        }
    }
    ctx->pc = 0x11A374u;
    // 0x11a374: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a37c: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a380: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11a384: 0x934021  addu        $t0, $a0, $s3
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x11a388u;
}
