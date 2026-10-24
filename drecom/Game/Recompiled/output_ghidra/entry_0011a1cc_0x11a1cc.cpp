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

// Function: entry_0011a1cc
// Address: 0x11a1cc - 0x11a1f0
void entry_0011a1cc_0x11a1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1cc_0x11a1cc");
#endif

    ctx->pc = 0x11a1ccu;

    // 0x11a1cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11A1CCu;
    {
        const bool branch_taken_0x11a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1CCu;
        // 0x11a1d0: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1cc) {
            ctx->pc = 0x11A218u;
            return;
        }
    }
    ctx->pc = 0x11A1D4u;
    // 0x11a1d4: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x11a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x11a1d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a1dc: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x11a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x11a1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11a1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1e8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a1ec: 0x0  nop
    ctx->pc = 0x11a1ecu;
    // NOP
    ctx->pc = 0x11a1f0u;
}
