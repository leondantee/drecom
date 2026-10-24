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

// Function: entry_001040f8
// Address: 0x1040f8 - 0x104124
void entry_001040f8_0x1040f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040f8_0x1040f8");
#endif

    ctx->pc = 0x1040f8u;

    // 0x1040f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1040fc: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x1040fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104104: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x104104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C00u));
    // 0x104108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10410c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104114: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104118: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x104118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10411c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x10411Cu;
    {
        const bool branch_taken_0x10411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10411Cu;
        // 0x104120: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10411c) {
            ctx->pc = 0x1044CCu;
            return;
        }
    }
    ctx->pc = 0x104124u;
}
