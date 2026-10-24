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

// Function: entry_00113bec
// Address: 0x113bec - 0x113c18
void entry_00113bec_0x113bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113bec_0x113bec");
#endif

    ctx->pc = 0x113becu;

    // 0x113bec: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x113bf0: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x113BF0u;
    {
        const bool branch_taken_0x113bf0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x113bf0) {
            ctx->pc = 0x113CC0u;
            return;
        }
    }
    ctx->pc = 0x113BF8u;
    // 0x113bf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x113bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x113bfc: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113BFCu;
    {
        const bool branch_taken_0x113bfc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x113C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BFCu;
        // 0x113c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bfc) {
            ctx->pc = 0x113C44u;
            return;
        }
    }
    ctx->pc = 0x113C04u;
    // 0x113c04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x113c08: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x113c0c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c14: 0x0  nop
    ctx->pc = 0x113c14u;
    // NOP
    ctx->pc = 0x113c18u;
}
